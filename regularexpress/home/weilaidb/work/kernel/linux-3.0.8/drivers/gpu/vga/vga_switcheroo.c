struct vga_switcheroo_client ;
static DEFINE_MUTEX(vgasr_mutex);
struct vgasr_priv ;
static int vga_switcheroo_debugfs_init(struct vgasr_priv *priv);
static void vga_switcheroo_debugfs_fini(struct vgasr_priv *priv);
static struct vgasr_priv vgasr_priv;
int vga_switcheroo_register_handler(struct vga_switcheroo_handler *handler)
EXPORT_SYMBOL(vga_switcheroo_register_handler);
void vga_switcheroo_unregister_handler(void)
EXPORT_SYMBOL(vga_switcheroo_unregister_handler);
static void vga_switcheroo_enable(void)
int vga_switcheroo_register_client(struct pci_dev *pdev,
void (*set_gpu_state)(struct pci_dev *pdev, enum vga_switcheroo_state),
void (*reprobe)(struct pci_dev *pdev),
bool (*can_switch)(struct pci_dev *pdev))
EXPORT_SYMBOL(vga_switcheroo_register_client);
void vga_switcheroo_unregister_client(struct pci_dev *pdev)
EXPORT_SYMBOL(vga_switcheroo_unregister_client);
void vga_switcheroo_client_fb_set(struct pci_dev *pdev,
struct fb_info *info)
EXPORT_SYMBOL(vga_switcheroo_client_fb_set);
static int vga_switcheroo_show(struct seq_file *m, void *v)
static int vga_switcheroo_debugfs_open(struct inode *inode, struct file *file)
static int vga_switchon(struct vga_switcheroo_client *client)
static int vga_switchoff(struct vga_switcheroo_client *client)
static int vga_switchto_stage1(struct vga_switcheroo_client *new_client)
static int vga_switchto_stage2(struct vga_switcheroo_client *new_client)
static ssize_t
vga_switcheroo_debugfs_write(struct file *filp, const char __user *ubuf,
size_t cnt, loff_t *ppos)
static const struct file_operations vga_switcheroo_debugfs_fops = ;
static void vga_switcheroo_debugfs_fini(struct vgasr_priv *priv)
static int vga_switcheroo_debugfs_init(struct vgasr_priv *priv)
int vga_switcheroo_process_delayed_switch(void)
EXPORT_SYMBOL(vga_switcheroo_process_delayed_switch);
