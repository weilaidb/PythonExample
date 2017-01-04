typedef struct AVTEA  AVTEA;
struct AVTEA *av_tea_alloc(void)
const int av_tea_size = sizeof(AVTEA);
void av_tea_init(AVTEA *ctx, const uint8_t key[16], int rounds)
static void tea_crypt_ecb(AVTEA *ctx, uint8_t *dst, const uint8_t *src,
int decrypt, uint8_t *iv)
void av_tea_crypt(AVTEA *ctx, uint8_t *dst, const uint8_t *src, int count,
uint8_t *iv, int decrypt)
