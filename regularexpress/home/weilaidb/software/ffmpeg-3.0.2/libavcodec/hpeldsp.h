#define AVCODEC_HPELDSP_H
typedef void (*op_pixels_func)(uint8_t *block,
const uint8_t *pixels,
ptrdiff_t line_size, int h);
typedef struct HpelDSPContext  HpelDSPContext;
void ff_hpeldsp_init(HpelDSPContext *c, int flags);
void ff_hpeldsp_init_aarch64(HpelDSPContext *c, int flags);
void ff_hpeldsp_init_alpha(HpelDSPContext *c, int flags);
void ff_hpeldsp_init_arm(HpelDSPContext *c, int flags);
void ff_hpeldsp_init_ppc(HpelDSPContext *c, int flags);
void ff_hpeldsp_init_x86(HpelDSPContext *c, int flags);
void ff_hpeldsp_init_mips(HpelDSPContext *c, int flags);
