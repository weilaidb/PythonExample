#define BITSTREAM_WRITER_LE
#define UPDATE_WEIGHT(weight, delta, source, result) \
if ((source) && (result))
#define APPLY_WEIGHT_F(weight, sample) ((((((sample) & 0xffff) * (weight)) >> 9) + \
((((sample) & ~0xffff) >> 9) * (weight)) + 1) >> 1)
#define APPLY_WEIGHT_I(weight, sample) (((weight) * (sample) + 512) >> 10)
#define APPLY_WEIGHT(weight, sample) ((sample) != (short) (sample) ? \
APPLY_WEIGHT_F(weight, sample) : APPLY_WEIGHT_I (weight, sample))
#define CLEAR(destin) memset(&destin, 0, sizeof(destin));
#define SHIFT_LSB       13
#define SHIFT_MASK      (0x1FU << SHIFT_LSB)
#define MAG_LSB         18
#define MAG_MASK        (0x1FU << MAG_LSB)
#define SRATE_LSB       23
#define SRATE_MASK      (0xFU << SRATE_LSB)
#define EXTRA_TRY_DELTAS     1
#define EXTRA_ADJUST_DELTAS  2
#define EXTRA_SORT_FIRST     4
#define EXTRA_BRANCHES       8
#define EXTRA_SORT_LAST     16
typedef struct WavPackExtraInfo  WavPackExtraInfo;
typedef struct WavPackWords  WavPackWords;
typedef struct WavPackEncodeContext  WavPackEncodeContext;
static av_cold int wavpack_encode_init(AVCodecContext *avctx)
static void shift_mono(int32_t *samples, int nb_samples, int shift)
static void shift_stereo(int32_t *left, int32_t *right,
int nb_samples, int shift)
#define FLOAT_SHIFT_ONES 1
#define FLOAT_SHIFT_SAME 2
#define FLOAT_SHIFT_SENT 4
#define FLOAT_ZEROS_SENT 8
#define FLOAT_NEG_ZEROS  0x10
#define FLOAT_EXCEPTIONS 0x20
#define get_mantissa(f)     ((f) & 0x7fffff)
#define get_exponent(f)     (((f) >> 23) & 0xff)
#define get_sign(f)         (((f) >> 31) & 0x1)
static void process_float(WavPackEncodeContext *s, int32_t *sample)
static int scan_float(WavPackEncodeContext *s,
int32_t *samples_l, int32_t *samples_r,
int nb_samples)
static void scan_int23(WavPackEncodeContext *s,
int32_t *samples_l, int32_t *samples_r,
int nb_samples)
static int scan_int32(WavPackEncodeContext *s,
int32_t *samples_l, int32_t *samples_r,
int nb_samples)
static int8_t store_weight(int weight)
static int restore_weight(int8_t weight)
static int log2s(int32_t value)
static void decorr_mono(int32_t *in_samples, int32_t *out_samples,
int nb_samples, struct Decorr *dpp, int dir)
static void reverse_mono_decorr(struct Decorr *dpp)
static uint32_t log2sample(uint32_t v, int limit, uint32_t *result)
static uint32_t log2mono(int32_t *samples, int nb_samples, int limit)
static uint32_t log2stereo(int32_t *samples_l, int32_t *samples_r,
int nb_samples, int limit)
static void decorr_mono_buffer(int32_t *samples, int32_t *outsamples,
int nb_samples, struct Decorr *dpp,
int tindex)
static void recurse_mono(WavPackEncodeContext *s, WavPackExtraInfo *info,
int depth, int delta, uint32_t input_bits)
static void sort_mono(WavPackEncodeContext *s, WavPackExtraInfo *info)
static void delta_mono(WavPackEncodeContext *s, WavPackExtraInfo *info)
static int allocate_buffers2(WavPackEncodeContext *s, int nterms)
static int allocate_buffers(WavPackEncodeContext *s)
static void analyze_mono(WavPackEncodeContext *s, int32_t *samples, int do_samples)
static void scan_word(WavPackEncodeContext *s, WvChannel *c,
int32_t *samples, int nb_samples, int dir)
static int wv_mono(WavPackEncodeContext *s, int32_t *samples,
int no_history, int do_samples)
static void decorr_stereo(int32_t *in_left, int32_t *in_right,
int32_t *out_left, int32_t *out_right,
int nb_samples, struct Decorr *dpp, int dir)
static void reverse_decorr(struct Decorr *dpp)
static void decorr_stereo_quick(int32_t *in_left,  int32_t *in_right,
int32_t *out_left, int32_t *out_right,
int nb_samples, struct Decorr *dpp)
static void decorr_stereo_buffer(WavPackExtraInfo *info,
int32_t *in_left,  int32_t *in_right,
int32_t *out_left, int32_t *out_right,
int nb_samples, int tindex)
static void sort_stereo(WavPackEncodeContext *s, WavPackExtraInfo *info)
static void delta_stereo(WavPackEncodeContext *s, WavPackExtraInfo *info)
static void recurse_stereo(WavPackEncodeContext *s, WavPackExtraInfo *info,
int depth, int delta, uint32_t input_bits)
static void analyze_stereo(WavPackEncodeContext *s,
int32_t *in_left, int32_t *in_right,
int do_samples)
static int wv_stereo(WavPackEncodeContext *s,
int32_t *samples_l, int32_t *samples_r,
int no_history, int do_samples)
#define count_bits(av) ( \
(av) < (1 << 8) ? nbits_table[av] : \
( \
(av) < (1 << 16) ? nbits_table[(av) >> 8] + 8 : \
((av) < (1 << 24) ? nbits_table[(av) >> 16] + 16 : nbits_table[(av) >> 24] + 24) \
) \
)
static void encode_flush(WavPackEncodeContext *s)
static void wavpack_encode_sample(WavPackEncodeContext *s, WvChannel *c, int32_t sample)
static void pack_int32(WavPackEncodeContext *s,
int32_t *samples_l, int32_t *samples_r,
int nb_samples)
static void pack_float_sample(WavPackEncodeContext *s, int32_t *sample)
static void pack_float(WavPackEncodeContext *s,
int32_t *samples_l, int32_t *samples_r,
int nb_samples)
static void decorr_stereo_pass2(struct Decorr *dpp,
int32_t *samples_l, int32_t *samples_r,
int nb_samples)
#define update_weight_d2(weight, delta, source, result) \
if (source && result) \
weight -= (((source ^ result) >> 29) & 4) - 2;
#define update_weight_clip_d2(weight, delta, source, result) \
if (source && result)
static void decorr_stereo_pass_id2(struct Decorr *dpp,
int32_t *samples_l, int32_t *samples_r,
int nb_samples)
static void put_metadata_block(PutByteContext *pb, int flags, int size)
static int wavpack_encode_block(WavPackEncodeContext *s,
int32_t *samples_l, int32_t *samples_r,
uint8_t *out, int out_size)
static void fill_buffer(WavPackEncodeContext *s,
const int8_t *src, int32_t *dst,
int nb_samples)
static void set_samplerate(WavPackEncodeContext *s)
static int wavpack_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
static av_cold int wavpack_encode_close(AVCodecContext *avctx)
#define OFFSET(x) offsetof(WavPackEncodeContext, x)
#define FLAGS AV_OPT_FLAG_ENCODING_PARAM | AV_OPT_FLAG_AUDIO_PARAM
static const AVOption options[] = ;
static const AVClass wavpack_encoder_class = ;
AVCodec ff_wavpack_encoder = ;
