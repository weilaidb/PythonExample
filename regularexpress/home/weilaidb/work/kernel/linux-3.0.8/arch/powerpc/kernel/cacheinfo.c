struct cache_dir ;
struct cache_index_dir ;
struct cache_type_info ;
#define CACHE_TYPE_UNIFIED     0
#define CACHE_TYPE_INSTRUCTION 1
#define CACHE_TYPE_DATA        2
static const struct cache_type_info cache_type_info[] = ;
struct cache ;
static DEFINE_PER_CPU(struct cache_dir *, cache_dir_pcpu);
static LIST_HEAD(cache_list);
static struct cache_index_dir *kobj_to_cache_index_dir(struct kobject *k)
static const char *cache_type_string(const struct cache *cache)
static void __cpuinit cache_init(struct cache *cache, int type, int level, struct device_node *ofnode)
static struct cache *__cpuinit new_cache(int type, int level, struct device_node *ofnode)
static void release_cache_debugcheck(struct cache *cache)
static void release_cache(struct cache *cache)
static void cache_cpu_set(struct cache *cache, int cpu)
static int cache_size(const struct cache *cache, unsigned int *ret)
static int cache_size_kb(const struct cache *cache, unsigned int *ret)
static int cache_get_line_size(const struct cache *cache, unsigned int *ret)
static int cache_nr_sets(const struct cache *cache, unsigned int *ret)
static int cache_associativity(const struct cache *cache, unsigned int *ret)
static struct cache *cache_find_first_sibling(struct cache *cache)
static struct cache *cache_lookup_by_node(const struct device_node *node)
static bool cache_node_is_unified(const struct device_node *np)
static struct cache *__cpuinit cache_do_one_devnode_unified(struct device_node *node, int level)
static struct cache *__cpuinit cache_do_one_devnode_split(struct device_node *node, int level)
static struct cache *__cpuinit cache_do_one_devnode(struct device_node *node, int level)
static struct cache *__cpuinit cache_lookup_or_instantiate(struct device_node *node, int level)
static void __cpuinit link_cache_lists(struct cache *smaller, struct cache *bigger)
static void __cpuinit do_subsidiary_caches_debugcheck(struct cache *cache)
static void __cpuinit do_subsidiary_caches(struct cache *cache)
static struct cache *__cpuinit cache_chain_instantiate(unsigned int cpu_id)
static struct cache_dir *__cpuinit cacheinfo_create_cache_dir(unsigned int cpu_id)
static void cache_index_release(struct kobject *kobj)
static ssize_t cache_index_show(struct kobject *k, struct attribute *attr, char *buf)
static struct cache *index_kobj_to_cache(struct kobject *k)
static ssize_t size_show(struct kobject *k, struct kobj_attribute *attr, char *buf)
static struct kobj_attribute cache_size_attr =
__ATTR(size, 0444, size_show, NULL);
static ssize_t line_size_show(struct kobject *k, struct kobj_attribute *attr, char *buf)
static struct kobj_attribute cache_line_size_attr =
__ATTR(coherency_line_size, 0444, line_size_show, NULL);
static ssize_t nr_sets_show(struct kobject *k, struct kobj_attribute *attr, char *buf)
static struct kobj_attribute cache_nr_sets_attr =
__ATTR(number_of_sets, 0444, nr_sets_show, NULL);
static ssize_t associativity_show(struct kobject *k, struct kobj_attribute *attr, char *buf)
static struct kobj_attribute cache_assoc_attr =
__ATTR(ways_of_associativity, 0444, associativity_show, NULL);
static ssize_t type_show(struct kobject *k, struct kobj_attribute *attr, char *buf)
static struct kobj_attribute cache_type_attr =
__ATTR(type, 0444, type_show, NULL);
static ssize_t level_show(struct kobject *k, struct kobj_attribute *attr, char *buf)
static struct kobj_attribute cache_level_attr =
__ATTR(level, 0444, level_show, NULL);
static ssize_t shared_cpu_map_show(struct kobject *k, struct kobj_attribute *attr, char *buf)
static struct kobj_attribute cache_shared_cpu_map_attr =
__ATTR(shared_cpu_map, 0444, shared_cpu_map_show, NULL);
static struct attribute *cache_index_default_attrs[] = ;
static struct kobj_attribute *cache_index_opt_attrs[] = ;
static const struct sysfs_ops cache_index_ops = ;
static struct kobj_type cache_index_type = ;
static void __cpuinit cacheinfo_create_index_opt_attrs(struct cache_index_dir *dir)
static void __cpuinit cacheinfo_create_index_dir(struct cache *cache, int index, struct cache_dir *cache_dir)
static void __cpuinit cacheinfo_sysfs_populate(unsigned int cpu_id, struct cache *cache_list)
void __cpuinit cacheinfo_cpu_online(unsigned int cpu_id)
static struct cache *cache_lookup_by_cpu(unsigned int cpu_id)
static void remove_index_dirs(struct cache_dir *cache_dir)
static void remove_cache_dir(struct cache_dir *cache_dir)
static void cache_cpu_clear(struct cache *cache, int cpu)
void cacheinfo_cpu_offline(unsigned int cpu_id)
