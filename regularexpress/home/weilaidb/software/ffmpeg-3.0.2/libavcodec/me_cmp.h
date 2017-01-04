#define AVCODEC_ME_CMP_H
extern uint32_t ff_square_tab[512];
struct MpegEncContext;
typedef int (*me_cmp_func)(struct MpegEncContext *c,
uint8_t *blk1,
uint8_t *blk2, ptrdiff_t stride,
int h);
typedef struct MECmpContext  MECmpContext;
void ff_me_cmp_init_static(void);
int ff_check_alignment(void);
void ff_me_cmp_init(MECmpContext *c, AVCodecContext *avctx);
void ff_me_cmp_init_alpha(MECmpContext *c, AVCodecContext *avctx);
void ff_me_cmp_init_arm(MECmpContext *c, AVCodecContext *avctx);
void ff_me_cmp_init_ppc(MECmpContext *c, AVCodecContext *avctx);
void ff_me_cmp_init_x86(MECmpContext *c, AVCodecContext *avctx);
void ff_me_cmp_init_mips(MECmpContext *c, AVCodecContext *avctx);
void ff_set_cmp(MECmpContext *c, me_cmp_func *cmp, int type);
void ff_dsputil_init_dwt(MECmpContext *c);
