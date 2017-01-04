#define X264_ARM_DCT_H
void x264_dct4x4dc_neon( int16_t d[16] );
void x264_idct4x4dc_neon( int16_t d[16] );
void x264_sub4x4_dct_neon( int16_t dct[16], uint8_t *pix1, uint8_t *pix2 );
void x264_sub8x8_dct_neon( int16_t dct[4][16], uint8_t *pix1, uint8_t *pix2 );
void x264_sub16x16_dct_neon( int16_t dct[16][16], uint8_t *pix1, uint8_t *pix2 );
void x264_add4x4_idct_neon( uint8_t *p_dst, int16_t dct[16] );
void x264_add8x8_idct_neon( uint8_t *p_dst, int16_t dct[4][16] );
void x264_add16x16_idct_neon( uint8_t *p_dst, int16_t dct[16][16] );
void x264_add8x8_idct_dc_neon( uint8_t *p_dst, int16_t dct[4] );
void x264_add16x16_idct_dc_neon( uint8_t *p_dst, int16_t dct[16] );
void x264_sub8x8_dct_dc_neon( int16_t dct[4], uint8_t *pix1, uint8_t *pix2 );
void x264_sub8x16_dct_dc_neon( int16_t dct[8], uint8_t *pix1, uint8_t *pix2 );
void x264_sub8x8_dct8_neon( int16_t dct[64], uint8_t *pix1, uint8_t *pix2 );
void x264_sub16x16_dct8_neon( int16_t dct[4][64], uint8_t *pix1, uint8_t *pix2 );
void x264_add8x8_idct8_neon( uint8_t *p_dst, int16_t dct[64] );
void x264_add16x16_idct8_neon( uint8_t *p_dst, int16_t dct[4][64] );
void x264_zigzag_scan_4x4_frame_neon( int16_t level[16], int16_t dct[16] );
