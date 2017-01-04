#define PCI_SDHCI_IFPIO			0x00
#define PCI_SDHCI_IFDMA			0x01
#define PCI_SDHCI_IFVENDOR		0x02
#define PCI_SLOT_INFO			0x40
#define  PCI_SLOT_INFO_SLOTS(x)		((x >> 4) & 7)
#define  PCI_SLOT_INFO_FIRST_BAR_MASK	0x07
#define MAX_SLOTS			8
struct sdhci_pci_chip;
struct sdhci_pci_slot;
struct sdhci_pci_fixes ;
struct sdhci_pci_slot ;
struct sdhci_pci_chip ;
static int ricoh_probe(struct sdhci_pci_chip *chip)
static int ricoh_mmc_probe_slot(struct sdhci_pci_slot *slot)
static int ricoh_mmc_resume(struct sdhci_pci_chip *chip)
static const struct sdhci_pci_fixes sdhci_ricoh = ;
static const struct sdhci_pci_fixes sdhci_ricoh_mmc = ;
static const struct sdhci_pci_fixes sdhci_ene_712 = ;
static const struct sdhci_pci_fixes sdhci_ene_714 = ;
static const struct sdhci_pci_fixes sdhci_cafe = ;
static int mrst_hc_probe(struct sdhci_pci_chip *chip)
static const struct sdhci_pci_fixes sdhci_intel_mrst_hc0 = ;
static const struct sdhci_pci_fixes sdhci_intel_mrst_hc1_hc2 = ;
static const struct sdhci_pci_fixes sdhci_intel_mfd_sd = ;
static const struct sdhci_pci_fixes sdhci_intel_mfd_emmc_sdio = ;
#define O2_SD_LOCK_WP		0xD3
#define O2_SD_MULTI_VCC3V	0xEE
#define O2_SD_CLKREQ		0xEC
#define O2_SD_CAPS		0xE0
#define O2_SD_ADMA1		0xE2
#define O2_SD_ADMA2		0xE7
#define O2_SD_INF_MOD		0xF1
static int o2_probe(struct sdhci_pci_chip *chip)
static int jmicron_pmos(struct sdhci_pci_chip *chip, int on)
static int jmicron_probe(struct sdhci_pci_chip *chip)
static void jmicron_enable_mmc(struct sdhci_host *host, int on)
static int jmicron_probe_slot(struct sdhci_pci_slot *slot)
static void jmicron_remove_slot(struct sdhci_pci_slot *slot, int dead)
static int jmicron_suspend(struct sdhci_pci_chip *chip, pm_message_t state)
static int jmicron_resume(struct sdhci_pci_chip *chip)
static const struct sdhci_pci_fixes sdhci_o2 = ;
static const struct sdhci_pci_fixes sdhci_jmicron = ;
#define SYSKT_CTRL		0x200
#define SYSKT_RDFIFO_STAT	0x204
#define SYSKT_WRFIFO_STAT	0x208
#define SYSKT_POWER_DATA	0x20c
#define   SYSKT_POWER_330	0xef
#define   SYSKT_POWER_300	0xf8
#define   SYSKT_POWER_184	0xcc
#define SYSKT_POWER_CMD		0x20d
#define   SYSKT_POWER_START	(1 << 7)
#define SYSKT_POWER_STATUS	0x20e
#define   SYSKT_POWER_STATUS_OK	(1 << 0)
#define SYSKT_BOARD_REV		0x210
#define SYSKT_CHIP_REV		0x211
#define SYSKT_CONF_DATA		0x212
#define   SYSKT_CONF_DATA_1V8	(1 << 2)
#define   SYSKT_CONF_DATA_2V5	(1 << 1)
#define   SYSKT_CONF_DATA_3V3	(1 << 0)
static int syskt_probe(struct sdhci_pci_chip *chip)
static int syskt_probe_slot(struct sdhci_pci_slot *slot)
static const struct sdhci_pci_fixes sdhci_syskt = ;
static int via_probe(struct sdhci_pci_chip *chip)
static const struct sdhci_pci_fixes sdhci_via = ;
static const struct pci_device_id pci_ids[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, pci_ids);
static int sdhci_pci_enable_dma(struct sdhci_host *host)
static struct sdhci_ops sdhci_pci_ops = ;
static int sdhci_pci_suspend(struct pci_dev *pdev, pm_message_t state)
static int sdhci_pci_resume(struct pci_dev *pdev)
#define sdhci_pci_suspend NULL
#define sdhci_pci_resume NULL
static struct sdhci_pci_slot * __devinit sdhci_pci_probe_slot(
struct pci_dev *pdev, struct sdhci_pci_chip *chip, int bar)
static void sdhci_pci_remove_slot(struct sdhci_pci_slot *slot)
static int __devinit sdhci_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit sdhci_pci_remove(struct pci_dev *pdev)
static struct pci_driver sdhci_driver = ;
static int __init sdhci_drv_init(void)
static void __exit sdhci_drv_exit(void)
module_init(sdhci_drv_init);
module_exit(sdhci_drv_exit);
MODULE_AUTHOR("Pierre Ossman <pierre@ossman.eu>");
MODULE_DESCRIPTION("Secure Digital Host Controller Interface PCI driver");
MODULE_LICENSE("GPL");
