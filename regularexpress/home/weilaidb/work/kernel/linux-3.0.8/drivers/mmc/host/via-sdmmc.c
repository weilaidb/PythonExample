#define DRV_NAME	"via_sdmmc"
#define PCI_DEVICE_ID_VIA_9530	0x9530
#define VIA_CRDR_SDC_OFF	0x200
#define VIA_CRDR_DDMA_OFF	0x400
#define VIA_CRDR_PCICTRL_OFF	0x600
#define VIA_CRDR_MIN_CLOCK	375000
#define VIA_CRDR_MAX_CLOCK	48000000
#define VIA_CRDR_PCI_WORK_MODE	0x40
#define VIA_CRDR_PCI_DBG_MODE	0x41
#define VIA_CRDR_SDCTRL			0x0
#define VIA_CRDR_SDCTRL_START		0x01
#define VIA_CRDR_SDCTRL_WRITE		0x04
#define VIA_CRDR_SDCTRL_SINGLE_WR	0x10
#define VIA_CRDR_SDCTRL_SINGLE_RD	0x20
#define VIA_CRDR_SDCTRL_MULTI_WR	0x30
#define VIA_CRDR_SDCTRL_MULTI_RD	0x40
#define VIA_CRDR_SDCTRL_STOP		0x70
#define VIA_CRDR_SDCTRL_RSP_NONE	0x0
#define VIA_CRDR_SDCTRL_RSP_R1		0x10000
#define VIA_CRDR_SDCTRL_RSP_R2		0x20000
#define VIA_CRDR_SDCTRL_RSP_R3		0x30000
#define VIA_CRDR_SDCTRL_RSP_R1B		0x90000
#define VIA_CRDR_SDCARG 	0x4
#define VIA_CRDR_SDBUSMODE	0x8
#define VIA_CRDR_SDMODE_4BIT	0x02
#define VIA_CRDR_SDMODE_CLK_ON	0x40
#define VIA_CRDR_SDBLKLEN	0xc
#define VIA_CRDR_SDBLKLEN_GPIDET	0x2000
#define VIA_CRDR_SDBLKLEN_INTEN		0x8000
#define VIA_CRDR_MAX_BLOCK_COUNT	65536
#define VIA_CRDR_MAX_BLOCK_LENGTH	2048
#define VIA_CRDR_SDRESP0	0x10
#define VIA_CRDR_SDRESP1	0x14
#define VIA_CRDR_SDRESP2	0x18
#define VIA_CRDR_SDRESP3	0x1c
#define VIA_CRDR_SDCURBLKCNT	0x20
#define VIA_CRDR_SDINTMASK	0x24
#define VIA_CRDR_SDINTMASK_MBDIE	0x10
#define VIA_CRDR_SDINTMASK_BDDIE	0x20
#define VIA_CRDR_SDINTMASK_CIRIE	0x80
#define VIA_CRDR_SDINTMASK_CRDIE	0x200
#define VIA_CRDR_SDINTMASK_CRTOIE	0x400
#define VIA_CRDR_SDINTMASK_ASCRDIE	0x800
#define VIA_CRDR_SDINTMASK_DTIE		0x1000
#define VIA_CRDR_SDINTMASK_SCIE		0x2000
#define VIA_CRDR_SDINTMASK_RCIE		0x4000
#define VIA_CRDR_SDINTMASK_WCIE		0x8000
#define VIA_CRDR_SDACTIVE_INTMASK \
(VIA_CRDR_SDINTMASK_MBDIE | VIA_CRDR_SDINTMASK_CIRIE \
| VIA_CRDR_SDINTMASK_CRDIE | VIA_CRDR_SDINTMASK_CRTOIE \
| VIA_CRDR_SDINTMASK_DTIE | VIA_CRDR_SDINTMASK_SCIE \
| VIA_CRDR_SDINTMASK_RCIE | VIA_CRDR_SDINTMASK_WCIE)
#define VIA_CRDR_SDSTATUS	0x28
#define VIA_CRDR_SDSTS_CECC		0x01
#define VIA_CRDR_SDSTS_WP		0x02
#define VIA_CRDR_SDSTS_SLOTD		0x04
#define VIA_CRDR_SDSTS_SLOTG		0x08
#define VIA_CRDR_SDSTS_MBD		0x10
#define VIA_CRDR_SDSTS_BDD		0x20
#define VIA_CRDR_SDSTS_CD		0x40
#define VIA_CRDR_SDSTS_CIR		0x80
#define VIA_CRDR_SDSTS_IO		0x100
#define VIA_CRDR_SDSTS_CRD		0x200
#define VIA_CRDR_SDSTS_CRTO		0x400
#define VIA_CRDR_SDSTS_ASCRDIE		0x800
#define VIA_CRDR_SDSTS_DT		0x1000
#define VIA_CRDR_SDSTS_SC		0x2000
#define VIA_CRDR_SDSTS_RC		0x4000
#define VIA_CRDR_SDSTS_WC		0x8000
#define VIA_CRDR_SDSTS_IGN_MASK\
(VIA_CRDR_SDSTS_BDD | VIA_CRDR_SDSTS_ASCRDIE | VIA_CRDR_SDSTS_IO)
#define VIA_CRDR_SDSTS_INT_MASK \
(VIA_CRDR_SDSTS_MBD | VIA_CRDR_SDSTS_BDD | VIA_CRDR_SDSTS_CD \
| VIA_CRDR_SDSTS_CIR | VIA_CRDR_SDSTS_IO | VIA_CRDR_SDSTS_CRD \
| VIA_CRDR_SDSTS_CRTO | VIA_CRDR_SDSTS_ASCRDIE | VIA_CRDR_SDSTS_DT \
| VIA_CRDR_SDSTS_SC | VIA_CRDR_SDSTS_RC | VIA_CRDR_SDSTS_WC)
#define VIA_CRDR_SDSTS_W1C_MASK \
(VIA_CRDR_SDSTS_CECC | VIA_CRDR_SDSTS_MBD | VIA_CRDR_SDSTS_BDD \
| VIA_CRDR_SDSTS_CD | VIA_CRDR_SDSTS_CIR | VIA_CRDR_SDSTS_CRD \
| VIA_CRDR_SDSTS_CRTO | VIA_CRDR_SDSTS_ASCRDIE | VIA_CRDR_SDSTS_DT \
| VIA_CRDR_SDSTS_SC | VIA_CRDR_SDSTS_RC | VIA_CRDR_SDSTS_WC)
#define  VIA_CRDR_SDSTS_CMD_MASK \
(VIA_CRDR_SDSTS_CRD | VIA_CRDR_SDSTS_CRTO | VIA_CRDR_SDSTS_SC)
#define  VIA_CRDR_SDSTS_DATA_MASK\
(VIA_CRDR_SDSTS_MBD | VIA_CRDR_SDSTS_DT \
| VIA_CRDR_SDSTS_RC | VIA_CRDR_SDSTS_WC)
#define VIA_CRDR_SDSTATUS2	0x2a
#define VIA_CRDR_SDSTS_CFE		0x80
#define VIA_CRDR_SDRSPTMO	0x2C
#define VIA_CRDR_SDCLKSEL	0x30
#define VIA_CRDR_SDEXTCTRL	0x34
#define VIS_CRDR_SDEXTCTRL_AUTOSTOP_SD	0x01
#define VIS_CRDR_SDEXTCTRL_SHIFT_9	0x02
#define VIS_CRDR_SDEXTCTRL_MMC_8BIT	0x04
#define VIS_CRDR_SDEXTCTRL_RELD_BLK	0x08
#define VIS_CRDR_SDEXTCTRL_BAD_CMDA	0x10
#define VIS_CRDR_SDEXTCTRL_BAD_DATA	0x20
#define VIS_CRDR_SDEXTCTRL_AUTOSTOP_SPI	0x40
#define VIA_CRDR_SDEXTCTRL_HISPD	0x80
#define VIA_CRDR_DMABASEADD	0x0
#define VIA_CRDR_DMACOUNTER	0x4
#define VIA_CRDR_DMACTRL	0x8
#define VIA_CRDR_DMACTRL_DIR		0x100
#define VIA_CRDR_DMACTRL_ENIRQ		0x10000
#define VIA_CRDR_DMACTRL_SFTRST		0x1000000
#define VIA_CRDR_DMASTS		0xc
#define VIA_CRDR_DMASTART	0x10
#define VIA_CRDR_PCICLKGATT	0x2
#define VIA_CRDR_PCICLKGATT_SFTRST	0x01
#define VIA_CRDR_PCICLKGATT_3V3	0x10
#define VIA_CRDR_PCICLKGATT_PAD_PWRON	0x20
#define VIA_CRDR_PCISDCCLK	0x5
#define VIA_CRDR_PCIDMACLK	0x7
#define VIA_CRDR_PCIDMACLK_SDC		0x2
#define VIA_CRDR_PCIINTCTRL	0x8
#define VIA_CRDR_PCIINTCTRL_SDCIRQEN	0x04
#define VIA_CRDR_PCIINTSTATUS	0x9
#define VIA_CRDR_PCIINTSTATUS_SDC	0x04
#define  VIA_CRDR_PCITMOCTRL	0xa
#define VIA_CRDR_PCITMOCTRL_NO		0x0
#define VIA_CRDR_PCITMOCTRL_32US	0x1
#define VIA_CRDR_PCITMOCTRL_256US	0x2
#define VIA_CRDR_PCITMOCTRL_1024US	0x3
#define VIA_CRDR_PCITMOCTRL_256MS	0x4
#define VIA_CRDR_PCITMOCTRL_512MS	0x5
#define VIA_CRDR_PCITMOCTRL_1024MS	0x6
enum PCI_HOST_CLK_CONTROL ;
struct sdhcreg ;
struct pcictrlreg ;
struct via_crdr_mmc_host ;
#define VIA_CRDR_QUIRK_300MS_PWRDELAY	0x0001
static struct pci_device_id via_ids[] = ;
MODULE_DEVICE_TABLE(pci, via_ids);
static void via_print_sdchc(struct via_crdr_mmc_host *host)
static void via_print_pcictrl(struct via_crdr_mmc_host *host)
static void via_save_pcictrlreg(struct via_crdr_mmc_host *host)
static void via_restore_pcictrlreg(struct via_crdr_mmc_host *host)
static void via_save_sdcreg(struct via_crdr_mmc_host *host)
static void via_restore_sdcreg(struct via_crdr_mmc_host *host)
static void via_pwron_sleep(struct via_crdr_mmc_host *sdhost)
static void via_set_ddma(struct via_crdr_mmc_host *host,
dma_addr_t dmaaddr, u32 count, int dir, int enirq)
static void via_sdc_preparedata(struct via_crdr_mmc_host *host,
struct mmc_data *data)
static void via_sdc_get_response(struct via_crdr_mmc_host *host,
struct mmc_command *cmd)
static void via_sdc_send_command(struct via_crdr_mmc_host *host,
struct mmc_command *cmd)
static void via_sdc_finish_data(struct via_crdr_mmc_host *host)
static void via_sdc_finish_command(struct via_crdr_mmc_host *host)
static void via_sdc_request(struct mmc_host *mmc, struct mmc_request *mrq)
static void via_sdc_set_power(struct via_crdr_mmc_host *host,
unsigned short power, unsigned int on)
static void via_sdc_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
static int via_sdc_get_ro(struct mmc_host *mmc)
static const struct mmc_host_ops via_sdc_ops = ;
static void via_reset_pcictrl(struct via_crdr_mmc_host *host)
static void via_sdc_cmd_isr(struct via_crdr_mmc_host *host, u16 intmask)
static void via_sdc_data_isr(struct via_crdr_mmc_host *host, u16 intmask)
static irqreturn_t via_sdc_isr(int irq, void *dev_id)
static void via_sdc_timeout(unsigned long ulongdata)
static void via_sdc_tasklet_finish(unsigned long param)
static void via_sdc_card_detect(struct work_struct *work)
static void via_init_mmc_host(struct via_crdr_mmc_host *host)
static int __devinit via_sd_probe(struct pci_dev *pcidev,
const struct pci_device_id *id)
static void __devexit via_sd_remove(struct pci_dev *pcidev)
static void via_init_sdc_pm(struct via_crdr_mmc_host *host)
static int via_sd_suspend(struct pci_dev *pcidev, pm_message_t state)
static int via_sd_resume(struct pci_dev *pcidev)
#define via_sd_suspend NULL
#define via_sd_resume NULL
static struct pci_driver via_sd_driver = ;
static int __init via_sd_drv_init(void)
static void __exit via_sd_drv_exit(void)
module_init(via_sd_drv_init);
module_exit(via_sd_drv_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("VIA Technologies Inc.");
MODULE_DESCRIPTION("VIA SD/MMC Card Interface driver");
