#define BITS_PER_U64	(sizeof(u64) * 8)
int ebitmap_cmp(struct ebitmap *e1, struct ebitmap *e2)
int ebitmap_cpy(struct ebitmap *dst, struct ebitmap *src)
int ebitmap_netlbl_export(struct ebitmap *ebmap,
struct netlbl_lsm_secattr_catmap **catmap)
int ebitmap_netlbl_import(struct ebitmap *ebmap,
struct netlbl_lsm_secattr_catmap *catmap)
int ebitmap_contains(struct ebitmap *e1, struct ebitmap *e2)
int ebitmap_get_bit(struct ebitmap *e, unsigned long bit)
int ebitmap_set_bit(struct ebitmap *e, unsigned long bit, int value)
void ebitmap_destroy(struct ebitmap *e)
int ebitmap_read(struct ebitmap *e, void *fp)
int ebitmap_write(struct ebitmap *e, void *fp)
