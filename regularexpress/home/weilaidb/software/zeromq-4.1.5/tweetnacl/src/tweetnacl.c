#if defined(HAVE_NACL_COMPABILTY)
#define FOR(i,n) for (i = 0;i < n;++i)
#define sv static void
typedef unsigned char u8;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef long long i64;
typedef i64 gf[16];
extern void randombytes(u8 *,u64);
static const u8
_0[16],
_9[32] = ;
static const gf
gf0,
gf1 = ,
_121665 = ,
D = ,
D2 = ,
X = ,
Y = ,
I = ;
static u32 L32(u32 x,int c)
static u32 ld32(const u8 *x)
static u64 dl64(const u8 *x)
sv st32(u8 *x,u32 u)
sv ts64(u8 *x,u64 u)
static int vn(const u8 *x,const u8 *y,int n)
int crypto_verify_16(const u8 *x,const u8 *y)
int crypto_verify_32(const u8 *x,const u8 *y)
sv core(u8 *out,const u8 *in,const u8 *k,const u8 *c,int h)
int crypto_core_salsa20(u8 *out,const u8 *in,const u8 *k,const u8 *c)
int crypto_core_hsalsa20(u8 *out,const u8 *in,const u8 *k,const u8 *c)
static const u8 sigma[16] = "expand 32-byte k";
int crypto_stream_salsa20_xor(u8 *c,const u8 *m,u64 b,const u8 *n,const u8 *k)
int crypto_stream_salsa20(u8 *c,u64 d,const u8 *n,const u8 *k)
int crypto_stream(u8 *c,u64 d,const u8 *n,const u8 *k)
int crypto_stream_xor(u8 *c,const u8 *m,u64 d,const u8 *n,const u8 *k)
sv add1305(u32 *h,const u32 *c)
static const u32 minusp[17] =  ;
int crypto_onetimeauth(u8 *out,const u8 *m,u64 n,const u8 *k)
int crypto_onetimeauth_verify(const u8 *h,const u8 *m,u64 n,const u8 *k)
int crypto_secretbox(u8 *c,const u8 *m,u64 d,const u8 *n,const u8 *k)
int crypto_secretbox_open(u8 *m,const u8 *c,u64 d,const u8 *n,const u8 *k)
sv set25519(gf r, const gf a)
sv car25519(gf o)
sv sel25519(gf p,gf q,int b)
sv pack25519(u8 *o,const gf n)
static int neq25519(const gf a, const gf b)
static u8 par25519(const gf a)
sv unpack25519(gf o, const u8 *n)
sv A(gf o,const gf a,const gf b)
sv Z(gf o,const gf a,const gf b)
sv M(gf o,const gf a,const gf b)
sv S(gf o,const gf a)
sv inv25519(gf o,const gf i)
sv pow2523(gf o,const gf i)
int crypto_scalarmult(u8 *q,const u8 *n,const u8 *p)
int crypto_scalarmult_base(u8 *q,const u8 *n)
int crypto_box_keypair(u8 *y,u8 *x)
int crypto_box_beforenm(u8 *k,const u8 *y,const u8 *x)
int crypto_box_afternm(u8 *c,const u8 *m,u64 d,const u8 *n,const u8 *k)
int crypto_box_open_afternm(u8 *m,const u8 *c,u64 d,const u8 *n,const u8 *k)
int crypto_box(u8 *c,const u8 *m,u64 d,const u8 *n,const u8 *y,const u8 *x)
int crypto_box_open(u8 *m,const u8 *c,u64 d,const u8 *n,const u8 *y,const u8 *x)
static u64 R(u64 x,int c)
static u64 Ch(u64 x,u64 y,u64 z)
static u64 Maj(u64 x,u64 y,u64 z)
static u64 Sigma0(u64 x)
static u64 Sigma1(u64 x)
static u64 sigma0(u64 x)
static u64 sigma1(u64 x)
static const u64 K[80] =
;
int crypto_hashblocks(u8 *x,const u8 *m,u64 n)
static const u8 iv[64] =  ;
int crypto_hash(u8 *out,const u8 *m,u64 n)
sv add(gf p[4],gf q[4])
sv cswap(gf p[4],gf q[4],u8 b)
sv pack(u8 *r,gf p[4])
sv scalarmult(gf p[4],gf q[4],const u8 *s)
sv scalarbase(gf p[4],const u8 *s)
int crypto_sign_keypair(u8 *pk, u8 *sk)
static const u64 L[32] = ;
sv modL(u8 *r,i64 x[64])
sv reduce(u8 *r)
int crypto_sign(u8 *sm,u64 *smlen,const u8 *m,u64 n,const u8 *sk)
static int unpackneg(gf r[4],const u8 p[32])
int crypto_sign_open(u8 *m,u64 *mlen,const u8 *sm,u64 n,const u8 *pk)
