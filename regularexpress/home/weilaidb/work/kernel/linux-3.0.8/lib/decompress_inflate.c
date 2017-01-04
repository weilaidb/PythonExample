#define _LINUX_KERNEL_H
#define GZIP_IOBUF_SIZE (16*1024)
static int INIT nofill(void *buffer, unsigned int len)
STATIC int INIT gunzip(unsigned char *buf, int len,
int(*fill)(void*, unsigned int),
int(*flush)(void*, unsigned int),
unsigned char *out_buf,
int *pos,
void(*error)(char *x))
#define decompress gunzip
