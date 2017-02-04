#if HAVE_UNISTD_H
#define BUFFER_CAPACITY         (4 * 1024 * 1024)
#define READ_BACK_CAPACITY      (4 * 1024 * 1024)
#define SHORT_SEEK_THRESHOLD    (256 * 1024)
typedef struct RingBuffer
RingBuffer;
typedef struct Context  Context;
ring_init
ring_destroy
ring_reset
ring_size
ring_space
ring_generic_read(void*, void*, int))
ring_generic_write(void*, void*, int))
ring_size_of_read_back
ring_drain
async_check_interrupt
wrapped_url_read
*async_buffer_task
async_open
async_close
async_read_internal(void*, void*, int))
async_read
fifo_do_not_copy_func
async_seek
OFFSET offsetof(Context, x)
#define D AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
#undef D
#undef OFFSET
static const AVClass async_context_class = ;
const URLProtocol ff_async_protocol = ;
