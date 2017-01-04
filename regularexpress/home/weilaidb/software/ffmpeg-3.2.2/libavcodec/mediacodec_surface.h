#define AVCODEC_MEDIACODEC_SURFACE_H
void *ff_mediacodec_surface_ref(void *surface, void *log_ctx);
int ff_mediacodec_surface_unref(void *surface, void *log_ctx);
