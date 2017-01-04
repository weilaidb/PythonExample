#define	SHA1HANDSOFF
#define	rol(value, bits) (((value) << (bits)) | ((value) >> (32 - (bits))))
#define	blk0(i) is_bigendian ? block->l[i] : \
(block->l[i] = (rol(block->l[i],24)&0xFF00FF00) \
|(rol(block->l[i],8)&0x00FF00FF))
#define	blk(i) (block->l[i&15] = rol(block->l[(i+13)&15]^block->l[(i+8)&15] \
^block->l[(i+2)&15]^block->l[i&15],1))
#define	R0(v,w,x,y,z,i) z+=((w&(x^y))^y)+blk0(i)+0x5A827999+rol(v,5); \
w=rol(w,30);
#define	R1(v,w,x,y,z,i) z+=((w&(x^y))^y)+blk(i)+0x5A827999+rol(v,5); \
w=rol(w,30);
#define	R2(v,w,x,y,z,i) z+=(w^x^y)+blk(i)+0x6ED9EBA1+rol(v,5);w=rol(w,30);
#define	R3(v,w,x,y,z,i) z+=(((w|x)&y)|(w&x))+blk(i)+0x8F1BBCDC+rol(v,5); \
w=rol(w,30);
#define	R4(v,w,x,y,z,i) z+=(w^x^y)+blk(i)+0xCA62C1D6+rol(v,5);w=rol(w,30);
static void __db_SHAPrintContext __P((SHA1_CTX *, char *));
static void
__db_SHAPrintContext(context, msg)
SHA1_CTX *context;
char *msg;
void
__db_SHA1Transform(state, buffer)
u_int32_t *state;
unsigned char *buffer;
void
__db_SHA1Init(context)
SHA1_CTX *context;
void
__db_SHA1Update(context, data, len)
SHA1_CTX *context;
unsigned char *data;
size_t len;
void
__db_SHA1Final(digest, context)
unsigned char *digest;
SHA1_CTX *context;
