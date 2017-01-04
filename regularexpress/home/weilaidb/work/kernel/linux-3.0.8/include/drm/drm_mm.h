#define _DRM_MM_H_
struct drm_mm_node ;
struct drm_mm ;
static inline bool drm_mm_node_allocated(struct drm_mm_node *node)
static inline bool drm_mm_initialized(struct drm_mm *mm)
#define drm_mm_for_each_node(entry, mm) list_for_each_entry(entry, \
&(mm)->head_node.node_list, \
node_list)
#define drm_mm_for_each_scanned_node_reverse(entry, n, mm) \
for (entry = (mm)->prev_scanned_node, \
next = entry ? list_entry(entry->node_list.next, \
struct drm_mm_node, node_list) : NULL; \
entry != NULL; entry = next, \
next = entry ? list_entry(entry->node_list.next, \
struct drm_mm_node, node_list) : NULL) \
extern struct drm_mm_node *drm_mm_get_block_generic(struct drm_mm_node *node,
unsigned long size,
unsigned alignment,
int atomic);
extern struct drm_mm_node *drm_mm_get_block_range_generic(
struct drm_mm_node *node,
unsigned long size,
unsigned alignment,
unsigned long start,
unsigned long end,
int atomic);
static inline struct drm_mm_node *drm_mm_get_block(struct drm_mm_node *parent,
unsigned long size,
unsigned alignment)
static inline struct drm_mm_node *drm_mm_get_block_atomic(struct drm_mm_node *parent,
unsigned long size,
unsigned alignment)
static inline struct drm_mm_node *drm_mm_get_block_range(
struct drm_mm_node *parent,
unsigned long size,
unsigned alignment,
unsigned long start,
unsigned long end)
static inline struct drm_mm_node *drm_mm_get_block_atomic_range(
struct drm_mm_node *parent,
unsigned long size,
unsigned alignment,
unsigned long start,
unsigned long end)
extern int drm_mm_insert_node(struct drm_mm *mm, struct drm_mm_node *node,
unsigned long size, unsigned alignment);
extern int drm_mm_insert_node_in_range(struct drm_mm *mm,
struct drm_mm_node *node,
unsigned long size, unsigned alignment,
unsigned long start, unsigned long end);
extern void drm_mm_put_block(struct drm_mm_node *cur);
extern void drm_mm_remove_node(struct drm_mm_node *node);
extern void drm_mm_replace_node(struct drm_mm_node *old, struct drm_mm_node *new);
extern struct drm_mm_node *drm_mm_search_free(const struct drm_mm *mm,
unsigned long size,
unsigned alignment,
int best_match);
extern struct drm_mm_node *drm_mm_search_free_in_range(
const struct drm_mm *mm,
unsigned long size,
unsigned alignment,
unsigned long start,
unsigned long end,
int best_match);
extern int drm_mm_init(struct drm_mm *mm, unsigned long start,
unsigned long size);
extern void drm_mm_takedown(struct drm_mm *mm);
extern int drm_mm_clean(struct drm_mm *mm);
extern int drm_mm_pre_get(struct drm_mm *mm);
static inline struct drm_mm *drm_get_mm(struct drm_mm_node *block)
void drm_mm_init_scan(struct drm_mm *mm, unsigned long size,
unsigned alignment);
void drm_mm_init_scan_with_range(struct drm_mm *mm, unsigned long size,
unsigned alignment,
unsigned long start,
unsigned long end);
int drm_mm_scan_add_block(struct drm_mm_node *node);
int drm_mm_scan_remove_block(struct drm_mm_node *node);
extern void drm_mm_debug_table(struct drm_mm *mm, const char *prefix);
int drm_mm_dump_table(struct seq_file *m, struct drm_mm *mm);
