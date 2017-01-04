#define AVUTIL_CAMELLIA_H
extern const int av_camellia_size;
struct AVCAMELLIA;
struct AVCAMELLIA *av_camellia_alloc(void);
int av_camellia_init(struct AVCAMELLIA *ctx, const uint8_t *key, int key_bits);
void av_camellia_crypt(struct AVCAMELLIA *ctx, uint8_t *dst, const uint8_t *src, int count, uint8_t* iv, int decrypt);
