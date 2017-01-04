void ff_ivi_recompose53(const IVIPlaneDesc *plane, uint8_t *dst,
const int dst_pitch)
void ff_ivi_recompose_haar(const IVIPlaneDesc *plane, uint8_t *dst,
const int dst_pitch)
#define IVI_HAAR_BFLY(s1, s2, o1, o2, t) \
t  = ((s1) - (s2)) >> 1;\
o1 = ((s1) + (s2)) >> 1;\
o2 = (t);\
#define INV_HAAR8(s1, s5, s3, s7, s2, s4, s6, s8,\
d1, d2, d3, d4, d5, d6, d7, d8,\
t0, t1, t2, t3, t4, t5, t6, t7, t8)
#define INV_HAAR4(s1, s3, s5, s7, d1, d2, d3, d4, t0, t1, t2, t3, t4)
void ff_ivi_inverse_haar_8x8(const int32_t *in, int16_t *out, uint32_t pitch,
const uint8_t *flags)
void ff_ivi_row_haar8(const int32_t *in, int16_t *out, uint32_t pitch,
const uint8_t *flags)
void ff_ivi_col_haar8(const int32_t *in, int16_t *out, uint32_t pitch,
const uint8_t *flags)
void ff_ivi_inverse_haar_4x4(const int32_t *in, int16_t *out, uint32_t pitch,
const uint8_t *flags)
void ff_ivi_row_haar4(const int32_t *in, int16_t *out, uint32_t pitch,
const uint8_t *flags)
void ff_ivi_col_haar4(const int32_t *in, int16_t *out, uint32_t pitch,
const uint8_t *flags)
void ff_ivi_dc_haar_2d(const int32_t *in, int16_t *out, uint32_t pitch,
int blk_size)
#define IVI_SLANT_BFLY(s1, s2, o1, o2, t) \
t  = (s1) - (s2);\
o1 = (s1) + (s2);\
o2 = (t);\
#define IVI_IREFLECT(s1, s2, o1, o2, t) \
t  = (((s1) + (s2)*2 + 2) >> 2) + (s1);\
o2 = (((s1)*2 - (s2) + 2) >> 2) - (s2);\
o1 = (t);\
#define IVI_SLANT_PART4(s1, s2, o1, o2, t) \
t  = (s2) + (((s1)*4  - (s2) + 4) >> 3);\
o2 = (s1) + ((-(s1) - (s2)*4 + 4) >> 3);\
o1 = (t);\
#define IVI_INV_SLANT8(s1, s4, s8, s5, s2, s6, s3, s7,\
d1, d2, d3, d4, d5, d6, d7, d8,\
t0, t1, t2, t3, t4, t5, t6, t7, t8)
#define IVI_INV_SLANT4(s1, s4, s2, s3, d1, d2, d3, d4, t0, t1, t2, t3, t4)
void ff_ivi_inverse_slant_8x8(const int32_t *in, int16_t *out, uint32_t pitch, const uint8_t *flags)
void ff_ivi_inverse_slant_4x4(const int32_t *in, int16_t *out, uint32_t pitch, const uint8_t *flags)
void ff_ivi_dc_slant_2d(const int32_t *in, int16_t *out, uint32_t pitch, int blk_size)
void ff_ivi_row_slant8(const int32_t *in, int16_t *out, uint32_t pitch, const uint8_t *flags)
void ff_ivi_dc_row_slant(const int32_t *in, int16_t *out, uint32_t pitch, int blk_size)
void ff_ivi_col_slant8(const int32_t *in, int16_t *out, uint32_t pitch, const uint8_t *flags)
void ff_ivi_dc_col_slant(const int32_t *in, int16_t *out, uint32_t pitch, int blk_size)
void ff_ivi_row_slant4(const int32_t *in, int16_t *out, uint32_t pitch, const uint8_t *flags)
void ff_ivi_col_slant4(const int32_t *in, int16_t *out, uint32_t pitch, const uint8_t *flags)
void ff_ivi_put_pixels_8x8(const int32_t *in, int16_t *out, uint32_t pitch,
const uint8_t *flags)
void ff_ivi_put_dc_pixel_8x8(const int32_t *in, int16_t *out, uint32_t pitch,
int blk_size)
#define IVI_MC_TEMPLATE(size, suffix, OP) \
static void ivi_mc_ ## size ##x## size ## suffix(int16_t *buf, \
uint32_t dpitch, \
const int16_t *ref_buf, \
uint32_t pitch, int mc_type) \
\
\
void ff_ivi_mc_ ## size ##x## size ## suffix(int16_t *buf, const int16_t *ref_buf, \
uint32_t pitch, int mc_type) \
\
#define IVI_MC_AVG_TEMPLATE(size, suffix, OP) \
void ff_ivi_mc_avg_ ## size ##x## size ## suffix(int16_t *buf, \
const int16_t *ref_buf, \
const int16_t *ref_buf2, \
uint32_t pitch, \
int mc_type, int mc_type2) \
\
#define OP_PUT(a, b)  (a) = (b)
#define OP_ADD(a, b)  (a) += (b)
IVI_MC_TEMPLATE(8, _no_delta, OP_PUT)
IVI_MC_TEMPLATE(8, _delta,    OP_ADD)
IVI_MC_TEMPLATE(4, _no_delta, OP_PUT)
IVI_MC_TEMPLATE(4, _delta,    OP_ADD)
IVI_MC_AVG_TEMPLATE(8, _no_delta, OP_PUT)
IVI_MC_AVG_TEMPLATE(8, _delta,    OP_ADD)
IVI_MC_AVG_TEMPLATE(4, _no_delta, OP_PUT)
IVI_MC_AVG_TEMPLATE(4, _delta,    OP_ADD)
