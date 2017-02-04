#define AVCODEC_QSVENC_H
QSV_VERSION_ATLEAST
QSV_VERSION_ATLEAST
QSV_VERSION_ATLEAST
QSV_VERSION_ATLEAST
QSV_VERSION_ATLEAST
QSV_VERSION_ATLEAST
QSV_VERSION_ATLEAST
QSV_VERSION_ATLEAST
QSV_VERSION_ATLEAST
QSV_VERSION_ATLEAST
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
,                         \
typedef int SetEncodeCtrlCB (AVCodecContext *avctx,
const AVFrame *frame, mfxEncodeCtrl* enc_ctrl);
typedef struct QSVEncContext  QSVEncContext;
ff_qsv_enc_init;
ff_qsv_encode;
ff_qsv_enc_close;
