#define _SS_HASHTAB_H_
#define HASHTAB_MAX_NODES	0xffffffff
struct hashtab_node ;
struct hashtab ;
struct hashtab_info ;
struct hashtab *hashtab_create(u32 (*hash_value)(struct hashtab *h, const void *key),
int (*keycmp)(struct hashtab *h, const void *key1, const void *key2),
u32 size);
int hashtab_insert(struct hashtab *h, void *k, void *d);
void *hashtab_search(struct hashtab *h, const void *k);
void hashtab_destroy(struct hashtab *h);
int hashtab_map(struct hashtab *h,
int (*apply)(void *k, void *d, void *args),
void *args);
void hashtab_stat(struct hashtab *h, struct hashtab_info *info);
