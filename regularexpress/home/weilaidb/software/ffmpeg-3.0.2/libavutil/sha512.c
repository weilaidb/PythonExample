typedef struct AVSHA512  AVSHA512;
const int av_sha512_size = sizeof(AVSHA512);
struct AVSHA512 *av_sha512_alloc(void)
static const uint64_t K512[80] = ;
#define ror(value, bits) (((value) >> (bits)) | ((value) << (64 - (bits))))
#define Ch(x,y,z)   (((x) & ((y) ^ (z))) ^ (z))
#define Maj(z,y,x)  ((((x) | (y)) & (z)) | ((x) & (y)))
#define Sigma0_512(x)   (ror((x), 28) ^ ror((x), 34) ^ ror((x), 39))
#define Sigma1_512(x)   (ror((x), 14) ^ ror((x), 18) ^ ror((x), 41))
#define sigma0_512(x)   (ror((x),  1) ^ ror((x),  8) ^ ((x) >> 7))
#define sigma1_512(x)   (ror((x), 19) ^ ror((x), 61) ^ ((x) >> 6))
#define blk0(i) (block[i] = AV_RB64(buffer + 8 * (i)))
#define blk(i)  (block[i] = block[i - 16] + sigma0_512(block[i - 15]) + \
sigma1_512(block[i - 2]) + block[i - 7])
#define ROUND512(a,b,c,d,e,f,g,h)   \
T1 += (h) + Sigma1_512(e) + Ch((e), (f), (g)) + K512[i]; \
(d) += T1; \
(h) = T1 + Sigma0_512(a) + Maj((a), (b), (c)); \
i++
#define ROUND512_0_TO_15(a,b,c,d,e,f,g,h)   \
T1 = blk0(i); \
ROUND512(a,b,c,d,e,f,g,h)
#define ROUND512_16_TO_80(a,b,c,d,e,f,g,h)   \
T1 = blk(i); \
ROUND512(a,b,c,d,e,f,g,h)
static void sha512_transform(uint64_t *state, const uint8_t buffer[128])
av_cold int av_sha512_init(AVSHA512 *ctx, int bits)
void av_sha512_update(AVSHA512* ctx, const uint8_t* data, unsigned int len)
void av_sha512_final(AVSHA512* ctx, uint8_t *digest)
int main(void)
