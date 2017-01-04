typedef struct AVMD5  AVMD5;
const int av_md5_size = sizeof(AVMD5);
struct AVMD5 *av_md5_alloc(void)
static const uint8_t S[4][4] = ;
static const uint32_t T[64] = ;
#define CORE(i, a, b, c, d)                                             \
do  while (0)
static void body(uint32_t ABCD[4], uint32_t *src, int nblocks)
void av_md5_init(AVMD5 *ctx)
void av_md5_update(AVMD5 *ctx, const uint8_t *src, int len)
void av_md5_final(AVMD5 *ctx, uint8_t *dst)
void av_md5_sum(uint8_t *dst, const uint8_t *src, const int len)
