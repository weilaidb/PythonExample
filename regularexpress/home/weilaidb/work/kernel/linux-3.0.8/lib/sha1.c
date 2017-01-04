#define f1(x,y,z)   (z ^ (x & (y ^ z)))
#define f2(x,y,z)   (x ^ y ^ z)
#define f3(x,y,z)   ((x & y) + (z & (x ^ y)))
#define K1  0x5A827999L
#define K2  0x6ED9EBA1L
#define K3  0x8F1BBCDCL
#define K4  0xCA62C1D6L
void sha_transform(__u32 *digest, const char *in, __u32 *W)
EXPORT_SYMBOL(sha_transform);
void sha_init(__u32 *buf)
