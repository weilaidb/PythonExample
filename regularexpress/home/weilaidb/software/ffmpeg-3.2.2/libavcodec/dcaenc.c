#define MAX_CHANNELS 6
#define DCA_MAX_FRAME_SIZE 16384
#define DCA_HEADER_SIZE 13
#define DCA_LFE_SAMPLES 8
#define DCAENC_SUBBANDS 32
#define SUBFRAMES 1
#define SUBSUBFRAMES 2
#define SUBBAND_SAMPLES (SUBFRAMES * SUBSUBFRAMES * 8)
#define AUBANDS 25
typedef struct DCAEncContext  DCAEncContext;
static int32_t cos_table[2048];
static int32_t band_interpolation[2][512];
static int32_t band_spectrum[2][8];
static int32_t auf[9][AUBANDS][256];
static int32_t cb_to_add[256];
static int32_t cb_to_level[2048];
static int32_t lfe_fir_64i[512];
static double hom(double f)
static double gammafilter(int i, double f)
static int encode_init(AVCodecContext *avctx)
static inline int32_t cos_t(int x)
static inline int32_t sin_t(int x)
static inline int32_t half32(int32_t a)
static inline int32_t mul32(int32_t a, int32_t b)
static void subband_transform(DCAEncContext *c, const int32_t *input)
static void lfe_downsample(DCAEncContext *c, const int32_t *input)
typedef struct  cplx32;
static void fft(const int32_t in[2 * 256], cplx32 out[256])
static int32_t get_cb(int32_t in)
static int32_t add_cb(int32_t a, int32_t b)
static void adjust_jnd(int samplerate_index,
const int32_t in[512], int32_t out_cb[256])
typedef void (*walk_band_t)(DCAEncContext *c, int band1, int band2, int f,
int32_t spectrum1, int32_t spectrum2, int channel,
int32_t * arg);
static void walk_band_low(DCAEncContext *c, int band, int channel,
walk_band_t walk, int32_t *arg)
static void walk_band_high(DCAEncContext *c, int band, int channel,
walk_band_t walk, int32_t *arg)
static void update_band_masking(DCAEncContext *c, int band1, int band2,
int f, int32_t spectrum1, int32_t spectrum2,
int channel, int32_t * arg)
static void calc_masking(DCAEncContext *c, const int32_t *input)
static void find_peaks(DCAEncContext *c)
static const int snr_fudge = 128;
#define USED_1ABITS 1
#define USED_NABITS 2
#define USED_26ABITS 4
static int init_quantization_noise(DCAEncContext *c, int noise)
static void assign_bits(DCAEncContext *c)
static void shift_history(DCAEncContext *c, const int32_t *input)
static int32_t quantize_value(int32_t value, softfloat quant)
static int calc_one_scale(int32_t peak_cb, int abits, softfloat *quant)
static void calc_scales(DCAEncContext *c)
static void quantize_all(DCAEncContext *c)
static void put_frame_header(DCAEncContext *c)
static void put_primary_audio_header(DCAEncContext *c)
static void put_subframe_samples(DCAEncContext *c, int ss, int band, int ch)
static void put_subframe(DCAEncContext *c, int subframe)
static int encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
static const AVCodecDefault defaults[] = ;
AVCodec ff_dca_encoder = ;
