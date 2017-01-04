struct element ;
struct gh_t_hash_tab ;
static void noop(void *p);
struct gh_t_hash_tab *gh_create(u16 max_bucket, u16 val_size,
u16(*hash) (void *, u16), bool(*match) (void *,
void *),
void (*delete) (void *))
void gh_delete(struct gh_t_hash_tab *hash_tab)
void gh_exit(void)
void *gh_find(struct gh_t_hash_tab *hash_tab, void *key)
void gh_init(void)
void *gh_insert(struct gh_t_hash_tab *hash_tab, void *key, void *value)
static void noop(void *p)
void gh_iterate(struct gh_t_hash_tab *hash_tab,
void (*callback)(void *, void *), void *user_data)
