#define MAX_CHANNELS 2
#define MID_SIDE 0
#define LEFT_SIDE 1
#define RIGHT_SIDE 2
typedef struct SonicContext  SonicContext;
#define LATTICE_SHIFT   10
#define SAMPLE_SHIFT    4
#define LATTICE_FACTOR  (1 << LATTICE_SHIFT)
#define SAMPLE_FACTOR   (1 << SAMPLE_SHIFT)
#define BASE_QUANT      0.6
#define RATE_VARIATION  3.0
static inline int shift(int a,int b)
static inline int shift_down(int a,int b)
static av_always_inline av_flatten void put_symbol(RangeCoder *c, uint8_t *state, int v, int is_signed, uint64_t rc_stat[256][2], uint64_t rc_stat2[32][2])
static inline av_flatten int get_symbol(RangeCoder *c, uint8_t *state, int is_signed)
#if 1
static inline int intlist_write(RangeCoder *c, uint8_t *state, int *buf, int entries, int base_2_part)
static inline int intlist_read(RangeCoder *c, uint8_t *state, int *buf, int entries, int base_2_part)
#elif 1
static inline int intlist_write(PutBitContext *pb, int *buf, int entries, int base_2_part)
static inline int intlist_read(GetBitContext *gb, int *buf, int entries, int base_2_part)
#define ADAPT_LEVEL 8
static int bits_to_store(uint64_t x)
static void write_uint_max(PutBitContext *pb, unsigned int value, unsigned int max)
static unsigned int read_uint_max(GetBitContext *gb, int max)
static int intlist_write(PutBitContext *pb, int *buf, int entries, int base_2_part)
static int intlist_read(GetBitContext *gb, int *buf, int entries, int base_2_part)
static void predictor_init_state(int *k, int *state, int order)
static int predictor_calc_error(int *k, int *state, int order, int error)
#if CONFIG_SONIC_ENCODER || CONFIG_SONIC_LS_ENCODER
static int modified_levinson_durbin(int *window, int window_entries,
int *out, int out_entries, int channels, int *tap_quant)
static inline int code_samplerate(int samplerate)
static av_cold int sonic_encode_init(AVCodecContext *avctx)
static av_cold int sonic_encode_close(AVCodecContext *avctx)
static int sonic_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
#if CONFIG_SONIC_DECODER
static const int samplerate_table[] =
;
static av_cold int sonic_decode_init(AVCodecContext *avctx)
static av_cold int sonic_decode_close(AVCodecContext *avctx)
static int sonic_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame_ptr,
AVPacket *avpkt)
AVCodec ff_sonic_decoder = ;
#if CONFIG_SONIC_ENCODER
AVCodec ff_sonic_encoder = ;
#if CONFIG_SONIC_LS_ENCODER
AVCodec ff_sonic_ls_encoder = ;
