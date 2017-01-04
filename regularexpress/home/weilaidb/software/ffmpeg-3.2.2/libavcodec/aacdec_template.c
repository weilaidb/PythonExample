static VLC vlc_scalefactors;
static VLC vlc_spectral[11];
static int output_configure(AACContext *ac,
uint8_t layout_map[MAX_ELEM_ID*4][3], int tags,
enum OCStatus oc_type, int get_new_frame);
#define overread_err "Input buffer exhausted before END element found\n"
static int count_channels(uint8_t (*layout)[3], int tags)
static av_cold int che_configure(AACContext *ac,
enum ChannelPosition che_pos,
int type, int id, int *channels)
static int frame_configure_elements(AVCodecContext *avctx)
struct elem_to_channel ;
static int assign_pair(struct elem_to_channel e2c_vec[MAX_ELEM_ID],
uint8_t (*layout_map)[3], int offset, uint64_t left,
uint64_t right, int pos)
static int count_paired_channels(uint8_t (*layout_map)[3], int tags, int pos,
int *current)
static uint64_t sniff_channel_order(uint8_t (*layout_map)[3], int tags)
static void push_output_configuration(AACContext *ac)
static void pop_output_configuration(AACContext *ac)
static int output_configure(AACContext *ac,
uint8_t layout_map[MAX_ELEM_ID * 4][3], int tags,
enum OCStatus oc_type, int get_new_frame)
static void flush(AVCodecContext *avctx)
static int set_default_channel_config(AVCodecContext *avctx,
uint8_t (*layout_map)[3],
int *tags,
int channel_config)
static ChannelElement *get_che(AACContext *ac, int type, int elem_id)
static void decode_channel_map(uint8_t layout_map[][3],
enum ChannelPosition type,
GetBitContext *gb, int n)
static int decode_pce(AVCodecContext *avctx, MPEG4AudioConfig *m4ac,
uint8_t (*layout_map)[3],
GetBitContext *gb)
static int decode_ga_specific_config(AACContext *ac, AVCodecContext *avctx,
GetBitContext *gb,
MPEG4AudioConfig *m4ac,
int channel_config)
static int decode_eld_specific_config(AACContext *ac, AVCodecContext *avctx,
GetBitContext *gb,
MPEG4AudioConfig *m4ac,
int channel_config)
static int decode_audio_specific_config(AACContext *ac,
AVCodecContext *avctx,
MPEG4AudioConfig *m4ac,
const uint8_t *data, int64_t bit_size,
int sync_extension)
static av_always_inline int lcg_random(unsigned previous_val)
static void reset_all_predictors(PredictorState *ps)
static int sample_rate_idx (int rate)
static void reset_predictor_group(PredictorState *ps, int group_num)
#define AAC_INIT_VLC_STATIC(num, size)                                     \
INIT_VLC_STATIC(&vlc_spectral[num], 8, ff_aac_spectral_sizes[num],     \
ff_aac_spectral_bits[num], sizeof(ff_aac_spectral_bits[num][0]),  \
sizeof(ff_aac_spectral_bits[num][0]),  \
ff_aac_spectral_codes[num], sizeof(ff_aac_spectral_codes[num][0]), \
sizeof(ff_aac_spectral_codes[num][0]), \
size);
static void aacdec_init(AACContext *ac);
static av_cold void aac_static_table_init(void)
static AVOnce aac_table_init = AV_ONCE_INIT;
static av_cold int aac_decode_init(AVCodecContext *avctx)
static int skip_data_stream_element(AACContext *ac, GetBitContext *gb)
static int decode_prediction(AACContext *ac, IndividualChannelStream *ics,
GetBitContext *gb)
static void decode_ltp(LongTermPrediction *ltp,
GetBitContext *gb, uint8_t max_sfb)
static int decode_ics_info(AACContext *ac, IndividualChannelStream *ics,
GetBitContext *gb)
static int decode_band_types(AACContext *ac, enum BandType band_type[120],
int band_type_run_end[120], GetBitContext *gb,
IndividualChannelStream *ics)
static int decode_scalefactors(AACContext *ac, INTFLOAT sf[120], GetBitContext *gb,
unsigned int global_gain,
IndividualChannelStream *ics,
enum BandType band_type[120],
int band_type_run_end[120])
static int decode_pulses(Pulse *pulse, GetBitContext *gb,
const uint16_t *swb_offset, int num_swb)
static int decode_tns(AACContext *ac, TemporalNoiseShaping *tns,
GetBitContext *gb, const IndividualChannelStream *ics)
static void decode_mid_side_stereo(ChannelElement *cpe, GetBitContext *gb,
int ms_present)
static int decode_spectrum_and_dequant(AACContext *ac, INTFLOAT coef[1024],
GetBitContext *gb, const INTFLOAT sf[120],
int pulse_present, const Pulse *pulse,
const IndividualChannelStream *ics,
enum BandType band_type[120])
static void apply_prediction(AACContext *ac, SingleChannelElement *sce)
static int decode_ics(AACContext *ac, SingleChannelElement *sce,
GetBitContext *gb, int common_window, int scale_flag)
static void apply_mid_side_stereo(AACContext *ac, ChannelElement *cpe)
{
const IndividualChannelStream *ics = &cpe->ch[0].ics;
INTFLOAT *ch0 = cpe->ch[0].coeffs;
INTFLOAT *ch1 = cpe->ch[1].coeffs;
int g, i, group, idx = 0;
const uint16_t *offsets = ics->swb_offset;
for (g = 0; g < ics->num_window_groups; g++)
static void apply_intensity_stereo(AACContext *ac,
ChannelElement *cpe, int ms_present)
static int decode_cpe(AACContext *ac, GetBitContext *gb, ChannelElement *cpe)
static const float cce_scale[] = ;
static int decode_cce(AACContext *ac, GetBitContext *gb, ChannelElement *che)
static int decode_drc_channel_exclusions(DynamicRangeControl *che_drc,
GetBitContext *gb)
static int decode_dynamic_range(DynamicRangeControl *che_drc,
GetBitContext *gb)
static int decode_fill(AACContext *ac, GetBitContext *gb, int len)
static int decode_extension_payload(AACContext *ac, GetBitContext *gb, int cnt,
ChannelElement *che, enum RawDataBlockType elem_type)
static void apply_tns(INTFLOAT coef[1024], TemporalNoiseShaping *tns,
IndividualChannelStream *ics, int decode)
static void windowing_and_mdct_ltp(AACContext *ac, INTFLOAT *out,
INTFLOAT *in, IndividualChannelStream *ics)
static void apply_ltp(AACContext *ac, SingleChannelElement *sce)
static void update_ltp(AACContext *ac, SingleChannelElement *sce)
static void imdct_and_windowing(AACContext *ac, SingleChannelElement *sce)
static void imdct_and_windowing_ld(AACContext *ac, SingleChannelElement *sce)
static void imdct_and_windowing_eld(AACContext *ac, SingleChannelElement *sce)
static void apply_channel_coupling(AACContext *ac, ChannelElement *cc,
enum RawDataBlockType type, int elem_id,
enum CouplingPoint coupling_point,
void (*apply_coupling_method)(AACContext *ac, SingleChannelElement *target, ChannelElement *cce, int index))
static void spectral_to_sample(AACContext *ac, int samples)
static int parse_adts_frame_header(AACContext *ac, GetBitContext *gb)
static int aac_decode_er_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, GetBitContext *gb)
static int aac_decode_frame_int(AVCodecContext *avctx, void *data,
int *got_frame_ptr, GetBitContext *gb, AVPacket *avpkt)
static int aac_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static av_cold int aac_decode_close(AVCodecContext *avctx)
static void aacdec_init(AACContext *c)
#define AACDEC_FLAGS AV_OPT_FLAG_DECODING_PARAM | AV_OPT_FLAG_AUDIO_PARAM
static const AVOption options[] = ;
static const AVClass aac_decoder_class = ;
