#define AVCODEC_DIRACDSP_H
typedef void (*dirac_weight_func)(uint8_t *block, int stride, int log2_denom, int weight, int h);
typedef void (*dirac_biweight_func)(uint8_t *dst, const uint8_t *src, int stride, int log2_denom, int weightd, int weights, int h);
typedef struct  DiracDSPContext;
DECL_DIRAC_PIXOP                                      \
void ff_ ## PFX ## _dirac_pixels8_ ## EXT(uint8_t *dst, const uint8_t *src[5], int stride, int h); \
void ff_ ## PFX ## _dirac_pixels16_ ## EXT(uint8_t *dst, const uint8_t *src[5], int stride, int h); \
void ff_ ## PFX ## _dirac_pixels32_ ## EXT(uint8_t *dst, const uint8_t *src[5], int stride, int h)
DECL_DIRAC_PIXOP(put, c);
DECL_DIRAC_PIXOP(avg, c);
DECL_DIRAC_PIXOP(put, l2_c);
DECL_DIRAC_PIXOP(avg, l2_c);
DECL_DIRAC_PIXOP(put, l4_c);
DECL_DIRAC_PIXOP(avg, l4_c);
ff_diracdsp_init;
ff_diracdsp_init_x86;
