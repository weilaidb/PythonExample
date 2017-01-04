#define PCI_DEVICE_ID_CISCO_FNIC	0x0045
#define FNIC_NOTIFY_TIMER_PERIOD	(2 * HZ)
static struct kmem_cache *fnic_sgl_cache[FNIC_SGL_NUM_CACHES];
static struct kmem_cache *fnic_io_req_cache;
LIST_HEAD(fnic_list);
DEFINE_SPINLOCK(fnic_list_lock);
static struct pci_device_id fnic_id_table[] = ;
MODULE_DESCRIPTION(DRV_DESCRIPTION);
MODULE_AUTHOR("Abhijeet Joglekar <abjoglek@cisco.com>, "
"Joseph R. Eykholt <jeykholt@cisco.com>");
MODULE_LICENSE("GPL v2");
MODULE_VERSION(DRV_VERSION);
MODULE_DEVICE_TABLE(pci, fnic_id_table);
unsigned int fnic_log_level;
module_param(fnic_log_level, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(fnic_log_level, "bit mask of fnic logging levels");
static struct libfc_function_template fnic_transport_template = ;
static int fnic_slave_alloc(struct scsi_device *sdev)
static struct scsi_host_template fnic_host_template = ;
static void
fnic_set_rport_dev_loss_tmo(struct fc_rport *rport, u32 timeout)
static void fnic_get_host_speed(struct Scsi_Host *shost);
static struct scsi_transport_template *fnic_fc_transport;
static struct fc_host_statistics *fnic_get_stats(struct Scsi_Host *);
static struct fc_function_template fnic_fc_functions = ;
static void fnic_get_host_speed(struct Scsi_Host *shost)
static struct fc_host_statistics *fnic_get_stats(struct Scsi_Host *host)
void fnic_log_q_error(struct fnic *fnic)
void fnic_handle_link_event(struct fnic *fnic)
static int fnic_notify_set(struct fnic *fnic)
static void fnic_notify_timer(unsigned long data)
static void fnic_notify_timer_start(struct fnic *fnic)
static int fnic_dev_wait(struct vnic_dev *vdev,
int (*start)(struct vnic_dev *, int),
int (*finished)(struct vnic_dev *, int *),
int arg)
static int fnic_cleanup(struct fnic *fnic)
static void fnic_iounmap(struct fnic *fnic)
static void *fnic_alloc_slab_dma(gfp_t gfp_mask, void *pool_data)
static u8 *fnic_get_mac(struct fc_lport *lport)
static int __devinit fnic_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit fnic_remove(struct pci_dev *pdev)
static struct pci_driver fnic_driver = ;
static int __init fnic_init_module(void)
static void __exit fnic_cleanup_module(void)
module_init(fnic_init_module);
module_exit(fnic_cleanup_module);
