#define _SS_EBITMAP_H_
#define EBITMAP_UNIT_NUMS	((32 - sizeof(void *) - sizeof(u32))	\
/ sizeof(unsigned long))
#define EBITMAP_UNIT_SIZE	BITS_PER_LONG
#define EBITMAP_SIZE		(EBITMAP_UNIT_NUMS * EBITMAP_UNIT_SIZE)
#define EBITMAP_BIT		1ULL
#define EBITMAP_SHIFT_UNIT_SIZE(x)					\
(((x) >> EBITMAP_UNIT_SIZE / 2) >> EBITMAP_UNIT_SIZE / 2)
struct ebitmap_node ;
struct ebitmap ;
#define ebitmap_length(e) ((e)->highbit)
static inline unsigned int ebitmap_start_positive(struct ebitmap *e,
struct ebitmap_node **n)
static inline void ebitmap_init(struct ebitmap *e)
static inline unsigned int ebitmap_next_positive(struct ebitmap *e,
struct ebitmap_node **n,
unsigned int bit)
#define EBITMAP_NODE_INDEX(node, bit)	\
(((bit) - (node)->startbit) / EBITMAP_UNIT_SIZE)
#define EBITMAP_NODE_OFFSET(node, bit)	\
(((bit) - (node)->startbit) % EBITMAP_UNIT_SIZE)
static inline int ebitmap_node_get_bit(struct ebitmap_node *n,
unsigned int bit)
static inline void ebitmap_node_set_bit(struct ebitmap_node *n,
unsigned int bit)
static inline void ebitmap_node_clr_bit(struct ebitmap_node *n,
unsigned int bit)
#define ebitmap_for_each_positive_bit(e, n, bit)	\
for (bit = ebitmap_start_positive(e, &n);	\
bit < ebitmap_length(e);			\
bit = ebitmap_next_positive(e, &n, bit))	\
int ebitmap_cmp(struct ebitmap *e1, struct ebitmap *e2);
int ebitmap_cpy(struct ebitmap *dst, struct ebitmap *src);
int ebitmap_contains(struct ebitmap *e1, struct ebitmap *e2);
int ebitmap_get_bit(struct ebitmap *e, unsigned long bit);
int ebitmap_set_bit(struct ebitmap *e, unsigned long bit, int value);
void ebitmap_destroy(struct ebitmap *e);
int ebitmap_read(struct ebitmap *e, void *fp);
int ebitmap_write(struct ebitmap *e, void *fp);
int ebitmap_netlbl_export(struct ebitmap *ebmap,
struct netlbl_lsm_secattr_catmap **catmap);
int ebitmap_netlbl_import(struct ebitmap *ebmap,
struct netlbl_lsm_secattr_catmap *catmap);
static inline int ebitmap_netlbl_export(struct ebitmap *ebmap,
struct netlbl_lsm_secattr_catmap **catmap)
static inline int ebitmap_netlbl_import(struct ebitmap *ebmap,
struct netlbl_lsm_secattr_catmap *catmap)
