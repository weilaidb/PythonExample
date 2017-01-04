#define MAX_CHANNELS        2
#define MAX_BYTESPERSAMPLE  3
#define APE_FRAMECODE_MONO_SILENCE    1
#define APE_FRAMECODE_STEREO_SILENCE  3
#define APE_FRAMECODE_PSEUDO_STEREO   4
#define HISTORY_SIZE 512
#define PREDICTOR_ORDER 8
#define PREDICTOR_SIZE 50
#define YDELAYA (18 + PREDICTOR_ORDER*4)
#define YDELAYB (18 + PREDICTOR_ORDER*3)
#define XDELAYA (18 + PREDICTOR_ORDER*2)
#define XDELAYB (18 + PREDICTOR_ORDER)
#define YADAPTCOEFFSA 18
#define XADAPTCOEFFSA 14
#define YADAPTCOEFFSB 10
#define XADAPTCOEFFSB 5
enum APECompressionLevel ;
#define APE_FILTER_LEVELS 3
static const uint16_t ape_filter_orders[5][APE_FILTER_LEVELS] = ;
static const uint8_t ape_filter_fracbits[5][APE_FILTER_LEVELS] = ;
typedef struct APEFilter  APEFilter;
typedef struct APERice  APERice;
typedef struct APERangecoder  APERangecoder;
typedef struct APEPredictor  APEPredictor;
typedef struct APEContext  APEContext;
static void ape_apply_filters(APEContext *ctx, int32_t *decoded0,
int32_t *decoded1, int count);
static void entropy_decode_mono_0000(APEContext *ctx, int blockstodecode);
static void entropy_decode_stereo_0000(APEContext *ctx, int blockstodecode);
static void entropy_decode_mono_3860(APEContext *ctx, int blockstodecode);
static void entropy_decode_stereo_3860(APEContext *ctx, int blockstodecode);
static void entropy_decode_mono_3900(APEContext *ctx, int blockstodecode);
static void entropy_decode_stereo_3900(APEContext *ctx, int blockstodecode);
static void entropy_decode_stereo_3930(APEContext *ctx, int blockstodecode);
static void entropy_decode_mono_3990(APEContext *ctx, int blockstodecode);
static void entropy_decode_stereo_3990(APEContext *ctx, int blockstodecode);
static void predictor_decode_mono_3800(APEContext *ctx, int count);
static void predictor_decode_stereo_3800(APEContext *ctx, int count);
static void predictor_decode_mono_3930(APEContext *ctx, int count);
static void predictor_decode_stereo_3930(APEContext *ctx, int count);
static void predictor_decode_mono_3950(APEContext *ctx, int count);
static void predictor_decode_stereo_3950(APEContext *ctx, int count);
static av_cold int ape_decode_close(AVCodecContext *avctx)
static av_cold int ape_decode_init(AVCodecContext *avctx)
#define CODE_BITS    32
#define TOP_VALUE    ((unsigned int)1 << (CODE_BITS-1))
#define SHIFT_BITS   (CODE_BITS - 9)
#define EXTRA_BITS   ((CODE_BITS-2) % 8 + 1)
#define BOTTOM_VALUE (TOP_VALUE >> 8)
static inline void range_start_decoding(APEContext *ctx)
static inline void range_dec_normalize(APEContext *ctx)
static inline int range_decode_culfreq(APEContext *ctx, int tot_f)
static inline int range_decode_culshift(APEContext *ctx, int shift)
static inline void range_decode_update(APEContext *ctx, int sy_f, int lt_f)
static inline int range_decode_bits(APEContext *ctx, int n)
#define MODEL_ELEMENTS 64
static const uint16_t counts_3970[22] = ;
static const uint16_t counts_diff_3970[21] = ;
static const uint16_t counts_3980[22] = ;
static const uint16_t counts_diff_3980[21] = ;
static inline int range_get_symbol(APEContext *ctx,
const uint16_t counts[],
const uint16_t counts_diff[])
static inline void update_rice(APERice *rice, unsigned int x)
static inline int get_rice_ook(GetBitContext *gb, int k)
static inline int ape_decode_value_3860(APEContext *ctx, GetBitContext *gb,
APERice *rice)
static inline int ape_decode_value_3900(APEContext *ctx, APERice *rice)
static inline int ape_decode_value_3990(APEContext *ctx, APERice *rice)
static void decode_array_0000(APEContext *ctx, GetBitContext *gb,
int32_t *out, APERice *rice, int blockstodecode)
static void entropy_decode_mono_0000(APEContext *ctx, int blockstodecode)
static void entropy_decode_stereo_0000(APEContext *ctx, int blockstodecode)
static void entropy_decode_mono_3860(APEContext *ctx, int blockstodecode)
static void entropy_decode_stereo_3860(APEContext *ctx, int blockstodecode)
static void entropy_decode_mono_3900(APEContext *ctx, int blockstodecode)
static void entropy_decode_stereo_3900(APEContext *ctx, int blockstodecode)
static void entropy_decode_stereo_3930(APEContext *ctx, int blockstodecode)
static void entropy_decode_mono_3990(APEContext *ctx, int blockstodecode)
static void entropy_decode_stereo_3990(APEContext *ctx, int blockstodecode)
static int init_entropy_decoder(APEContext *ctx)
static const int32_t initial_coeffs_fast_3320[1] = ;
static const int32_t initial_coeffs_a_3800[3] = ;
static const int32_t initial_coeffs_b_3800[2] = ;
static const int32_t initial_coeffs_3930[4] = ;
static void init_predictor_decoder(APEContext *ctx)
static inline int APESIGN(int32_t x)
static av_always_inline int filter_fast_3320(APEPredictor *p,
const int decoded, const int filter,
const int delayA)
static av_always_inline int filter_3800(APEPredictor *p,
const int decoded, const int filter,
const int delayA,  const int delayB,
const int start,   const int shift)
static void long_filter_high_3800(int32_t *buffer, int order, int shift, int length)
static void long_filter_ehigh_3830(int32_t *buffer, int length)
static void predictor_decode_stereo_3800(APEContext *ctx, int count)
static void predictor_decode_mono_3800(APEContext *ctx, int count)
static av_always_inline int predictor_update_3930(APEPredictor *p,
const int decoded, const int filter,
const int delayA)
static void predictor_decode_stereo_3930(APEContext *ctx, int count)
static void predictor_decode_mono_3930(APEContext *ctx, int count)
static av_always_inline int predictor_update_filter(APEPredictor *p,
const int decoded, const int filter,
const int delayA,  const int delayB,
const int adaptA,  const int adaptB)
static void predictor_decode_stereo_3950(APEContext *ctx, int count)
static void predictor_decode_mono_3950(APEContext *ctx, int count)
static void do_init_filter(APEFilter *f, int16_t *buf, int order)
static void init_filter(APEContext *ctx, APEFilter *f, int16_t *buf, int order)
static void do_apply_filter(APEContext *ctx, int version, APEFilter *f,
int32_t *data, int count, int order, int fracbits)
static void apply_filter(APEContext *ctx, APEFilter *f,
int32_t *data0, int32_t *data1,
int count, int order, int fracbits)
static void ape_apply_filters(APEContext *ctx, int32_t *decoded0,
int32_t *decoded1, int count)
static int init_frame_decoder(APEContext *ctx)
static void ape_unpack_mono(APEContext *ctx, int count)
static void ape_unpack_stereo(APEContext *ctx, int count)
static int ape_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static void ape_flush(AVCodecContext *avctx)
#define OFFSET(x) offsetof(APEContext, x)
#define PAR (AV_OPT_FLAG_DECODING_PARAM | AV_OPT_FLAG_AUDIO_PARAM)
static const AVOption options[] = ;
static const AVClass ape_decoder_class = ;
AVCodec ff_ape_decoder = ;
