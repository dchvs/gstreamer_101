# Target: library: Create dynamic library
add_library(libgst SHARED
    ${CMAKE_CURRENT_SOURCE_DIR}/libgst.c
)
set_target_properties(libgst PROPERTIES LIBRARY_OUTPUT_NAME gst)
set_target_properties(libgst PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(libgst PROPERTIES SOVERSION 2)

# Set GStreamer libraries as dependencies of this GStreamer library
target_link_libraries(libgst ${GSTLIBS_LIBRARIES})

# Create the pkgconfig file from a template
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/libgst.pc.in libgst.pc @ONLY)

# Setup the headers dependencies
include_directories(
    ${GSTLIBS_INCLUDE_DIRS}
)

## Inherit install paths
include(GNUInstallDirs)

#### Installs for libgst target

# Install libraries and headers
install(TARGETS libgst
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)
# Install pkgconfig file
install(FILES
    ${CMAKE_CURRENT_BINARY_DIR}/libgst.pc DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/pkgconfig
)
