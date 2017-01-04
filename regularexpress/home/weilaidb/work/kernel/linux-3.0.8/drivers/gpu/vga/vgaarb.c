static void vga_arbiter_notify_clients(void);
struct vga_device ;
static LIST_HEAD(vga_list);
static int vga_count, vga_decode_count;
static bool vga_arbiter_used;
static DEFINE_SPINLOCK(vga_lock);
static DECLARE_WAIT_QUEUE_HEAD(vga_wait_queue);
static const char *vga_iostate_to_str(unsigned int iostate)
static int vga_str_to_iostate(char *buf, int str_size, int *io_state)
static struct pci_dev *vga_default;
static void vga_arb_device_card_gone(struct pci_dev *pdev);
static struct vga_device *vgadev_find(struct pci_dev *pdev)
struct pci_dev *vga_default_device(void)
static inline void vga_irq_set_state(struct vga_device *vgadev, bool state)
static void vga_check_first_use(void)
static struct vga_device *__vga_tryget(struct vga_device *vgadev,
unsigned int rsrc)
static void __vga_put(struct vga_device *vgadev, unsigned int rsrc)
int vga_get(struct pci_dev *pdev, unsigned int rsrc, int interruptible)
EXPORT_SYMBOL(vga_get);
int vga_tryget(struct pci_dev *pdev, unsigned int rsrc)
EXPORT_SYMBOL(vga_tryget);
void vga_put(struct pci_dev *pdev, unsigned int rsrc)
EXPORT_SYMBOL(vga_put);
static void vga_arbiter_check_bridge_sharing(struct vga_device *vgadev)
static bool vga_arbiter_add_pci_device(struct pci_dev *pdev)
static bool vga_arbiter_del_pci_device(struct pci_dev *pdev)
static inline void vga_update_device_decodes(struct vga_device *vgadev,
int new_decodes)
static void __vga_set_legacy_decoding(struct pci_dev *pdev, unsigned int decodes, bool userspace)
void vga_set_legacy_decoding(struct pci_dev *pdev, unsigned int decodes)
EXPORT_SYMBOL(vga_set_legacy_decoding);
int vga_client_register(struct pci_dev *pdev, void *cookie,
void (*irq_set_state)(void *cookie, bool state),
unsigned int (*set_vga_decode)(void *cookie, bool decode))
EXPORT_SYMBOL(vga_client_register);
#define MAX_USER_CARDS         CONFIG_VGA_ARB_MAX_GPUS
#define PCI_INVALID_CARD       ((struct pci_dev *)-1UL)
struct vga_arb_user_card ;
struct vga_arb_private ;
static LIST_HEAD(vga_user_list);
static DEFINE_SPINLOCK(vga_user_lock);
static int vga_pci_str_to_vars(char *buf, int count, unsigned int *domain,
unsigned int *bus, unsigned int *devfn)
static ssize_t vga_arb_read(struct file *file, char __user * buf,
size_t count, loff_t *ppos)
static ssize_t vga_arb_write(struct file *file, const char __user * buf,
size_t count, loff_t *ppos)
static unsigned int vga_arb_fpoll(struct file *file, poll_table * wait)
static int vga_arb_open(struct inode *inode, struct file *file)
static int vga_arb_release(struct inode *inode, struct file *file)
static void vga_arb_device_card_gone(struct pci_dev *pdev)
static void vga_arbiter_notify_clients(void)
static int pci_notify(struct notifier_block *nb, unsigned long action,
void *data)
static struct notifier_block pci_notifier = ;
static const struct file_operations vga_arb_device_fops = ;
static struct miscdevice vga_arb_device = ;
static int __init vga_arb_device_init(void)
subsys_initcall(vga_arb_device_init);
