cmake_minimum_required(VERSION 3.5)

project(
    archivers-qt
    VERSION 0.1
    LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(
    QT NAMES Qt6 Qt5
    COMPONENTS Widgets
    REQUIRED)
find_package(
    Qt${QT_VERSION_MAJOR}
    COMPONENTS Widgets
    REQUIRED)

set(PROJECT_SOURCES 
    main.cpp
    arch_window.h arch_window.cpp arch_window.ui
    compress_dialog.h compress_dialog.cpp compress_dialog.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(archivers-qt MANUAL_FINALIZATION ${PROJECT_SOURCES})
    # Define target properties for Android with Qt 6 as: set_property(TARGET archivers-qt APPEND
    # PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/android) For more
    # information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(archivers-qt SHARED ${PROJECT_SOURCES})
        # Define properties for Android with Qt 5 after find_package() calls as:
        # set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(archivers-qt ${PROJECT_SOURCES})
    endif()
endif()

target_link_libraries(archivers-qt PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

set_target_properties(
    archivers-qt
    PROPERTIES MACOSX_BUNDLE_GUI_IDENTIFIER archivers-qt.com
               MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
               MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
               MACOSX_BUNDLE TRUE
               WIN32_EXECUTABLE TRUE)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(archivers-qt)
endif()
