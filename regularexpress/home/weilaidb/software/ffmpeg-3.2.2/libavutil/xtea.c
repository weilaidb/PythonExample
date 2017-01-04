AVXTEA *av_xtea_alloc(void)
void av_xtea_init(AVXTEA *ctx, const uint8_t key[16])
void av_xtea_le_init(AVXTEA *ctx, const uint8_t key[16])
static void xtea_crypt_ecb(AVXTEA *ctx, uint8_t *dst, const uint8_t *src,
int decrypt, uint8_t *iv)
static void xtea_le_crypt_ecb(AVXTEA *ctx, uint8_t *dst, const uint8_t *src,
int decrypt, uint8_t *iv)
static void xtea_crypt(AVXTEA *ctx, uint8_t *dst, const uint8_t *src, int count,
uint8_t *iv, int decrypt,
void (*crypt)(AVXTEA *, uint8_t *, const uint8_t *, int, uint8_t *))
void av_xtea_crypt(AVXTEA *ctx, uint8_t *dst, const uint8_t *src, int count,
uint8_t *iv, int decrypt)
void av_xtea_le_crypt(AVXTEA *ctx, uint8_t *dst, const uint8_t *src, int count,
uint8_t *iv, int decrypt)
