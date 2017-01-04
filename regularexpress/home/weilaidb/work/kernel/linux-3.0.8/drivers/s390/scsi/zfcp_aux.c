#define KMSG_COMPONENT "zfcp"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define ZFCP_BUS_ID_SIZE	20
MODULE_AUTHOR("IBM Deutschland Entwicklung GmbH - linux390@de.ibm.com");
MODULE_DESCRIPTION("FCP HBA driver");
MODULE_LICENSE("GPL");
static char *init_device;
module_param_named(device, init_device, charp, 0400);
MODULE_PARM_DESC(device, "specify initial device");
static struct kmem_cache * __init zfcp_cache_hw_align(const char *name,
unsigned long size)
static void __init zfcp_init_device_configure(char *busid, u64 wwpn, u64 lun)
static void __init zfcp_init_device_setup(char *devstr)
static int __init zfcp_module_init(void)
module_init(zfcp_module_init);
static void __exit zfcp_module_exit(void)
module_exit(zfcp_module_exit);
struct zfcp_port *zfcp_get_port_by_wwpn(struct zfcp_adapter *adapter,
u64 wwpn)
static int zfcp_allocate_low_mem_buffers(struct zfcp_adapter *adapter)
static void zfcp_free_low_mem_buffers(struct zfcp_adapter *adapter)
int zfcp_status_read_refill(struct zfcp_adapter *adapter)
static void _zfcp_status_read_scheduler(struct work_struct *work)
static void zfcp_print_sl(struct seq_file *m, struct service_level *sl)
static int zfcp_setup_adapter_work_queue(struct zfcp_adapter *adapter)
static void zfcp_destroy_adapter_work_queue(struct zfcp_adapter *adapter)
struct zfcp_adapter *zfcp_adapter_enqueue(struct ccw_device *ccw_device)
void zfcp_adapter_unregister(struct zfcp_adapter *adapter)
void zfcp_adapter_release(struct kref *ref)
void zfcp_device_unregister(struct device *dev,
const struct attribute_group *grp)
static void zfcp_port_release(struct device *dev)
struct zfcp_port *zfcp_port_enqueue(struct zfcp_adapter *adapter, u64 wwpn,
u32 status, u32 d_id)
void zfcp_sg_free_table(struct scatterlist *sg, int count)
int zfcp_sg_setup_table(struct scatterlist *sg, int count)
