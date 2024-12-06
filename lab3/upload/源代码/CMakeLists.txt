cmake_minimum_required(VERSION 3.5)

project(gui-version VERSION 0.1 LANGUAGES CXX)

# 设置 Qt 相关的自动化功能
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 指定 Qt 的安装路径（根据需要修改路径）
set(CMAKE_PREFIX_PATH "C:/Qt/Qt5.12.12/5.12.12/msvc2015_64/lib/cmake/Qt5" CACHE STRING "Qt installation path")

# 尝试查找 Qt 5 或 Qt 6
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets LinguistTools)

if(TARGET Qt6::Widgets)
    # Qt 6 的配置
    set(QT_VERSION_MAJOR 6)
    find_package(Qt6 REQUIRED COMPONENTS Widgets LinguistTools)
elseif(TARGET Qt5::Widgets)
    # Qt 5 的配置
    set(QT_VERSION_MAJOR 5)
    find_package(Qt5 REQUIRED COMPONENTS Widgets LinguistTools)
else()
    message(FATAL_ERROR "Could not find Qt 5 or Qt 6. Please install Qt and try again.")
endif()

set(TS_FILES gui-version_zh_CN.ts)

# 设置项目源文件
set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    getTree.cpp
    getTree.h
    globals.h
    util.cpp
    util.h
    parse.cpp
    parse.h
    scan.cpp
    scan.h
    ${TS_FILES}
)

# 针对 Qt 6 或 Qt 5 生成可执行文件
if(${QT_VERSION_MAJOR} EQUAL 6)
    qt_add_executable(gui-version
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
    qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
else()
    add_executable(gui-version
        ${PROJECT_SOURCES}
    )
    qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
endif()

# 链接 Qt Widgets 库
target_link_libraries(gui-version PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# 针对 macOS 或 iOS 设置捆绑标识符
if(${QT_VERSION_MAJOR} EQUAL 6)
    set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.gui-version)
endif()
set_target_properties(gui-version PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

# 安装设置
include(GNUInstallDirs)
install(TARGETS gui-version
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# 完成 Qt 6 的可执行文件设置
if(${QT_VERSION_MAJOR} EQUAL 6)
    qt_finalize_executable(gui-version)
endif()
