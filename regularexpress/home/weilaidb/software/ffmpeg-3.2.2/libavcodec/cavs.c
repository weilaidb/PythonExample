static const uint8_t alpha_tab[64] = ;
static const uint8_t beta_tab[64] = ;
static const uint8_t tc_tab[64] = ;
static const cavs_vector un_mv = ;
static const int8_t left_modifier_l[8] = ;
static const int8_t top_modifier_l[8]  = ;
static const int8_t left_modifier_c[7] = ;
static const int8_t top_modifier_c[7]  = ;
get_bs
#define SET_PARAMS                                                \
alpha = alpha_tab[av_clip_uintp2(qp_avg + h->alpha_offset, 6)];  \
beta  =  beta_tab[av_clip_uintp2(qp_avg + h->beta_offset,  6)];  \
tc    =    tc_tab[av_clip_uintp2(qp_avg + h->alpha_offset, 6)];
ff_cavs_filter
#undef SET_PARAMS
ff_cavs_load_intra_pred_luma
ff_cavs_load_intra_pred_chroma
intra_pred_vert
intra_pred_horiz
intra_pred_dc_128
intra_pred_plane
LOWPASS                                           \
((ARRAY[(INDEX) - 1] + 2 * ARRAY[(INDEX)] + ARRAY[(INDEX) + 1] + 2) >> 2)
intra_pred_lp
intra_pred_down_left
intra_pred_down_right
intra_pred_lp_left
intra_pred_lp_top
#undef LOWPASS
modify_pred
ff_cavs_modify_mb_i
mc_dir_part
mc_part_std
ff_cavs_inter
scale_mv
mv_pred_median
ff_cavs_mv
ff_cavs_init_mb
ff_cavs_next_mb
ff_cavs_init_pic
ff_cavs_init_top_lines
ff_cavs_init
ff_cavs_end
