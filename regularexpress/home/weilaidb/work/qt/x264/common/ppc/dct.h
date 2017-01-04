#define X264_PPC_DCT_H
void x264_sub4x4_dct_altivec( int16_t dct[16], uint8_t *pix1, uint8_t *pix2 );
void x264_sub8x8_dct_altivec( int16_t dct[4][16], uint8_t *pix1, uint8_t *pix2 );
void x264_sub16x16_dct_altivec( int16_t dct[16][16], uint8_t *pix1, uint8_t *pix2 );
void x264_add8x8_idct_dc_altivec( uint8_t *p_dst, int16_t dct[4] );
void x264_add4x4_idct_altivec( uint8_t *p_dst, int16_t dct[16] );
void x264_add8x8_idct_altivec( uint8_t *p_dst, int16_t dct[4][16] );
void x264_add16x16_idct_altivec( uint8_t *p_dst, int16_t dct[16][16] );
void x264_sub8x8_dct_dc_altivec( int16_t dct[4], uint8_t *pix1, uint8_t *pix2 );
void x264_sub8x8_dct8_altivec( int16_t dct[64], uint8_t *pix1, uint8_t *pix2 );
void x264_sub16x16_dct8_altivec( int16_t dct[4][64], uint8_t *pix1, uint8_t *pix2 );
void x264_add8x8_idct8_altivec( uint8_t *dst, int16_t dct[64] );
void x264_add16x16_idct8_altivec( uint8_t *dst, int16_t dct[4][64] );
void x264_zigzag_scan_4x4_frame_altivec( int16_t level[16], int16_t dct[16] );
void x264_zigzag_scan_4x4_field_altivec( int16_t level[16], int16_t dct[16] );
void x264_zigzag_scan_8x8_frame_altivec( int16_t level[64], int16_t dct[64] );
void x264_zigzag_interleave_8x8_cavlc_altivec( int16_t *dst, int16_t *src, uint8_t *nnz );
