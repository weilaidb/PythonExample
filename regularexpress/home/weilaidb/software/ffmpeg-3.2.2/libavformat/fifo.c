#define FIFO_DEFAULT_QUEUE_SIZE              60
#define FIFO_DEFAULT_MAX_RECOVERY_ATTEMPTS   0
#define FIFO_DEFAULT_RECOVERY_WAIT_TIME_USEC 5000000
typedef struct FifoContext  FifoContext;
typedef struct FifoThreadContext  FifoThreadContext;
typedef enum FifoMessageType  FifoMessageType;
typedef struct FifoMessage  FifoMessage;
fifo_thread_write_header
fifo_thread_flush_output
fifo_thread_write_packet
fifo_thread_write_trailer
fifo_thread_dispatch_message
is_recoverable
free_message
fifo_thread_process_recovery_failure
fifo_thread_attempt_recovery
fifo_thread_recover
*fifo_consumer_thread
fifo_mux_init
fifo_init
fifo_write_header
fifo_write_packet
fifo_write_trailer
fifo_deinit
OFFSET offsetof(FifoContext, x)
static const AVOption options[] = ;
static const AVClass fifo_muxer_class = ;
AVOutputFormat ff_fifo_muxer = ;
