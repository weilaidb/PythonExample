#define BITSTREAM_READER_LE
#define AMP_MAX     56
enum LBRHeader ;
enum LBRFlags ;
enum LBRChunkTypes ;
typedef struct LBRChunk  LBRChunk;
static const int8_t channel_reorder_nolfe[7][5] = ;
static const int8_t channel_reorder_lfe[7][5] = ;
static const uint8_t lfe_index[7] = ;
static const uint8_t channel_counts[7] = ;
static const uint16_t channel_layouts[7] = ;
static float    cos_tab[256];
static float    lpc_tab[16];
init_tables
parse_lfe_24
parse_lfe_16
parse_lfe_chunk
parse_vlc
parse_tonal
parse_tonal_chunk
parse_tonal_group
ensure_bits
parse_scale_factors
parse_st_code
parse_grid_1_chunk
parse_grid_1_sec_ch
parse_grid_3
lbr_rand
parse_ch
parse_ts
convert_lpc
parse_lpc
parse_high_res_grid
parse_grid_2
parse_ts1_chunk
parse_ts2_chunk
init_sample_rate
alloc_sample_buffer
parse_decoder_init
ff_dca_lbr_parse
decode_grid
random_ts
predict
synth_lpc
filter_ts
decode_part_stereo
synth_tones
base_func_synth
transform_channel
ff_dca_lbr_filter_frame
ff_dca_lbr_flush
ff_dca_lbr_init
ff_dca_lbr_close
