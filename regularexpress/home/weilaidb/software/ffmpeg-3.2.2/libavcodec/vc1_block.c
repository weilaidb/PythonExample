#define MB_INTRA_VLC_BITS 9
#define DC_VLC_BITS 9
static const uint8_t offset_table[2][9] = ;
init_block_index
vc1_put_signed_blocks_clamped
GET_MQUANT                                           \
if (v->dquantfrm)
GET_MVDATA                                      \
index = 1 + get_vlc2(gb, ff_vc1_mv_diff_vlc[s->mv_table_index].table, \
VC1_MV_DIFF_VLC_BITS, 2);                      \
if (index > 36)  else                                                              \
mb_has_coeffs = 0;                                              \
s->mb_intra = 0;                                                    \
if (!index)  else if (index == 35)  else if (index == 36)  else
get_mvdata_interlaced
vc1_b_mc
vc1_i_pred_dc
ff_vc1_pred_dc
vc1_coded_block_pred
vc1_decode_ac_coeff
vc1_decode_i_block
vc1_decode_i_block_adv
vc1_decode_intra_block
vc1_decode_p_block
static const uint8_t size_table[6] = ;
vc1_decode_p_mb
vc1_decode_p_mb_intfr
vc1_decode_p_mb_intfi
vc1_decode_b_mb
vc1_decode_b_mb_intfi
vc1_decode_b_mb_intfr
vc1_decode_i_blocks
vc1_decode_i_blocks_adv
vc1_decode_p_blocks
vc1_decode_b_blocks
vc1_decode_skip_blocks
ff_vc1_decode_blocks
