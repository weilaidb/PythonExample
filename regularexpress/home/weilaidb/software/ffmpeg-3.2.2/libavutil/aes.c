const int av_aes_size= sizeof(AVAES);
struct AVAES *av_aes_alloc(void)
static const uint8_t rcon[10] = ;
static uint8_t     sbox[256];
static uint8_t inv_sbox[256];
#if CONFIG_SMALL
static uint32_t enc_multbl[1][256];
static uint32_t dec_multbl[1][256];
static uint32_t enc_multbl[4][256];
static uint32_t dec_multbl[4][256];
#if HAVE_BIGENDIAN
#   define ROT(x, s) (((x) >> (s)) | ((x) << (32-(s))))
#   define ROT(x, s) (((x) << (s)) | ((x) >> (32-(s))))
static inline void addkey(av_aes_block *dst, const av_aes_block *src,
const av_aes_block *round_key)
static inline void addkey_s(av_aes_block *dst, const uint8_t *src,
const av_aes_block *round_key)
static inline void addkey_d(uint8_t *dst, const av_aes_block *src,
const av_aes_block *round_key)
static void subshift(av_aes_block s0[2], int s, const uint8_t *box)
static inline int mix_core(uint32_t multbl[][256], int a, int b, int c, int d)
static inline void mix(av_aes_block state[2], uint32_t multbl[][256], int s1, int s3)
static inline void aes_crypt(AVAES *a, int s, const uint8_t *sbox,
uint32_t multbl[][256])
static void aes_encrypt(AVAES *a, uint8_t *dst, const uint8_t *src,
int count, uint8_t *iv, int rounds)
static void aes_decrypt(AVAES *a, uint8_t *dst, const uint8_t *src,
int count, uint8_t *iv, int rounds)
void av_aes_crypt(AVAES *a, uint8_t *dst, const uint8_t *src,
int count, uint8_t *iv, int decrypt)
static void init_multbl2(uint32_t tbl[][256], const int c[4],
const uint8_t *log8, const uint8_t *alog8,
const uint8_t *sbox)
int av_aes_init(AVAES *a, const uint8_t *key, int key_bits, int decrypt)
