#define DRV_NAME "pata_samsung_cf"
#define DRV_VERSION "0.1"
enum s3c_cpu_type ;
struct s3c_ide_info ;
static void pata_s3c_set_endian(void __iomem *s3c_ide_regbase, u8 mode)
static void pata_s3c_cfg_mode(void __iomem *s3c_ide_sfrbase)
static unsigned long
pata_s3c_setup_timing(struct s3c_ide_info *info, const struct ata_timing *ata)
static void pata_s3c_set_piomode(struct ata_port *ap, struct ata_device *adev)
static int wait_for_host_ready(struct s3c_ide_info *info)
static void ata_outb(struct ata_host *host, u8 addr, void __iomem *reg)
static u8 ata_inb(struct ata_host *host, void __iomem *reg)
static void pata_s3c_tf_load(struct ata_port *ap,
const struct ata_taskfile *tf)
static void pata_s3c_tf_read(struct ata_port *ap, struct ata_taskfile *tf)
static void pata_s3c_exec_command(struct ata_port *ap,
const struct ata_taskfile *tf)
static u8 pata_s3c_check_status(struct ata_port *ap)
static u8 pata_s3c_check_altstatus(struct ata_port *ap)
unsigned int pata_s3c_data_xfer(struct ata_device *dev, unsigned char *buf,
unsigned int buflen, int rw)
static void pata_s3c_dev_select(struct ata_port *ap, unsigned int device)
static unsigned int pata_s3c_devchk(struct ata_port *ap,
unsigned int device)
static int pata_s3c_wait_after_reset(struct ata_link *link,
unsigned long deadline)
static unsigned int pata_s3c_bus_softreset(struct ata_port *ap,
unsigned long deadline)
static int pata_s3c_softreset(struct ata_link *link, unsigned int *classes,
unsigned long deadline)
static void pata_s3c_set_devctl(struct ata_port *ap, u8 ctl)
static struct scsi_host_template pata_s3c_sht = ;
static struct ata_port_operations pata_s3c_port_ops = ;
static struct ata_port_operations pata_s5p_port_ops = ;
static void pata_s3c_enable(void *s3c_ide_regbase, bool state)
static irqreturn_t pata_s3c_irq(int irq, void *dev_instance)
static void pata_s3c_hwinit(struct s3c_ide_info *info,
struct s3c_ide_platdata *pdata)
static int __init pata_s3c_probe(struct platform_device *pdev)
static int __exit pata_s3c_remove(struct platform_device *pdev)
static int pata_s3c_suspend(struct device *dev)
static int pata_s3c_resume(struct device *dev)
static const struct dev_pm_ops pata_s3c_pm_ops = ;
static struct platform_device_id pata_s3c_driver_ids[] = ;
MODULE_DEVICE_TABLE(platform, pata_s3c_driver_ids);
static struct platform_driver pata_s3c_driver = ;
static int __init pata_s3c_init(void)
static void __exit pata_s3c_exit(void)
module_init(pata_s3c_init);
module_exit(pata_s3c_exit);
MODULE_AUTHOR("Abhilash Kesavan, <a.kesavan@samsung.com>");
MODULE_DESCRIPTION("low-level driver for Samsung PATA controller");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
