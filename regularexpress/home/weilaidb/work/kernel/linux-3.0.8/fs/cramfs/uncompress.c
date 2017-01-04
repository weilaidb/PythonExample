static z_stream stream;
static int initialized;
int cramfs_uncompress_block(void *dst, int dstlen, void *src, int srclen)
int cramfs_uncompress_init(void)
void cramfs_uncompress_exit(void)
