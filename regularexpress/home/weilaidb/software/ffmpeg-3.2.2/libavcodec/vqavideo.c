#define PALETTE_COUNT 256
#define VQA_HEADER_SIZE 0x2A
#define MAX_CODEBOOK_VECTORS 0xFF00
#define SOLID_PIXEL_VECTORS 0x100
#define MAX_VECTORS (MAX_CODEBOOK_VECTORS + SOLID_PIXEL_VECTORS)
#define MAX_CODEBOOK_SIZE (MAX_VECTORS * 4 * 4)
#define CBF0_TAG MKBETAG('C', 'B', 'F', '0')
#define CBFZ_TAG MKBETAG('C', 'B', 'F', 'Z')
#define CBP0_TAG MKBETAG('C', 'B', 'P', '0')
#define CBPZ_TAG MKBETAG('C', 'B', 'P', 'Z')
#define CPL0_TAG MKBETAG('C', 'P', 'L', '0')
#define CPLZ_TAG MKBETAG('C', 'P', 'L', 'Z')
#define VPTZ_TAG MKBETAG('V', 'P', 'T', 'Z')
typedef struct VqaContext  VqaContext;
static av_cold int vqa_decode_init(AVCodecContext *avctx)
#define CHECK_COUNT() \
if (dest_index + count > dest_size)
#define CHECK_COPY(idx) \
if (idx < 0 || idx + count > dest_size)
static int decode_format80(VqaContext *s, int src_size,
unsigned char *dest, int dest_size, int check_size)
static int vqa_decode_chunk(VqaContext *s, AVFrame *frame)
static int vqa_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int vqa_decode_end(AVCodecContext *avctx)
AVCodec ff_vqa_decoder = ;
