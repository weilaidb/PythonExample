#if !HIGH_BIT_DEPTH
#define AVC_ITRANS_H( in0, in1, in2, in3, out0, out1, out2, out3 )          \
static void avc_dct4x4dc_msa( int16_t *p_src, int16_t *p_dst,
int32_t i_src_stride )
static void avc_sub4x4_dct_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *p_ref, int32_t i_dst_stride,
int16_t *p_dst )
static void avc_zigzag_scan_4x4_frame_msa( int16_t pi_dct[16],
int16_t pi_level[16] )
static void avc_idct4x4_addblk_msa( uint8_t *p_dst, int16_t *p_src,
int32_t i_dst_stride )
static void avc_idct4x4_addblk_dc_msa( uint8_t *p_dst, int16_t *p_src,
int32_t i_dst_stride )
static void avc_idct8_addblk_msa( uint8_t *p_dst, int16_t *p_src,
int32_t i_dst_stride )
static void avc_idct4x4dc_msa( int16_t *p_src, int32_t i_src_stride,
int16_t *p_dst, int32_t i_dst_stride )
static int32_t subtract_sum4x4_msa( uint8_t *p_src, int32_t i_src_stride,
uint8_t *pred_ptr, int32_t i_pred_stride )
void x264_dct4x4dc_msa( int16_t d[16] )
void x264_idct4x4dc_msa( int16_t d[16] )
void x264_add4x4_idct_msa( uint8_t *p_dst, int16_t pi_dct[16] )
void x264_add8x8_idct_msa( uint8_t *p_dst, int16_t pi_dct[4][16] )
void x264_add16x16_idct_msa( uint8_t *p_dst, int16_t pi_dct[16][16] )
void x264_add8x8_idct8_msa( uint8_t *p_dst, int16_t pi_dct[64] )
void x264_add16x16_idct8_msa( uint8_t *p_dst, int16_t pi_dct[4][64] )
void x264_add8x8_idct_dc_msa( uint8_t *p_dst, int16_t pi_dct[4] )
void x264_add16x16_idct_dc_msa( uint8_t *p_dst, int16_t pi_dct[16] )
void x264_sub4x4_dct_msa( int16_t p_dst[16], uint8_t *p_src,
uint8_t *p_ref )
void x264_sub8x8_dct_msa( int16_t p_dst[4][16], uint8_t *p_src,
uint8_t *p_ref )
void x264_sub16x16_dct_msa( int16_t p_dst[16][16],
uint8_t *p_src,
uint8_t *p_ref )
void x264_sub8x8_dct_dc_msa( int16_t pi_dct[4],
uint8_t *p_pix1, uint8_t *p_pix2 )
void x264_sub8x16_dct_dc_msa( int16_t pi_dct[8],
uint8_t *p_pix1, uint8_t *p_pix2 )
void x264_zigzag_scan_4x4_frame_msa( int16_t pi_level[16], int16_t pi_dct[16] )
