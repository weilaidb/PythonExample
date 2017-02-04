static const uint32_t orig_p[AV_BF_ROUNDS + 2] = ;
static const uint32_t orig_s[4][256] = ;
F \
Xr ^=((( ctx->s[0][ Xl >> 24        ] \
+ ctx->s[1][(Xl >> 16) & 0xFF])\
^ ctx->s[2][(Xl >>  8) & 0xFF])\
+ ctx->s[3][ Xl        & 0xFF])\
^ P;
*av_blowfish_alloc
av_blowfish_init
av_blowfish_crypt_ecb
av_blowfish_crypt
