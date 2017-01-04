struct drm_owner_item ;
void drm_sman_takedown(struct drm_sman * sman)
EXPORT_SYMBOL(drm_sman_takedown);
int
drm_sman_init(struct drm_sman * sman, unsigned int num_managers,
unsigned int user_order, unsigned int owner_order)
EXPORT_SYMBOL(drm_sman_init);
static void *drm_sman_mm_allocate(void *private, unsigned long size,
unsigned alignment)
static void drm_sman_mm_free(void *private, void *ref)
static void drm_sman_mm_destroy(void *private)
static unsigned long drm_sman_mm_offset(void *private, void *ref)
int
drm_sman_set_range(struct drm_sman * sman, unsigned int manager,
unsigned long start, unsigned long size)
EXPORT_SYMBOL(drm_sman_set_range);
int
drm_sman_set_manager(struct drm_sman * sman, unsigned int manager,
struct drm_sman_mm * allocator)
EXPORT_SYMBOL(drm_sman_set_manager);
static struct drm_owner_item *drm_sman_get_owner_item(struct drm_sman * sman,
unsigned long owner)
struct drm_memblock_item *drm_sman_alloc(struct drm_sman *sman, unsigned int manager,
unsigned long size, unsigned alignment,
unsigned long owner)
EXPORT_SYMBOL(drm_sman_alloc);
static void drm_sman_free(struct drm_memblock_item *item)
int drm_sman_free_key(struct drm_sman *sman, unsigned int key)
EXPORT_SYMBOL(drm_sman_free_key);
static void drm_sman_remove_owner(struct drm_sman *sman,
struct drm_owner_item *owner_item)
int drm_sman_owner_clean(struct drm_sman *sman, unsigned long owner)
EXPORT_SYMBOL(drm_sman_owner_clean);
static void drm_sman_do_owner_cleanup(struct drm_sman *sman,
struct drm_owner_item *owner_item)
void drm_sman_owner_cleanup(struct drm_sman *sman, unsigned long owner)
EXPORT_SYMBOL(drm_sman_owner_cleanup);
void drm_sman_cleanup(struct drm_sman *sman)
EXPORT_SYMBOL(drm_sman_cleanup);
