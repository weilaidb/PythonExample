#define GH_
extern struct gh_t_hash_tab *gh_create(u16 max_bucket, u16 val_size,
u16(*hash) (void *, u16),
bool(*match) (void *, void *),
void (*delete) (void *));
extern void gh_delete(struct gh_t_hash_tab *hash_tab);
extern void gh_exit(void);
extern void *gh_find(struct gh_t_hash_tab *hash_tab, void *key);
extern void gh_init(void);
extern void *gh_insert(struct gh_t_hash_tab *hash_tab, void *key, void *value);
void gh_iterate(struct gh_t_hash_tab *hash_tab,
void (*callback)(void *, void *), void *user_data);
