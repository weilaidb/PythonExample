#define _SS_AVTAB_H_
struct avtab_key ;
struct avtab_datum ;
struct avtab_node ;
struct avtab ;
int avtab_init(struct avtab *);
int avtab_alloc(struct avtab *, u32);
struct avtab_datum *avtab_search(struct avtab *h, struct avtab_key *k);
void avtab_destroy(struct avtab *h);
void avtab_hash_eval(struct avtab *h, char *tag);
struct policydb;
int avtab_read_item(struct avtab *a, void *fp, struct policydb *pol,
int (*insert)(struct avtab *a, struct avtab_key *k,
struct avtab_datum *d, void *p),
void *p);
int avtab_read(struct avtab *a, void *fp, struct policydb *pol);
int avtab_write_item(struct policydb *p, struct avtab_node *cur, void *fp);
int avtab_write(struct policydb *p, struct avtab *a, void *fp);
struct avtab_node *avtab_insert_nonunique(struct avtab *h, struct avtab_key *key,
struct avtab_datum *datum);
struct avtab_node *avtab_search_node(struct avtab *h, struct avtab_key *key);
struct avtab_node *avtab_search_node_next(struct avtab_node *node, int specified);
void avtab_cache_init(void);
void avtab_cache_destroy(void);
#define MAX_AVTAB_HASH_BITS 11
#define MAX_AVTAB_HASH_BUCKETS (1 << MAX_AVTAB_HASH_BITS)
