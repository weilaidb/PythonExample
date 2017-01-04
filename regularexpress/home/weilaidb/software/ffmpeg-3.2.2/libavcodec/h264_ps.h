#define AVCODEC_H264_PS_H
#define MAX_SPS_COUNT          32
#define MAX_PPS_COUNT         256
typedef struct SPS  SPS;
typedef struct PPS  PPS;
typedef struct H264ParamSets  H264ParamSets;
int ff_h264_decode_seq_parameter_set(GetBitContext *gb, AVCodecContext *avctx,
H264ParamSets *ps, int ignore_truncation);
int ff_h264_decode_picture_parameter_set(GetBitContext *gb, AVCodecContext *avctx,
H264ParamSets *ps, int bit_length);
void ff_h264_ps_uninit(H264ParamSets *ps);
