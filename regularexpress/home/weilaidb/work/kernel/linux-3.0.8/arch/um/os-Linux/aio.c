struct aio_thread_req ;
#if defined(HAVE_AIO_ABI)
#if !defined(HAVE_AIO_LIBC)
static long io_setup(int n, aio_context_t *ctxp)
static long io_submit(aio_context_t ctx, long nr, struct iocb **iocbpp)
static long io_getevents(aio_context_t ctx_id, long min_nr, long nr,
struct io_event *events, struct timespec *timeout)
static int do_aio(aio_context_t ctx, enum aio_type type, int fd, char *buf,
int len, unsigned long long offset, struct aio_context *aio)
static aio_context_t ctx = 0;
static int aio_thread(void *arg)
static int do_not_aio(struct aio_thread_req *req)
static int aio_req_fd_r = -1;
static int aio_req_fd_w = -1;
static int aio_pid = -1;
static unsigned long aio_stack;
static int not_aio_thread(void *arg)
static int init_aio_24(void)
#define DEFAULT_24_AIO 0
static int init_aio_26(void)
static int submit_aio_26(enum aio_type type, int io_fd, char *buf, int len,
unsigned long long offset, struct aio_context *aio)
#define DEFAULT_24_AIO 1
static int init_aio_26(void)
static int submit_aio_26(enum aio_type type, int io_fd, char *buf, int len,
unsigned long long offset, struct aio_context *aio)
static int aio_24 = DEFAULT_24_AIO;
static int __init set_aio_24(char *name, int *add)
__uml_setup("aio=2.4", set_aio_24,
"aio=2.4\n"
"    This is used to force UML to use 2.4-style AIO even when 2.6 AIO is\n"
"    available.  2.4 AIO is a single thread that handles one request at a\n"
"    time, synchronously.  2.6 AIO is a thread which uses the 2.6 AIO \n"
"    interface to handle an arbitrary number of pending requests.  2.6 AIO \n"
"    is not available in tt mode, on 2.4 hosts, or when UML is built with\n"
"    /usr/include/linux/aio_abi.h not available.  Many distributions don't\n"
"    include aio_abi.h, so you will need to copy it from a kernel tree to\n"
"    your /usr/include/linux in order to build an AIO-capable UML\n\n"
);
static int init_aio(void)
__initcall(init_aio);
static void exit_aio(void)
__uml_exitcall(exit_aio);
static int submit_aio_24(enum aio_type type, int io_fd, char *buf, int len,
unsigned long long offset, struct aio_context *aio)
int submit_aio(enum aio_type type, int io_fd, char *buf, int len,
unsigned long long offset, int reply_fd,
struct aio_context *aio)
