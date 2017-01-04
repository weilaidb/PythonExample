#define AVCODEC_LIBOPENH264_H
#define OPENH264_VER_AT_LEAST(maj, min) \
((OPENH264_MAJOR  > (maj)) || \
(OPENH264_MAJOR == (maj) && OPENH264_MINOR >= (min)))
void ff_libopenh264_trace_callback(void *ctx, int level, const char *msg);
int ff_libopenh264_check_version(void *logctx);
