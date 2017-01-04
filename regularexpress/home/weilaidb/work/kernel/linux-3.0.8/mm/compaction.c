#define CREATE_TRACE_POINTS
struct compact_control ;
static unsigned long release_freepages(struct list_head *freelist)
static unsigned long isolate_freepages_block(struct zone *zone,
unsigned long blockpfn,
struct list_head *freelist)
static bool suitable_migration_target(struct page *page)
static void isolate_freepages(struct zone *zone,
struct compact_control *cc)
static void acct_isolated(struct zone *zone, struct compact_control *cc)
static bool too_many_isolated(struct zone *zone)
typedef enum  isolate_migrate_t;
static isolate_migrate_t isolate_migratepages(struct zone *zone,
struct compact_control *cc)
static struct page *compaction_alloc(struct page *migratepage,
unsigned long data,
int **result)
static void update_nr_listpages(struct compact_control *cc)
static int compact_finished(struct zone *zone,
struct compact_control *cc)
unsigned long compaction_suitable(struct zone *zone, int order)
static int compact_zone(struct zone *zone, struct compact_control *cc)
unsigned long compact_zone_order(struct zone *zone,
int order, gfp_t gfp_mask,
bool sync)
int sysctl_extfrag_threshold = 500;
unsigned long try_to_compact_pages(struct zonelist *zonelist,
int order, gfp_t gfp_mask, nodemask_t *nodemask,
bool sync)
static int compact_node(int nid)
static int compact_nodes(void)
int sysctl_compact_memory;
int sysctl_compaction_handler(struct ctl_table *table, int write,
void __user *buffer, size_t *length, loff_t *ppos)
int sysctl_extfrag_handler(struct ctl_table *table, int write,
void __user *buffer, size_t *length, loff_t *ppos)
#if defined(CONFIG_SYSFS) && defined(CONFIG_NUMA)
ssize_t sysfs_compact_node(struct sys_device *dev,
struct sysdev_attribute *attr,
const char *buf, size_t count)
static SYSDEV_ATTR(compact, S_IWUSR, NULL, sysfs_compact_node);
int compaction_register_node(struct node *node)
void compaction_unregister_node(struct node *node)
