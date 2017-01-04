#define local static
local uLong adler32_combine_ OF((uLong adler1, uLong adler2, z_off64_t len2));
#define BASE 65521
#define NMAX 5552
#define DO1(buf,i)
#define DO2(buf,i)  DO1(buf,i); DO1(buf,i+1);
#define DO4(buf,i)  DO2(buf,i); DO2(buf,i+2);
#define DO8(buf,i)  DO4(buf,i); DO4(buf,i+4);
#define DO16(buf)   DO8(buf,0); DO8(buf,8);
#  define CHOP(a) \
do  while (0)
#  define MOD28(a) \
do  while (0)
#  define MOD(a) \
do  while (0)
#  define MOD63(a) \
do  while (0)
#  define MOD(a) a %= BASE
#  define MOD28(a) a %= BASE
#  define MOD63(a) a %= BASE
uLong ZEXPORT adler32(adler, buf, len)
uLong adler;
const Bytef *buf;
uInt len;
local uLong adler32_combine_(adler1, adler2, len2)
uLong adler1;
uLong adler2;
z_off64_t len2;
uLong ZEXPORT adler32_combine(adler1, adler2, len2)
uLong adler1;
uLong adler2;
z_off_t len2;
uLong ZEXPORT adler32_combine64(adler1, adler2, len2)
uLong adler1;
uLong adler2;
z_off64_t len2;
