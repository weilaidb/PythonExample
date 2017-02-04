#define AVCODEC_MSS12_H
#define MODEL_MIN_SYMS    2
#define MODEL_MAX_SYMS  256
#define THRESH_ADAPTIVE  -1
#define THRESH_LOW       15
#define THRESH_HIGH      50
typedef struct Model  Model;
typedef struct ArithCoder  ArithCoder;
typedef struct PixContext  PixContext;
struct MSS12Context;
typedef struct SliceContext  SliceContext;
typedef struct MSS12Context  MSS12Context;
ff_mss12_decode_rect;
ff_mss12_model_update;
ff_mss12_slicecontext_reset;
ff_mss12_decode_init;
ff_mss12_decode_end;
ARITH_GET_BIT                                           \
static int prefix ## _get_bit(ArithCoder *c)                            \
ARITH_GET_MODEL_SYM                                     \
static int prefix ## _get_model_sym(ArithCoder *c, Model *m)            \
