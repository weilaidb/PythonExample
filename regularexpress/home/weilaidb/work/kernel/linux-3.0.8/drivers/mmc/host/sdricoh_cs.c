#define DRIVER_NAME "sdricoh_cs"
static unsigned int switchlocked;
#define SDRICOH_PCI_REGION 0
#define SDRICOH_PCI_REGION_SIZE 0x1000
#define R104_VERSION     0x104
#define R200_CMD         0x200
#define R204_CMD_ARG     0x204
#define R208_DATAIO      0x208
#define R20C_RESP        0x20c
#define R21C_STATUS      0x21c
#define R2E0_INIT        0x2e0
#define R2E4_STATUS_RESP 0x2e4
#define R2F0_RESET       0x2f0
#define R224_MODE        0x224
#define R226_BLOCKSIZE   0x226
#define R228_POWER       0x228
#define R230_DATA        0x230
#define STATUS_CMD_FINISHED      0x00000001
#define STATUS_TRANSFER_FINISHED 0x00000004
#define STATUS_CARD_INSERTED     0x00000020
#define STATUS_CARD_LOCKED       0x00000080
#define STATUS_CMD_TIMEOUT       0x00400000
#define STATUS_READY_TO_READ     0x01000000
#define STATUS_READY_TO_WRITE    0x02000000
#define STATUS_BUSY              0x40000000
#define INIT_TIMEOUT      100
#define CMD_TIMEOUT       100000
#define TRANSFER_TIMEOUT  100000
#define BUSY_TIMEOUT      32767
static const struct pcmcia_device_id pcmcia_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, pcmcia_ids);
struct sdricoh_host ;
static inline unsigned int sdricoh_readl(struct sdricoh_host *host,
unsigned int reg)
static inline void sdricoh_writel(struct sdricoh_host *host, unsigned int reg,
unsigned int value)
static inline unsigned int sdricoh_readw(struct sdricoh_host *host,
unsigned int reg)
static inline void sdricoh_writew(struct sdricoh_host *host, unsigned int reg,
unsigned short value)
static inline unsigned int sdricoh_readb(struct sdricoh_host *host,
unsigned int reg)
static int sdricoh_query_status(struct sdricoh_host *host, unsigned int wanted,
unsigned int timeout)
static int sdricoh_mmc_cmd(struct sdricoh_host *host, unsigned char opcode,
unsigned int arg)
static int sdricoh_reset(struct sdricoh_host *host)
static int sdricoh_blockio(struct sdricoh_host *host, int read,
u8 *buf, int len)
static void sdricoh_request(struct mmc_host *mmc, struct mmc_request *mrq)
static void sdricoh_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
static int sdricoh_get_ro(struct mmc_host *mmc)
static struct mmc_host_ops sdricoh_ops = ;
static int sdricoh_init_mmc(struct pci_dev *pci_dev,
struct pcmcia_device *pcmcia_dev)
static int sdricoh_pcmcia_probe(struct pcmcia_device *pcmcia_dev)
static void sdricoh_pcmcia_detach(struct pcmcia_device *link)
static int sdricoh_pcmcia_suspend(struct pcmcia_device *link)
static int sdricoh_pcmcia_resume(struct pcmcia_device *link)
#define sdricoh_pcmcia_suspend NULL
#define sdricoh_pcmcia_resume NULL
static struct pcmcia_driver sdricoh_driver = ;
static int __init sdricoh_drv_init(void)
static void __exit sdricoh_drv_exit(void)
module_init(sdricoh_drv_init);
module_exit(sdricoh_drv_exit);
module_param(switchlocked, uint, 0444);
MODULE_AUTHOR("Sascha Sommer <saschasommer@freenet.de>");
MODULE_DESCRIPTION("Ricoh PCMCIA Secure Digital Interface driver");
MODULE_LICENSE("GPL");
MODULE_PARM_DESC(switchlocked, "Switch the cards locked status."
"Use this when unlocked cards are shown readonly (default 0)");
