typedef struct AVMurMur3  AVMurMur3;
AVMurMur3 *av_murmur3_alloc(void)
void av_murmur3_init_seeded(AVMurMur3 *c, uint64_t seed)
void av_murmur3_init(AVMurMur3 *c)
static const uint64_t c1 = UINT64_C(0x87c37b91114253d5);
static const uint64_t c2 = UINT64_C(0x4cf5ad432745937f);
#define ROT(a, b) (((a) << (b)) | ((a) >> (64 - (b))))
static uint64_t inline get_k1(const uint8_t *src)
static uint64_t inline get_k2(const uint8_t *src)
static uint64_t inline update_h1(uint64_t k, uint64_t h1, uint64_t h2)
static uint64_t inline update_h2(uint64_t k, uint64_t h1, uint64_t h2)
void av_murmur3_update(AVMurMur3 *c, const uint8_t *src, int len)
static inline uint64_t fmix(uint64_t k)
void av_murmur3_final(AVMurMur3 *c, uint8_t dst[16])
