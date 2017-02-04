MAX_TABLE_DEPTH \
((max_bits + table_bits - 1) / table_bits)
#define DC_VLC_BITS 9
#define AC_VLC_BITS 9
#define OR_VLC_BITS 7
MAX_TABLE_DEPTH
MAX_TABLE_DEPTH
MAX_TABLE_DEPTH
static VLC j_ac_vlc[2][2][8];
static VLC j_dc_vlc[2][8];
static VLC j_orient_vlc[2][4];
x8_vlc_init
x8_reset_vlc_tables
x8_select_ac_table
x8_get_orient_vlc
extra_bits  (eb)
#define extra_run       (0xFF << 8)
#define extra_level     (0x00 << 8)
run_offset   ((r) << 16)
level_offset ((l) << 24)
static const uint32_t ac_decode_table[] = ;
#undef extra_bits
#undef extra_run
#undef extra_level
#undef run_offset
#undef level_offset
x8_get_ac_rlf
static const uint8_t dc_index_offset[] = ;
x8_get_dc_rlf
x8_setup_spatial_predictor
x8_update_predictions
x8_get_prediction_chroma
x8_get_prediction
x8_ac_compensation
dsp_x8_put_solidcolor
static const int16_t quant_table[64] = ;
x8_decode_intra_mb
x8_init_block_index
ff_intrax8_common_init[64],
int block_last_index[12],
int mb_width, int mb_height)
ff_intrax8_common_end
ff_intrax8_decode_picture
