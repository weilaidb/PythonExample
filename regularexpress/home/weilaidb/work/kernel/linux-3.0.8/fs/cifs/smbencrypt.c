#define false 0
#define true 1
#define CVAL(buf,pos) (((unsigned char *)(buf))[pos])
#define SSVALX(buf,pos,val) (CVAL(buf,pos)=(val)&0xFF,CVAL(buf,pos+1)=(val)>>8)
#define SSVAL(buf,pos,val) SSVALX((buf),(pos),((__u16)(val)))
static void
str_to_key(unsigned char *str, unsigned char *key)
static int
smbhash(unsigned char *out, const unsigned char *in, unsigned char *key)
static int
E_P16(unsigned char *p14, unsigned char *p16)
static int
E_P24(unsigned char *p21, const unsigned char *c8, unsigned char *p24)
int
mdfour(unsigned char *md4_hash, unsigned char *link_str, int link_len)
int
SMBencrypt(unsigned char *passwd, const unsigned char *c8, unsigned char *p24)
static int
_my_wcslen(__u16 *str)
static int
_my_mbstowcs(__u16 *dst, const unsigned char *src, int len)
int
E_md4hash(const unsigned char *passwd, unsigned char *p16)
int
SMBNTencrypt(unsigned char *passwd, unsigned char *c8, unsigned char *p24)
