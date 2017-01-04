#define _LINUX_COMPACTION_H
#define COMPACT_SKIPPED		0
#define COMPACT_CONTINUE	1
#define COMPACT_PARTIAL		2
#define COMPACT_COMPLETE	3
extern int sysctl_compact_memory;
extern int sysctl_compaction_handler(struct ctl_table *table, int write,
void __user *buffer, size_t *length, loff_t *ppos);
extern int sysctl_extfrag_threshold;
extern int sysctl_extfrag_handler(struct ctl_table *table, int write,
void __user *buffer, size_t *length, loff_t *ppos);
extern int fragmentation_index(struct zone *zone, unsigned int order);
extern unsigned long try_to_compact_pages(struct zonelist *zonelist,
int order, gfp_t gfp_mask, nodemask_t *mask,
bool sync);
extern unsigned long compaction_suitable(struct zone *zone, int order);
extern unsigned long compact_zone_order(struct zone *zone, int order,
gfp_t gfp_mask, bool sync);
#define COMPACT_MAX_DEFER_SHIFT 6
static inline void defer_compaction(struct zone *zone)
static inline bool compaction_deferred(struct zone *zone)
static inline unsigned long try_to_compact_pages(struct zonelist *zonelist,
int order, gfp_t gfp_mask, nodemask_t *nodemask,
bool sync)
static inline unsigned long compaction_suitable(struct zone *zone, int order)
static inline unsigned long compact_zone_order(struct zone *zone, int order,
gfp_t gfp_mask, bool sync)
static inline void defer_compaction(struct zone *zone)
static inline bool compaction_deferred(struct zone *zone)
#if defined(CONFIG_COMPACTION) && defined(CONFIG_SYSFS) && defined(CONFIG_NUMA)
extern int compaction_register_node(struct node *node);
extern void compaction_unregister_node(struct node *node);
static inline int compaction_register_node(struct node *node)
static inline void compaction_unregister_node(struct node *node)
