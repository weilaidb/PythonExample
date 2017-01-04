#define AVUTIL_BLOWFISH_H
#define AV_BF_ROUNDS 16
typedef struct AVBlowfish  AVBlowfish;
AVBlowfish *av_blowfish_alloc(void);
void av_blowfish_init(struct AVBlowfish *ctx, const uint8_t *key, int key_len);
void av_blowfish_crypt_ecb(struct AVBlowfish *ctx, uint32_t *xl, uint32_t *xr,
int decrypt);
void av_blowfish_crypt(struct AVBlowfish *ctx, uint8_t *dst, const uint8_t *src,
int count, uint8_t *iv, int decrypt);
