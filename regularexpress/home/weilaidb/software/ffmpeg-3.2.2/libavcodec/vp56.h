#define AVCODEC_VP56_H
typedef struct vp56_context VP56Context;
typedef enum  VP56Frame;
typedef enum  VP56mb;
typedef struct VP56Tree  VP56Tree;
typedef struct VP56mv  VP56mv;
#define VP56_SIZE_CHANGE 1
typedef void (*VP56ParseVectorAdjustment)(VP56Context *s,
VP56mv *vect);
typedef void (*VP56Filter)(VP56Context *s, uint8_t *dst, uint8_t *src,
int offset1, int offset2, int stride,
VP56mv mv, int mask, int select, int luma);
typedef void (*VP56ParseCoeff)(VP56Context *s);
typedef void (*VP56DefaultModelsInit)(VP56Context *s);
typedef void (*VP56ParseVectorModels)(VP56Context *s);
typedef int  (*VP56ParseCoeffModels)(VP56Context *s);
typedef int  (*VP56ParseHeader)(VP56Context *s, const uint8_t *buf,
int buf_size);
typedef struct VP56RangeCoder  VP56RangeCoder;
typedef struct VP56RefDc  VP56RefDc;
typedef struct VP56Macroblock  VP56Macroblock;
typedef struct VP56Model  VP56Model;
struct vp56_context ;
ff_vp56_init;
ff_vp56_init_context;
ff_vp56_free;
ff_vp56_free_context;
ff_vp56_init_dequant;
ff_vp56_decode_frame;
extern const uint8_t ff_vp56_norm_shift[256];
ff_vp56_init_range_decoder;
vp56_rac_renorm
#if   ARCH_ARM
#elif ARCH_X86
#define vp56_rac_get_prob vp56_rac_get_prob
vp56_rac_get_prob
vp56_rac_get_prob_branchy
vp56_rac_get
vp8_rac_get
vp56_rac_gets
vp8_rac_get_uint
vp8_rac_get_sint
vp56_rac_gets_nn
vp8_rac_get_nn
static av_always_inline
vp56_rac_get_tree
vp8_rac_get_tree[2],
const uint8_t *probs)
vp8_rac_get_coeff
