#define AVCODEC_ME_CMP_H
extern uint32_t ff_square_tab[512];
struct MpegEncContext;
typedef int (*me_cmp_func)(struct MpegEncContext *c,
uint8_t *blk1,
uint8_t *blk2, ptrdiff_t stride,
int h);
typedef struct MECmpContext  MECmpContext;
ff_me_cmp_init_static;
ff_check_alignment;
ff_me_cmp_init;
ff_me_cmp_init_alpha;
ff_me_cmp_init_arm;
ff_me_cmp_init_ppc;
ff_me_cmp_init_x86;
ff_me_cmp_init_mips;
ff_set_cmp;
ff_dsputil_init_dwt;
