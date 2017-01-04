#define BITSTREAM_READER_LE
static const int8_t map_1bit[]      = ;
static const int8_t map_2bit_near[] = ;
static const int8_t map_2bit_far[]  = ;
static const int8_t map_3bit[]      = ;
static int mul_3x3 [3 * 3 * 3];
static int mul_3x5 [5 * 5 * 5];
static int mul_2x11[11  *  11];
typedef struct InterplayACMContext  InterplayACMContext;
static av_cold int decode_init(AVCodecContext *avctx)
#define set_pos(s, r, c, idx) do  while (0)
static int zero(InterplayACMContext *s, unsigned ind, unsigned col)
static int bad(InterplayACMContext *s, unsigned ind, unsigned col)
static int linear(InterplayACMContext *s, unsigned ind, unsigned col)
static int k13(InterplayACMContext *s, unsigned ind, unsigned col)
static int k12(InterplayACMContext *s, unsigned ind, unsigned col)
static int k24(InterplayACMContext *s, unsigned ind, unsigned col)
static int k23(InterplayACMContext *s, unsigned ind, unsigned col)
static int k35(InterplayACMContext *s, unsigned ind, unsigned col)
static int k34(InterplayACMContext *s, unsigned ind, unsigned col)
static int k45(InterplayACMContext *s, unsigned ind, unsigned col)
static int k44(InterplayACMContext *s, unsigned ind, unsigned col)
static int t15(InterplayACMContext *s, unsigned ind, unsigned col)
static int t27(InterplayACMContext *s, unsigned ind, unsigned col)
static int t37(InterplayACMContext *s, unsigned ind, unsigned col)
typedef int (*filler)(InterplayACMContext *s, unsigned ind, unsigned col);
static const filler filler_list[] = ;
static int fill_block(InterplayACMContext *s)
static void juggle(int *wrap_p, int *block_p, unsigned sub_len, unsigned sub_count)
static void juggle_block(InterplayACMContext *s)
static int decode_block(InterplayACMContext *s)
static int decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *pkt)
static av_cold int decode_close(AVCodecContext *avctx)
AVCodec ff_interplay_acm_decoder = ;
