static const u8 q0[256] = ;
static const u8 q1[256] = ;
static const u32 mds[4][256] = ;
static const u8 poly_to_exp[255] = ;
static const u8 exp_to_poly[492] = ;
static const u8 calc_sb_tbl[512] = ;
#define CALC_S(a, b, c, d, i, w, x, y, z) \
if (key[i])
#define CALC_SB_2(i, a, b) \
ctx->s[0][i] = mds[0][q0[(a) ^ sa] ^ se]; \
ctx->s[1][i] = mds[1][q0[(b) ^ sb] ^ sf]; \
ctx->s[2][i] = mds[2][q1[(a) ^ sc] ^ sg]; \
ctx->s[3][i] = mds[3][q1[(b) ^ sd] ^ sh]
#define CALC_SB192_2(i, a, b) \
ctx->s[0][i] = mds[0][q0[q0[(b) ^ sa] ^ se] ^ si]; \
ctx->s[1][i] = mds[1][q0[q1[(b) ^ sb] ^ sf] ^ sj]; \
ctx->s[2][i] = mds[2][q1[q0[(a) ^ sc] ^ sg] ^ sk]; \
ctx->s[3][i] = mds[3][q1[q1[(a) ^ sd] ^ sh] ^ sl];
#define CALC_SB256_2(i, a, b) \
ctx->s[0][i] = mds[0][q0[q0[q1[(b) ^ sa] ^ se] ^ si] ^ sm]; \
ctx->s[1][i] = mds[1][q0[q1[q1[(a) ^ sb] ^ sf] ^ sj] ^ sn]; \
ctx->s[2][i] = mds[2][q1[q0[q0[(a) ^ sc] ^ sg] ^ sk] ^ so]; \
ctx->s[3][i] = mds[3][q1[q1[q0[(b) ^ sd] ^ sh] ^ sl] ^ sp];
#define CALC_K_2(a, b, c, d, j) \
mds[0][q0[a ^ key[(j) + 8]] ^ key[j]] \
^ mds[1][q0[b ^ key[(j) + 9]] ^ key[(j) + 1]] \
^ mds[2][q1[c ^ key[(j) + 10]] ^ key[(j) + 2]] \
^ mds[3][q1[d ^ key[(j) + 11]] ^ key[(j) + 3]]
#define CALC_K(a, j, k, l, m, n) \
x = CALC_K_2 (k, l, k, l, 0); \
y = CALC_K_2 (m, n, m, n, 4); \
y = rol32(y, 8); \
x += y; y += x; ctx->a[j] = x; \
ctx->a[(j) + 1] = rol32(y, 9)
#define CALC_K192_2(a, b, c, d, j) \
CALC_K_2 (q0[a ^ key[(j) + 16]], \
q1[b ^ key[(j) + 17]], \
q0[c ^ key[(j) + 18]], \
q1[d ^ key[(j) + 19]], j)
#define CALC_K192(a, j, k, l, m, n) \
x = CALC_K192_2 (l, l, k, k, 0); \
y = CALC_K192_2 (n, n, m, m, 4); \
y = rol32(y, 8); \
x += y; y += x; ctx->a[j] = x; \
ctx->a[(j) + 1] = rol32(y, 9)
#define CALC_K256_2(a, b, j) \
CALC_K192_2 (q1[b ^ key[(j) + 24]], \
q1[a ^ key[(j) + 25]], \
q0[a ^ key[(j) + 26]], \
q0[b ^ key[(j) + 27]], j)
#define CALC_K256(a, j, k, l, m, n) \
x = CALC_K256_2 (k, l, 0); \
y = CALC_K256_2 (m, n, 4); \
y = rol32(y, 8); \
x += y; y += x; ctx->a[j] = x; \
ctx->a[(j) + 1] = rol32(y, 9)
int twofish_setkey(struct crypto_tfm *tfm, const u8 *key, unsigned int key_len)
EXPORT_SYMBOL_GPL(twofish_setkey);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Twofish cipher common functions");
