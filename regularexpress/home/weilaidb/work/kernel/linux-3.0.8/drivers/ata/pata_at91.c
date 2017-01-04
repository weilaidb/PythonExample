#define DRV_NAME		"pata_at91"
#define DRV_VERSION		"0.3"
#define CF_IDE_OFFSET		0x00c00000
#define CF_ALT_IDE_OFFSET	0x00e00000
#define CF_IDE_RES_SIZE		0x08
#define CS_PULSE_MAXIMUM	319
#define ER_SMC_CALC		1
#define ER_SMC_RECALC		2
struct at91_ide_info ;
struct smc_range ;
static int adjust_smc_value(int *value, struct smc_range *range, int size)
static int calc_smc_vals(struct device *dev,
int *setup, int *pulse, int *cycle, int *cs_pulse)
static void to_smc_format(int *setup, int *pulse, int *cycle, int *cs_pulse)
static unsigned long calc_mck_cycles(unsigned long ns, unsigned long mck_hz)
static void set_smc_timing(struct device *dev, struct ata_device *adev,
struct at91_ide_info *info, const struct ata_timing *ata)
static void pata_at91_set_piomode(struct ata_port *ap, struct ata_device *adev)
static unsigned int pata_at91_data_xfer_noirq(struct ata_device *dev,
unsigned char *buf, unsigned int buflen, int rw)
static struct scsi_host_template pata_at91_sht = ;
static struct ata_port_operations pata_at91_port_ops = ;
static int __devinit pata_at91_probe(struct platform_device *pdev)
static int __devexit pata_at91_remove(struct platform_device *pdev)
static struct platform_driver pata_at91_driver = ;
static int __init pata_at91_init(void)
static void __exit pata_at91_exit(void)
module_init(pata_at91_init);
module_exit(pata_at91_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Driver for CF in True IDE mode on AT91SAM9260 SoC");
MODULE_AUTHOR("Matyukevich Sergey");
MODULE_VERSION(DRV_VERSION);
