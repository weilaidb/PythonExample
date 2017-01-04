#define LVL_1_INST	1
#define LVL_1_DATA	2
#define LVL_2		3
#define LVL_3		4
#define LVL_TRACE	5
struct _cache_table ;
#define MB(x)	((x) * 1024)
static const struct _cache_table __cpuinitconst cache_table[] =
;
enum _cache_type ;
union _cpuid4_leaf_eax ;
union _cpuid4_leaf_ebx ;
union _cpuid4_leaf_ecx ;
struct amd_l3_cache ;
struct _cpuid4_info ;
struct _cpuid4_info_regs ;
unsigned short			num_cache_leaves;
union l1_cache ;
union l2_cache ;
union l3_cache ;
static const unsigned short __cpuinitconst assocs[] = ;
static const unsigned char __cpuinitconst levels[] = ;
static const unsigned char __cpuinitconst types[] = ;
static void __cpuinit
amd_cpuid4(int leaf, union _cpuid4_leaf_eax *eax,
union _cpuid4_leaf_ebx *ebx,
union _cpuid4_leaf_ecx *ecx)
struct _cache_attr ;
static void __cpuinit amd_calc_l3_indices(struct amd_l3_cache *l3)
static void __cpuinit amd_init_l3_cache(struct _cpuid4_info_regs *this_leaf,
int index)
int amd_get_l3_disable_slot(struct amd_l3_cache *l3, unsigned slot)
static ssize_t show_cache_disable(struct _cpuid4_info *this_leaf, char *buf,
unsigned int slot)
#define SHOW_CACHE_DISABLE(slot)					\
static ssize_t								\
show_cache_disable_##slot(struct _cpuid4_info *this_leaf, char *buf,	\
unsigned int cpu)				\
SHOW_CACHE_DISABLE(0)
SHOW_CACHE_DISABLE(1)
static void amd_l3_disable_index(struct amd_l3_cache *l3, int cpu,
unsigned slot, unsigned long idx)
int amd_set_l3_disable_slot(struct amd_l3_cache *l3, int cpu, unsigned slot,
unsigned long index)
static ssize_t store_cache_disable(struct _cpuid4_info *this_leaf,
const char *buf, size_t count,
unsigned int slot)
#define STORE_CACHE_DISABLE(slot)					\
static ssize_t								\
store_cache_disable_##slot(struct _cpuid4_info *this_leaf,		\
const char *buf, size_t count,		\
unsigned int cpu)				\
STORE_CACHE_DISABLE(0)
STORE_CACHE_DISABLE(1)
static struct _cache_attr cache_disable_0 = __ATTR(cache_disable_0, 0644,
show_cache_disable_0, store_cache_disable_0);
static struct _cache_attr cache_disable_1 = __ATTR(cache_disable_1, 0644,
show_cache_disable_1, store_cache_disable_1);
static ssize_t
show_subcaches(struct _cpuid4_info *this_leaf, char *buf, unsigned int cpu)
static ssize_t
store_subcaches(struct _cpuid4_info *this_leaf, const char *buf, size_t count,
unsigned int cpu)
static struct _cache_attr subcaches =
__ATTR(subcaches, 0644, show_subcaches, store_subcaches);
#define amd_init_l3_cache(x, y)
static int
__cpuinit cpuid4_cache_lookup_regs(int index,
struct _cpuid4_info_regs *this_leaf)
static int __cpuinit find_num_cache_leaves(void)
unsigned int __cpuinit init_intel_cacheinfo(struct cpuinfo_x86 *c)
static DEFINE_PER_CPU(struct _cpuid4_info *, ici_cpuid4_info);
#define CPUID4_INFO_IDX(x, y)	(&((per_cpu(ici_cpuid4_info, x))[y]))
static void __cpuinit cache_shared_cpu_map_setup(unsigned int cpu, int index)
static void __cpuinit cache_remove_shared_cpu_map(unsigned int cpu, int index)
static void __cpuinit cache_shared_cpu_map_setup(unsigned int cpu, int index)
static void __cpuinit cache_remove_shared_cpu_map(unsigned int cpu, int index)
static void __cpuinit free_cache_attributes(unsigned int cpu)
static int
__cpuinit cpuid4_cache_lookup(int index, struct _cpuid4_info *this_leaf)
static void __cpuinit get_cpu_leaves(void *_retval)
static int __cpuinit detect_cache_attributes(unsigned int cpu)
extern struct sysdev_class cpu_sysdev_class;
static DEFINE_PER_CPU(struct kobject *, ici_cache_kobject);
struct _index_kobject ;
static DEFINE_PER_CPU(struct _index_kobject *, ici_index_kobject);
#define INDEX_KOBJECT_PTR(x, y)		(&((per_cpu(ici_index_kobject, x))[y]))
#define show_one_plus(file_name, object, val)				\
static ssize_t show_##file_name(struct _cpuid4_info *this_leaf, char *buf, \
unsigned int cpu)			\
show_one_plus(level, eax.split.level, 0);
show_one_plus(coherency_line_size, ebx.split.coherency_line_size, 1);
show_one_plus(physical_line_partition, ebx.split.physical_line_partition, 1);
show_one_plus(ways_of_associativity, ebx.split.ways_of_associativity, 1);
show_one_plus(number_of_sets, ecx.split.number_of_sets, 1);
static ssize_t show_size(struct _cpuid4_info *this_leaf, char *buf,
unsigned int cpu)
static ssize_t show_shared_cpu_map_func(struct _cpuid4_info *this_leaf,
int type, char *buf)
static inline ssize_t show_shared_cpu_map(struct _cpuid4_info *leaf, char *buf,
unsigned int cpu)
static inline ssize_t show_shared_cpu_list(struct _cpuid4_info *leaf, char *buf,
unsigned int cpu)
static ssize_t show_type(struct _cpuid4_info *this_leaf, char *buf,
unsigned int cpu)
#define to_object(k)	container_of(k, struct _index_kobject, kobj)
#define to_attr(a)	container_of(a, struct _cache_attr, attr)
#define define_one_ro(_name) \
static struct _cache_attr _name = \
__ATTR(_name, 0444, show_##_name, NULL)
define_one_ro(level);
define_one_ro(type);
define_one_ro(coherency_line_size);
define_one_ro(physical_line_partition);
define_one_ro(ways_of_associativity);
define_one_ro(number_of_sets);
define_one_ro(size);
define_one_ro(shared_cpu_map);
define_one_ro(shared_cpu_list);
static struct attribute *default_attrs[] = ;
static struct attribute ** __cpuinit amd_l3_attrs(void)
static ssize_t show(struct kobject *kobj, struct attribute *attr, char *buf)
static ssize_t store(struct kobject *kobj, struct attribute *attr,
const char *buf, size_t count)
static const struct sysfs_ops sysfs_ops = ;
static struct kobj_type ktype_cache = ;
static struct kobj_type ktype_percpu_entry = ;
static void __cpuinit cpuid4_cache_sysfs_exit(unsigned int cpu)
static int __cpuinit cpuid4_cache_sysfs_init(unsigned int cpu)
static DECLARE_BITMAP(cache_dev_map, NR_CPUS);
static int __cpuinit cache_add_dev(struct sys_device * sys_dev)
static void __cpuinit cache_remove_dev(struct sys_device * sys_dev)
static int __cpuinit cacheinfo_cpu_callback(struct notifier_block *nfb,
unsigned long action, void *hcpu)
static struct notifier_block __cpuinitdata cacheinfo_cpu_notifier = ;
static int __cpuinit cache_sysfs_init(void)
device_initcall(cache_sysfs_init);
