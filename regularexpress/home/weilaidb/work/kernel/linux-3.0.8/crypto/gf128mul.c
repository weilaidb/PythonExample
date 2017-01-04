#define gf128mul_dat(q)
#define xx(p, q)	0x##p##q
#define xda_bbe(i) ( \
(i & 0x80 ? xx(43, 80) : 0) ^ (i & 0x40 ? xx(21, c0) : 0) ^ \
(i & 0x20 ? xx(10, e0) : 0) ^ (i & 0x10 ? xx(08, 70) : 0) ^ \
(i & 0x08 ? xx(04, 38) : 0) ^ (i & 0x04 ? xx(02, 1c) : 0) ^ \
(i & 0x02 ? xx(01, 0e) : 0) ^ (i & 0x01 ? xx(00, 87) : 0) \
)
#define xda_lle(i) ( \
(i & 0x80 ? xx(e1, 00) : 0) ^ (i & 0x40 ? xx(70, 80) : 0) ^ \
(i & 0x20 ? xx(38, 40) : 0) ^ (i & 0x10 ? xx(1c, 20) : 0) ^ \
(i & 0x08 ? xx(0e, 10) : 0) ^ (i & 0x04 ? xx(07, 08) : 0) ^ \
(i & 0x02 ? xx(03, 84) : 0) ^ (i & 0x01 ? xx(01, c2) : 0) \
)
static const u16 gf128mul_table_lle[256] = gf128mul_dat(xda_lle);
static const u16 gf128mul_table_bbe[256] = gf128mul_dat(xda_bbe);
static void gf128mul_x_lle(be128 *r, const be128 *x)
static void gf128mul_x_bbe(be128 *r, const be128 *x)
void gf128mul_x_ble(be128 *r, const be128 *x)
EXPORT_SYMBOL(gf128mul_x_ble);
static void gf128mul_x8_lle(be128 *x)
static void gf128mul_x8_bbe(be128 *x)
void gf128mul_lle(be128 *r, const be128 *b)
EXPORT_SYMBOL(gf128mul_lle);
void gf128mul_bbe(be128 *r, const be128 *b)
EXPORT_SYMBOL(gf128mul_bbe);
struct gf128mul_64k *gf128mul_init_64k_lle(const be128 *g)
EXPORT_SYMBOL(gf128mul_init_64k_lle);
struct gf128mul_64k *gf128mul_init_64k_bbe(const be128 *g)
EXPORT_SYMBOL(gf128mul_init_64k_bbe);
void gf128mul_free_64k(struct gf128mul_64k *t)
EXPORT_SYMBOL(gf128mul_free_64k);
void gf128mul_64k_lle(be128 *a, struct gf128mul_64k *t)
EXPORT_SYMBOL(gf128mul_64k_lle);
void gf128mul_64k_bbe(be128 *a, struct gf128mul_64k *t)
EXPORT_SYMBOL(gf128mul_64k_bbe);
struct gf128mul_4k *gf128mul_init_4k_lle(const be128 *g)
EXPORT_SYMBOL(gf128mul_init_4k_lle);
struct gf128mul_4k *gf128mul_init_4k_bbe(const be128 *g)
EXPORT_SYMBOL(gf128mul_init_4k_bbe);
void gf128mul_4k_lle(be128 *a, struct gf128mul_4k *t)
EXPORT_SYMBOL(gf128mul_4k_lle);
void gf128mul_4k_bbe(be128 *a, struct gf128mul_4k *t)
EXPORT_SYMBOL(gf128mul_4k_bbe);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Functions for multiplying elements of GF(2^128)");
