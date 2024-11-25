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

# 查找 Qt 库（自动检测 Qt5 或 Qt6）
find_package(Qt6 COMPONENTS Widgets QUIET)
if(Qt6_FOUND)
    set(QT_VERSION_MAJOR 6)
    set(QT_PACKAGE Qt6)
else()
    find_package(Qt5 COMPONENTS Widgets REQUIRED)
    set(QT_VERSION_MAJOR 5)
    set(QT_PACKAGE Qt5)
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
add_executable(gui ${PROJECT_SOURCES})

# 链接 Qt 库
target_link_libraries(gui PRIVATE ${QT_PACKAGE}::Widgets)

# 安装配置（可选）
include(GNUInstallDirs)
install(TARGETS gui
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
