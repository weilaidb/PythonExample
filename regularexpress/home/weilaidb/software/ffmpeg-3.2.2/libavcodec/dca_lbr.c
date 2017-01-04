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
static av_cold void init_tables(void)
static int parse_lfe_24(DCALbrDecoder *s)
static int parse_lfe_16(DCALbrDecoder *s)
static int parse_lfe_chunk(DCALbrDecoder *s, LBRChunk *chunk)
static inline int parse_vlc(GetBitContext *s, VLC *vlc, int max_depth)
static int parse_tonal(DCALbrDecoder *s, int group)
static int parse_tonal_chunk(DCALbrDecoder *s, LBRChunk *chunk)
static int parse_tonal_group(DCALbrDecoder *s, LBRChunk *chunk)
static int ensure_bits(GetBitContext *s, int n)
static int parse_scale_factors(DCALbrDecoder *s, uint8_t *scf)
static int parse_st_code(GetBitContext *s, int min_v)
static int parse_grid_1_chunk(DCALbrDecoder *s, LBRChunk *chunk, int ch1, int ch2)
static int parse_grid_1_sec_ch(DCALbrDecoder *s, int ch2)
static void parse_grid_3(DCALbrDecoder *s, int ch1, int ch2, int sb, int flag)
static float lbr_rand(DCALbrDecoder *s, int sb)
static void parse_ch(DCALbrDecoder *s, int ch, int sb, int quant_level, int flag)
static int parse_ts(DCALbrDecoder *s, int ch1, int ch2,
int start_sb, int end_sb, int flag)
static void convert_lpc(float *coeff, const int *codes)
static int parse_lpc(DCALbrDecoder *s, int ch1, int ch2, int start_sb, int end_sb)
static int parse_high_res_grid(DCALbrDecoder *s, LBRChunk *chunk, int ch1, int ch2)
static int parse_grid_2(DCALbrDecoder *s, int ch1, int ch2,
int start_sb, int end_sb, int flag)
static int parse_ts1_chunk(DCALbrDecoder *s, LBRChunk *chunk, int ch1, int ch2)
static int parse_ts2_chunk(DCALbrDecoder *s, LBRChunk *chunk, int ch1, int ch2)
static int init_sample_rate(DCALbrDecoder *s)
static int alloc_sample_buffer(DCALbrDecoder *s)
static int parse_decoder_init(DCALbrDecoder *s, GetByteContext *gb)
int ff_dca_lbr_parse(DCALbrDecoder *s, uint8_t *data, DCAExssAsset *asset)
static void decode_grid(DCALbrDecoder *s, int ch1, int ch2)
static void random_ts(DCALbrDecoder *s, int ch1, int ch2)
static void predict(float *samples, const float *coeff, int nsamples)
static void synth_lpc(DCALbrDecoder *s, int ch1, int ch2, int sb)
static void filter_ts(DCALbrDecoder *s, int ch1, int ch2)
static void decode_part_stereo(DCALbrDecoder *s, int ch1, int ch2)
static void synth_tones(DCALbrDecoder *s, int ch, float *values,
int group, int group_sf, int synth_idx)
static void base_func_synth(DCALbrDecoder *s, int ch, float *values, int sf)
static void transform_channel(DCALbrDecoder *s, int ch, float *output)
int ff_dca_lbr_filter_frame(DCALbrDecoder *s, AVFrame *frame)
av_cold void ff_dca_lbr_flush(DCALbrDecoder *s)
av_cold int ff_dca_lbr_init(DCALbrDecoder *s)
av_cold void ff_dca_lbr_close(DCALbrDecoder *s)
