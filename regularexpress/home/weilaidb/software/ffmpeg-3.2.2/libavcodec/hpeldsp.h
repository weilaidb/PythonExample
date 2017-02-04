#define AVCODEC_HPELDSP_H
typedef void (*op_pixels_func)(uint8_t *block,
const uint8_t *pixels,
ptrdiff_t line_size, int h);
typedef struct HpelDSPContext  HpelDSPContext;
ff_hpeldsp_init;
ff_hpeldsp_init_aarch64;
ff_hpeldsp_init_alpha;
ff_hpeldsp_init_arm;
ff_hpeldsp_init_ppc;
ff_hpeldsp_init_x86;
ff_hpeldsp_init_mips;
