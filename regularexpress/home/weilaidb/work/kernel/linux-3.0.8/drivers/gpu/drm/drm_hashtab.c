int drm_ht_create(struct drm_open_hash *ht, unsigned int order)
EXPORT_SYMBOL(drm_ht_create);
void drm_ht_verbose_list(struct drm_open_hash *ht, unsigned long key)
static struct hlist_node *drm_ht_find_key(struct drm_open_hash *ht,
unsigned long key)
int drm_ht_insert_item(struct drm_open_hash *ht, struct drm_hash_item *item)
EXPORT_SYMBOL(drm_ht_insert_item);
int drm_ht_just_insert_please(struct drm_open_hash *ht, struct drm_hash_item *item,
unsigned long seed, int bits, int shift,
unsigned long add)
EXPORT_SYMBOL(drm_ht_just_insert_please);
int drm_ht_find_item(struct drm_open_hash *ht, unsigned long key,
struct drm_hash_item **item)
EXPORT_SYMBOL(drm_ht_find_item);
int drm_ht_remove_key(struct drm_open_hash *ht, unsigned long key)
int drm_ht_remove_item(struct drm_open_hash *ht, struct drm_hash_item *item)
EXPORT_SYMBOL(drm_ht_remove_item);
void drm_ht_remove(struct drm_open_hash *ht)
EXPORT_SYMBOL(drm_ht_remove);
