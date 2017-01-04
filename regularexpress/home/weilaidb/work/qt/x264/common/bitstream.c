static uint8_t *x264_nal_escape_c( uint8_t *dst, uint8_t *src, uint8_t *end )
uint8_t *x264_nal_escape_mmx2( uint8_t *dst, uint8_t *src, uint8_t *end );
uint8_t *x264_nal_escape_sse2( uint8_t *dst, uint8_t *src, uint8_t *end );
uint8_t *x264_nal_escape_avx2( uint8_t *dst, uint8_t *src, uint8_t *end );
void x264_cabac_block_residual_rd_internal_sse2       ( dctcoef *l, int b_interlaced, intptr_t ctx_block_cat, x264_cabac_t *cb );
void x264_cabac_block_residual_rd_internal_sse2_lzcnt ( dctcoef *l, int b_interlaced, intptr_t ctx_block_cat, x264_cabac_t *cb );
void x264_cabac_block_residual_rd_internal_ssse3      ( dctcoef *l, int b_interlaced, intptr_t ctx_block_cat, x264_cabac_t *cb );
void x264_cabac_block_residual_rd_internal_ssse3_lzcnt( dctcoef *l, int b_interlaced, intptr_t ctx_block_cat, x264_cabac_t *cb );
void x264_cabac_block_residual_8x8_rd_internal_sse2       ( dctcoef *l, int b_interlaced, intptr_t ctx_block_cat, x264_cabac_t *cb );
void x264_cabac_block_residual_8x8_rd_internal_sse2_lzcnt ( dctcoef *l, int b_interlaced, intptr_t ctx_block_cat, x264_cabac_t *cb );
void x264_cabac_block_residual_8x8_rd_internal_ssse3      ( dctcoef *l, int b_interlaced, intptr_t ctx_block_cat, x264_cabac_t *cb );
void x264_cabac_block_residual_8x8_rd_internal_ssse3_lzcnt( dctcoef *l, int b_interlaced, intptr_t ctx_block_cat, x264_cabac_t *cb );
void x264_cabac_block_residual_internal_sse2      ( dctcoef *l, int b_interlaced, intptr_t ctx_block_cat, x264_cabac_t *cb );
void x264_cabac_block_residual_internal_sse2_lzcnt( dctcoef *l, int b_interlaced, intptr_t ctx_block_cat, x264_cabac_t *cb );
void x264_cabac_block_residual_internal_avx2_bmi2 ( dctcoef *l, int b_interlaced, intptr_t ctx_block_cat, x264_cabac_t *cb );
uint8_t *x264_nal_escape_neon( uint8_t *dst, uint8_t *src, uint8_t *end );
void x264_nal_encode( x264_t *h, uint8_t *dst, x264_nal_t *nal )
void x264_bitstream_init( int cpu, x264_bitstream_function_t *pf )
