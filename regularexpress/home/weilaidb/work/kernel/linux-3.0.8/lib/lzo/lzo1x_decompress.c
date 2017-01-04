#define HAVE_IP(x, ip_end, ip) ((size_t)(ip_end - ip) < (x))
#define HAVE_OP(x, op_end, op) ((size_t)(op_end - op) < (x))
#define HAVE_LB(m_pos, out, op) (m_pos < out || m_pos >= op)
#define COPY4(dst, src)	\
put_unaligned(get_unaligned((const u32 *)(src)), (u32 *)(dst))
int lzo1x_decompress_safe(const unsigned char *in, size_t in_len,
unsigned char *out, size_t *out_len)
EXPORT_SYMBOL_GPL(lzo1x_decompress_safe);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("LZO1X Decompressor");
