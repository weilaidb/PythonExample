#define _NET_BATMAN_ADV_HASH_H_
typedef int (*hashdata_compare_cb)(struct hlist_node *, void *);
typedef int (*hashdata_choose_cb)(void *, int);
typedef void (*hashdata_free_cb)(struct hlist_node *, void *);
struct hashtable_t ;
struct hashtable_t *hash_new(int size);
void hash_destroy(struct hashtable_t *hash);
static inline void hash_delete(struct hashtable_t *hash,
hashdata_free_cb free_cb, void *arg)
static inline int hash_add(struct hashtable_t *hash,
hashdata_compare_cb compare,
hashdata_choose_cb choose,
void *data, struct hlist_node *data_node)
static inline void *hash_remove(struct hashtable_t *hash,
hashdata_compare_cb compare,
hashdata_choose_cb choose, void *data)
