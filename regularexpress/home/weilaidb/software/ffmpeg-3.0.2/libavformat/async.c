#if HAVE_UNISTD_H
#define BUFFER_CAPACITY         (4 * 1024 * 1024)
#define READ_BACK_CAPACITY      (4 * 1024 * 1024)
#define SHORT_SEEK_THRESHOLD    (256 * 1024)
typedef struct RingBuffer
RingBuffer;
typedef struct Context  Context;
static int ring_init(RingBuffer *ring, unsigned int capacity, int read_back_capacity)
static void ring_destroy(RingBuffer *ring)
static void ring_reset(RingBuffer *ring)
static int ring_size(RingBuffer *ring)
static int ring_space(RingBuffer *ring)
static int ring_generic_read(RingBuffer *ring, void *dest, int buf_size, void (*func)(void*, void*, int))
static int ring_generic_write(RingBuffer *ring, void *src, int size, int (*func)(void*, void*, int))
static int ring_size_of_read_back(RingBuffer *ring)
static int ring_drain(RingBuffer *ring, int offset)
static int async_check_interrupt(void *arg)
static int wrapped_url_read(void *src, void *dst, int size)
static void *async_buffer_task(void *arg)
static int async_open(URLContext *h, const char *arg, int flags, AVDictionary **options)
static int async_close(URLContext *h)
static int async_read_internal(URLContext *h, void *dest, int size, int read_complete,
void (*func)(void*, void*, int))
static int async_read(URLContext *h, unsigned char *buf, int size)
static void fifo_do_not_copy_func(void* dest, void* src, int size)
static int64_t async_seek(URLContext *h, int64_t pos, int whence)
#define OFFSET(x) offsetof(Context, x)
#define D AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
#undef D
#undef OFFSET
static const AVClass async_context_class = ;
URLProtocol ff_async_protocol = ;
#define TEST_SEEK_POS    (1536)
#define TEST_STREAM_SIZE (2048)
typedef struct TestContext  TestContext;
static int async_test_open(URLContext *h, const char *arg, int flags, AVDictionary **options)
static int async_test_close(URLContext *h)
static int async_test_read(URLContext *h, unsigned char *buf, int size)
static int64_t async_test_seek(URLContext *h, int64_t pos, int whence)
#define OFFSET(x) offsetof(TestContext, x)
#define D AV_OPT_FLAG_DECODING_PARAM
static const AVOption async_test_options[] = ;
#undef D
#undef OFFSET
static const AVClass async_test_context_class = ;
URLProtocol ff_async_test_protocol = ;
int main(void)
