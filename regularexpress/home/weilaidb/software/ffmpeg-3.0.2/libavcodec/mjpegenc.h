#define AVCODEC_MJPEGENC_H
typedef struct MJpegContext  MJpegContext;
static inline void put_marker(PutBitContext *p, enum JpegMarker code)
int  ff_mjpeg_encode_init(MpegEncContext *s);
void ff_mjpeg_encode_close(MpegEncContext *s);
void ff_mjpeg_encode_mb(MpegEncContext *s, int16_t block[12][64]);
