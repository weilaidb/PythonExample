#define HNM4_CHUNK_ID_PL 19536
#define HNM4_CHUNK_ID_IZ 23113
#define HNM4_CHUNK_ID_IU 21833
#define HNM4_CHUNK_ID_SD 17491
typedef struct Hnm4VideoContext  Hnm4VideoContext;
static int getbit(GetByteContext *gb, uint32_t *bitbuf, int *bits)
static void unpack_intraframe(AVCodecContext *avctx, uint8_t *src,
uint32_t size)
static void postprocess_current_frame(AVCodecContext *avctx)
static void copy_processed_frame(AVCodecContext *avctx, AVFrame *frame)
static void decode_interframe_v4(AVCodecContext *avctx, uint8_t *src, uint32_t size)
static void decode_interframe_v4a(AVCodecContext *avctx, uint8_t *src,
uint32_t size)
static void hnm_update_palette(AVCodecContext *avctx, uint8_t *src,
uint32_t size)
static void hnm_flip_buffers(Hnm4VideoContext *hnm)
static int hnm_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
static av_cold int hnm_decode_init(AVCodecContext *avctx)
static av_cold int hnm_decode_end(AVCodecContext *avctx)
AVCodec ff_hnm4_video_decoder = ;
