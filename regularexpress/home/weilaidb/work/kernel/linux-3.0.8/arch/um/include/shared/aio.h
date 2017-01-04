#define AIO_H__
enum aio_type ;
struct aio_thread_reply ;
struct aio_context ;
#define INIT_AIO_CONTEXT
extern int submit_aio(enum aio_type type, int fd, char *buf, int len,
unsigned long long offset, int reply_fd,
struct aio_context *aio);
