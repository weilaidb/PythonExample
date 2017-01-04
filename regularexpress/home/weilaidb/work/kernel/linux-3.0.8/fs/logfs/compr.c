#define COMPR_LEVEL 3
static DEFINE_MUTEX(compr_mutex);
static struct z_stream_s stream;
int logfs_compress(void *in, void *out, size_t inlen, size_t outlen)
int logfs_uncompress(void *in, void *out, size_t inlen, size_t outlen)
int __init logfs_compr_init(void)
void logfs_compr_exit(void)
