#if !HIGH_BIT_DEPTH
#define CALC_MSE_B( src, ref, var )                                    \
#define CALC_MSE_AVG_B( src, ref, var, sub )                           \
#define VARIANCE_WxH( sse, diff, shift )                                \
( ( sse ) - ( ( ( uint32_t )( diff ) * ( diff ) ) >> ( shift ) ) )
static uint32_t sad_4width_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_ref, int32_t i_ref_stride,
int32_t i_height )
static uint32_t sad_8width_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_ref, int32_t i_ref_stride,
int32_t i_height )
static uint32_t sad_16width_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_ref, int32_t i_ref_stride,
int32_t i_height )
static void sad_4width_x3d_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_ref0, uint8_t *p_ref1,
uint8_t *p_ref2, int32_t i_ref_stride,
int32_t i_height, uint32_t *pu_sad_array )
static void sad_8width_x3d_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_ref0, uint8_t *p_ref1,
uint8_t *p_ref2, int32_t i_ref_stride,
int32_t i_height, uint32_t *pu_sad_array )
static void sad_16width_x3d_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_ref0, uint8_t *p_ref1,
uint8_t *p_ref2, int32_t i_ref_stride,
int32_t i_height, uint32_t *pu_sad_array )
static void sad_4width_x4d_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_aref[], int32_t i_ref_stride,
int32_t i_height, uint32_t *pu_sad_array )
static void sad_8width_x4d_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_aref[], int32_t i_ref_stride,
int32_t i_height, uint32_t *pu_sad_array )
static void sad_16width_x4d_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_aref[], int32_t i_ref_stride,
int32_t i_height, uint32_t *pu_sad_array )
static uint64_t avc_pixel_var16width_msa( uint8_t *p_pix, int32_t i_stride,
uint8_t i_height )
static uint64_t avc_pixel_var8width_msa( uint8_t *p_pix, int32_t i_stride,
uint8_t i_height )
static uint32_t sse_diff_8width_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_ref, int32_t i_ref_stride,
int32_t i_height, int32_t *p_diff )
static uint32_t sse_4width_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_ref, int32_t i_ref_stride,
int32_t i_height )
static uint32_t sse_8width_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_ref, int32_t i_ref_stride,
int32_t i_height )
static uint32_t sse_16width_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_ref, int32_t i_ref_stride,
int32_t i_height )
static void ssim_4x4x2_core_msa( const uint8_t *p_src, int32_t i_src_stride,
const uint8_t *p_ref, int32_t i_ref_stride,
int32_t pi_sum_array[2][4] )
static int32_t pixel_satd_4width_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_ref, int32_t i_ref_stride,
uint8_t i_height )
static int32_t pixel_satd_8width_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_ref, int32_t i_ref_stride,
uint8_t i_height )
static int32_t sa8d_8x8_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_ref, int32_t i_ref_stride )
static uint64_t pixel_hadamard_ac_8x8_msa( uint8_t *p_pix, int32_t i_stride )
int32_t x264_pixel_sad_16x16_msa( uint8_t *p_src, intptr_t i_src_stride,
uint8_t *p_ref, intptr_t i_ref_stride )
int32_t x264_pixel_sad_16x8_msa( uint8_t *p_src, intptr_t i_src_stride,
uint8_t *p_ref, intptr_t i_ref_stride )
int32_t x264_pixel_sad_8x16_msa( uint8_t *p_src, intptr_t i_src_stride,
uint8_t *p_ref, intptr_t i_ref_stride )
int32_t x264_pixel_sad_8x8_msa( uint8_t *p_src, intptr_t i_src_stride,
uint8_t *p_ref, intptr_t i_ref_stride )
int32_t x264_pixel_sad_8x4_msa( uint8_t *p_src, intptr_t i_src_stride,
uint8_t *p_ref, intptr_t i_ref_stride )
int32_t x264_pixel_sad_4x16_msa( uint8_t *p_src, intptr_t i_src_stride,
uint8_t *p_ref, intptr_t i_ref_stride )
int32_t x264_pixel_sad_4x8_msa( uint8_t *p_src, intptr_t i_src_stride,
uint8_t *p_ref, intptr_t i_ref_stride )
int32_t x264_pixel_sad_4x4_msa( uint8_t *p_src, intptr_t i_src_stride,
uint8_t *p_ref, intptr_t i_ref_stride )
void x264_pixel_sad_x4_16x16_msa( uint8_t *p_src, uint8_t *p_ref0,
uint8_t *p_ref1, uint8_t *p_ref2,
uint8_t *p_ref3, intptr_t i_ref_stride,
int32_t p_sad_array[4] )
void x264_pixel_sad_x4_16x8_msa( uint8_t *p_src, uint8_t *p_ref0,
uint8_t *p_ref1, uint8_t *p_ref2,
uint8_t *p_ref3, intptr_t i_ref_stride,
int32_t p_sad_array[4] )
void x264_pixel_sad_x4_8x16_msa( uint8_t *p_src, uint8_t *p_ref0,
uint8_t *p_ref1, uint8_t *p_ref2,
uint8_t *p_ref3, intptr_t i_ref_stride,
int32_t p_sad_array[4] )
void x264_pixel_sad_x4_8x8_msa( uint8_t *p_src, uint8_t *p_ref0,
uint8_t *p_ref1, uint8_t *p_ref2,
uint8_t *p_ref3, intptr_t i_ref_stride,
int32_t p_sad_array[4] )
void x264_pixel_sad_x4_8x4_msa( uint8_t *p_src, uint8_t *p_ref0,
uint8_t *p_ref1, uint8_t *p_ref2,
uint8_t *p_ref3, intptr_t i_ref_stride,
int32_t p_sad_array[4] )
void x264_pixel_sad_x4_4x8_msa( uint8_t *p_src, uint8_t *p_ref0,
uint8_t *p_ref1, uint8_t *p_ref2,
uint8_t *p_ref3, intptr_t i_ref_stride,
int32_t p_sad_array[4] )
void x264_pixel_sad_x4_4x4_msa( uint8_t *p_src, uint8_t *p_ref0,
uint8_t *p_ref1, uint8_t *p_ref2,
uint8_t *p_ref3, intptr_t i_ref_stride,
int32_t p_sad_array[4] )
void x264_pixel_sad_x3_16x16_msa( uint8_t *p_src, uint8_t *p_ref0,
uint8_t *p_ref1, uint8_t *p_ref2,
intptr_t i_ref_stride,
int32_t p_sad_array[3] )
void x264_pixel_sad_x3_16x8_msa( uint8_t *p_src, uint8_t *p_ref0,
uint8_t *p_ref1, uint8_t *p_ref2,
intptr_t i_ref_stride,
int32_t p_sad_array[3] )
void x264_pixel_sad_x3_8x16_msa( uint8_t *p_src, uint8_t *p_ref0,
uint8_t *p_ref1, uint8_t *p_ref2,
intptr_t i_ref_stride,
int32_t p_sad_array[3] )
void x264_pixel_sad_x3_8x8_msa( uint8_t *p_src, uint8_t *p_ref0,
uint8_t *p_ref1, uint8_t *p_ref2,
intptr_t i_ref_stride,
int32_t p_sad_array[3] )
void x264_pixel_sad_x3_8x4_msa( uint8_t *p_src, uint8_t *p_ref0,
uint8_t *p_ref1, uint8_t *p_ref2,
intptr_t i_ref_stride,
int32_t p_sad_array[3] )
void x264_pixel_sad_x3_4x8_msa( uint8_t *p_src, uint8_t *p_ref0,
uint8_t *p_ref1, uint8_t *p_ref2,
intptr_t i_ref_stride,
int32_t p_sad_array[3] )
void x264_pixel_sad_x3_4x4_msa( uint8_t *p_src, uint8_t *p_ref0,
uint8_t *p_ref1, uint8_t *p_ref2,
intptr_t i_ref_stride,
int32_t p_sad_array[3] )
int32_t x264_pixel_ssd_16x16_msa( uint8_t *p_src, intptr_t i_src_stride,
uint8_t *p_ref, intptr_t i_ref_stride )
int32_t x264_pixel_ssd_16x8_msa( uint8_t *p_src, intptr_t i_src_stride,
uint8_t *p_ref, intptr_t i_ref_stride )
int32_t x264_pixel_ssd_8x16_msa( uint8_t *p_src, intptr_t i_src_stride,
uint8_t *p_ref, intptr_t i_ref_stride )
int32_t x264_pixel_ssd_8x8_msa( uint8_t *p_src, intptr_t i_src_stride,
uint8_t *p_ref, intptr_t i_ref_stride )
int32_t x264_pixel_ssd_8x4_msa( uint8_t *p_src, intptr_t i_src_stride,
uint8_t *p_ref, intptr_t i_ref_stride )
int32_t x264_pixel_ssd_4x16_msa( uint8_t *p_src, intptr_t i_src_stride,
uint8_t *p_ref, intptr_t i_ref_stride )
int32_t x264_pixel_ssd_4x8_msa( uint8_t *p_src, intptr_t i_src_stride,
uint8_t *p_ref, intptr_t i_ref_stride )
int32_t x264_pixel_ssd_4x4_msa( uint8_t *p_src, intptr_t i_src_stride,
uint8_t *p_ref, intptr_t i_ref_stride )
void x264_intra_sad_x3_4x4_msa( uint8_t *p_enc, uint8_t *p_dec,
int32_t p_sad_array[3] )
void x264_intra_sad_x3_16x16_msa( uint8_t *p_enc, uint8_t *p_dec,
int32_t p_sad_array[3] )
void x264_intra_sad_x3_8x8_msa( uint8_t *p_enc, uint8_t p_edge[36],
int32_t p_sad_array[3] )
void x264_intra_sad_x3_8x8c_msa( uint8_t *p_enc, uint8_t *p_dec,
int32_t p_sad_array[3] )
void x264_ssim_4x4x2_core_msa( const uint8_t *p_pix1, intptr_t i_stride1,
const uint8_t *p_pix2, intptr_t i_stride2,
int32_t i_sums[2][4] )
uint64_t x264_pixel_hadamard_ac_8x8_msa( uint8_t *p_pix, intptr_t i_stride )
uint64_t x264_pixel_hadamard_ac_8x16_msa( uint8_t *p_pix, intptr_t i_stride )
uint64_t x264_pixel_hadamard_ac_16x8_msa( uint8_t *p_pix, intptr_t i_stride )
uint64_t x264_pixel_hadamard_ac_16x16_msa( uint8_t *p_pix, intptr_t i_stride )
int32_t x264_pixel_satd_4x4_msa( uint8_t *p_pix1, intptr_t i_stride,
uint8_t *p_pix2, intptr_t i_stride2 )
int32_t x264_pixel_satd_4x8_msa( uint8_t *p_pix1, intptr_t i_stride,
uint8_t *p_pix2, intptr_t i_stride2 )
int32_t x264_pixel_satd_4x16_msa( uint8_t *p_pix1, intptr_t i_stride,
uint8_t *p_pix2, intptr_t i_stride2 )
int32_t x264_pixel_satd_8x4_msa( uint8_t *p_pix1, intptr_t i_stride,
uint8_t *p_pix2, intptr_t i_stride2 )
int32_t x264_pixel_satd_8x8_msa( uint8_t *p_pix1, intptr_t i_stride,
uint8_t *p_pix2, intptr_t i_stride2 )
int32_t x264_pixel_satd_8x16_msa( uint8_t *p_pix1, intptr_t i_stride,
uint8_t *p_pix2, intptr_t i_stride2 )
int32_t x264_pixel_satd_16x8_msa( uint8_t *p_pix1, intptr_t i_stride,
uint8_t *p_pix2, intptr_t i_stride2 )
int32_t x264_pixel_satd_16x16_msa( uint8_t *p_pix1, intptr_t i_stride,
uint8_t *p_pix2, intptr_t i_stride2 )
int32_t x264_pixel_sa8d_8x8_msa( uint8_t *p_pix1, intptr_t i_stride,
uint8_t *p_pix2, intptr_t i_stride2 )
int32_t x264_pixel_sa8d_16x16_msa( uint8_t *p_pix1, intptr_t i_stride,
uint8_t *p_pix2, intptr_t i_stride2 )
void x264_intra_satd_x3_4x4_msa( uint8_t *p_enc, uint8_t *p_dec,
int32_t p_sad_array[3] )
void x264_intra_satd_x3_16x16_msa( uint8_t *p_enc, uint8_t *p_dec,
int32_t p_sad_array[3] )
void x264_intra_sa8d_x3_8x8_msa( uint8_t *p_enc, uint8_t p_edge[36],
int32_t p_sad_array[3] )
void x264_intra_satd_x3_8x8c_msa( uint8_t *p_enc, uint8_t *p_dec,
int32_t p_sad_array[3] )
uint64_t x264_pixel_var_16x16_msa( uint8_t *p_pix, intptr_t i_stride )
uint64_t x264_pixel_var_8x16_msa( uint8_t *p_pix, intptr_t i_stride )
uint64_t x264_pixel_var_8x8_msa( uint8_t *p_pix, intptr_t i_stride )
int32_t x264_pixel_var2_8x16_msa( uint8_t *p_pix1, intptr_t i_stride1,
uint8_t *p_pix2, intptr_t i_stride2,
int32_t *p_ssd )
int32_t x264_pixel_var2_8x8_msa( uint8_t *p_pix1, intptr_t i_stride1,
uint8_t *p_pix2, intptr_t i_stride2,
int32_t *p_ssd )
