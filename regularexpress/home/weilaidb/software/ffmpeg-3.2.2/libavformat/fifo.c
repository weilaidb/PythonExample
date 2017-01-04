#define FIFO_DEFAULT_QUEUE_SIZE              60
#define FIFO_DEFAULT_MAX_RECOVERY_ATTEMPTS   0
#define FIFO_DEFAULT_RECOVERY_WAIT_TIME_USEC 5000000
typedef struct FifoContext  FifoContext;
typedef struct FifoThreadContext  FifoThreadContext;
typedef enum FifoMessageType  FifoMessageType;
typedef struct FifoMessage  FifoMessage;
static int fifo_thread_write_header(FifoThreadContext *ctx)
static int fifo_thread_flush_output(FifoThreadContext *ctx)
static int fifo_thread_write_packet(FifoThreadContext *ctx, AVPacket *pkt)
static int fifo_thread_write_trailer(FifoThreadContext *ctx)
static int fifo_thread_dispatch_message(FifoThreadContext *ctx, FifoMessage *msg)
static int is_recoverable(const FifoContext *fifo, int err_no)
static void free_message(void *msg)
static int fifo_thread_process_recovery_failure(FifoThreadContext *ctx, AVPacket *pkt,
int err_no)
static int fifo_thread_attempt_recovery(FifoThreadContext *ctx, FifoMessage *msg, int err_no)
static int fifo_thread_recover(FifoThreadContext *ctx, FifoMessage *msg, int err_no)
static void *fifo_consumer_thread(void *data)
static int fifo_mux_init(AVFormatContext *avf, AVOutputFormat *oformat)
static int fifo_init(AVFormatContext *avf)
static int fifo_write_header(AVFormatContext *avf)
static int fifo_write_packet(AVFormatContext *avf, AVPacket *pkt)
static int fifo_write_trailer(AVFormatContext *avf)
static void fifo_deinit(AVFormatContext *avf)
#define OFFSET(x) offsetof(FifoContext, x)
static const AVOption options[] = ;
static const AVClass fifo_muxer_class = ;
AVOutputFormat ff_fifo_muxer = ;
