typedef struct AVRIPEMD  AVRIPEMD;
const int av_ripemd_size = sizeof(AVRIPEMD);
struct AVRIPEMD *av_ripemd_alloc(void)
static const uint32_t KA[4] = ;
static const uint32_t KB[4] = ;
static const int ROTA[80] = ;
static const int ROTB[80] = ;
static const int WA[80] = ;
static const int WB[80] = ;
#define rol(value, bits) (((value) << (bits)) | ((value) >> (32 - (bits))))
#define ROUND128_0_TO_15(a,b,c,d,e,f,g,h)                               \
a = rol(a + ((  b ^ c  ^ d)      + block[WA[n]]),         ROTA[n]); \
e = rol(e + ((((f ^ g) & h) ^ g) + block[WB[n]] + KB[0]), ROTB[n]); \
n++
#define ROUND128_16_TO_31(a,b,c,d,e,f,g,h)                              \
a = rol(a + ((((c ^ d) & b) ^ d) + block[WA[n]] + KA[0]), ROTA[n]); \
e = rol(e + (((~g | f) ^ h)      + block[WB[n]] + KB[1]), ROTB[n]); \
n++
#define ROUND128_32_TO_47(a,b,c,d,e,f,g,h)                              \
a = rol(a + (((~c | b) ^ d)      + block[WA[n]] + KA[1]), ROTA[n]); \
e = rol(e + ((((g ^ h) & f) ^ h) + block[WB[n]] + KB[2]), ROTB[n]); \
n++
#define ROUND128_48_TO_63(a,b,c,d,e,f,g,h)                              \
a = rol(a + ((((b ^ c) & d) ^ c) + block[WA[n]] + KA[2]), ROTA[n]); \
e = rol(e + ((  f ^ g  ^ h)      + block[WB[n]]),         ROTB[n]); \
n++
#define R128_0                          \
ROUND128_0_TO_15(a,b,c,d,e,f,g,h);  \
ROUND128_0_TO_15(d,a,b,c,h,e,f,g);  \
ROUND128_0_TO_15(c,d,a,b,g,h,e,f);  \
ROUND128_0_TO_15(b,c,d,a,f,g,h,e)
#define R128_16                         \
ROUND128_16_TO_31(a,b,c,d,e,f,g,h); \
ROUND128_16_TO_31(d,a,b,c,h,e,f,g); \
ROUND128_16_TO_31(c,d,a,b,g,h,e,f); \
ROUND128_16_TO_31(b,c,d,a,f,g,h,e)
#define R128_32                         \
ROUND128_32_TO_47(a,b,c,d,e,f,g,h); \
ROUND128_32_TO_47(d,a,b,c,h,e,f,g); \
ROUND128_32_TO_47(c,d,a,b,g,h,e,f); \
ROUND128_32_TO_47(b,c,d,a,f,g,h,e)
#define R128_48                         \
ROUND128_48_TO_63(a,b,c,d,e,f,g,h); \
ROUND128_48_TO_63(d,a,b,c,h,e,f,g); \
ROUND128_48_TO_63(c,d,a,b,g,h,e,f); \
ROUND128_48_TO_63(b,c,d,a,f,g,h,e)
static void ripemd128_transform(uint32_t *state, const uint8_t buffer[64])
static void ripemd256_transform(uint32_t *state, const uint8_t buffer[64])
#define ROTATE(x,y) \
x = rol(x, 10); \
y = rol(y, 10); \
n++
#define ROUND160_0_TO_15(a,b,c,d,e,f,g,h,i,j)                               \
a = rol(a + ((  b ^ c  ^ d)      + block[WA[n]]),         ROTA[n]) + e; \
f = rol(f + (((~i | h) ^ g)      + block[WB[n]] + KB[0]), ROTB[n]) + j; \
ROTATE(c,h)
#define ROUND160_16_TO_31(a,b,c,d,e,f,g,h,i,j)                              \
a = rol(a + ((((c ^ d) & b) ^ d) + block[WA[n]] + KA[0]), ROTA[n]) + e; \
f = rol(f + ((((g ^ h) & i) ^ h) + block[WB[n]] + KB[1]), ROTB[n]) + j; \
ROTATE(c,h)
#define ROUND160_32_TO_47(a,b,c,d,e,f,g,h,i,j)                              \
a = rol(a + (((~c | b) ^ d)      + block[WA[n]] + KA[1]), ROTA[n]) + e; \
f = rol(f + (((~h | g) ^ i)      + block[WB[n]] + KB[2]), ROTB[n]) + j; \
ROTATE(c,h)
#define ROUND160_48_TO_63(a,b,c,d,e,f,g,h,i,j)                              \
a = rol(a + ((((b ^ c) & d) ^ c) + block[WA[n]] + KA[2]), ROTA[n]) + e; \
f = rol(f + ((((h ^ i) & g) ^ i) + block[WB[n]] + KB[3]), ROTB[n]) + j; \
ROTATE(c,h)
#define ROUND160_64_TO_79(a,b,c,d,e,f,g,h,i,j)                              \
a = rol(a + (((~d | c) ^ b)      + block[WA[n]] + KA[3]), ROTA[n]) + e; \
f = rol(f + ((  g ^ h  ^ i)      + block[WB[n]]),         ROTB[n]) + j; \
ROTATE(c,h)
#define R160_0                              \
ROUND160_0_TO_15(a,b,c,d,e,f,g,h,i,j);  \
ROUND160_0_TO_15(e,a,b,c,d,j,f,g,h,i);  \
ROUND160_0_TO_15(d,e,a,b,c,i,j,f,g,h);  \
ROUND160_0_TO_15(c,d,e,a,b,h,i,j,f,g);  \
ROUND160_0_TO_15(b,c,d,e,a,g,h,i,j,f)
#define R160_16                             \
ROUND160_16_TO_31(e,a,b,c,d,j,f,g,h,i); \
ROUND160_16_TO_31(d,e,a,b,c,i,j,f,g,h); \
ROUND160_16_TO_31(c,d,e,a,b,h,i,j,f,g); \
ROUND160_16_TO_31(b,c,d,e,a,g,h,i,j,f); \
ROUND160_16_TO_31(a,b,c,d,e,f,g,h,i,j)
#define R160_32                             \
ROUND160_32_TO_47(d,e,a,b,c,i,j,f,g,h); \
ROUND160_32_TO_47(c,d,e,a,b,h,i,j,f,g); \
ROUND160_32_TO_47(b,c,d,e,a,g,h,i,j,f); \
ROUND160_32_TO_47(a,b,c,d,e,f,g,h,i,j); \
ROUND160_32_TO_47(e,a,b,c,d,j,f,g,h,i)
#define R160_48                             \
ROUND160_48_TO_63(c,d,e,a,b,h,i,j,f,g); \
ROUND160_48_TO_63(b,c,d,e,a,g,h,i,j,f); \
ROUND160_48_TO_63(a,b,c,d,e,f,g,h,i,j); \
ROUND160_48_TO_63(e,a,b,c,d,j,f,g,h,i); \
ROUND160_48_TO_63(d,e,a,b,c,i,j,f,g,h)
#define R160_64                             \
ROUND160_64_TO_79(b,c,d,e,a,g,h,i,j,f); \
ROUND160_64_TO_79(a,b,c,d,e,f,g,h,i,j); \
ROUND160_64_TO_79(e,a,b,c,d,j,f,g,h,i); \
ROUND160_64_TO_79(d,e,a,b,c,i,j,f,g,h); \
ROUND160_64_TO_79(c,d,e,a,b,h,i,j,f,g)
static void ripemd160_transform(uint32_t *state, const uint8_t buffer[64])
static void ripemd320_transform(uint32_t *state, const uint8_t buffer[64])
av_cold int av_ripemd_init(AVRIPEMD *ctx, int bits)
void av_ripemd_update(AVRIPEMD* ctx, const uint8_t* data, unsigned int len)
void av_ripemd_final(AVRIPEMD* ctx, uint8_t *digest)
