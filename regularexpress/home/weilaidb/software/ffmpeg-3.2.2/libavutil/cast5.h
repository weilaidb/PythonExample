#define AVUTIL_CAST5_H
extern const int av_cast5_size;
struct AVCAST5;
struct AVCAST5 *av_cast5_alloc(void);
int av_cast5_init(struct AVCAST5 *ctx, const uint8_t *key, int key_bits);
void av_cast5_crypt(struct AVCAST5 *ctx, uint8_t *dst, const uint8_t *src, int count, int decrypt);
void av_cast5_crypt2(struct AVCAST5 *ctx, uint8_t *dst, const uint8_t *src, int count, uint8_t *iv, int decrypt);
