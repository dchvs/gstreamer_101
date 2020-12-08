# Generate library
lib_gst = library('libgst',
	'libgst.c',
	c_args: lib_gst_c_args,
	dependencies: lib_gst_dep,
	install: true,
	install_dir: lib_gst_install_dir,
)

# Generate pkgconfig file
pkgconfig.generate(lib_gst, install_dir: lib_gst_pkgconfig_install_dir)

