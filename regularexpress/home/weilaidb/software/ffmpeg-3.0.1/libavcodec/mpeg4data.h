#define AVCODEC_MPEG4DATA_H
const uint8_t ff_mpeg4_DCtab_lum[13][2] =
;
const uint8_t ff_mpeg4_DCtab_chrom[13][2] =
;
const uint16_t ff_mpeg4_intra_vlc[103][2] = ;
const int8_t ff_mpeg4_intra_level[102] = ;
const int8_t ff_mpeg4_intra_run[102] = ;
RLTable ff_mpeg4_rl_intra = ;
static const uint16_t inter_rvlc[170][2]=;
static const int8_t inter_rvlc_run[169]=;
static const int8_t inter_rvlc_level[169]=;
RLTable ff_rvlc_rl_inter = ;
static const uint16_t intra_rvlc[170][2]=;
static const int8_t intra_rvlc_run[169]=;
static const int8_t intra_rvlc_level[169]=;
RLTable ff_rvlc_rl_intra = ;
const uint16_t ff_sprite_trajectory_tab[15][2] = ;
const uint8_t ff_mb_type_b_tab[4][2] = ;
const int16_t ff_mpeg4_default_intra_matrix[64] = ;
const int16_t ff_mpeg4_default_non_intra_matrix[64] = ;
const uint8_t ff_mpeg4_y_dc_scale_table[32]=;
const uint8_t ff_mpeg4_c_dc_scale_table[32]=;
const uint16_t ff_mpeg4_resync_prefix[8]=;
const uint8_t ff_mpeg4_dc_threshold[8]=;
