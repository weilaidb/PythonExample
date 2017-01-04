enum ExrCompr ;
enum ExrPixelType ;
typedef struct EXRChannel  EXRChannel;
typedef struct EXRThreadData  EXRThreadData;
typedef struct EXRContext  EXRContext;
#define HALF_FLOAT_MIN_BIASED_EXP_AS_SINGLE_FP_EXP 0x38000000
#define HALF_FLOAT_MAX_BIASED_EXP_AS_SINGLE_FP_EXP 0x47800000
#define FLOAT_MAX_BIASED_EXP (0xFF << 23)
#define HALF_FLOAT_MAX_BIASED_EXP (0x1F << 10)
static union av_intfloat32 exr_half2float(uint16_t hf)
static inline uint16_t exr_flt2uint(uint32_t v)
static inline uint16_t exr_halflt2uint(uint16_t v)
static void predictor(uint8_t *src, int size)
static void reorder_pixels(uint8_t *src, uint8_t *dst, int size)
static int zip_uncompress(const uint8_t *src, int compressed_size,
int uncompressed_size, EXRThreadData *td)
static int rle_uncompress(const uint8_t *src, int compressed_size,
int uncompressed_size, EXRThreadData *td)
#define USHORT_RANGE (1 << 16)
#define BITMAP_SIZE  (1 << 13)
static uint16_t reverse_lut(const uint8_t *bitmap, uint16_t *lut)
static void apply_lut(const uint16_t *lut, uint16_t *dst, int dsize)
#define HUF_ENCBITS 16
#define HUF_DECBITS 14
#define HUF_ENCSIZE ((1 << HUF_ENCBITS) + 1)
#define HUF_DECSIZE (1 << HUF_DECBITS)
#define HUF_DECMASK (HUF_DECSIZE - 1)
typedef struct HufDec  HufDec;
static void huf_canonical_code_table(uint64_t *hcode)
#define SHORT_ZEROCODE_RUN  59
#define LONG_ZEROCODE_RUN   63
#define SHORTEST_LONG_RUN   (2 + LONG_ZEROCODE_RUN - SHORT_ZEROCODE_RUN)
#define LONGEST_LONG_RUN    (255 + SHORTEST_LONG_RUN)
static int huf_unpack_enc_table(GetByteContext *gb,
int32_t im, int32_t iM, uint64_t *hcode)
static int huf_build_dec_table(const uint64_t *hcode, int im,
int iM, HufDec *hdecod)
#define get_char(c, lc, gb)                                                   \
#define get_code(po, rlc, c, lc, gb, out, oe, outb)                           \
static int huf_decode(const uint64_t *hcode, const HufDec *hdecod,
GetByteContext *gb, int nbits,
int rlc, int no, uint16_t *out)
static int huf_uncompress(GetByteContext *gb,
uint16_t *dst, int dst_size)
static inline void wdec14(uint16_t l, uint16_t h, uint16_t *a, uint16_t *b)
#define NBITS      16
#define A_OFFSET  (1 << (NBITS - 1))
#define MOD_MASK  ((1 << NBITS) - 1)
static inline void wdec16(uint16_t l, uint16_t h, uint16_t *a, uint16_t *b)
static void wav_decode(uint16_t *in, int nx, int ox,
int ny, int oy, uint16_t mx)
static int piz_uncompress(EXRContext *s, const uint8_t *src, int ssize,
int dsize, EXRThreadData *td)
static int pxr24_uncompress(EXRContext *s, const uint8_t *src,
int compressed_size, int uncompressed_size,
EXRThreadData *td)
static int decode_block(AVCodecContext *avctx, void *tdata,
int jobnr, int threadnr)
static int check_header_variable(EXRContext *s,
const char *value_name,
const char *value_type,
unsigned int minimum_length)
static int decode_header(EXRContext *s)
static int decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
static av_cold int decode_init(AVCodecContext *avctx)
#if HAVE_THREADS
static int decode_init_thread_copy(AVCodecContext *avctx)
static av_cold int decode_end(AVCodecContext *avctx)
#define OFFSET(x) offsetof(EXRContext, x)
#define VD AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass exr_class = ;
AVCodec ff_exr_decoder = ;
