#define DRIVER_NAME 		"vlsi_ir"
#define DRIVER_VERSION		"v0.5"
#define DRIVER_DESCRIPTION	"IrDA SIR/MIR/FIR driver for VLSI 82C147"
#define DRIVER_AUTHOR		"Martin Diehl <info@mdiehl.de>"
MODULE_DESCRIPTION(DRIVER_DESCRIPTION);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_LICENSE("GPL");
static char drivername[] = DRIVER_NAME;
static DEFINE_PCI_DEVICE_TABLE(vlsi_irda_table) = ;
MODULE_DEVICE_TABLE(pci, vlsi_irda_table);
static int clksrc = 0;
module_param(clksrc, int, 0);
MODULE_PARM_DESC(clksrc, "clock input source selection");
static int ringsize[] = ;
module_param_array(ringsize, int, NULL, 0);
MODULE_PARM_DESC(ringsize, "TX, RX ring descriptor size");
static int sirpulse = 1;
module_param(sirpulse, int, 0);
MODULE_PARM_DESC(sirpulse, "SIR pulse width tuning");
static int qos_mtt_bits = 0x07;
module_param(qos_mtt_bits, int, 0);
MODULE_PARM_DESC(qos_mtt_bits, "IrLAP bitfield representing min-turn-time");
static void vlsi_reg_debug(unsigned iobase, const char *s)
static void vlsi_ring_debug(struct vlsi_ring *r)
static struct proc_dir_entry *vlsi_proc_root = NULL;
static void vlsi_proc_pdev(struct seq_file *seq, struct pci_dev *pdev)
static void vlsi_proc_ndev(struct seq_file *seq, struct net_device *ndev)
static void vlsi_proc_ring(struct seq_file *seq, struct vlsi_ring *r)
static int vlsi_seq_show(struct seq_file *seq, void *v)
static int vlsi_seq_open(struct inode *inode, struct file *file)
static const struct file_operations vlsi_proc_fops = ;
#define VLSI_PROC_FOPS		(&vlsi_proc_fops)
#define VLSI_PROC_FOPS		NULL
static struct vlsi_ring *vlsi_alloc_ring(struct pci_dev *pdev, struct ring_descr_hw *hwmap,
unsigned size, unsigned len, int dir)
static int vlsi_free_ring(struct vlsi_ring *r)
static int vlsi_create_hwif(vlsi_irda_dev_t *idev)
static int vlsi_destroy_hwif(vlsi_irda_dev_t *idev)
static int vlsi_process_rx(struct vlsi_ring *r, struct ring_descr *rd)
static void vlsi_fill_rx(struct vlsi_ring *r)
static void vlsi_rx_interrupt(struct net_device *ndev)
static void vlsi_unarm_rx(vlsi_irda_dev_t *idev)
static int vlsi_process_tx(struct vlsi_ring *r, struct ring_descr *rd)
static int vlsi_set_baud(vlsi_irda_dev_t *idev, unsigned iobase)
static netdev_tx_t vlsi_hard_start_xmit(struct sk_buff *skb,
struct net_device *ndev)
static void vlsi_tx_interrupt(struct net_device *ndev)
static void vlsi_unarm_tx(vlsi_irda_dev_t *idev)
static int vlsi_start_clock(struct pci_dev *pdev)
static void vlsi_stop_clock(struct pci_dev *pdev)
static inline void vlsi_clear_regs(unsigned iobase)
static int vlsi_init_chip(struct pci_dev *pdev)
static int vlsi_start_hw(vlsi_irda_dev_t *idev)
static int vlsi_stop_hw(vlsi_irda_dev_t *idev)
static void vlsi_tx_timeout(struct net_device *ndev)
static int vlsi_ioctl(struct net_device *ndev, struct ifreq *rq, int cmd)
static irqreturn_t vlsi_interrupt(int irq, void *dev_instance)
static int vlsi_open(struct net_device *ndev)
static int vlsi_close(struct net_device *ndev)
static const struct net_device_ops vlsi_netdev_ops = ;
static int vlsi_irda_init(struct net_device *ndev)
static int __devinit
vlsi_irda_probe(struct pci_dev *pdev, const struct pci_device_id *id)
static void __devexit vlsi_irda_remove(struct pci_dev *pdev)
static int vlsi_irda_suspend(struct pci_dev *pdev, pm_message_t state)
static int vlsi_irda_resume(struct pci_dev *pdev)
static struct pci_driver vlsi_irda_driver = ;
#define PROC_DIR ("driver/" DRIVER_NAME)
static int __init vlsi_mod_init(void)
static void __exit vlsi_mod_exit(void)
module_init(vlsi_mod_init);
module_exit(vlsi_mod_exit);
