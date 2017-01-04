static struct kmem_cache *avtab_node_cachep;
static inline int avtab_hash(struct avtab_key *keyp, u16 mask)
static struct avtab_node*
avtab_insert_node(struct avtab *h, int hvalue,
struct avtab_node *prev, struct avtab_node *cur,
struct avtab_key *key, struct avtab_datum *datum)
static int avtab_insert(struct avtab *h, struct avtab_key *key, struct avtab_datum *datum)
struct avtab_node *
avtab_insert_nonunique(struct avtab *h, struct avtab_key *key, struct avtab_datum *datum)
struct avtab_datum *avtab_search(struct avtab *h, struct avtab_key *key)
struct avtab_node*
avtab_search_node(struct avtab *h, struct avtab_key *key)
struct avtab_node*
avtab_search_node_next(struct avtab_node *node, int specified)
void avtab_destroy(struct avtab *h)
int avtab_init(struct avtab *h)
int avtab_alloc(struct avtab *h, u32 nrules)
void avtab_hash_eval(struct avtab *h, char *tag)
static uint16_t spec_order[] = ;
int avtab_read_item(struct avtab *a, void *fp, struct policydb *pol,
int (*insertf)(struct avtab *a, struct avtab_key *k,
struct avtab_datum *d, void *p),
void *p)
static int avtab_insertf(struct avtab *a, struct avtab_key *k,
struct avtab_datum *d, void *p)
int avtab_read(struct avtab *a, void *fp, struct policydb *pol)
int avtab_write_item(struct policydb *p, struct avtab_node *cur, void *fp)
int avtab_write(struct policydb *p, struct avtab *a, void *fp)
void avtab_cache_init(void)
void avtab_cache_destroy(void)
