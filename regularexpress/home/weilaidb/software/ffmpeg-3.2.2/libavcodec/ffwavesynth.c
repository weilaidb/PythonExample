#define SIN_BITS 14
#define WS_MAX_CHANNELS 32
#define INF_TS 0x7FFFFFFFFFFFFFFF
#define PINK_UNIT 128
enum ws_interval_type ;
struct ws_interval ;
struct wavesynth_context ;
#define LCG_A 1284865837
#define LCG_C 4150755663
#define LCG_AI 849225893
static uint32_t lcg_next(uint32_t *s)
static void lcg_seek(uint32_t *s, int64_t dt)
static void pink_fill(struct wavesynth_context *ws)
static uint64_t frac64(uint64_t a, uint64_t b)
static uint64_t phi_at(struct ws_interval *in, int64_t ts)
static void wavesynth_seek(struct wavesynth_context *ws, int64_t ts)
static int wavesynth_parse_extradata(AVCodecContext *avc)
static av_cold int wavesynth_init(AVCodecContext *avc)
static void wavesynth_synth_sample(struct wavesynth_context *ws, int64_t ts,
int32_t *channels)
static void wavesynth_enter_intervals(struct wavesynth_context *ws, int64_t ts)
static int wavesynth_decode(AVCodecContext *avc, void *rframe, int *rgot_frame,
AVPacket *packet)
static av_cold int wavesynth_close(AVCodecContext *avc)
AVCodec ff_ffwavesynth_decoder = ;
