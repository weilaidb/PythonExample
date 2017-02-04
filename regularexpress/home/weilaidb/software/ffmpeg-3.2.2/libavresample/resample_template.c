defined
SET_TYPE  func ## _dbl
#define FELEM         double
#define FELEM2        double
#define FELEML        double
OUT d = v
DBL_TO_FELEM d = v
defined
SET_TYPE  func ## _flt
#define FELEM         float
#define FELEM2        float
#define FELEML        float
OUT d = v
DBL_TO_FELEM d = v
defined
SET_TYPE  func ## _s32
#define FELEM         int32_t
#define FELEM2        int64_t
#define FELEML        int64_t
OUT d = av_clipl_int32((v + (1 << 29)) >> 30)
DBL_TO_FELEM d = av_clipl_int32(llrint(v * (1 << 30)));
SET_TYPE  func ## _s16
#define FELEM         int16_t
#define FELEM2        int32_t
#define FELEML        int64_t
OUT d = av_clip_int16((v + (1 << 14)) >> 15)
DBL_TO_FELEM d = av_clip_int16(lrint(v * (1 << 15)))
SET_TYPE(void *dst0, int dst_index, const void *src0, unsigned int index)
SET_TYPE(ResampleContext *c, void *dst0, int dst_index,
const void *src0, unsigned int index, int frac)
SET_TYPE(ResampleContext *c,
void *dst0, int dst_index, const void *src0,
unsigned int index, int frac)
SET_TYPE(void *filter0, double *tab, int phase,
int tap_count)
#undef SET_TYPE
#undef FELEM
#undef FELEM2
#undef FELEML
#undef OUT
#undef DBL_TO_FELEM
