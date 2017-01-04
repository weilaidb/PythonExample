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
int ff_vp56_init(AVCodecContext *avctx, int flip, int has_alpha);
int ff_vp56_init_context(AVCodecContext *avctx, VP56Context *s,
int flip, int has_alpha);
int ff_vp56_free(AVCodecContext *avctx);
int ff_vp56_free_context(VP56Context *s);
void ff_vp56_init_dequant(VP56Context *s, int quantizer);
int ff_vp56_decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt);
extern const uint8_t ff_vp56_norm_shift[256];
void ff_vp56_init_range_decoder(VP56RangeCoder *c, const uint8_t *buf, int buf_size);
static av_always_inline unsigned int vp56_rac_renorm(VP56RangeCoder *c)
#if   ARCH_ARM
#elif ARCH_X86
#define vp56_rac_get_prob vp56_rac_get_prob
static av_always_inline int vp56_rac_get_prob(VP56RangeCoder *c, uint8_t prob)
static av_always_inline int vp56_rac_get_prob_branchy(VP56RangeCoder *c, int prob)
static av_always_inline int vp56_rac_get(VP56RangeCoder *c)
static av_always_inline int vp8_rac_get(VP56RangeCoder *c)
static int vp56_rac_gets(VP56RangeCoder *c, int bits)
static int vp8_rac_get_uint(VP56RangeCoder *c, int bits)
static av_unused int vp8_rac_get_sint(VP56RangeCoder *c, int bits)
static av_unused int vp56_rac_gets_nn(VP56RangeCoder *c, int bits)
static av_unused int vp8_rac_get_nn(VP56RangeCoder *c)
static av_always_inline
int vp56_rac_get_tree(VP56RangeCoder *c,
const VP56Tree *tree,
const uint8_t *probs)
static av_always_inline int vp8_rac_get_tree(VP56RangeCoder *c, const int8_t (*tree)[2],
const uint8_t *probs)
static av_always_inline int vp8_rac_get_coeff(VP56RangeCoder *c, const uint8_t *prob)
