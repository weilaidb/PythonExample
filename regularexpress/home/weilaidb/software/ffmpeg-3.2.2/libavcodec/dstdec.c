#define DST_MAX_CHANNELS 6
#define DST_MAX_ELEMENTS (2 * DST_MAX_CHANNELS)
#define DSD_FS44(sample_rate) (sample_rate * 8 / 44100)
#define DST_SAMPLES_PER_FRAME(sample_rate) (588 * DSD_FS44(sample_rate))
static const int8_t fsets_code_pred_coeff[3][3] = ;
static const int8_t probs_code_pred_coeff[3][3] = ;
typedef struct ArithCoder  ArithCoder;
typedef struct Table  Table;
typedef struct DSTContext  DSTContext;
static av_cold int decode_init(AVCodecContext *avctx)
static int read_map(GetBitContext *gb, Table *t, unsigned int map[DST_MAX_CHANNELS], int channels)
static av_always_inline int get_sr_golomb_dst(GetBitContext *gb, unsigned int k)
static void read_uncoded_coeff(GetBitContext *gb, int *dst, unsigned int elements,
int coeff_bits, int is_signed, int offset)
static int read_table(GetBitContext *gb, Table *t, const int8_t code_pred_coeff[3][3],
int length_bits, int coeff_bits, int is_signed, int offset)
static void ac_init(ArithCoder *ac, GetBitContext *gb)
static av_always_inline void ac_get(ArithCoder *ac, GetBitContext *gb, int p, int *e)
static uint8_t prob_dst_x_bit(int c)
static void build_filter(int16_t table[DST_MAX_ELEMENTS][16][256], const Table *fsets)
static int decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
AVCodec ff_dst_decoder = ;
