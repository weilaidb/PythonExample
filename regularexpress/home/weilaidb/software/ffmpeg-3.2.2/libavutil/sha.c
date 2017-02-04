typedef struct AVSHA  AVSHA;
const int av_sha_size = sizeof(AVSHA);
*av_sha_alloc
rol (((value) << (bits)) | ((value) >> (32 - (bits))))
blk0 (block[i] = AV_RB32(buffer + 4 * (i)))
blk  (block[i] = rol(block[(i)-3] ^ block[(i)-8] ^ block[(i)-14] ^ block[(i)-16], 1))
R0 z += (((w)&((x)^(y)))^(y))       + blk0(i) + 0x5A827999 + rol(v, 5); w = rol(w, 30);
R1 z += (((w)&((x)^(y)))^(y))       + blk (i) + 0x5A827999 + rol(v, 5); w = rol(w, 30);
R2 z += ( (w)^(x)       ^(y))       + blk (i) + 0x6ED9EBA1 + rol(v, 5); w = rol(w, 30);
R3 z += ((((w)|(x))&(y))|((w)&(x))) + blk (i) + 0x8F1BBCDC + rol(v, 5); w = rol(w, 30);
R4 z += ( (w)^(x)       ^(y))       + blk (i) + 0xCA62C1D6 + rol(v, 5); w = rol(w, 30);
sha1_transform
static const uint32_t K256[64] = ;
Ch   (((x) & ((y) ^ (z))) ^ (z))
Maj  ((((x) | (y)) & (z)) | ((x) & (y)))
Sigma0_256   (rol((x), 30) ^ rol((x), 19) ^ rol((x), 10))
Sigma1_256   (rol((x), 26) ^ rol((x), 21) ^ rol((x),  7))
sigma0_256   (rol((x), 25) ^ rol((x), 14) ^ ((x) >> 3))
sigma1_256   (rol((x), 15) ^ rol((x), 13) ^ ((x) >> 10))
#undef blk
blk  (block[i] = block[i - 16] + sigma0_256(block[i - 15]) + \
sigma1_256(block[i - 2]) + block[i - 7])
ROUND256   \
T1 += (h) + Sigma1_256(e) + Ch((e), (f), (g)) + K256[i]; \
(d) += T1; \
(h) = T1 + Sigma0_256(a) + Maj((a), (b), (c)); \
i++
ROUND256_0_TO_15   \
T1 = blk0(i); \
ROUND256(a,b,c,d,e,f,g,h)
ROUND256_16_TO_63   \
T1 = blk(i); \
ROUND256(a,b,c,d,e,f,g,h)
sha256_transform
av_sha_init
av_sha_update
av_sha_final
