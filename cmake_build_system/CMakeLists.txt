cmake_minimum_required(VERSION 3.9)

set(SRC_NAME gstreamer_101)
project(${SRC_NAME} VERSION 1.0.1 DESCRIPTION "GStreamer base display")

# Errors on warnings
set(C_WARNINGS "-Wall -Wstrict-prototypes -Wshadow -Werror")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ")

# Find the dependencies with Pkgconfig
find_package(PkgConfig REQUIRED)
pkg_check_modules(GSTLIBS REQUIRED
        gobject-2.0
        glib-2.0>=2.56.0
        gstreamer-sdp-1.0
        gstreamer-pbutils-1.0
        gstreamer-check-1.0
)

add_subdirectory(src)
#add_subdirectory(include)
add_subdirectory(lib)
