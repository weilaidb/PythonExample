#define AVCODEC_WAVPACK_H
#define MAX_TERMS      16
#define MAX_TERM        8
#define WV_HEADER_SIZE    32
#define WV_MONO           0x00000004
#define WV_JOINT_STEREO   0x00000010
#define WV_CROSS_DECORR   0x00000020
#define WV_FLOAT_DATA     0x00000080
#define WV_INT32_DATA     0x00000100
#define WV_FALSE_STEREO   0x40000000
#define WV_HYBRID_MODE    0x00000008
#define WV_HYBRID_SHAPE   0x00000008
#define WV_HYBRID_BITRATE 0x00000200
#define WV_HYBRID_BALANCE 0x00000400
#define WV_INITIAL_BLOCK  0x00000800
#define WV_FINAL_BLOCK    0x00001000
#define WV_MONO_DATA    (WV_MONO | WV_FALSE_STEREO)
#define WV_SINGLE_BLOCK (WV_INITIAL_BLOCK | WV_FINAL_BLOCK)
#define WV_FLT_SHIFT_ONES 0x01
#define WV_FLT_SHIFT_SAME 0x02
#define WV_FLT_SHIFT_SENT 0x04
#define WV_FLT_ZERO_SENT  0x08
#define WV_FLT_ZERO_SIGN  0x10
#define WV_MAX_SAMPLES    150000
enum WP_ID_Flags ;
enum WP_ID ;
typedef struct Decorr  Decorr;
typedef struct WvChannel  WvChannel;
GET_MED ((c->median[n] >> 4) + 1)
DEC_MED c->median[n] -= ((c->median[n] + (128 >> (n)) - 2) / (128 >> (n))) * 2
INC_MED c->median[n] += ((c->median[n] + (128 >> (n))    ) / (128 >> (n))) * 5
UPDATE_WEIGHT_CLIP \
if ((samples) && (in))
static const int wv_rates[16] = ;
static const uint8_t wp_exp2_table[256] = ;
static const uint8_t wp_log2_table [] = ;
wp_exp2
wp_log2
