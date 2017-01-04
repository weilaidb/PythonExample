#define X264_MIPS_DCT_H
void x264_dct4x4dc_msa( int16_t d[16] );
void x264_idct4x4dc_msa( int16_t d[16] );
void x264_add4x4_idct_msa( uint8_t *p_dst, int16_t pi_dct[16] );
void x264_add8x8_idct_msa( uint8_t *p_dst, int16_t pi_dct[4][16] );
void x264_add16x16_idct_msa( uint8_t *p_dst, int16_t pi_dct[16][16] );
void x264_add8x8_idct8_msa( uint8_t *p_dst, int16_t pi_dct[64] );
void x264_add16x16_idct8_msa( uint8_t *p_dst, int16_t pi_dct[4][64] );
void x264_add8x8_idct_dc_msa( uint8_t *p_dst, int16_t pi_dct[4] );
void x264_add16x16_idct_dc_msa( uint8_t *p_dst, int16_t pi_dct[16] );
void x264_sub4x4_dct_msa( int16_t p_dst[16], uint8_t *p_src, uint8_t *p_ref );
void x264_sub8x8_dct_msa( int16_t p_dst[4][16], uint8_t *p_src,
uint8_t *p_ref );
void x264_sub16x16_dct_msa( int16_t p_dst[16][16], uint8_t *p_src,
uint8_t *p_ref );
void x264_sub8x8_dct_dc_msa( int16_t pi_dct[4], uint8_t *p_pix1,
uint8_t *p_pix2 );
void x264_sub8x16_dct_dc_msa( int16_t pi_dct[8], uint8_t *p_pix1,
uint8_t *p_pix2 );
void x264_zigzag_scan_4x4_frame_msa( int16_t pi_level[16], int16_t pi_dct[16] );
