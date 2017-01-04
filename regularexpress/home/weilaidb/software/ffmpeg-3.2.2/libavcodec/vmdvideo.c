#define VMD_HEADER_SIZE 0x330
#define PALETTE_COUNT 256
typedef struct VmdVideoContext  VmdVideoContext;
#define QUEUE_SIZE 0x1000
#define QUEUE_MASK 0x0FFF
static int lz_unpack(const unsigned char *src, int src_len,
unsigned char *dest, int dest_len)
static int rle_unpack(const unsigned char *src, unsigned char *dest,
int src_count, int src_size, int dest_len)
static int vmd_decode(VmdVideoContext *s, AVFrame *frame)
static av_cold int vmdvideo_decode_end(AVCodecContext *avctx)
static av_cold int vmdvideo_decode_init(AVCodecContext *avctx)
static int vmdvideo_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
AVCodec ff_vmdvideo_decoder = ;
