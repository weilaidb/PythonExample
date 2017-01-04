static struct ia64_cpu *sysfs_cpus;
void arch_fix_phys_package_id(int num, u32 slot)
EXPORT_SYMBOL_GPL(arch_fix_phys_package_id);
int __ref arch_register_cpu(int num)
EXPORT_SYMBOL(arch_register_cpu);
void __ref arch_unregister_cpu(int num)
EXPORT_SYMBOL(arch_unregister_cpu);
static int __init arch_register_cpu(int num)
static int __init topology_init(void)
subsys_initcall(topology_init);
static const char *cache_types[] = ;
static const char *cache_mattrib[]=;
struct cache_info ;
struct cpu_cache_info ;
static struct cpu_cache_info	all_cpu_cache_info[NR_CPUS] __cpuinitdata;
#define LEAF_KOBJECT_PTR(x,y)    (&all_cpu_cache_info[x].cache_leaves[y])
static void __cpuinit cache_shared_cpu_map_setup( unsigned int cpu,
struct cache_info * this_leaf)
static void __cpuinit cache_shared_cpu_map_setup(unsigned int cpu,
struct cache_info * this_leaf)
static ssize_t show_coherency_line_size(struct cache_info *this_leaf,
char *buf)
static ssize_t show_ways_of_associativity(struct cache_info *this_leaf,
char *buf)
static ssize_t show_attributes(struct cache_info *this_leaf, char *buf)
static ssize_t show_size(struct cache_info *this_leaf, char *buf)
static ssize_t show_number_of_sets(struct cache_info *this_leaf, char *buf)
static ssize_t show_shared_cpu_map(struct cache_info *this_leaf, char *buf)
static ssize_t show_type(struct cache_info *this_leaf, char *buf)
static ssize_t show_level(struct cache_info *this_leaf, char *buf)
struct cache_attr ;
#undef define_one_ro
#define define_one_ro(_name) \
static struct cache_attr _name = \
__ATTR(_name, 0444, show_##_name, NULL)
define_one_ro(level);
define_one_ro(type);
define_one_ro(coherency_line_size);
define_one_ro(ways_of_associativity);
define_one_ro(size);
define_one_ro(number_of_sets);
define_one_ro(shared_cpu_map);
define_one_ro(attributes);
static struct attribute * cache_default_attrs[] = ;
#define to_object(k) container_of(k, struct cache_info, kobj)
#define to_attr(a) container_of(a, struct cache_attr, attr)
static ssize_t cache_show(struct kobject * kobj, struct attribute * attr, char * buf)
static const struct sysfs_ops cache_sysfs_ops = ;
static struct kobj_type cache_ktype = ;
static struct kobj_type cache_ktype_percpu_entry = ;
static void __cpuinit cpu_cache_sysfs_exit(unsigned int cpu)
static int __cpuinit cpu_cache_sysfs_init(unsigned int cpu)
static int __cpuinit cache_add_dev(struct sys_device * sys_dev)
static int __cpuinit cache_remove_dev(struct sys_device * sys_dev)
static int __cpuinit cache_cpu_callback(struct notifier_block *nfb,
unsigned long action, void *hcpu)
static struct notifier_block __cpuinitdata cache_cpu_notifier =
;
static int __init cache_sysfs_init(void)
device_initcall(cache_sysfs_init);
