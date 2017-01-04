#define T(a, b, c, d, e, f, g, h) 64-a,64-b,64-c,64-d,64-e,64-f,64-g,64-h
static const uint8_t IP_shuffle[] = ;
#undef T
#if CONFIG_SMALL || defined(GENTABLES)
#define T(a, b, c, d) 32-a,32-b,32-c,32-d
static const uint8_t P_shuffle[] = ;
#undef T
#define T(a, b, c, d, e, f, g) 64-a,64-b,64-c,64-d,64-e,64-f,64-g
static const uint8_t PC1_shuffle[] = ;
#undef T
#define T(a, b, c, d, e, f) 56-a,56-b,56-c,56-d,56-e,56-f
static const uint8_t PC2_shuffle[] = ;
#undef T
#if CONFIG_SMALL
static const uint8_t S_boxes[8][32] = ;
static const uint32_t S_boxes_P_shuffle[8][64] = ;
static uint64_t shuffle(uint64_t in, const uint8_t *shuffle, int shuffle_len)
static uint64_t shuffle_inv(uint64_t in, const uint8_t *shuffle, int shuffle_len)
static uint32_t f_func(uint32_t r, uint64_t k)
static uint64_t key_shift_left(uint64_t CDn)
static void gen_roundkeys(uint64_t K[16], uint64_t key)
static uint64_t des_encdec(uint64_t in, uint64_t K[16], int decrypt)
AVDES *av_des_alloc(void)
int av_des_init(AVDES *d, const uint8_t *key, int key_bits, av_unused int decrypt)
static void av_des_crypt_mac(AVDES *d, uint8_t *dst, const uint8_t *src, int count, uint8_t *iv, int decrypt, int mac)
void av_des_crypt(AVDES *d, uint8_t *dst, const uint8_t *src, int count, uint8_t *iv, int decrypt)
void av_des_mac(AVDES *d, uint8_t *dst, const uint8_t *src, int count)
static uint64_t rand64(void)
static const uint8_t test_key[] = ;
static const DECLARE_ALIGNED(8, uint8_t, plain)[] = ;
static const DECLARE_ALIGNED(8, uint8_t, crypt)[] = ;
static DECLARE_ALIGNED(8, uint8_t, tmp)[8];
static DECLARE_ALIGNED(8, uint8_t, large_buffer)[10002][8];
static const uint8_t cbc_key[] = ;
static int run_test(int cbc, int decrypt)
int main(void)
