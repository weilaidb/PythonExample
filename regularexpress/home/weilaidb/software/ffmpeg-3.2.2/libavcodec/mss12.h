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
int ff_mss12_decode_rect(SliceContext *ctx, ArithCoder *acoder,
int x, int y, int width, int height);
void ff_mss12_model_update(Model *m, int val);
void ff_mss12_slicecontext_reset(SliceContext *sc);
int ff_mss12_decode_init(MSS12Context *c, int version,
SliceContext *sc1, SliceContext *sc2);
int ff_mss12_decode_end(MSS12Context *ctx);
#define ARITH_GET_BIT(prefix)                                           \
static int prefix ## _get_bit(ArithCoder *c)                            \
#define ARITH_GET_MODEL_SYM(prefix)                                     \
static int prefix ## _get_model_sym(ArithCoder *c, Model *m)            \
