static struct class *ilo_class;
static unsigned int ilo_major;
static char ilo_hwdev[MAX_ILO_DEV];
static inline int get_entry_id(int entry)
static inline int get_entry_len(int entry)
static inline int mk_entry(int id, int len)
static inline int desc_mem_sz(int nr_entry)
static int fifo_enqueue(struct ilo_hwinfo *hw, char *fifobar, int entry)
static int fifo_dequeue(struct ilo_hwinfo *hw, char *fifobar, int *entry)
static int fifo_check_recv(struct ilo_hwinfo *hw, char *fifobar)
static int ilo_pkt_enqueue(struct ilo_hwinfo *hw, struct ccb *ccb,
int dir, int id, int len)
static int ilo_pkt_dequeue(struct ilo_hwinfo *hw, struct ccb *ccb,
int dir, int *id, int *len, void **pkt)
static int ilo_pkt_recv(struct ilo_hwinfo *hw, struct ccb *ccb)
static inline void doorbell_set(struct ccb *ccb)
static inline void doorbell_clr(struct ccb *ccb)
static inline int ctrl_set(int l2sz, int idxmask, int desclim)
static void ctrl_setup(struct ccb *ccb, int nr_desc, int l2desc_sz)
static inline int fifo_sz(int nr_entry)
static void fifo_setup(void *base_addr, int nr_entry)
static void ilo_ccb_close(struct pci_dev *pdev, struct ccb_data *data)
static int ilo_ccb_setup(struct ilo_hwinfo *hw, struct ccb_data *data, int slot)
static void ilo_ccb_open(struct ilo_hwinfo *hw, struct ccb_data *data, int slot)
static int ilo_ccb_verify(struct ilo_hwinfo *hw, struct ccb_data *data)
static inline int is_channel_reset(struct ccb *ccb)
static inline void set_channel_reset(struct ccb *ccb)
static inline int get_device_outbound(struct ilo_hwinfo *hw)
static inline int is_db_reset(int db_out)
static inline int is_device_reset(struct ilo_hwinfo *hw)
static inline void clear_pending_db(struct ilo_hwinfo *hw, int clr)
static inline void clear_device(struct ilo_hwinfo *hw)
static inline void ilo_enable_interrupts(struct ilo_hwinfo *hw)
static inline void ilo_disable_interrupts(struct ilo_hwinfo *hw)
static void ilo_set_reset(struct ilo_hwinfo *hw)
static ssize_t ilo_read(struct file *fp, char __user *buf,
size_t len, loff_t *off)
static ssize_t ilo_write(struct file *fp, const char __user *buf,
size_t len, loff_t *off)
static unsigned int ilo_poll(struct file *fp, poll_table *wait)
static int ilo_close(struct inode *ip, struct file *fp)
static int ilo_open(struct inode *ip, struct file *fp)
static const struct file_operations ilo_fops = ;
static irqreturn_t ilo_isr(int irq, void *data)
static void ilo_unmap_device(struct pci_dev *pdev, struct ilo_hwinfo *hw)
static int __devinit ilo_map_device(struct pci_dev *pdev, struct ilo_hwinfo *hw)
static void ilo_remove(struct pci_dev *pdev)
static int __devinit ilo_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static struct pci_device_id ilo_devices[] = ;
MODULE_DEVICE_TABLE(pci, ilo_devices);
static struct pci_driver ilo_driver = ;
static int __init ilo_init(void)
static void __exit ilo_exit(void)
MODULE_VERSION("1.2");
MODULE_ALIAS(ILO_NAME);
MODULE_DESCRIPTION(ILO_NAME);
MODULE_AUTHOR("David Altobelli <david.altobelli@hp.com>");
MODULE_LICENSE("GPL v2");
module_init(ilo_init);
module_exit(ilo_exit);
