#define SERPENT_MIN_KEY_SIZE		  0
#define SERPENT_MAX_KEY_SIZE		 32
#define SERPENT_EXPKEY_WORDS		132
#define SERPENT_BLOCK_SIZE		 16
#define PHI 0x9e3779b9UL
#define keyiter(a,b,c,d,i,j) \
b ^= d; b ^= c; b ^= a; b ^= PHI ^ i; b = rol32(b,11); k[j] = b;
#define loadkeys(x0,x1,x2,x3,i) \
x0=k[i]; x1=k[i+1]; x2=k[i+2]; x3=k[i+3];
#define storekeys(x0,x1,x2,x3,i) \
k[i]=x0; k[i+1]=x1; k[i+2]=x2; k[i+3]=x3;
#define K(x0,x1,x2,x3,i)				\
x3 ^= k[4*(i)+3];        x2 ^= k[4*(i)+2];	\
x1 ^= k[4*(i)+1];        x0 ^= k[4*(i)+0];
#define LK(x0,x1,x2,x3,x4,i)				\
x0=rol32(x0,13);\
x2=rol32(x2,3);	x1 ^= x0;	x4  = x0 << 3;	\
x3 ^= x2;	x1 ^= x2;			\
x1=rol32(x1,1);	x3 ^= x4;			\
x3=rol32(x3,7);	x4  = x1;			\
x0 ^= x1;	x4 <<= 7;	x2 ^= x3;	\
x0 ^= x3;	x2 ^= x4;	x3 ^= k[4*i+3];	\
x1 ^= k[4*i+1];	x0=rol32(x0,5);	x2=rol32(x2,22);\
x0 ^= k[4*i+0];	x2 ^= k[4*i+2];
#define KL(x0,x1,x2,x3,x4,i)				\
x0 ^= k[4*i+0];	x1 ^= k[4*i+1];	x2 ^= k[4*i+2];	\
x3 ^= k[4*i+3];	x0=ror32(x0,5);	x2=ror32(x2,22);\
x4 =  x1;	x2 ^= x3;	x0 ^= x3;	\
x4 <<= 7;	x0 ^= x1;	x1=ror32(x1,1);	\
x2 ^= x4;	x3=ror32(x3,7);	x4 = x0 << 3;	\
x1 ^= x0;	x3 ^= x4;	x0=ror32(x0,13);\
x1 ^= x2;	x3 ^= x2;	x2=ror32(x2,3);
#define S0(x0,x1,x2,x3,x4)				\
x4  = x3;	\
x3 |= x0;	x0 ^= x4;	x4 ^= x2;	\
x4 =~ x4;	x3 ^= x1;	x1 &= x0;	\
x1 ^= x4;	x2 ^= x0;	x0 ^= x3;	\
x4 |= x0;	x0 ^= x2;	x2 &= x1;	\
x3 ^= x2;	x1 =~ x1;	x2 ^= x4;	\
x1 ^= x2;
#define S1(x0,x1,x2,x3,x4)				\
x4  = x1;	\
x1 ^= x0;	x0 ^= x3;	x3 =~ x3;	\
x4 &= x1;	x0 |= x1;	x3 ^= x2;	\
x0 ^= x3;	x1 ^= x3;	x3 ^= x4;	\
x1 |= x4;	x4 ^= x2;	x2 &= x0;	\
x2 ^= x1;	x1 |= x0;	x0 =~ x0;	\
x0 ^= x2;	x4 ^= x1;
#define S2(x0,x1,x2,x3,x4)				\
x3 =~ x3;	\
x1 ^= x0;	x4  = x0;	x0 &= x2;	\
x0 ^= x3;	x3 |= x4;	x2 ^= x1;	\
x3 ^= x1;	x1 &= x0;	x0 ^= x2;	\
x2 &= x3;	x3 |= x1;	x0 =~ x0;	\
x3 ^= x0;	x4 ^= x0;	x0 ^= x2;	\
x1 |= x2;
#define S3(x0,x1,x2,x3,x4)				\
x4  = x1;	\
x1 ^= x3;	x3 |= x0;	x4 &= x0;	\
x0 ^= x2;	x2 ^= x1;	x1 &= x3;	\
x2 ^= x3;	x0 |= x4;	x4 ^= x3;	\
x1 ^= x0;	x0 &= x3;	x3 &= x4;	\
x3 ^= x2;	x4 |= x1;	x2 &= x1;	\
x4 ^= x3;	x0 ^= x3;	x3 ^= x2;
#define S4(x0,x1,x2,x3,x4)				\
x4  = x3;	\
x3 &= x0;	x0 ^= x4;			\
x3 ^= x2;	x2 |= x4;	x0 ^= x1;	\
x4 ^= x3;	x2 |= x0;			\
x2 ^= x1;	x1 &= x0;			\
x1 ^= x4;	x4 &= x2;	x2 ^= x3;	\
x4 ^= x0;	x3 |= x1;	x1 =~ x1;	\
x3 ^= x0;
#define S5(x0,x1,x2,x3,x4)				\
x4  = x1;	x1 |= x0;			\
x2 ^= x1;	x3 =~ x3;	x4 ^= x0;	\
x0 ^= x2;	x1 &= x4;	x4 |= x3;	\
x4 ^= x0;	x0 &= x3;	x1 ^= x3;	\
x3 ^= x2;	x0 ^= x1;	x2 &= x4;	\
x1 ^= x2;	x2 &= x0;			\
x3 ^= x2;
#define S6(x0,x1,x2,x3,x4)				\
x4  = x1;	\
x3 ^= x0;	x1 ^= x2;	x2 ^= x0;	\
x0 &= x3;	x1 |= x3;	x4 =~ x4;	\
x0 ^= x1;	x1 ^= x2;			\
x3 ^= x4;	x4 ^= x0;	x2 &= x0;	\
x4 ^= x1;	x2 ^= x3;	x3 &= x1;	\
x3 ^= x0;	x1 ^= x2;
#define S7(x0,x1,x2,x3,x4)				\
x1 =~ x1;	\
x4  = x1;	x0 =~ x0;	x1 &= x2;	\
x1 ^= x3;	x3 |= x4;	x4 ^= x2;	\
x2 ^= x3;	x3 ^= x0;	x0 |= x1;	\
x2 &= x0;	x0 ^= x4;	x4 ^= x3;	\
x3 &= x0;	x4 ^= x1;			\
x2 ^= x4;	x3 ^= x1;	x4 |= x0;	\
x4 ^= x1;
#define SI0(x0,x1,x2,x3,x4)				\
x4  = x3;	x1 ^= x0;	\
x3 |= x1;	x4 ^= x1;	x0 =~ x0;	\
x2 ^= x3;	x3 ^= x0;	x0 &= x1;	\
x0 ^= x2;	x2 &= x3;	x3 ^= x4;	\
x2 ^= x3;	x1 ^= x3;	x3 &= x0;	\
x1 ^= x0;	x0 ^= x2;	x4 ^= x3;
#define SI1(x0,x1,x2,x3,x4)				\
x1 ^= x3;	x4  = x0;			\
x0 ^= x2;	x2 =~ x2;	x4 |= x1;	\
x4 ^= x3;	x3 &= x1;	x1 ^= x2;	\
x2 &= x4;	x4 ^= x1;	x1 |= x3;	\
x3 ^= x0;	x2 ^= x0;	x0 |= x4;	\
x2 ^= x4;	x1 ^= x0;			\
x4 ^= x1;
#define SI2(x0,x1,x2,x3,x4)				\
x2 ^= x1;	x4  = x3;	x3 =~ x3;	\
x3 |= x2;	x2 ^= x4;	x4 ^= x0;	\
x3 ^= x1;	x1 |= x2;	x2 ^= x0;	\
x1 ^= x4;	x4 |= x3;	x2 ^= x3;	\
x4 ^= x2;	x2 &= x1;			\
x2 ^= x3;	x3 ^= x4;	x4 ^= x0;
#define SI3(x0,x1,x2,x3,x4)				\
x2 ^= x1;	\
x4  = x1;	x1 &= x2;			\
x1 ^= x0;	x0 |= x4;	x4 ^= x3;	\
x0 ^= x3;	x3 |= x1;	x1 ^= x2;	\
x1 ^= x3;	x0 ^= x2;	x2 ^= x3;	\
x3 &= x1;	x1 ^= x0;	x0 &= x2;	\
x4 ^= x3;	x3 ^= x0;	x0 ^= x1;
#define SI4(x0,x1,x2,x3,x4)				\
x2 ^= x3;	x4  = x0;	x0 &= x1;	\
x0 ^= x2;	x2 |= x3;	x4 =~ x4;	\
x1 ^= x0;	x0 ^= x2;	x2 &= x4;	\
x2 ^= x0;	x0 |= x4;			\
x0 ^= x3;	x3 &= x2;			\
x4 ^= x3;	x3 ^= x1;	x1 &= x0;	\
x4 ^= x1;	x0 ^= x3;
#define SI5(x0,x1,x2,x3,x4)				\
x4  = x1;	x1 |= x2;	\
x2 ^= x4;	x1 ^= x3;	x3 &= x4;	\
x2 ^= x3;	x3 |= x0;	x0 =~ x0;	\
x3 ^= x2;	x2 |= x0;	x4 ^= x1;	\
x2 ^= x4;	x4 &= x0;	x0 ^= x1;	\
x1 ^= x3;	x0 &= x2;	x2 ^= x3;	\
x0 ^= x2;	x2 ^= x4;	x4 ^= x3;
#define SI6(x0,x1,x2,x3,x4)				\
x0 ^= x2;			\
x4  = x0;	x0 &= x3;	x2 ^= x3;	\
x0 ^= x2;	x3 ^= x1;	x2 |= x4;	\
x2 ^= x3;	x3 &= x0;	x0 =~ x0;	\
x3 ^= x1;	x1 &= x2;	x4 ^= x0;	\
x3 ^= x4;	x4 ^= x2;	x0 ^= x1;	\
x2 ^= x0;
#define SI7(x0,x1,x2,x3,x4)				\
x4  = x3;	x3 &= x0;	x0 ^= x2;	\
x2 |= x4;	x4 ^= x1;	x0 =~ x0;	\
x1 |= x3;	x4 ^= x0;	x0 &= x2;	\
x0 ^= x1;	x1 &= x2;	x3 ^= x2;	\
x4 ^= x3;	x2 &= x3;	x3 |= x0;	\
x1 ^= x4;	x3 ^= x4;	x4 &= x0;	\
x4 ^= x2;
struct serpent_ctx ;
static int serpent_setkey(struct crypto_tfm *tfm, const u8 *key,
unsigned int keylen)
static void serpent_encrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static void serpent_decrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static struct crypto_alg serpent_alg = ;
static int tnepres_setkey(struct crypto_tfm *tfm, const u8 *key,
unsigned int keylen)
static void tnepres_encrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static void tnepres_decrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static struct crypto_alg tnepres_alg = ;
static int __init serpent_mod_init(void)
static void __exit serpent_mod_fini(void)
module_init(serpent_mod_init);
module_exit(serpent_mod_fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Serpent and tnepres (kerneli compatible serpent reversed) Cipher Algorithm");
MODULE_AUTHOR("Dag Arne Osvik <osvik@ii.uib.no>");
MODULE_ALIAS("tnepres");
