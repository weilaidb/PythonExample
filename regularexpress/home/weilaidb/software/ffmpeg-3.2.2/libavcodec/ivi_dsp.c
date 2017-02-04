ff_ivi_recompose53
ff_ivi_recompose_haar
IVI_HAAR_BFLY \
t  = ((s1) - (s2)) >> 1;\
o1 = ((s1) + (s2)) >> 1;\
o2 = (t);\
INV_HAAR8
INV_HAAR4
ff_ivi_inverse_haar_8x8
ff_ivi_row_haar8
ff_ivi_col_haar8
ff_ivi_inverse_haar_4x4
ff_ivi_row_haar4
ff_ivi_col_haar4
ff_ivi_dc_haar_2d
IVI_SLANT_BFLY \
t  = (s1) - (s2);\
o1 = (s1) + (s2);\
o2 = (t);\
IVI_IREFLECT \
t  = (((s1) + (s2)*2 + 2) >> 2) + (s1);\
o2 = (((s1)*2 - (s2) + 2) >> 2) - (s2);\
o1 = (t);\
IVI_SLANT_PART4 \
t  = (s2) + (((s1)*4  - (s2) + 4) >> 3);\
o2 = (s1) + ((-(s1) - (s2)*4 + 4) >> 3);\
o1 = (t);\
IVI_INV_SLANT8
IVI_INV_SLANT4
ff_ivi_inverse_slant_8x8
ff_ivi_inverse_slant_4x4
ff_ivi_dc_slant_2d
ff_ivi_row_slant8
ff_ivi_dc_row_slant
ff_ivi_col_slant8
ff_ivi_dc_col_slant
ff_ivi_row_slant4
ff_ivi_col_slant4
ff_ivi_put_pixels_8x8
ff_ivi_put_dc_pixel_8x8
IVI_MC_TEMPLATE \
static void ivi_mc_ ## size ##x## size ## suffix(int16_t *buf, \
uint32_t dpitch, \
const int16_t *ref_buf, \
uint32_t pitch, int mc_type) \
\
\
void ff_ivi_mc_ ## size ##x## size ## suffix(int16_t *buf, const int16_t *ref_buf, \
uint32_t pitch, int mc_type) \
\
IVI_MC_AVG_TEMPLATE \
void ff_ivi_mc_avg_ ## size ##x## size ## suffix(int16_t *buf, \
const int16_t *ref_buf, \
const int16_t *ref_buf2, \
uint32_t pitch, \
int mc_type, int mc_type2) \
\
OP_PUT  (a) = (b)
OP_ADD  (a) += (b)
IVI_MC_TEMPLATE(8, _no_delta, OP_PUT)
IVI_MC_TEMPLATE(8, _delta,    OP_ADD)
IVI_MC_TEMPLATE(4, _no_delta, OP_PUT)
IVI_MC_TEMPLATE(4, _delta,    OP_ADD)
IVI_MC_AVG_TEMPLATE(8, _no_delta, OP_PUT)
IVI_MC_AVG_TEMPLATE(8, _delta,    OP_ADD)
IVI_MC_AVG_TEMPLATE(4, _no_delta, OP_PUT)
IVI_MC_AVG_TEMPLATE(4, _delta,    OP_ADD)
