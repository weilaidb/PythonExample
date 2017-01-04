struct bf_ctx ;
static const u32 bf_pbox[16 + 2] = ;
static const u32 bf_sbox[256 * 4] = ;
#define GET32_3(x) (((x) & 0xff))
#define GET32_2(x) (((x) >> (8)) & (0xff))
#define GET32_1(x) (((x) >> (16)) & (0xff))
#define GET32_0(x) (((x) >> (24)) & (0xff))
#define bf_F(x) (((S[GET32_0(x)] + S[256 + GET32_1(x)]) ^ \
S[512 + GET32_2(x)]) + S[768 + GET32_3(x)])
#define EROUND(a, b, n)  do  while (0)
#define DROUND(a, b, n)  do  while (0)
void
dsp_bf_encrypt(struct dsp *dsp, u8 *data, int len)
void
dsp_bf_decrypt(struct dsp *dsp, u8 *data, int len)
static inline void
encrypt_block(const u32 *P, const u32 *S, u32 *dst, u32 *src)
int
dsp_bf_init(struct dsp *dsp, const u8 *key, uint keylen)
void
dsp_bf_cleanup(struct dsp *dsp)
