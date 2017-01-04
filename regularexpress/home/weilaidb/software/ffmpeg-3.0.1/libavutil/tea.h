#define AVUTIL_TEA_H
extern const int av_tea_size;
struct AVTEA;
struct AVTEA *av_tea_alloc(void);
void av_tea_init(struct AVTEA *ctx, const uint8_t key[16], int rounds);
void av_tea_crypt(struct AVTEA *ctx, uint8_t *dst, const uint8_t *src,
int count, uint8_t *iv, int decrypt);
