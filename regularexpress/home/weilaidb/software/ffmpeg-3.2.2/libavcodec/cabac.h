#define AVCODEC_CABAC_H
extern const uint8_t ff_h264_cabac_tables[512 + 4*2*64 + 4*64 + 63];
#define H264_NORM_SHIFT_OFFSET 0
#define H264_LPS_RANGE_OFFSET 512
#define H264_MLPS_STATE_OFFSET 1024
#define H264_LAST_COEFF_FLAG_OFFSET_8x8_OFFSET 1280
#define CABAC_BITS 16
#define CABAC_MASK ((1<<CABAC_BITS)-1)
typedef struct CABACContextCABACContext;
ff_init_cabac_encoder;
ff_init_cabac_decoder;
