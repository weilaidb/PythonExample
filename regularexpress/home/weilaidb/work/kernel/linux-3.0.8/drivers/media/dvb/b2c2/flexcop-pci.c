#define FC_LOG_PREFIX "flexcop-pci"
static int enable_pid_filtering = 1;
module_param(enable_pid_filtering, int, 0444);
MODULE_PARM_DESC(enable_pid_filtering,
"enable hardware pid filtering: supported values: 0 (fullts), 1");
static int irq_chk_intv = 100;
module_param(irq_chk_intv, int, 0644);
MODULE_PARM_DESC(irq_chk_intv, "set the interval for IRQ streaming watchdog.");
#define dprintk(level,args...) \
do  while (0)
#define DEBSTATUS ""
#define dprintk(level,args...)
#define DEBSTATUS " (debugging is not enabled)"
#define deb_info(args...) dprintk(0x01, args)
#define deb_reg(args...) dprintk(0x02, args)
#define deb_ts(args...) dprintk(0x04, args)
#define deb_irq(args...) dprintk(0x08, args)
#define deb_chk(args...) dprintk(0x10, args)
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug,
"set debug level (1=info,2=regs,4=TS,8=irqdma,16=check (|-able))."
DEBSTATUS);
#define DRIVER_VERSION "0.1"
#define DRIVER_NAME "flexcop-pci"
#define DRIVER_AUTHOR "Patrick Boettcher <patrick.boettcher@desy.de>"
struct flexcop_pci ;
static int lastwreg, lastwval, lastrreg, lastrval;
static flexcop_ibi_value flexcop_pci_read_ibi_reg(struct flexcop_device *fc,
flexcop_ibi_register r)
static int flexcop_pci_write_ibi_reg(struct flexcop_device *fc,
flexcop_ibi_register r, flexcop_ibi_value v)
static void flexcop_pci_irq_check_work(struct work_struct *work)
static irqreturn_t flexcop_pci_isr(int irq, void *dev_id)
static int flexcop_pci_stream_control(struct flexcop_device *fc, int onoff)
static int flexcop_pci_dma_init(struct flexcop_pci *fc_pci)
static void flexcop_pci_dma_exit(struct flexcop_pci *fc_pci)
static int flexcop_pci_init(struct flexcop_pci *fc_pci)
static void flexcop_pci_exit(struct flexcop_pci *fc_pci)
static int flexcop_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void flexcop_pci_remove(struct pci_dev *pdev)
static struct pci_device_id flexcop_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, flexcop_pci_tbl);
static struct pci_driver flexcop_pci_driver = ;
static int __init flexcop_pci_module_init(void)
static void __exit flexcop_pci_module_exit(void)
module_init(flexcop_pci_module_init);
module_exit(flexcop_pci_module_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_NAME);
MODULE_LICENSE("GPL");
