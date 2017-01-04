static void *sn_hwperf_salheap = NULL;
static int sn_hwperf_obj_cnt = 0;
static nasid_t sn_hwperf_master_nasid = INVALID_NASID;
static int sn_hwperf_init(void);
static DEFINE_MUTEX(sn_hwperf_init_mutex);
#define cnode_possible(n)	((n) < num_cnodes)
static int sn_hwperf_enum_objects(int *nobj, struct sn_hwperf_object_info **ret)
static int sn_hwperf_location_to_bpos(char *location,
int *rack, int *bay, int *slot, int *slab)
static int sn_hwperf_geoid_to_cnode(char *location)
static int sn_hwperf_obj_to_cnode(struct sn_hwperf_object_info * obj)
static int sn_hwperf_generic_ordinal(struct sn_hwperf_object_info *obj,
struct sn_hwperf_object_info *objs)
static const char *slabname_node =	"node";
static const char *slabname_ionode =	"ionode";
static const char *slabname_router =	"router";
static const char *slabname_other =	"other";
static const char *sn_hwperf_get_slabname(struct sn_hwperf_object_info *obj,
struct sn_hwperf_object_info *objs, int *ordinal)
static void print_pci_topology(struct seq_file *s)
static inline int sn_hwperf_has_cpus(cnodeid_t node)
static inline int sn_hwperf_has_mem(cnodeid_t node)
static struct sn_hwperf_object_info *
sn_hwperf_findobj_id(struct sn_hwperf_object_info *objbuf,
int nobj, int id)
static int sn_hwperf_get_nearest_node_objdata(struct sn_hwperf_object_info *objbuf,
int nobj, cnodeid_t node, cnodeid_t *near_mem_node, cnodeid_t *near_cpu_node)
static int sn_topology_show(struct seq_file *s, void *d)
static void *sn_topology_start(struct seq_file *s, loff_t * pos)
static void *sn_topology_next(struct seq_file *s, void *v, loff_t * pos)
static void sn_topology_stop(struct seq_file *m, void *v)
static const struct seq_operations sn_topology_seq_ops = ;
struct sn_hwperf_op_info ;
static void sn_hwperf_call_sal(void *info)
static int sn_hwperf_op_cpu(struct sn_hwperf_op_info *op_info)
static int sn_hwperf_map_err(int hwperf_err)
static long sn_hwperf_ioctl(struct file *fp, u32 op, unsigned long arg)
static const struct file_operations sn_hwperf_fops = ;
static struct miscdevice sn_hwperf_dev = ;
static int sn_hwperf_init(void)
int sn_topology_open(struct inode *inode, struct file *file)
int sn_topology_release(struct inode *inode, struct file *file)
int sn_hwperf_get_nearest_node(cnodeid_t node,
cnodeid_t *near_mem_node, cnodeid_t *near_cpu_node)
static int __devinit sn_hwperf_misc_register_init(void)
device_initcall(sn_hwperf_misc_register_init);
EXPORT_SYMBOL(sn_hwperf_get_nearest_node);
