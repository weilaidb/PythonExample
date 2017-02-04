typedef struct AVSHA512  AVSHA512;
const int av_sha512_size = sizeof(AVSHA512);
*av_sha512_alloc
static const uint64_t K512[80] = ;
ror (((value) >> (bits)) | ((value) << (64 - (bits))))
Ch   (((x) & ((y) ^ (z))) ^ (z))
Maj  ((((x) | (y)) & (z)) | ((x) & (y)))
Sigma0_512   (ror((x), 28) ^ ror((x), 34) ^ ror((x), 39))
Sigma1_512   (ror((x), 14) ^ ror((x), 18) ^ ror((x), 41))
sigma0_512   (ror((x),  1) ^ ror((x),  8) ^ ((x) >> 7))
sigma1_512   (ror((x), 19) ^ ror((x), 61) ^ ((x) >> 6))
blk0 (block[i] = AV_RB64(buffer + 8 * (i)))
blk  (block[i] = block[i - 16] + sigma0_512(block[i - 15]) + \
sigma1_512(block[i - 2]) + block[i - 7])
ROUND512   \
T1 += (h) + Sigma1_512(e) + Ch((e), (f), (g)) + K512[i]; \
(d) += T1; \
(h) = T1 + Sigma0_512(a) + Maj((a), (b), (c)); \
i++
ROUND512_0_TO_15   \
T1 = blk0(i); \
ROUND512(a,b,c,d,e,f,g,h)
ROUND512_16_TO_80   \
T1 = blk(i); \
ROUND512(a,b,c,d,e,f,g,h)
sha512_transform
av_sha512_init
av_sha512_update
av_sha512_final
