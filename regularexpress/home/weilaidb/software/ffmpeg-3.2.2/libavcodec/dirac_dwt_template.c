defined
RENAME   N ## _8bit
#    define TYPE        int16_t
#    undef  TEMPLATE_8bit
defined
RENAME   N ## _10bit
#    define TYPE        int32_t
#    undef  TEMPLATE_10bit
defined
RENAME   N ## _12bit
#    define TYPE        int32_t
#    undef  TEMPLATE_12bit
RENAME(uint8_t *_b0, uint8_t *_b1, uint8_t *_b2,
int width)
RENAME(TYPE *dst, TYPE *src0, TYPE *src1, int w2,
int add, int shift)
RENAME(uint8_t *_b, uint8_t *_temp, int w)
RENAME(uint8_t *_b, uint8_t *_tmp, int w)
RENAME(uint8_t *_b, uint8_t *_tmp, int w)
RENAME(TYPE *b, TYPE *temp,
int w, int shift)
RENAME(uint8_t *_b, uint8_t *_temp, int w)
RENAME(uint8_t *_b, uint8_t *_temp, int w)
RENAME(uint8_t *_b, uint8_t *_tmp, int w)
RENAME(uint8_t *_b, uint8_t *_temp, int w)
RENAME(uint8_t *_b0, uint8_t *_b1, uint8_t *_b2,
int width)
RENAME(uint8_t *_b0, uint8_t *_b1, uint8_t *_b2,
uint8_t *_b3, uint8_t *_b4, int width)
RENAME(uint8_t *_b0, uint8_t *_b1, uint8_t *_b2,
uint8_t *_b3, uint8_t *_b4, int width)
RENAME(uint8_t *_b0, uint8_t *_b1, int width)
RENAME(uint8_t *_dst, uint8_t *_b[8], int width)
RENAME(uint8_t *_dst, uint8_t *_b[8], int width)
RENAME(uint8_t *_b0, uint8_t *_b1, uint8_t *_b2, int width)
RENAME(uint8_t *_b0, uint8_t *_b1, uint8_t *_b2, int width)
RENAME(uint8_t *_b0, uint8_t *_b1, uint8_t *_b2, int width)
RENAME(uint8_t *_b0, uint8_t *_b1, uint8_t *_b2, int width)
RENAME(DWTContext *d, int level, int width, int height, int stride)
RENAME(DWTContext *d, int level, int width, int height, int stride)
RENAME(DWTContext *d, int level, int width, int height, int stride)
RENAME(DWTContext *d, int level, int width, int height, int stride)
RENAME(DWTContext *d, int level, int width, int height, int stride)
RENAME(DWTContext *d, int level, int width, int height, int stride)
RENAME(DWTCompose *cs, uint8_t *buffer, int height, int stride)
RENAME(DWTCompose *cs, uint8_t *buffer, int height, int stride)
RENAME(DWTCompose *cs, uint8_t *buffer, int height, int stride)
RENAME(DWTCompose *cs, uint8_t *buffer, int height, int stride)
RENAME(DWTContext *d, enum dwt_type type)
#undef RENAME
#undef TYPE
