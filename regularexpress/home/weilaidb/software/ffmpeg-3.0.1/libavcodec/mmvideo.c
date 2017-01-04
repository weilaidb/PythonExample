#define MM_PREAMBLE_SIZE    6
#define MM_TYPE_INTER       0x5
#define MM_TYPE_INTRA       0x8
#define MM_TYPE_INTRA_HH    0xc
#define MM_TYPE_INTER_HH    0xd
#define MM_TYPE_INTRA_HHV   0xe
#define MM_TYPE_INTER_HHV   0xf
#define MM_TYPE_PALETTE     0x31
typedef struct MmContext  MmContext;
static av_cold int mm_decode_init(AVCodecContext *avctx)
static void mm_decode_pal(MmContext *s)
static int mm_decode_intra(MmContext * s, int half_horiz, int half_vert)
static int mm_decode_inter(MmContext * s, int half_horiz, int half_vert)
static int mm_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int mm_decode_end(AVCodecContext *avctx)
AVCodec ff_mmvideo_decoder = ;
