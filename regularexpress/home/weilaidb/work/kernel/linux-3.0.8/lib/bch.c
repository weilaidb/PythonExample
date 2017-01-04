#if defined(CONFIG_BCH_CONST_PARAMS)
#define GF_M(_p)               (CONFIG_BCH_CONST_M)
#define GF_T(_p)               (CONFIG_BCH_CONST_T)
#define GF_N(_p)               ((1 << (CONFIG_BCH_CONST_M))-1)
#define GF_M(_p)               ((_p)->m)
#define GF_T(_p)               ((_p)->t)
#define GF_N(_p)               ((_p)->n)
#define BCH_ECC_WORDS(_p)      DIV_ROUND_UP(GF_M(_p)*GF_T(_p), 32)
#define BCH_ECC_BYTES(_p)      DIV_ROUND_UP(GF_M(_p)*GF_T(_p), 8)
#define dbg(_fmt, args...)     do  while (0)
struct gf_poly ;
#define GF_POLY_SZ(_d) (sizeof(struct gf_poly)+((_d)+1)*sizeof(unsigned int))
struct gf_poly_deg1 ;
static void encode_bch_unaligned(struct bch_control *bch,
const unsigned char *data, unsigned int len,
uint32_t *ecc)
static void load_ecc8(struct bch_control *bch, uint32_t *dst,
const uint8_t *src)
static void store_ecc8(struct bch_control *bch, uint8_t *dst,
const uint32_t *src)
void encode_bch(struct bch_control *bch, const uint8_t *data,
unsigned int len, uint8_t *ecc)
EXPORT_SYMBOL_GPL(encode_bch);
static inline int modulo(struct bch_control *bch, unsigned int v)
static inline int mod_s(struct bch_control *bch, unsigned int v)
static inline int deg(unsigned int poly)
static inline int parity(unsigned int x)
static inline unsigned int gf_mul(struct bch_control *bch, unsigned int a,
unsigned int b)
static inline unsigned int gf_sqr(struct bch_control *bch, unsigned int a)
static inline unsigned int gf_div(struct bch_control *bch, unsigned int a,
unsigned int b)
static inline unsigned int gf_inv(struct bch_control *bch, unsigned int a)
static inline unsigned int a_pow(struct bch_control *bch, int i)
static inline int a_log(struct bch_control *bch, unsigned int x)
static inline int a_ilog(struct bch_control *bch, unsigned int x)
static void compute_syndromes(struct bch_control *bch, uint32_t *ecc,
unsigned int *syn)
static void gf_poly_copy(struct gf_poly *dst, struct gf_poly *src)
static int compute_error_locator_polynomial(struct bch_control *bch,
const unsigned int *syn)
static int solve_linear_system(struct bch_control *bch, unsigned int *rows,
unsigned int *sol, int nsol)
static int find_affine4_roots(struct bch_control *bch, unsigned int a,
unsigned int b, unsigned int c,
unsigned int *roots)
static int find_poly_deg1_roots(struct bch_control *bch, struct gf_poly *poly,
unsigned int *roots)
static int find_poly_deg2_roots(struct bch_control *bch, struct gf_poly *poly,
unsigned int *roots)
static int find_poly_deg3_roots(struct bch_control *bch, struct gf_poly *poly,
unsigned int *roots)
static int find_poly_deg4_roots(struct bch_control *bch, struct gf_poly *poly,
unsigned int *roots)
static void gf_poly_logrep(struct bch_control *bch,
const struct gf_poly *a, int *rep)
static void gf_poly_mod(struct bch_control *bch, struct gf_poly *a,
const struct gf_poly *b, int *rep)
static void gf_poly_div(struct bch_control *bch, struct gf_poly *a,
const struct gf_poly *b, struct gf_poly *q)
static struct gf_poly *gf_poly_gcd(struct bch_control *bch, struct gf_poly *a,
struct gf_poly *b)
static void compute_trace_bk_mod(struct bch_control *bch, int k,
const struct gf_poly *f, struct gf_poly *z,
struct gf_poly *out)
static void factor_polynomial(struct bch_control *bch, int k, struct gf_poly *f,
struct gf_poly **g, struct gf_poly **h)
static int find_poly_roots(struct bch_control *bch, unsigned int k,
struct gf_poly *poly, unsigned int *roots)
#if defined(USE_CHIEN_SEARCH)
static int chien_search(struct bch_control *bch, unsigned int len,
struct gf_poly *p, unsigned int *roots)
#define find_poly_roots(_p, _k, _elp, _loc) chien_search(_p, len, _elp, _loc)
int decode_bch(struct bch_control *bch, const uint8_t *data, unsigned int len,
const uint8_t *recv_ecc, const uint8_t *calc_ecc,
const unsigned int *syn, unsigned int *errloc)
EXPORT_SYMBOL_GPL(decode_bch);
static int build_gf_tables(struct bch_control *bch, unsigned int poly)
static void build_mod8_tables(struct bch_control *bch, const uint32_t *g)
static int build_deg2_base(struct bch_control *bch)
static void *bch_alloc(size_t size, int *err)
static uint32_t *compute_generator_polynomial(struct bch_control *bch)
struct bch_control *init_bch(int m, int t, unsigned int prim_poly)
EXPORT_SYMBOL_GPL(init_bch);
void free_bch(struct bch_control *bch)
EXPORT_SYMBOL_GPL(free_bch);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ivan Djelic <ivan.djelic@parrot.com>");
MODULE_DESCRIPTION("Binary BCH encoder/decoder");
