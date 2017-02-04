#define AVCODEC_VP8_H
#define VP8_MAX_QUANT 127
enum dct_token ;
#define MODE_I4x4 4
enum inter_mvmode ;
enum inter_splitmvmode ;
typedef struct VP8FilterStrength  VP8FilterStrength;
typedef struct VP8Macroblock  VP8Macroblock;
typedef struct VP8ThreadData  VP8ThreadData;
typedef struct VP8Frame  VP8Frame;
typedef struct VP8intmv  VP8intmv;
#define MAX_THREADS 8
typedef struct VP8Context  VP8Context;
ff_vp8_decode_init;
ff_vp8_decode_frame;
ff_vp8_decode_free;
