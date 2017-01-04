static unsigned long
getu32(const unsigned char *addr)
static void
putu32(unsigned long data, unsigned char *addr)
void
yasm_md5_init(yasm_md5_context *ctx)
void
yasm_md5_update(yasm_md5_context *ctx, unsigned char const *buf,
unsigned long len)
void
yasm_md5_final(unsigned char digest[16], yasm_md5_context *ctx)
#define F1(x, y, z) (z ^ (x & (y ^ z)))
#define F2(x, y, z) F1(z, x, y)
#define F3(x, y, z) (x ^ y ^ z)
#define F4(x, y, z) (y ^ (x | ~z))
#define MD5STEP(f, w, x, y, z, data, s) \
( w += f(x, y, z) + data, w &= 0xffffffff, w = w<<s | w>>(32-s), w += x )
void
yasm_md5_transform(unsigned long buf[4], const unsigned char inraw[64])
int
main (int argc, char **argv)
