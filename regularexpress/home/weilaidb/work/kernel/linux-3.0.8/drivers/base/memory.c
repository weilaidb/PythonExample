static DEFINE_MUTEX(mem_sysfs_mutex);
#define MEMORY_CLASS_NAME	"memory"
static int sections_per_block;
static inline int base_memory_block_id(int section_nr)
static struct sysdev_class memory_sysdev_class = ;
static const char *memory_uevent_name(struct kset *kset, struct kobject *kobj)
static int memory_uevent(struct kset *kset, struct kobject *obj,
struct kobj_uevent_env *env)
static const struct kset_uevent_ops memory_uevent_ops = ;
static BLOCKING_NOTIFIER_HEAD(memory_chain);
int register_memory_notifier(struct notifier_block *nb)
EXPORT_SYMBOL(register_memory_notifier);
void unregister_memory_notifier(struct notifier_block *nb)
EXPORT_SYMBOL(unregister_memory_notifier);
static ATOMIC_NOTIFIER_HEAD(memory_isolate_chain);
int register_memory_isolate_notifier(struct notifier_block *nb)
EXPORT_SYMBOL(register_memory_isolate_notifier);
void unregister_memory_isolate_notifier(struct notifier_block *nb)
EXPORT_SYMBOL(unregister_memory_isolate_notifier);
static
int register_memory(struct memory_block *memory)
static void
unregister_memory(struct memory_block *memory)
unsigned long __weak memory_block_size_bytes(void)
static unsigned long get_memory_block_size(void)
static ssize_t show_mem_start_phys_index(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static ssize_t show_mem_end_phys_index(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static ssize_t show_mem_removable(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static ssize_t show_mem_state(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
int memory_notify(unsigned long val, void *v)
int memory_isolate_notify(unsigned long val, void *v)
static int
memory_block_action(unsigned long phys_index, unsigned long action)
static int memory_block_change_state(struct memory_block *mem,
unsigned long to_state, unsigned long from_state_req)
static ssize_t
store_mem_state(struct sys_device *dev,
struct sysdev_attribute *attr, const char *buf, size_t count)
static ssize_t show_phys_device(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static SYSDEV_ATTR(phys_index, 0444, show_mem_start_phys_index, NULL);
static SYSDEV_ATTR(end_phys_index, 0444, show_mem_end_phys_index, NULL);
static SYSDEV_ATTR(state, 0644, show_mem_state, store_mem_state);
static SYSDEV_ATTR(phys_device, 0444, show_phys_device, NULL);
static SYSDEV_ATTR(removable, 0444, show_mem_removable, NULL);
#define mem_create_simple_file(mem, attr_name)	\
sysdev_create_file(&mem->sysdev, &attr_##attr_name)
#define mem_remove_simple_file(mem, attr_name)	\
sysdev_remove_file(&mem->sysdev, &attr_##attr_name)
static ssize_t
print_block_size(struct sysdev_class *class, struct sysdev_class_attribute *attr,
char *buf)
static SYSDEV_CLASS_ATTR(block_size_bytes, 0444, print_block_size, NULL);
static int block_size_init(void)
static ssize_t
memory_probe_store(struct class *class, struct class_attribute *attr,
const char *buf, size_t count)
static CLASS_ATTR(probe, S_IWUSR, NULL, memory_probe_store);
static int memory_probe_init(void)
static inline int memory_probe_init(void)
static ssize_t
store_soft_offline_page(struct class *class,
struct class_attribute *attr,
const char *buf, size_t count)
static ssize_t
store_hard_offline_page(struct class *class,
struct class_attribute *attr,
const char *buf, size_t count)
static CLASS_ATTR(soft_offline_page, 0644, NULL, store_soft_offline_page);
static CLASS_ATTR(hard_offline_page, 0644, NULL, store_hard_offline_page);
static __init int memory_fail_init(void)
static inline int memory_fail_init(void)
int __weak arch_get_memory_phys_device(unsigned long start_pfn)
struct memory_block *find_memory_block_hinted(struct mem_section *section,
struct memory_block *hint)
struct memory_block *find_memory_block(struct mem_section *section)
static int init_memory_block(struct memory_block **memory,
struct mem_section *section, unsigned long state)
static int add_memory_section(int nid, struct mem_section *section,
unsigned long state, enum mem_add_context context)
int remove_memory_block(unsigned long node_id, struct mem_section *section,
int phys_device)
int register_new_memory(int nid, struct mem_section *section)
int unregister_memory_section(struct mem_section *section)
int __init memory_dev_init(void)
