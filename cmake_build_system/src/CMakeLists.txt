# Target: binary: gstreamer_101
add_executable(${PROJECT_NAME} "main.c")

# Set GStreamer libraries as dependencies of this GStreamer binary
target_link_libraries(${PROJECT_NAME} ${GSTLIBS_LIBRARIES})
target_link_libraries(${PROJECT_NAME} libgst)

# Setup the headers dependencies
include_directories(
    ${GSTLIBS_INCLUDE_DIRS}
)

## Inherit install paths
include(GNUInstallDirs)

#### Installs for main target
install(TARGETS ${SRC_NAME}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
