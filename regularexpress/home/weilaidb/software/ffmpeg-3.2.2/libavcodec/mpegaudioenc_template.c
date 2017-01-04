#define FRAC_BITS   15
#define WFRAC_BITS  14
#define MUL(a,b) (((int64_t)(a) * (int64_t)(b)) >> FRAC_BITS)
#define SAMPLES_BUF_SIZE 4096
typedef struct MpegAudioContext  MpegAudioContext;
static av_cold int MPA_encode_init(AVCodecContext *avctx)
static void idct32(int *out, int *tab)
#define WSHIFT (WFRAC_BITS + 15 - FRAC_BITS)
static void filter(MpegAudioContext *s, int ch, const short *samples, int incr)
static void compute_scale_factors(MpegAudioContext *s,
unsigned char scale_code[SBLIMIT],
unsigned char scale_factors[SBLIMIT][3],
int sb_samples[3][12][SBLIMIT],
int sblimit)
static void psycho_acoustic_model(MpegAudioContext *s, short smr[SBLIMIT])
#define SB_NOTALLOCATED  0
#define SB_ALLOCATED     1
#define SB_NOMORE        2
static void compute_bit_allocation(MpegAudioContext *s,
short smr1[MPA_MAX_CHANNELS][SBLIMIT],
unsigned char bit_alloc[MPA_MAX_CHANNELS][SBLIMIT],
int *padding)
static void encode_frame(MpegAudioContext *s,
unsigned char bit_alloc[MPA_MAX_CHANNELS][SBLIMIT],
int padding)
static int MPA_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
static const AVCodecDefault mp2_defaults[] = ;
