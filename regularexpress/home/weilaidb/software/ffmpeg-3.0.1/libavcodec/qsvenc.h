#define AVCODEC_QSVENC_H
#define QSV_HAVE_CO2 QSV_VERSION_ATLEAST(1, 6)
#define QSV_HAVE_CO3 QSV_VERSION_ATLEAST(1, 11)
#define QSV_HAVE_TRELLIS QSV_VERSION_ATLEAST(1, 8)
#define QSV_HAVE_MAX_SLICE_SIZE QSV_VERSION_ATLEAST(1, 9)
#define QSV_HAVE_BREF_TYPE      QSV_VERSION_ATLEAST(1, 8)
#define QSV_HAVE_LA     QSV_VERSION_ATLEAST(1, 7)
#define QSV_HAVE_LA_HRD QSV_VERSION_ATLEAST(1, 11)
#define QSV_HAVE_ICQ    QSV_VERSION_ATLEAST(1, 8)
#define QSV_HAVE_VCM    QSV_VERSION_ATLEAST(1, 8)
#define QSV_HAVE_QVBR   QSV_VERSION_ATLEAST(1, 11)
#define QSV_COMMON_OPTS \
,                          \
,                             \
,                             \
, \
,                                                \
,                                                \
,                                                \
,                                                \
,                                                \
,                                                \
,                                                \
,                                \
,                         \
,                         \
,                         \
,                         \
,                         \
,                         \
,                         \
,                         \
,                         \
typedef int SetEncodeCtrlCB (AVCodecContext *avctx,
const AVFrame *frame, mfxEncodeCtrl* enc_ctrl);
typedef struct QSVEncContext  QSVEncContext;
int ff_qsv_enc_init(AVCodecContext *avctx, QSVEncContext *q);
int ff_qsv_encode(AVCodecContext *avctx, QSVEncContext *q,
AVPacket *pkt, const AVFrame *frame, int *got_packet);
int ff_qsv_enc_close(AVCodecContext *avctx, QSVEncContext *q);
