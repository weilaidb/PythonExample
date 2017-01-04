long ff_copy_dshow_media_type(AM_MEDIA_TYPE *dst, const AM_MEDIA_TYPE *src)
void ff_printGUID(const GUID *g)
static const char *dshow_context_to_name(void *ptr)
static const AVClass ff_dshow_context_class = ;
const AVClass *ff_dshow_context_class_ptr = &ff_dshow_context_class;
#define dstruct(pctx, sname, var, type) \
dshowdebug("      "#var":\t%"type"\n", sname->var)
#if DSHOWDEBUG
static void dump_bih(void *s, BITMAPINFOHEADER *bih)
void ff_print_VIDEO_STREAM_CONFIG_CAPS(const VIDEO_STREAM_CONFIG_CAPS *caps)
void ff_print_AUDIO_STREAM_CONFIG_CAPS(const AUDIO_STREAM_CONFIG_CAPS *caps)
void ff_print_AM_MEDIA_TYPE(const AM_MEDIA_TYPE *type)
