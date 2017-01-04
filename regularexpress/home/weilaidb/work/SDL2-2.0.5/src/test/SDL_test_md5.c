static void SDLTest_Md5Transform(MD5UINT4 * buf, MD5UINT4 * in);
static unsigned char MD5PADDING[64] = ;
#define F(x, y, z) (((x) & (y)) | ((~x) & (z)))
#define G(x, y, z) (((x) & (z)) | ((y) & (~z)))
#define H(x, y, z) ((x) ^ (y) ^ (z))
#define I(x, y, z) ((y) ^ ((x) | (~z)))
#define ROTATE_LEFT(x, n) (((x) << (n)) | ((x) >> (32-(n))))
#define FF(a, b, c, d, x, s, ac) \
#define GG(a, b, c, d, x, s, ac) \
#define HH(a, b, c, d, x, s, ac) \
#define II(a, b, c, d, x, s, ac) \
void SDLTest_Md5Init(SDLTest_Md5Context * mdContext)
void SDLTest_Md5Update(SDLTest_Md5Context * mdContext, unsigned char *inBuf,
unsigned int inLen)
void SDLTest_Md5Final(SDLTest_Md5Context * mdContext)
static void SDLTest_Md5Transform(MD5UINT4 * buf, MD5UINT4 * in)
