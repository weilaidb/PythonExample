static noinline size_t
_lzo1x_1_do_compress(const unsigned char *in, size_t in_len,
unsigned char *out, size_t *out_len, void *wrkmem)
int lzo1x_1_compress(const unsigned char *in, size_t in_len, unsigned char *out,
size_t *out_len, void *wrkmem)
EXPORT_SYMBOL_GPL(lzo1x_1_compress);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("LZO1X-1 Compressor");
