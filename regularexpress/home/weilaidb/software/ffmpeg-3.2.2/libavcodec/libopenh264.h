#define AVCODEC_LIBOPENH264_H
OPENH264_VER_AT_LEAST \
((OPENH264_MAJOR  > (maj)) || \
(OPENH264_MAJOR == (maj) && OPENH264_MINOR >= (min)))
ff_libopenh264_trace_callback;
ff_libopenh264_check_version;
