#if ARCH_ARM
enum HeaderType ;
enum AudioMode ;
enum ExtAudioType ;
enum LFEFlag ;
static const int8_t prm_ch_to_spkr_map[AMODE_COUNT][5] = ;
static const uint8_t audio_mode_ch_mask[AMODE_COUNT] = ;
static const uint8_t block_code_nbits[7] = ;
static const uint8_t quant_index_sel_nbits[DCA_CODE_BOOKS] = ;
static const uint8_t quant_index_group_size[DCA_CODE_BOOKS] = ;
static int dca_get_vlc(GetBitContext *s, DCAVLC *v, int i)
static void get_array(GetBitContext *s, int32_t *array, int size, int n)
static int parse_frame_header(DCACoreDecoder *s)
static int parse_coding_header(DCACoreDecoder *s, enum HeaderType header, int xch_base)
static inline int parse_scale(DCACoreDecoder *s, int *scale_index, int sel)
static inline int parse_joint_scale(DCACoreDecoder *s, int sel)
static int parse_subframe_header(DCACoreDecoder *s, int sf,
enum HeaderType header, int xch_base)
static inline int decode_blockcodes(int code1, int code2, int levels, int32_t *audio)
static inline int parse_block_codes(DCACoreDecoder *s, int32_t *audio, int abits)
static inline int parse_huffman_codes(DCACoreDecoder *s, int32_t *audio, int abits, int sel)
static inline int extract_audio(DCACoreDecoder *s, int32_t *audio, int abits, int ch)
static inline void dequantize(int32_t *output, const int32_t *input,
int32_t step_size, int32_t scale, int residual)
static inline void inverse_adpcm(int32_t **subband_samples,
const int16_t *vq_index,
const int8_t *prediction_mode,
int sb_start, int sb_end,
int ofs, int len)
static int parse_subframe_audio(DCACoreDecoder *s, int sf, enum HeaderType header,
int xch_base, int *sub_pos, int *lfe_pos)
static void erase_adpcm_history(DCACoreDecoder *s)
static int alloc_sample_buffer(DCACoreDecoder *s)
static int parse_frame_data(DCACoreDecoder *s, enum HeaderType header, int xch_base)
static int parse_xch_frame(DCACoreDecoder *s)
static int parse_xxch_frame(DCACoreDecoder *s)
static int parse_xbr_subframe(DCACoreDecoder *s, int xbr_base_ch, int xbr_nchannels,
int *xbr_nsubbands, int xbr_transition_mode, int sf, int *sub_pos)
static int parse_xbr_frame(DCACoreDecoder *s)
static int rand_x96(DCACoreDecoder *s)
static int parse_x96_subframe_audio(DCACoreDecoder *s, int sf, int xch_base, int *sub_pos)
static void erase_x96_adpcm_history(DCACoreDecoder *s)
static int alloc_x96_sample_buffer(DCACoreDecoder *s)
static int parse_x96_subframe_header(DCACoreDecoder *s, int xch_base)
static int parse_x96_coding_header(DCACoreDecoder *s, int exss, int xch_base)
static int parse_x96_frame_data(DCACoreDecoder *s, int exss, int xch_base)
static int parse_x96_frame(DCACoreDecoder *s)
static int parse_x96_frame_exss(DCACoreDecoder *s)
static int parse_aux_data(DCACoreDecoder *s)
static int parse_optional_info(DCACoreDecoder *s)
int ff_dca_core_parse(DCACoreDecoder *s, uint8_t *data, int size)
int ff_dca_core_parse_exss(DCACoreDecoder *s, uint8_t *data, DCAExssAsset *asset)
static int map_prm_ch_to_spkr(DCACoreDecoder *s, int ch)
static void erase_dsp_history(DCACoreDecoder *s)
static void set_filter_mode(DCACoreDecoder *s, int mode)
int ff_dca_core_filter_fixed(DCACoreDecoder *s, int x96_synth)
static int filter_frame_fixed(DCACoreDecoder *s, AVFrame *frame)
static int filter_frame_float(DCACoreDecoder *s, AVFrame *frame)
int ff_dca_core_filter_frame(DCACoreDecoder *s, AVFrame *frame)
av_cold void ff_dca_core_flush(DCACoreDecoder *s)
av_cold int ff_dca_core_init(DCACoreDecoder *s)
av_cold void ff_dca_core_close(DCACoreDecoder *s)
