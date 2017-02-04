#define AVCODEC_MJPEGDEC_H
#define MAX_COMPONENTS 4
typedef struct MJpegDecodeContext  MJpegDecodeContext;
ff_mjpeg_decode_init;
ff_mjpeg_decode_end;
ff_mjpeg_decode_frame;
ff_mjpeg_decode_dqt;
ff_mjpeg_decode_dht;
ff_mjpeg_decode_sof;
ff_mjpeg_decode_sos;
ff_mjpeg_find_marker;
