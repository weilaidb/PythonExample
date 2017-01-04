#define HCAD_VERSION "0029"
MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Christoph Raisch <raisch@de.ibm.com>");
MODULE_DESCRIPTION("IBM eServer HCA InfiniBand Device Driver");
MODULE_VERSION(HCAD_VERSION);
static int ehca_open_aqp1     = 0;
static int ehca_hw_level      = 0;
static int ehca_poll_all_eqs  = 1;
int ehca_debug_level   = 0;
int ehca_nr_ports      = -1;
int ehca_use_hp_mr     = 0;
int ehca_port_act_time = 30;
int ehca_static_rate   = -1;
int ehca_scaling_code  = 0;
int ehca_lock_hcalls   = -1;
int ehca_max_cq        = -1;
int ehca_max_qp        = -1;
module_param_named(open_aqp1,     ehca_open_aqp1,     bool, S_IRUGO);
module_param_named(debug_level,   ehca_debug_level,   int,  S_IRUGO);
module_param_named(hw_level,      ehca_hw_level,      int,  S_IRUGO);
module_param_named(nr_ports,      ehca_nr_ports,      int,  S_IRUGO);
module_param_named(use_hp_mr,     ehca_use_hp_mr,     bool, S_IRUGO);
module_param_named(port_act_time, ehca_port_act_time, int,  S_IRUGO);
module_param_named(poll_all_eqs,  ehca_poll_all_eqs,  bool, S_IRUGO);
module_param_named(static_rate,   ehca_static_rate,   int,  S_IRUGO);
module_param_named(scaling_code,  ehca_scaling_code,  bool, S_IRUGO);
module_param_named(lock_hcalls,   ehca_lock_hcalls,   bool, S_IRUGO);
module_param_named(number_of_cqs, ehca_max_cq,        int,  S_IRUGO);
module_param_named(number_of_qps, ehca_max_qp,        int,  S_IRUGO);
MODULE_PARM_DESC(open_aqp1,
"Open AQP1 on startup (default: no)");
MODULE_PARM_DESC(debug_level,
"Amount of debug output (0: none (default), 1: traces, "
"2: some dumps, 3: lots)");
MODULE_PARM_DESC(hw_level,
"Hardware level (0: autosensing (default), "
"0x10..0x14: eHCA, 0x20..0x23: eHCA2)");
MODULE_PARM_DESC(nr_ports,
"number of connected ports (-1: autodetect (default), "
"1: port one only, 2: two ports)");
MODULE_PARM_DESC(use_hp_mr,
"Use high performance MRs (default: no)");
MODULE_PARM_DESC(port_act_time,
"Time to wait for port activation (default: 30 sec)");
MODULE_PARM_DESC(poll_all_eqs,
"Poll all event queues periodically (default: yes)");
MODULE_PARM_DESC(static_rate,
"Set permanent static rate (default: no static rate)");
MODULE_PARM_DESC(scaling_code,
"Enable scaling code (default: no)");
MODULE_PARM_DESC(lock_hcalls,
"Serialize all hCalls made by the driver "
"(default: autodetect)");
MODULE_PARM_DESC(number_of_cqs,
"Max number of CQs which can be allocated "
"(default: autodetect)");
MODULE_PARM_DESC(number_of_qps,
"Max number of QPs which can be allocated "
"(default: autodetect)");
DEFINE_RWLOCK(ehca_qp_idr_lock);
DEFINE_RWLOCK(ehca_cq_idr_lock);
DEFINE_IDR(ehca_qp_idr);
DEFINE_IDR(ehca_cq_idr);
static LIST_HEAD(shca_list);
DEFINE_SPINLOCK(shca_list_lock);
static struct timer_list poll_eqs_timer;
static struct kmem_cache *ctblk_cache;
void *ehca_alloc_fw_ctrlblock(gfp_t flags)
void ehca_free_fw_ctrlblock(void *ptr)
int ehca2ib_return_code(u64 ehca_rc)
static int ehca_create_slab_caches(void)
static void ehca_destroy_slab_caches(void)
#define EHCA_HCAAVER  EHCA_BMASK_IBM(32, 39)
#define EHCA_REVID    EHCA_BMASK_IBM(40, 63)
static struct cap_descr  hca_cap_descr[] = ;
static int ehca_sense_attributes(struct ehca_shca *shca)
static int init_node_guid(struct ehca_shca *shca)
static int ehca_init_device(struct ehca_shca *shca)
static int ehca_create_aqp1(struct ehca_shca *shca, u32 port)
static int ehca_destroy_aqp1(struct ehca_sport *sport)
static ssize_t ehca_show_debug_level(struct device_driver *ddp, char *buf)
static ssize_t ehca_store_debug_level(struct device_driver *ddp,
const char *buf, size_t count)
static DRIVER_ATTR(debug_level, S_IRUSR | S_IWUSR,
ehca_show_debug_level, ehca_store_debug_level);
static struct attribute *ehca_drv_attrs[] = ;
static struct attribute_group ehca_drv_attr_grp = ;
static const struct attribute_group *ehca_drv_attr_groups[] = ;
#define EHCA_RESOURCE_ATTR(name)                                           \
static ssize_t  ehca_show_##name(struct device *dev,                       \
struct device_attribute *attr,            \
char *buf)                                \
\
static DEVICE_ATTR(name, S_IRUGO, ehca_show_##name, NULL);
EHCA_RESOURCE_ATTR(num_ports);
EHCA_RESOURCE_ATTR(hw_ver);
EHCA_RESOURCE_ATTR(max_eq);
EHCA_RESOURCE_ATTR(cur_eq);
EHCA_RESOURCE_ATTR(max_cq);
EHCA_RESOURCE_ATTR(cur_cq);
EHCA_RESOURCE_ATTR(max_qp);
EHCA_RESOURCE_ATTR(cur_qp);
EHCA_RESOURCE_ATTR(max_mr);
EHCA_RESOURCE_ATTR(cur_mr);
EHCA_RESOURCE_ATTR(max_mw);
EHCA_RESOURCE_ATTR(cur_mw);
EHCA_RESOURCE_ATTR(max_pd);
EHCA_RESOURCE_ATTR(max_ah);
static ssize_t ehca_show_adapter_handle(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(adapter_handle, S_IRUGO, ehca_show_adapter_handle, NULL);
static struct attribute *ehca_dev_attrs[] = ;
static struct attribute_group ehca_dev_attr_grp = ;
static int __devinit ehca_probe(struct platform_device *dev,
const struct of_device_id *id)
static int __devexit ehca_remove(struct platform_device *dev)
static struct of_device_id ehca_device_table[] =
;
MODULE_DEVICE_TABLE(of, ehca_device_table);
static struct of_platform_driver ehca_driver = ;
void ehca_poll_eqs(unsigned long data)
static int ehca_mem_notifier(struct notifier_block *nb,
unsigned long action, void *data)
static struct notifier_block ehca_mem_nb = ;
static int __init ehca_module_init(void)
;
static void __exit ehca_module_exit(void)
;
module_init(ehca_module_init);
module_exit(ehca_module_exit);
