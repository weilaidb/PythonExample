#define __LINUX_UIO_H
struct iovec
;
#define UIO_FASTIOV	8
#define UIO_MAXIOV	1024
struct kvec ;
static inline size_t iov_length(const struct iovec *iov, unsigned long nr_segs)
unsigned long iov_shorten(struct iovec *iov, unsigned long nr_segs, size_t to);
