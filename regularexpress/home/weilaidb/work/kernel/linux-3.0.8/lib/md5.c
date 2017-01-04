#define F1(x, y, z)	(z ^ (x & (y ^ z)))
#define F2(x, y, z)	F1(z, x, y)
#define F3(x, y, z)	(x ^ y ^ z)
#define F4(x, y, z)	(y ^ (x | ~z))
#define MD5STEP(f, w, x, y, z, in, s) \
(w += f(x, y, z) + in, w = (w<<s | w>>(32-s)) + x)
void md5_transform(__u32 *hash, __u32 const *in)
EXPORT_SYMBOL(md5_transform);
