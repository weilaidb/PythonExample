#define BITSTREAM_READER_LE
static int dxtory_decode_v1_rgb(AVCodecContext *avctx, AVFrame *pic,
const uint8_t *src, int src_size,
int id, int bpp)
static int dxtory_decode_v1_410(AVCodecContext *avctx, AVFrame *pic,
const uint8_t *src, int src_size)
static int dxtory_decode_v1_420(AVCodecContext *avctx, AVFrame *pic,
const uint8_t *src, int src_size)
static int dxtory_decode_v1_444(AVCodecContext *avctx, AVFrame *pic,
const uint8_t *src, int src_size)
static const uint8_t def_lru[8] = ;
static const uint8_t def_lru_555[8] = ;
static const uint8_t def_lru_565[8] = ;
static inline uint8_t decode_sym(GetBitContext *gb, uint8_t lru[8])
static int check_slice_size(AVCodecContext *avctx,
const uint8_t *src, int src_size,
int slice_size, int off)
static int load_buffer(AVCodecContext *avctx,
const uint8_t *src, int src_size,
GetByteContext *gb,
int *nslices, int *off)
static inline uint8_t decode_sym_565(GetBitContext *gb, uint8_t lru[8],
int bits)
typedef int (*decode_slice_func)(GetBitContext *gb, AVFrame *frame,
int line, int height, uint8_t lru[3][8]);
typedef void (*setup_lru_func)(uint8_t lru[3][8]);
static int dxtory_decode_v2(AVCodecContext *avctx, AVFrame *pic,
const uint8_t *src, int src_size,
decode_slice_func decode_slice,
setup_lru_func setup_lru,
enum AVPixelFormat fmt)
av_always_inline
static int dx2_decode_slice_5x5(GetBitContext *gb, AVFrame *frame,
int line, int left, uint8_t lru[3][8],
int is_565)
static void setup_lru_555(uint8_t lru[3][8])
static void setup_lru_565(uint8_t lru[3][8])
static int dx2_decode_slice_555(GetBitContext *gb, AVFrame *frame,
int line, int left, uint8_t lru[3][8])
static int dx2_decode_slice_565(GetBitContext *gb, AVFrame *frame,
int line, int left, uint8_t lru[3][8])
static int dxtory_decode_v2_565(AVCodecContext *avctx, AVFrame *pic,
const uint8_t *src, int src_size, int is_565)
static int dx2_decode_slice_rgb(GetBitContext *gb, AVFrame *frame,
int line, int left, uint8_t lru[3][8])
static void default_setup_lru(uint8_t lru[3][8])
static int dxtory_decode_v2_rgb(AVCodecContext *avctx, AVFrame *pic,
const uint8_t *src, int src_size)
static int dx2_decode_slice_410(GetBitContext *gb, AVFrame *frame,
int line, int left,
uint8_t lru[3][8])
static int dxtory_decode_v2_410(AVCodecContext *avctx, AVFrame *pic,
const uint8_t *src, int src_size)
static int dx2_decode_slice_420(GetBitContext *gb, AVFrame *frame,
int line, int left,
uint8_t lru[3][8])
static int dxtory_decode_v2_420(AVCodecContext *avctx, AVFrame *pic,
const uint8_t *src, int src_size)
static int dx2_decode_slice_444(GetBitContext *gb, AVFrame *frame,
int line, int left,
uint8_t lru[3][8])
static int dxtory_decode_v2_444(AVCodecContext *avctx, AVFrame *pic,
const uint8_t *src, int src_size)
static int decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
AVCodec ff_dxtory_decoder = ;
