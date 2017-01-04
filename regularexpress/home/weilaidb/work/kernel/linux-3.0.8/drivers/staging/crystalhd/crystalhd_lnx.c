static DEFINE_MUTEX(chd_dec_mutex);
static struct class *crystalhd_class;
static struct crystalhd_adp *g_adp_info;
static irqreturn_t chd_dec_isr(int irq, void *arg)
static int chd_dec_enable_int(struct crystalhd_adp *adp)
static int chd_dec_disable_int(struct crystalhd_adp *adp)
struct crystalhd_ioctl_data *chd_dec_alloc_iodata(struct crystalhd_adp *adp, bool isr)
void chd_dec_free_iodata(struct crystalhd_adp *adp, struct crystalhd_ioctl_data *iodata,
bool isr)
static inline int crystalhd_user_data(unsigned long ud, void *dr, int size, int set)
static int chd_dec_fetch_cdata(struct crystalhd_adp *adp, struct crystalhd_ioctl_data *io,
uint32_t m_sz, unsigned long ua)
static int chd_dec_release_cdata(struct crystalhd_adp *adp,
struct crystalhd_ioctl_data *io, unsigned long ua)
static int chd_dec_proc_user_data(struct crystalhd_adp *adp,
struct crystalhd_ioctl_data *io,
unsigned long ua, int set)
static int chd_dec_api_cmd(struct crystalhd_adp *adp, unsigned long ua,
uint32_t uid, uint32_t cmd, crystalhd_cmd_proc func)
static long chd_dec_ioctl(struct file *fd, unsigned int cmd, unsigned long ua)
static int chd_dec_open(struct inode *in, struct file *fd)
static int chd_dec_close(struct inode *in, struct file *fd)
static const struct file_operations chd_dec_fops = ;
static int __devinit chd_dec_init_chdev(struct crystalhd_adp *adp)
static void __devexit chd_dec_release_chdev(struct crystalhd_adp *adp)
static int __devinit chd_pci_reserve_mem(struct crystalhd_adp *pinfo)
static void __devexit chd_pci_release_mem(struct crystalhd_adp *pinfo)
static void __devexit chd_dec_pci_remove(struct pci_dev *pdev)
static int __devinit chd_dec_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *entry)
int chd_dec_pci_suspend(struct pci_dev *pdev, pm_message_t state)
int chd_dec_pci_resume(struct pci_dev *pdev)
static DEFINE_PCI_DEVICE_TABLE(chd_dec_pci_id_table) = ;
MODULE_DEVICE_TABLE(pci, chd_dec_pci_id_table);
static struct pci_driver bc_chd_70012_driver = ;
void chd_set_log_level(struct crystalhd_adp *adp, char *arg)
struct crystalhd_adp *chd_get_adp(void)
static int __init chd_dec_module_init(void)
module_init(chd_dec_module_init);
static void __exit chd_dec_module_cleanup(void)
module_exit(chd_dec_module_cleanup);
MODULE_AUTHOR("Naren Sankar <nsankar@broadcom.com>");
MODULE_AUTHOR("Prasad Bolisetty <prasadb@broadcom.com>");
MODULE_DESCRIPTION(CRYSTAL_HD_NAME);
MODULE_LICENSE("GPL");
MODULE_ALIAS("bcm70012");
