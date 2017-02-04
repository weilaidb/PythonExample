ZERO8x2
static const int rv34_mb_type_to_lavc[12] = ;
static RV34VLC intra_vlcs[NUM_INTRA_TABLES], inter_vlcs[NUM_INTER_TABLES];
rv34_decode_mv;
static const int table_offs[] = ;
static VLC_TYPE table_data[117592][2];
rv34_gen_vlc
rv34_init_tables
rv34_decode_cbp
decode_coeff
decode_subblock
decode_subblock1
decode_subblock3
rv34_decode_block
ff_rv34_get_start_offset
choose_vlc_set
rv34_decode_intra_mb_header
rv34_decode_inter_mb_header
static const uint8_t part_sizes_w[RV34_MB_TYPES] = ;
static const uint8_t part_sizes_h[RV34_MB_TYPES] = ;
static const uint8_t avail_indexes[4] = ;
rv34_pred_mv
GET_PTS_DIFF (((a) - (b) + 8192) & 0x1FFF)
calc_add_mv
rv34_pred_b_vector
rv34_pred_mv_b
rv34_pred_mv_rv3
static const int chroma_coeffs[3] = ;
rv34_mc[16],
h264_chroma_mc_func (*chroma_mc))
rv34_mc_1mv
rv4_weight
rv34_mc_2mv
rv34_mc_2mv_skip
static const int num_mvs[RV34_MB_TYPES] = ;
rv34_decode_mv
static const int ittrans[9] = ;
static const int ittrans16[4] = ;
rv34_pred_4x4_block
adjust_pred16
rv34_process_block
rv34_output_i16x16
rv34_output_intra
is_mv_diff_gt_3[2], int step)
rv34_set_deblock_coef
rv34_decode_inter_macroblock
rv34_decode_intra_macroblock
check_slice_end
rv34_decoder_free
rv34_decoder_alloc
rv34_decoder_realloc
rv34_decode_slice
ff_rv34_decode_init
ff_rv34_decode_init_thread_copy
ff_rv34_decode_update_thread_context
get_slice_offset
finish_frame
update_sar
ff_rv34_decode_frame
ff_rv34_decode_end
