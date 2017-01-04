#define __LINUX__AIO_ABI_H
typedef unsigned long	aio_context_t;
enum ;
#define IOCB_FLAG_RESFD		(1 << 0)
struct io_event ;
#if defined(__LITTLE_ENDIAN)
#define PADDED(x,y)	x, y
#elif defined(__BIG_ENDIAN)
#define PADDED(x,y)	y, x
#error edit for your odd byteorder.
struct iocb ;
#undef IFBIG
#undef IFLITTLE
