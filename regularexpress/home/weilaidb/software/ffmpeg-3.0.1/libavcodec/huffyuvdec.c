#define UNCHECKED_BITSTREAM_READER 1
#define classic_shift_luma_table_size 42
static const unsigned char classic_shift_luma[classic_shift_luma_table_size + AV_INPUT_BUFFER_PADDING_SIZE] = ;
#define classic_shift_chroma_table_size 59
static const unsigned char classic_shift_chroma[classic_shift_chroma_table_size + AV_INPUT_BUFFER_PADDING_SIZE] = ;
static const unsigned char classic_add_luma[256] = ;
static const unsigned char classic_add_chroma[256] = ;
static int read_len_table(uint8_t *dst, GetBitContext *gb, int n)
static int generate_joint_tables(HYuvContext *s)
static int read_huffman_tables(HYuvContext *s, const uint8_t *src, int length)
static int read_old_huffman_tables(HYuvContext *s)
static av_cold int decode_end(AVCodecContext *avctx)
static av_cold int decode_init(AVCodecContext *avctx)
#if HAVE_THREADS
static av_cold int decode_init_thread_copy(AVCodecContext *avctx)
#define VLC_INTERN(dst, table, gb, name, bits, max_depth)   \
code = table[index][0];                                 \
n    = table[index][1];                                 \
if (max_depth > 1 && n < 0)                                                        \
dst = code;                                             \
LAST_SKIP_BITS(name, gb, n)
#define GET_VLC_DUAL(dst0, dst1, name, gb, dtable, table1, table2,  \
bits, max_depth, OP)                           \
do  while (0)
#define OP8bits(dst0, dst1, code) dst0 = code>>8; dst1 = code
#define READ_2PIX(dst0, dst1, plane1)                                   \
UPDATE_CACHE(re, &s->gb);                                           \
GET_VLC_DUAL(dst0, dst1, re, &s->gb, s->vlc[4+plane1].table,        \
s->vlc[0].table, s->vlc[plane1].table, VLC_BITS, 3, OP8bits)
static void decode_422_bitstream(HYuvContext *s, int count)
#define READ_2PIX_PLANE(dst0, dst1, plane, OP) \
UPDATE_CACHE(re, &s->gb); \
GET_VLC_DUAL(dst0, dst1, re, &s->gb, s->vlc[4+plane].table, \
s->vlc[plane].table, s->vlc[plane].table, VLC_BITS, 3, OP)
#define OP14bits(dst0, dst1, code) dst0 = code>>8; dst1 = sign_extend(code, 8)
#define READ_2PIX_PLANE16(dst0, dst1, plane)
static void decode_plane_bitstream(HYuvContext *s, int width, int plane)
static void decode_gray_bitstream(HYuvContext *s, int count)
static av_always_inline void decode_bgr_1(HYuvContext *s, int count,
int decorrelate, int alpha)
static void decode_bgr_bitstream(HYuvContext *s, int count)
static void draw_slice(HYuvContext *s, AVFrame *frame, int y)
static int left_prediction(HYuvContext *s, uint8_t *dst, const uint8_t *src, int w, int acc)
static void add_bytes(HYuvContext *s, uint8_t *dst, uint8_t *src, int w)
static void add_median_prediction(HYuvContext *s, uint8_t *dst, const uint8_t *src, const uint8_t *diff, int w, int *left, int *left_top)
static int decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
AVCodec ff_huffyuv_decoder = ;
#if CONFIG_FFVHUFF_DECODER
AVCodec ff_ffvhuff_decoder = ;
