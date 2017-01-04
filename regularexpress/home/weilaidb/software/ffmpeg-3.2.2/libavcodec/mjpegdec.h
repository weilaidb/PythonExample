#define AVCODEC_MJPEGDEC_H
#define MAX_COMPONENTS 4
typedef struct MJpegDecodeContext  MJpegDecodeContext;
int ff_mjpeg_decode_init(AVCodecContext *avctx);
int ff_mjpeg_decode_end(AVCodecContext *avctx);
int ff_mjpeg_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt);
int ff_mjpeg_decode_dqt(MJpegDecodeContext *s);
int ff_mjpeg_decode_dht(MJpegDecodeContext *s);
int ff_mjpeg_decode_sof(MJpegDecodeContext *s);
int ff_mjpeg_decode_sos(MJpegDecodeContext *s,
const uint8_t *mb_bitmask,int mb_bitmask_size,
const AVFrame *reference);
int ff_mjpeg_find_marker(MJpegDecodeContext *s,
const uint8_t **buf_ptr, const uint8_t *buf_end,
const uint8_t **unescaped_buf_ptr, int *unescaped_buf_size);
