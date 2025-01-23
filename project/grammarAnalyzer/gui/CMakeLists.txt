cmake_minimum_required(VERSION 3.16)

# 项目信息
project(gui VERSION 0.1 LANGUAGES CXX)

# 设置自动处理 Qt 功能（如 UIC、MOC）
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 默认构建类型为 Debug
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

# 添加调试符号和优化选项
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")

# 查找 Qt 库（优先查找 Qt6，如果没有找到则查找 Qt5）
find_package(Qt6 COMPONENTS Widgets QUIET)
if(Qt6_FOUND)
    message(STATUS "Found Qt6")
    set(QT_VERSION_MAJOR 6)
    set(QT_PACKAGE Qt6)
elseif(NOT Qt6_FOUND)
    find_package(Qt5 COMPONENTS Widgets REQUIRED)
    message(STATUS "Found Qt5")
    set(QT_VERSION_MAJOR 5)
    set(QT_PACKAGE Qt5)
else()
    message(FATAL_ERROR "No suitable Qt version found.")
endif()

# 如果 Qt6 未找到，可以设置 CMAKE_PREFIX_PATH 来查找 Qt 安装路径
if(NOT Qt6_FOUND)
    set(CMAKE_PREFIX_PATH "/path/to/Qt5" CACHE PATH "Qt5 Installation Path")  # Qt5 的路径
endif()

# 源文件列表
set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    tableforgragh.h
    tableforgragh.cpp
    tableforgragh.ui
    globle.h
    ../../include/grammar/IndexedSet.h
    ../tokens/tokens.h
    ../../include/File/File.cpp
    ../../include/File/File.h
    ../../include/Error/error.cpp
    ../../include/Error/error.h
    ../analyzer/analyzer.h
    ../analyzer/analyzer.cpp
    ../../include/grammar/globle.cpp
    ../../include/grammar/globle.h
)

# 创建可执行文件
add_executable(gui ${PROJECT_SOURCES}
    editor.h editor.cpp editor.ui
)

# 链接 Qt 库（这里只使用 QtWidgets）
if(QT_VERSION_MAJOR EQUAL 6)
    target_link_libraries(gui PRIVATE Qt6::Widgets)
elseif(QT_VERSION_MAJOR EQUAL 5)
    target_link_libraries(gui PRIVATE Qt5::Widgets)
endif()

# 安装配置（可选）
include(GNUInstallDirs)
install(TARGETS gui
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
