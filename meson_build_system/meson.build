project('gstlib', 'c', version: '1.0', meson_version: '>=0.50.0')

# Define dependencies
gst_dep = dependency('gstreamer-1.0')
glib_dep = dependency('glib-2.0')
lib_gst_dep = [gst_dep, glib_dep]

# Define installation directories
lib_gst_install_dir = join_paths(get_option('libdir'), 'gstreamer-1.0')
lib_gst_pkgconfig_install_dir = join_paths(lib_gst_install_dir, 'pkgconfig')

# Import pkgconfig module
pkgconfig = import('pkgconfig')

# Add library args
lib_gst_c_args = []

# This is where you should add directories
subdir('lib')
subdir('src')
