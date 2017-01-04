#define MM_UNUSED_TARGET 4
static struct drm_mm_node *drm_mm_kmalloc(struct drm_mm *mm, int atomic)
int drm_mm_pre_get(struct drm_mm *mm)
EXPORT_SYMBOL(drm_mm_pre_get);
static inline unsigned long drm_mm_hole_node_start(struct drm_mm_node *hole_node)
static inline unsigned long drm_mm_hole_node_end(struct drm_mm_node *hole_node)
static void drm_mm_insert_helper(struct drm_mm_node *hole_node,
struct drm_mm_node *node,
unsigned long size, unsigned alignment)
struct drm_mm_node *drm_mm_get_block_generic(struct drm_mm_node *hole_node,
unsigned long size,
unsigned alignment,
int atomic)
EXPORT_SYMBOL(drm_mm_get_block_generic);
int drm_mm_insert_node(struct drm_mm *mm, struct drm_mm_node *node,
unsigned long size, unsigned alignment)
EXPORT_SYMBOL(drm_mm_insert_node);
static void drm_mm_insert_helper_range(struct drm_mm_node *hole_node,
struct drm_mm_node *node,
unsigned long size, unsigned alignment,
unsigned long start, unsigned long end)
struct drm_mm_node *drm_mm_get_block_range_generic(struct drm_mm_node *hole_node,
unsigned long size,
unsigned alignment,
unsigned long start,
unsigned long end,
int atomic)
EXPORT_SYMBOL(drm_mm_get_block_range_generic);
int drm_mm_insert_node_in_range(struct drm_mm *mm, struct drm_mm_node *node,
unsigned long size, unsigned alignment,
unsigned long start, unsigned long end)
EXPORT_SYMBOL(drm_mm_insert_node_in_range);
void drm_mm_remove_node(struct drm_mm_node *node)
EXPORT_SYMBOL(drm_mm_remove_node);
void drm_mm_put_block(struct drm_mm_node *node)
EXPORT_SYMBOL(drm_mm_put_block);
static int check_free_hole(unsigned long start, unsigned long end,
unsigned long size, unsigned alignment)
struct drm_mm_node *drm_mm_search_free(const struct drm_mm *mm,
unsigned long size,
unsigned alignment, int best_match)
EXPORT_SYMBOL(drm_mm_search_free);
struct drm_mm_node *drm_mm_search_free_in_range(const struct drm_mm *mm,
unsigned long size,
unsigned alignment,
unsigned long start,
unsigned long end,
int best_match)
EXPORT_SYMBOL(drm_mm_search_free_in_range);
void drm_mm_replace_node(struct drm_mm_node *old, struct drm_mm_node *new)
EXPORT_SYMBOL(drm_mm_replace_node);
void drm_mm_init_scan(struct drm_mm *mm, unsigned long size,
unsigned alignment)
EXPORT_SYMBOL(drm_mm_init_scan);
void drm_mm_init_scan_with_range(struct drm_mm *mm, unsigned long size,
unsigned alignment,
unsigned long start,
unsigned long end)
EXPORT_SYMBOL(drm_mm_init_scan_with_range);
int drm_mm_scan_add_block(struct drm_mm_node *node)
EXPORT_SYMBOL(drm_mm_scan_add_block);
int drm_mm_scan_remove_block(struct drm_mm_node *node)
EXPORT_SYMBOL(drm_mm_scan_remove_block);
int drm_mm_clean(struct drm_mm * mm)
EXPORT_SYMBOL(drm_mm_clean);
int drm_mm_init(struct drm_mm * mm, unsigned long start, unsigned long size)
EXPORT_SYMBOL(drm_mm_init);
void drm_mm_takedown(struct drm_mm * mm)
EXPORT_SYMBOL(drm_mm_takedown);
void drm_mm_debug_table(struct drm_mm *mm, const char *prefix)
EXPORT_SYMBOL(drm_mm_debug_table);
#if defined(CONFIG_DEBUG_FS)
int drm_mm_dump_table(struct seq_file *m, struct drm_mm *mm)
EXPORT_SYMBOL(drm_mm_dump_table);
