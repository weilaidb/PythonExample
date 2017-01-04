DEFINE_PER_CPU(struct vm_event_state, vm_event_states) = ;
EXPORT_PER_CPU_SYMBOL(vm_event_states);
static void sum_vm_events(unsigned long *ret)
void all_vm_events(unsigned long *ret)
EXPORT_SYMBOL_GPL(all_vm_events);
void vm_events_fold_cpu(int cpu)
atomic_long_t vm_stat[NR_VM_ZONE_STAT_ITEMS];
EXPORT_SYMBOL(vm_stat);
int calculate_pressure_threshold(struct zone *zone)
int calculate_normal_threshold(struct zone *zone)
void refresh_zone_stat_thresholds(void)
void set_pgdat_percpu_threshold(pg_data_t *pgdat,
int (*calculate_pressure)(struct zone *))
void __mod_zone_page_state(struct zone *zone, enum zone_stat_item item,
int delta)
EXPORT_SYMBOL(__mod_zone_page_state);
void __inc_zone_state(struct zone *zone, enum zone_stat_item item)
void __inc_zone_page_state(struct page *page, enum zone_stat_item item)
EXPORT_SYMBOL(__inc_zone_page_state);
void __dec_zone_state(struct zone *zone, enum zone_stat_item item)
void __dec_zone_page_state(struct page *page, enum zone_stat_item item)
EXPORT_SYMBOL(__dec_zone_page_state);
static inline void mod_state(struct zone *zone,
enum zone_stat_item item, int delta, int overstep_mode)
void mod_zone_page_state(struct zone *zone, enum zone_stat_item item,
int delta)
EXPORT_SYMBOL(mod_zone_page_state);
void inc_zone_state(struct zone *zone, enum zone_stat_item item)
void inc_zone_page_state(struct page *page, enum zone_stat_item item)
EXPORT_SYMBOL(inc_zone_page_state);
void dec_zone_page_state(struct page *page, enum zone_stat_item item)
EXPORT_SYMBOL(dec_zone_page_state);
void mod_zone_page_state(struct zone *zone, enum zone_stat_item item,
int delta)
EXPORT_SYMBOL(mod_zone_page_state);
void inc_zone_state(struct zone *zone, enum zone_stat_item item)
void inc_zone_page_state(struct page *page, enum zone_stat_item item)
EXPORT_SYMBOL(inc_zone_page_state);
void dec_zone_page_state(struct page *page, enum zone_stat_item item)
EXPORT_SYMBOL(dec_zone_page_state);
void refresh_cpu_vm_stats(int cpu)
void zone_statistics(struct zone *preferred_zone, struct zone *z, gfp_t flags)
struct contig_page_info ;
static void fill_contig_page_info(struct zone *zone,
unsigned int suitable_order,
struct contig_page_info *info)
static int __fragmentation_index(unsigned int order, struct contig_page_info *info)
int fragmentation_index(struct zone *zone, unsigned int order)
#if defined(CONFIG_PROC_FS) || defined(CONFIG_COMPACTION)
static char * const migratetype_names[MIGRATE_TYPES] = ;
static void *frag_start(struct seq_file *m, loff_t *pos)
static void *frag_next(struct seq_file *m, void *arg, loff_t *pos)
static void frag_stop(struct seq_file *m, void *arg)
static void walk_zones_in_node(struct seq_file *m, pg_data_t *pgdat,
void (*print)(struct seq_file *m, pg_data_t *, struct zone *))
#if defined(CONFIG_PROC_FS) || defined(CONFIG_SYSFS)
#define TEXT_FOR_DMA(xx) xx "_dma",
#define TEXT_FOR_DMA(xx)
#define TEXT_FOR_DMA32(xx) xx "_dma32",
#define TEXT_FOR_DMA32(xx)
#define TEXT_FOR_HIGHMEM(xx) xx "_high",
#define TEXT_FOR_HIGHMEM(xx)
#define TEXTS_FOR_ZONES(xx) TEXT_FOR_DMA(xx) TEXT_FOR_DMA32(xx) xx "_normal", \
TEXT_FOR_HIGHMEM(xx) xx "_movable",
const char * const vmstat_text[] = ;
static void frag_show_print(struct seq_file *m, pg_data_t *pgdat,
struct zone *zone)
static int frag_show(struct seq_file *m, void *arg)
static void pagetypeinfo_showfree_print(struct seq_file *m,
pg_data_t *pgdat, struct zone *zone)
static int pagetypeinfo_showfree(struct seq_file *m, void *arg)
static void pagetypeinfo_showblockcount_print(struct seq_file *m,
pg_data_t *pgdat, struct zone *zone)
static int pagetypeinfo_showblockcount(struct seq_file *m, void *arg)
static int pagetypeinfo_show(struct seq_file *m, void *arg)
static const struct seq_operations fragmentation_op = ;
static int fragmentation_open(struct inode *inode, struct file *file)
static const struct file_operations fragmentation_file_operations = ;
static const struct seq_operations pagetypeinfo_op = ;
static int pagetypeinfo_open(struct inode *inode, struct file *file)
static const struct file_operations pagetypeinfo_file_ops = ;
static void zoneinfo_show_print(struct seq_file *m, pg_data_t *pgdat,
struct zone *zone)
static int zoneinfo_show(struct seq_file *m, void *arg)
static const struct seq_operations zoneinfo_op = ;
static int zoneinfo_open(struct inode *inode, struct file *file)
static const struct file_operations proc_zoneinfo_file_operations = ;
enum writeback_stat_item ;
static void *vmstat_start(struct seq_file *m, loff_t *pos)
static void *vmstat_next(struct seq_file *m, void *arg, loff_t *pos)
static int vmstat_show(struct seq_file *m, void *arg)
static void vmstat_stop(struct seq_file *m, void *arg)
static const struct seq_operations vmstat_op = ;
static int vmstat_open(struct inode *inode, struct file *file)
static const struct file_operations proc_vmstat_file_operations = ;
static DEFINE_PER_CPU(struct delayed_work, vmstat_work);
int sysctl_stat_interval __read_mostly = HZ;
static void vmstat_update(struct work_struct *w)
static void __cpuinit start_cpu_timer(int cpu)
static int __cpuinit vmstat_cpuup_callback(struct notifier_block *nfb,
unsigned long action,
void *hcpu)
static struct notifier_block __cpuinitdata vmstat_notifier =
;
static int __init setup_vmstat(void)
module_init(setup_vmstat)
#if defined(CONFIG_DEBUG_FS) && defined(CONFIG_COMPACTION)
static struct dentry *extfrag_debug_root;
static int unusable_free_index(unsigned int order,
struct contig_page_info *info)
static void unusable_show_print(struct seq_file *m,
pg_data_t *pgdat, struct zone *zone)
static int unusable_show(struct seq_file *m, void *arg)
static const struct seq_operations unusable_op = ;
static int unusable_open(struct inode *inode, struct file *file)
static const struct file_operations unusable_file_ops = ;
static void extfrag_show_print(struct seq_file *m,
pg_data_t *pgdat, struct zone *zone)
static int extfrag_show(struct seq_file *m, void *arg)
static const struct seq_operations extfrag_op = ;
static int extfrag_open(struct inode *inode, struct file *file)
static const struct file_operations extfrag_file_ops = ;
static int __init extfrag_debug_init(void)
module_init(extfrag_debug_init);
