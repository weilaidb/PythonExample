typedef enum CinVideoBitmapIndex  CinVideoBitmapIndex;
typedef struct CinVideoContext  CinVideoContext;
static av_cold void destroy_buffers(CinVideoContext *cin)
static av_cold int allocate_buffers(CinVideoContext *cin)
static av_cold int cinvideo_decode_init(AVCodecContext *avctx)
static void cin_apply_delta_data(const unsigned char *src, unsigned char *dst,
int size)
static int cin_decode_huffman(const unsigned char *src, int src_size,
unsigned char *dst, int dst_size)
static int cin_decode_lzss(const unsigned char *src, int src_size,
unsigned char *dst, int dst_size)
static int cin_decode_rle(const unsigned char *src, int src_size,
unsigned char *dst, int dst_size)
static int cinvideo_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int cinvideo_decode_end(AVCodecContext *avctx)
AVCodec ff_dsicinvideo_decoder = ;
