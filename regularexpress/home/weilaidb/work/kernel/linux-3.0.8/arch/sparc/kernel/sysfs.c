static DEFINE_PER_CPU(struct hv_mmu_statistics, mmu_stats) __attribute__((aligned(64)));
#define SHOW_MMUSTAT_ULONG(NAME) \
static ssize_t show_##NAME(struct sys_device *dev, \
struct sysdev_attribute *attr, char *buf) \
\
static SYSDEV_ATTR(NAME, 0444, show_##NAME, NULL)
SHOW_MMUSTAT_ULONG(immu_tsb_hits_ctx0_8k_tte);
SHOW_MMUSTAT_ULONG(immu_tsb_ticks_ctx0_8k_tte);
SHOW_MMUSTAT_ULONG(immu_tsb_hits_ctx0_64k_tte);
SHOW_MMUSTAT_ULONG(immu_tsb_ticks_ctx0_64k_tte);
SHOW_MMUSTAT_ULONG(immu_tsb_hits_ctx0_4mb_tte);
SHOW_MMUSTAT_ULONG(immu_tsb_ticks_ctx0_4mb_tte);
SHOW_MMUSTAT_ULONG(immu_tsb_hits_ctx0_256mb_tte);
SHOW_MMUSTAT_ULONG(immu_tsb_ticks_ctx0_256mb_tte);
SHOW_MMUSTAT_ULONG(immu_tsb_hits_ctxnon0_8k_tte);
SHOW_MMUSTAT_ULONG(immu_tsb_ticks_ctxnon0_8k_tte);
SHOW_MMUSTAT_ULONG(immu_tsb_hits_ctxnon0_64k_tte);
SHOW_MMUSTAT_ULONG(immu_tsb_ticks_ctxnon0_64k_tte);
SHOW_MMUSTAT_ULONG(immu_tsb_hits_ctxnon0_4mb_tte);
SHOW_MMUSTAT_ULONG(immu_tsb_ticks_ctxnon0_4mb_tte);
SHOW_MMUSTAT_ULONG(immu_tsb_hits_ctxnon0_256mb_tte);
SHOW_MMUSTAT_ULONG(immu_tsb_ticks_ctxnon0_256mb_tte);
SHOW_MMUSTAT_ULONG(dmmu_tsb_hits_ctx0_8k_tte);
SHOW_MMUSTAT_ULONG(dmmu_tsb_ticks_ctx0_8k_tte);
SHOW_MMUSTAT_ULONG(dmmu_tsb_hits_ctx0_64k_tte);
SHOW_MMUSTAT_ULONG(dmmu_tsb_ticks_ctx0_64k_tte);
SHOW_MMUSTAT_ULONG(dmmu_tsb_hits_ctx0_4mb_tte);
SHOW_MMUSTAT_ULONG(dmmu_tsb_ticks_ctx0_4mb_tte);
SHOW_MMUSTAT_ULONG(dmmu_tsb_hits_ctx0_256mb_tte);
SHOW_MMUSTAT_ULONG(dmmu_tsb_ticks_ctx0_256mb_tte);
SHOW_MMUSTAT_ULONG(dmmu_tsb_hits_ctxnon0_8k_tte);
SHOW_MMUSTAT_ULONG(dmmu_tsb_ticks_ctxnon0_8k_tte);
SHOW_MMUSTAT_ULONG(dmmu_tsb_hits_ctxnon0_64k_tte);
SHOW_MMUSTAT_ULONG(dmmu_tsb_ticks_ctxnon0_64k_tte);
SHOW_MMUSTAT_ULONG(dmmu_tsb_hits_ctxnon0_4mb_tte);
SHOW_MMUSTAT_ULONG(dmmu_tsb_ticks_ctxnon0_4mb_tte);
SHOW_MMUSTAT_ULONG(dmmu_tsb_hits_ctxnon0_256mb_tte);
SHOW_MMUSTAT_ULONG(dmmu_tsb_ticks_ctxnon0_256mb_tte);
static struct attribute *mmu_stat_attrs[] = ;
static struct attribute_group mmu_stat_group = ;
static unsigned long run_on_cpu(unsigned long cpu,
unsigned long (*func)(unsigned long),
unsigned long arg)
static unsigned long read_mmustat_enable(unsigned long junk)
static unsigned long write_mmustat_enable(unsigned long val)
static ssize_t show_mmustat_enable(struct sys_device *s,
struct sysdev_attribute *attr, char *buf)
static ssize_t store_mmustat_enable(struct sys_device *s,
struct sysdev_attribute *attr, const char *buf,
size_t count)
static SYSDEV_ATTR(mmustat_enable, 0644, show_mmustat_enable, store_mmustat_enable);
static int mmu_stats_supported;
static int register_mmu_stats(struct sys_device *s)
static void unregister_mmu_stats(struct sys_device *s)
#define SHOW_CPUDATA_ULONG_NAME(NAME, MEMBER) \
static ssize_t show_##NAME(struct sys_device *dev, \
struct sysdev_attribute *attr, char *buf) \
#define SHOW_CPUDATA_UINT_NAME(NAME, MEMBER) \
static ssize_t show_##NAME(struct sys_device *dev, \
struct sysdev_attribute *attr, char *buf) \
SHOW_CPUDATA_ULONG_NAME(clock_tick, clock_tick);
SHOW_CPUDATA_UINT_NAME(l1_dcache_size, dcache_size);
SHOW_CPUDATA_UINT_NAME(l1_dcache_line_size, dcache_line_size);
SHOW_CPUDATA_UINT_NAME(l1_icache_size, icache_size);
SHOW_CPUDATA_UINT_NAME(l1_icache_line_size, icache_line_size);
SHOW_CPUDATA_UINT_NAME(l2_cache_size, ecache_size);
SHOW_CPUDATA_UINT_NAME(l2_cache_line_size, ecache_line_size);
static struct sysdev_attribute cpu_core_attrs[] = ;
static DEFINE_PER_CPU(struct cpu, cpu_devices);
static void register_cpu_online(unsigned int cpu)
static void unregister_cpu_online(unsigned int cpu)
static int __cpuinit sysfs_cpu_notify(struct notifier_block *self,
unsigned long action, void *hcpu)
static struct notifier_block __cpuinitdata sysfs_cpu_nb = ;
static void __init check_mmu_stats(void)
static void register_nodes(void)
static int __init topology_init(void)
subsys_initcall(topology_init);
