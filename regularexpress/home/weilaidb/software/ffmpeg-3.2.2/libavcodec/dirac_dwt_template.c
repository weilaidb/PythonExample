#if defined(TEMPLATE_8bit)
#    define RENAME(N)   N ## _8bit
#    define TYPE        int16_t
#    undef  TEMPLATE_8bit
#elif defined(TEMPLATE_10bit)
#    define RENAME(N)   N ## _10bit
#    define TYPE        int32_t
#    undef  TEMPLATE_10bit
#elif defined(TEMPLATE_12bit)
#    define RENAME(N)   N ## _12bit
#    define TYPE        int32_t
#    undef  TEMPLATE_12bit
static void RENAME(vertical_compose53iL0)(uint8_t *_b0, uint8_t *_b1, uint8_t *_b2,
int width)
static av_always_inline void RENAME(interleave)(TYPE *dst, TYPE *src0, TYPE *src1, int w2,
int add, int shift)
static void RENAME(horizontal_compose_dirac53i)(uint8_t *_b, uint8_t *_temp, int w)
static void RENAME(horizontal_compose_dd97i)(uint8_t *_b, uint8_t *_tmp, int w)
static void RENAME(horizontal_compose_dd137i)(uint8_t *_b, uint8_t *_tmp, int w)
static av_always_inline void RENAME(horizontal_compose_haari)(TYPE *b, TYPE *temp,
int w, int shift)
static void RENAME(horizontal_compose_haar0i)(uint8_t *_b, uint8_t *_temp, int w)
static void RENAME(horizontal_compose_haar1i)(uint8_t *_b, uint8_t *_temp, int w)
static void RENAME(horizontal_compose_fidelityi)(uint8_t *_b, uint8_t *_tmp, int w)
static void RENAME(horizontal_compose_daub97i)(uint8_t *_b, uint8_t *_temp, int w)
static void RENAME(vertical_compose_dirac53iH0)(uint8_t *_b0, uint8_t *_b1, uint8_t *_b2,
int width)
static void RENAME(vertical_compose_dd97iH0)(uint8_t *_b0, uint8_t *_b1, uint8_t *_b2,
uint8_t *_b3, uint8_t *_b4, int width)
static void RENAME(vertical_compose_dd137iL0)(uint8_t *_b0, uint8_t *_b1, uint8_t *_b2,
uint8_t *_b3, uint8_t *_b4, int width)
static void RENAME(vertical_compose_haar)(uint8_t *_b0, uint8_t *_b1, int width)
static void RENAME(vertical_compose_fidelityiH0)(uint8_t *_dst, uint8_t *_b[8], int width)
static void RENAME(vertical_compose_fidelityiL0)(uint8_t *_dst, uint8_t *_b[8], int width)
static void RENAME(vertical_compose_daub97iH0)(uint8_t *_b0, uint8_t *_b1, uint8_t *_b2, int width)
static void RENAME(vertical_compose_daub97iH1)(uint8_t *_b0, uint8_t *_b1, uint8_t *_b2, int width)
static void RENAME(vertical_compose_daub97iL0)(uint8_t *_b0, uint8_t *_b1, uint8_t *_b2, int width)
static void RENAME(vertical_compose_daub97iL1)(uint8_t *_b0, uint8_t *_b1, uint8_t *_b2, int width)
static void RENAME(spatial_compose_dd97i_dy)(DWTContext *d, int level, int width, int height, int stride)
static void RENAME(spatial_compose_dirac53i_dy)(DWTContext *d, int level, int width, int height, int stride)
static void RENAME(spatial_compose_dd137i_dy)(DWTContext *d, int level, int width, int height, int stride)
static void RENAME(spatial_compose_haari_dy)(DWTContext *d, int level, int width, int height, int stride)
static void RENAME(spatial_compose_fidelity)(DWTContext *d, int level, int width, int height, int stride)
static void RENAME(spatial_compose_daub97i_dy)(DWTContext *d, int level, int width, int height, int stride)
static void RENAME(spatial_compose97i_init)(DWTCompose *cs, uint8_t *buffer, int height, int stride)
static void RENAME(spatial_compose53i_init)(DWTCompose *cs, uint8_t *buffer, int height, int stride)
static void RENAME(spatial_compose_dd97i_init)(DWTCompose *cs, uint8_t *buffer, int height, int stride)
static void RENAME(spatial_compose_dd137i_init)(DWTCompose *cs, uint8_t *buffer, int height, int stride)
static int RENAME(ff_spatial_idwt_init)(DWTContext *d, enum dwt_type type)
#undef RENAME
#undef TYPE
