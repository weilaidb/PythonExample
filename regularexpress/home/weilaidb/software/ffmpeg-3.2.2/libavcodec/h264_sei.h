#define AVCODEC_H264_SEI_H
typedef enum  SEI_Type;
typedef enum  SEI_PicStructType;
typedef enum  SEI_FpaType;
typedef struct H264SEIPictureTiming  H264SEIPictureTiming;
typedef struct H264SEIAFD  H264SEIAFD;
typedef struct H264SEIA53Caption  H264SEIA53Caption;
typedef struct H264SEIUnregistered  H264SEIUnregistered;
typedef struct H264SEIRecoveryPoint  H264SEIRecoveryPoint;
typedef struct H264SEIBufferingPeriod  H264SEIBufferingPeriod;
typedef struct H264SEIFramePacking  H264SEIFramePacking;
typedef struct H264SEIDisplayOrientation  H264SEIDisplayOrientation;
typedef struct H264SEIGreenMetaData  H264SEIGreenMetaData;
typedef struct H264SEIContext  H264SEIContext;
struct H264ParamSets;
int ff_h264_sei_decode(H264SEIContext *h, GetBitContext *gb,
const struct H264ParamSets *ps, void *logctx);
void ff_h264_sei_uninit(H264SEIContext *h);
const char *ff_h264_sei_stereo_mode(const H264SEIFramePacking *h);
