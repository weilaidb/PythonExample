#define AVCODEC_QSVDEC_H
typedef struct QSVContext  QSVContext;
int ff_qsv_map_pixfmt(enum AVPixelFormat format);
int ff_qsv_decode(AVCodecContext *s, QSVContext *q,
AVFrame *frame, int *got_frame,
AVPacket *avpkt);
void ff_qsv_decode_reset(AVCodecContext *avctx, QSVContext *q);
int ff_qsv_decode_close(QSVContext *q);
