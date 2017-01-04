#define X264_MIPS_PREDICT_H
void x264_intra_predict_dc_16x16_msa( uint8_t *p_src );
void x264_intra_predict_dc_left_16x16_msa( uint8_t *p_src );
void x264_intra_predict_dc_top_16x16_msa( uint8_t *p_src );
void x264_intra_predict_dc_128_16x16_msa( uint8_t *p_src );
void x264_intra_predict_hor_16x16_msa( uint8_t *p_src );
void x264_intra_predict_vert_16x16_msa( uint8_t *p_src );
void x264_intra_predict_plane_16x16_msa( uint8_t *p_src );
void x264_intra_predict_dc_4blk_8x8_msa( uint8_t *p_src );
void x264_intra_predict_hor_8x8_msa( uint8_t *p_src );
void x264_intra_predict_vert_8x8_msa( uint8_t *p_src );
void x264_intra_predict_plane_8x8_msa( uint8_t *p_src );
void x264_intra_predict_ddl_8x8_msa( uint8_t *p_src, uint8_t pu_xyz[36] );
void x264_intra_predict_dc_8x8_msa( uint8_t *p_src, uint8_t pu_xyz[36] );
void x264_intra_predict_h_8x8_msa( uint8_t *p_src, uint8_t pu_xyz[36] );
void x264_intra_predict_v_8x8_msa( uint8_t *p_src, uint8_t pu_xyz[36] );
void x264_intra_predict_dc_4x4_msa( uint8_t *p_src );
void x264_intra_predict_hor_4x4_msa( uint8_t *p_src );
void x264_intra_predict_vert_4x4_msa( uint8_t *p_src );
