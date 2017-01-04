typedef struct AVSHA  AVSHA;
const int av_sha_size = sizeof(AVSHA);
struct AVSHA *av_sha_alloc(void)
#define rol(value, bits) (((value) << (bits)) | ((value) >> (32 - (bits))))
#define blk0(i) (block[i] = AV_RB32(buffer + 4 * (i)))
#define blk(i)  (block[i] = rol(block[(i)-3] ^ block[(i)-8] ^ block[(i)-14] ^ block[(i)-16], 1))
#define R0(v,w,x,y,z,i) z += (((w)&((x)^(y)))^(y))       + blk0(i) + 0x5A827999 + rol(v, 5); w = rol(w, 30);
#define R1(v,w,x,y,z,i) z += (((w)&((x)^(y)))^(y))       + blk (i) + 0x5A827999 + rol(v, 5); w = rol(w, 30);
#define R2(v,w,x,y,z,i) z += ( (w)^(x)       ^(y))       + blk (i) + 0x6ED9EBA1 + rol(v, 5); w = rol(w, 30);
#define R3(v,w,x,y,z,i) z += ((((w)|(x))&(y))|((w)&(x))) + blk (i) + 0x8F1BBCDC + rol(v, 5); w = rol(w, 30);
#define R4(v,w,x,y,z,i) z += ( (w)^(x)       ^(y))       + blk (i) + 0xCA62C1D6 + rol(v, 5); w = rol(w, 30);
static void sha1_transform(uint32_t state[5], const uint8_t buffer[64])
static const uint32_t K256[64] = ;
#define Ch(x,y,z)   (((x) & ((y) ^ (z))) ^ (z))
#define Maj(z,y,x)  ((((x) | (y)) & (z)) | ((x) & (y)))
#define Sigma0_256(x)   (rol((x), 30) ^ rol((x), 19) ^ rol((x), 10))
#define Sigma1_256(x)   (rol((x), 26) ^ rol((x), 21) ^ rol((x),  7))
#define sigma0_256(x)   (rol((x), 25) ^ rol((x), 14) ^ ((x) >> 3))
#define sigma1_256(x)   (rol((x), 15) ^ rol((x), 13) ^ ((x) >> 10))
#undef blk
#define blk(i)  (block[i] = block[i - 16] + sigma0_256(block[i - 15]) + \
sigma1_256(block[i - 2]) + block[i - 7])
#define ROUND256(a,b,c,d,e,f,g,h)   \
T1 += (h) + Sigma1_256(e) + Ch((e), (f), (g)) + K256[i]; \
(d) += T1; \
(h) = T1 + Sigma0_256(a) + Maj((a), (b), (c)); \
i++
#define ROUND256_0_TO_15(a,b,c,d,e,f,g,h)   \
T1 = blk0(i); \
ROUND256(a,b,c,d,e,f,g,h)
#define ROUND256_16_TO_63(a,b,c,d,e,f,g,h)   \
T1 = blk(i); \
ROUND256(a,b,c,d,e,f,g,h)
static void sha256_transform(uint32_t *state, const uint8_t buffer[64])
av_cold int av_sha_init(AVSHA *ctx, int bits)
void av_sha_update(AVSHA* ctx, const uint8_t* data, unsigned int len)
void av_sha_final(AVSHA* ctx, uint8_t *digest)
int main(void)
