#define AVCODEC_QSV_INTERNAL_H
#if CONFIG_VAAPI
#define AVCODEC_QSV_LINUX_SESSION_HANDLE
#if HAVE_UNISTD_H
#define QSV_VERSION_MAJOR 1
#define QSV_VERSION_MINOR 9
#define ASYNC_DEPTH_DEFAULT 4
#define QSV_MAX_ENC_PAYLOAD 2
QSV_VERSION_ATLEAST   \
(MFX_VERSION_MAJOR > (MAJOR) ||         \
MFX_VERSION_MAJOR == (MAJOR) && MFX_VERSION_MINOR >= (MINOR))
typedef struct QSVFrame  QSVFrame;
typedef struct QSVSession  QSVSession;
ff_qsv_error;
ff_qsv_codec_id_to_mfx;
ff_qsv_init_internal_session;
ff_qsv_close_internal_session;
