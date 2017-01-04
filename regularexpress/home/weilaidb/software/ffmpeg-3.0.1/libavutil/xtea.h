#define AVUTIL_XTEA_H
typedef struct AVXTEA  AVXTEA;
AVXTEA *av_xtea_alloc(void);
void av_xtea_init(struct AVXTEA *ctx, const uint8_t key[16]);
void av_xtea_le_init(struct AVXTEA *ctx, const uint8_t key[16]);
void av_xtea_crypt(struct AVXTEA *ctx, uint8_t *dst, const uint8_t *src,
int count, uint8_t *iv, int decrypt);
void av_xtea_le_crypt(struct AVXTEA *ctx, uint8_t *dst, const uint8_t *src,
int count, uint8_t *iv, int decrypt);
