#define DRV_NAME "pata_legacy"
#define DRV_VERSION "0.6.5"
#define NR_HOST 6
static int all;
module_param(all, int, 0444);
MODULE_PARM_DESC(all, "Grab all legacy port devices, even if PCI(0=off, 1=on)");
struct legacy_data ;
enum controller ;
struct legacy_probe ;
struct legacy_controller ;
static int legacy_port[NR_HOST] = ;
static struct legacy_probe probe_list[NR_HOST];
static struct legacy_data legacy_data[NR_HOST];
static struct ata_host *legacy_host[NR_HOST];
static int nr_legacy_host;
static int probe_all;
static int ht6560a;
static int ht6560b;
static int opti82c611a;
static int opti82c46x;
static int qdi;
static int autospeed;
static int pio_mask = ATA_PIO4;
static int iordy_mask = 0xFFFFFFFF;
static int winbond = 1;
static int winbond;
static int legacy_probe_add(unsigned long port, unsigned int irq,
enum controller type, unsigned long private)
static int legacy_set_mode(struct ata_link *link, struct ata_device **unused)
static struct scsi_host_template legacy_sht = ;
static const struct ata_port_operations legacy_base_port_ops = ;
static struct ata_port_operations simple_port_ops = ;
static struct ata_port_operations legacy_port_ops = ;
static void pdc20230_set_piomode(struct ata_port *ap, struct ata_device *adev)
static unsigned int pdc_data_xfer_vlb(struct ata_device *dev,
unsigned char *buf, unsigned int buflen, int rw)
static struct ata_port_operations pdc20230_port_ops = ;
static void ht6560a_set_piomode(struct ata_port *ap, struct ata_device *adev)
static struct ata_port_operations ht6560a_port_ops = ;
static void ht6560b_set_piomode(struct ata_port *ap, struct ata_device *adev)
static struct ata_port_operations ht6560b_port_ops = ;
static u8 opti_syscfg(u8 reg)
static void opti82c611a_set_piomode(struct ata_port *ap,
struct ata_device *adev)
static struct ata_port_operations opti82c611a_port_ops = ;
static void opti82c46x_set_piomode(struct ata_port *ap, struct ata_device *adev)
static unsigned int opti82c46x_qc_issue(struct ata_queued_cmd *qc)
static struct ata_port_operations opti82c46x_port_ops = ;
static void qdi6500_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void qdi6580dp_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void qdi6580_set_piomode(struct ata_port *ap, struct ata_device *adev)
static unsigned int qdi_qc_issue(struct ata_queued_cmd *qc)
static unsigned int vlb32_data_xfer(struct ata_device *adev, unsigned char *buf,
unsigned int buflen, int rw)
static int qdi_port(struct platform_device *dev,
struct legacy_probe *lp, struct legacy_data *ld)
static struct ata_port_operations qdi6500_port_ops = ;
static struct ata_port_operations qdi6580_port_ops = ;
static struct ata_port_operations qdi6580dp_port_ops = ;
static DEFINE_SPINLOCK(winbond_lock);
static void winbond_writecfg(unsigned long port, u8 reg, u8 val)
static u8 winbond_readcfg(unsigned long port, u8 reg)
static void winbond_set_piomode(struct ata_port *ap, struct ata_device *adev)
static int winbond_port(struct platform_device *dev,
struct legacy_probe *lp, struct legacy_data *ld)
static struct ata_port_operations winbond_port_ops = ;
static struct legacy_controller controllers[] = ;
static __init int probe_chip_type(struct legacy_probe *probe)
static __init int legacy_init_one(struct legacy_probe *probe)
static void __init legacy_check_special_cases(struct pci_dev *p, int *primary,
int *secondary)
static __init void probe_opti_vlb(void)
static __init void qdi65_identify_port(u8 r, u8 res, unsigned long port)
static __init void probe_qdi_vlb(void)
static __init int legacy_init(void)
static __exit void legacy_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for legacy ATA");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
MODULE_ALIAS("pata_winbond");
module_param(probe_all, int, 0);
module_param(autospeed, int, 0);
module_param(ht6560a, int, 0);
module_param(ht6560b, int, 0);
module_param(opti82c611a, int, 0);
module_param(opti82c46x, int, 0);
module_param(qdi, int, 0);
module_param(winbond, int, 0);
module_param(pio_mask, int, 0);
module_param(iordy_mask, int, 0);
module_init(legacy_init);
module_exit(legacy_exit);
