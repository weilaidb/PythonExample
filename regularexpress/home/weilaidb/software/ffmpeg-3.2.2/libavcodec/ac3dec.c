static uint8_t ungroup_3_in_7_bits_tab[128][3];
static int b1_mantissas[32][3];
static int b2_mantissas[128][3];
static int b3_mantissas[8];
static int b4_mantissas[128][2];
static int b5_mantissas[16];
static const uint8_t quantization_tab[16] = ;
#if (!USE_FIXED)
static float dynamic_range_tab[256];
float ff_ac3_heavy_dynamic_range_tab[256];
static const float gain_levels[9] = ;
static const float gain_levels_lfe[32] = ;
static const uint8_t ac3_default_coeffs[8][5][2] = ;
static inline int
symmetric_dequant(int code, int levels)
static av_cold void ac3_tables_init(void)
static av_cold int ac3_decode_init(AVCodecContext *avctx)
static int ac3_parse_header(AC3DecodeContext *s)
static int parse_frame_header(AC3DecodeContext *s)
static void set_downmix_coeffs(AC3DecodeContext *s)
static int decode_exponents(AC3DecodeContext *s,
GetBitContext *gbc, int exp_strategy, int ngrps,
uint8_t absexp, int8_t *dexps)
static void calc_transform_coeffs_cpl(AC3DecodeContext *s)
typedef struct mant_groups  mant_groups;
static void ac3_decode_transform_coeffs_ch(AC3DecodeContext *s, int ch_index, mant_groups *m)
static void remove_dithering(AC3DecodeContext *s)
static void decode_transform_coeffs_ch(AC3DecodeContext *s, int blk, int ch,
mant_groups *m)
static void decode_transform_coeffs(AC3DecodeContext *s, int blk)
static void do_rematrixing(AC3DecodeContext *s)
static inline void do_imdct(AC3DecodeContext *s, int channels)
static void ac3_upmix_delay(AC3DecodeContext *s)
static void decode_band_structure(GetBitContext *gbc, int blk, int eac3,
int ecpl, int start_subband, int end_subband,
const uint8_t *default_band_struct,
int *num_bands, uint8_t *band_sizes)
static int decode_audio_block(AC3DecodeContext *s, int blk)
static int ac3_decode_frame(AVCodecContext * avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static av_cold int ac3_decode_end(AVCodecContext *avctx)
#define OFFSET(x) offsetof(AC3DecodeContext, x)
#define PAR (AV_OPT_FLAG_DECODING_PARAM | AV_OPT_FLAG_AUDIO_PARAM)
