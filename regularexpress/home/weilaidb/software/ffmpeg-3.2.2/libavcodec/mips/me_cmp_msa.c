sad_8width_msa
sad_16width_msa
sad_horiz_bilinear_filter_8width_msa
sad_horiz_bilinear_filter_16width_msa
sad_vert_bilinear_filter_8width_msa
sad_vert_bilinear_filter_16width_msa
sad_hv_bilinear_filter_8width_msa
sad_hv_bilinear_filter_16width_msa
CALC_MSE_B                                    \
sse_4width_msa
sse_8width_msa
sse_16width_msa
hadamard_diff_8x8_msa
hadamard_intra_8x8_msa
ff_pix_abs16_msa
ff_pix_abs8_msa
ff_pix_abs16_x2_msa
ff_pix_abs16_y2_msa
ff_pix_abs16_xy2_msa
ff_pix_abs8_x2_msa
ff_pix_abs8_y2_msa
ff_pix_abs8_xy2_msa
ff_sse16_msa
ff_sse8_msa
ff_sse4_msa
ff_hadamard8_diff8x8_msa
ff_hadamard8_intra8x8_msa
WRAPPER8_16_SQ                      \
name16                        \
WRAPPER8_16_SQ(ff_hadamard8_diff8x8_msa, ff_hadamard8_diff16_msa);
WRAPPER8_16_SQ(ff_hadamard8_intra8x8_msa, ff_hadamard8_intra16_msa);
