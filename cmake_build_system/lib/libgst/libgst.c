#include <gst/gst.h>
#include <glib/gprintf.h>

void libgst_printversion(){
    gchar *version;

    version = gst_version_string();
    g_printf("GStreamer version = %s", version);
    g_free(version);
}
