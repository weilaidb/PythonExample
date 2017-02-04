static const uint8_t mv_scan[4] = ;
static const uint8_t cbp_tab[64][2] = ;
static const uint8_t scan3x3[4] = ;
static const uint8_t dequant_shift[64] = ;
static const uint16_t dequant_mul[64] = ;
#define EOB 0, 0, 0
static const struct dec_2dvlc intra_dec[7] = ;
static const struct dec_2dvlc inter_dec[7] = ;
static const struct dec_2dvlc chroma_dec[5] = ;
#undef EOB
store_mvs
mv_pred_direct
mv_pred_sym
get_ue_code
dequant
decode_residual_block
decode_residual_chroma
decode_residual_inter
set_mv_intra
decode_mb_i
set_intra_mode_default
decode_mb_p
decode_mb_b
decode_slice_header
check_for_slice
decode_pic
decode_seq_header
cavs_flush
cavs_decode_frame
AVCodec ff_cavs_decoder = ;
