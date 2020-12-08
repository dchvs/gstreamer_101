#project('gstapp-meson-example', 'c')
gstdep = dependency('gstreamer-1.0')
libgstdep = declare_dependency(link_with : lib_gst)
gstapp_dep = [gstdep, libgstdep]
executable('gstapp', 'main.c', dependencies: gstapp_dep, install: true, install_dir: '/usr/bin')
