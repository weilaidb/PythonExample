static struct sysdev_class_attribute *node_state_attrs[];
static struct sysdev_class node_class = ;
static ssize_t node_read_cpumap(struct sys_device *dev, int type, char *buf)
static inline ssize_t node_read_cpumask(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static inline ssize_t node_read_cpulist(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static SYSDEV_ATTR(cpumap,  S_IRUGO, node_read_cpumask, NULL);
static SYSDEV_ATTR(cpulist, S_IRUGO, node_read_cpulist, NULL);
#define K(x) ((x) << (PAGE_SHIFT - 10))
static ssize_t node_read_meminfo(struct sys_device * dev,
struct sysdev_attribute *attr, char * buf)
#undef K
static SYSDEV_ATTR(meminfo, S_IRUGO, node_read_meminfo, NULL);
static ssize_t node_read_numastat(struct sys_device * dev,
struct sysdev_attribute *attr, char * buf)
static SYSDEV_ATTR(numastat, S_IRUGO, node_read_numastat, NULL);
static ssize_t node_read_vmstat(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static SYSDEV_ATTR(vmstat, S_IRUGO, node_read_vmstat, NULL);
static ssize_t node_read_distance(struct sys_device * dev,
struct sysdev_attribute *attr, char * buf)
static SYSDEV_ATTR(distance, S_IRUGO, node_read_distance, NULL);
static node_registration_func_t __hugetlb_register_node;
static node_registration_func_t __hugetlb_unregister_node;
static inline bool hugetlb_register_node(struct node *node)
static inline void hugetlb_unregister_node(struct node *node)
void register_hugetlbfs_with_node(node_registration_func_t doregister,
node_registration_func_t unregister)
static inline void hugetlb_register_node(struct node *node)
static inline void hugetlb_unregister_node(struct node *node)
int register_node(struct node *node, int num, struct node *parent)
void unregister_node(struct node *node)
struct node node_devices[MAX_NUMNODES];
int register_cpu_under_node(unsigned int cpu, unsigned int nid)
int unregister_cpu_under_node(unsigned int cpu, unsigned int nid)
#define page_initialized(page)  (page->lru.next)
static int get_nid_for_pfn(unsigned long pfn)
int register_mem_sect_under_node(struct memory_block *mem_blk, int nid)
int unregister_mem_sect_under_nodes(struct memory_block *mem_blk,
unsigned long phys_index)
static int link_mem_sections(int nid)
static void node_hugetlb_work(struct work_struct *work)
static void init_node_hugetlb_work(int nid)
static int node_memory_callback(struct notifier_block *self,
unsigned long action, void *arg)
static int link_mem_sections(int nid)
#if !defined(CONFIG_MEMORY_HOTPLUG_SPARSE) || \
!defined(CONFIG_HUGETLBFS)
static inline int node_memory_callback(struct notifier_block *self,
unsigned long action, void *arg)
static void init_node_hugetlb_work(int nid)
int register_one_node(int nid)
void unregister_one_node(int nid)
static ssize_t print_nodes_state(enum node_states state, char *buf)
struct node_attr ;
static ssize_t show_node_state(struct sysdev_class *class,
struct sysdev_class_attribute *attr, char *buf)
#define _NODE_ATTR(name, state) \
static struct node_attr node_state_attr[] = ;
static struct sysdev_class_attribute *node_state_attrs[] = ;
#define NODE_CALLBACK_PRI	2
static int __init register_node_type(void)
postcore_initcall(register_node_type);
