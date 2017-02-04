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
ff_h264_sei_decode;
ff_h264_sei_uninit;
*ff_h264_sei_stereo_mode;
