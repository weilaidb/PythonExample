#define MAX_THREADS 64
#define BUFFER_SIZE (2*MAX_THREADS)
typedef struct Task;
typedef struct ThreadContext;
static void * attribute_align_arg worker(void *v)
int ff_frame_thread_encoder_init(AVCodecContext *avctx, AVDictionary *options)
void ff_frame_thread_encoder_free(AVCodecContext *avctx)
int ff_thread_video_encode_frame(AVCodecContext *avctx, AVPacket *pkt, const AVFrame *frame, int *got_packet_ptr)
