#define DRIVER_NAME	"sh_mmcif"
#define DRIVER_VERSION	"2010-04-28"
#define CMD_MASK		0x3f000000
#define CMD_SET_RTYP_NO		((0 << 23) | (0 << 22))
#define CMD_SET_RTYP_6B		((0 << 23) | (1 << 22))
#define CMD_SET_RTYP_17B	((1 << 23) | (0 << 22))
#define CMD_SET_RBSY		(1 << 21)
#define CMD_SET_CCSEN		(1 << 20)
#define CMD_SET_WDAT		(1 << 19)
#define CMD_SET_DWEN		(1 << 18)
#define CMD_SET_CMLTE		(1 << 17)
#define CMD_SET_CMD12EN		(1 << 16)
#define CMD_SET_RIDXC_INDEX	((0 << 15) | (0 << 14))
#define CMD_SET_RIDXC_BITS	((0 << 15) | (1 << 14))
#define CMD_SET_RIDXC_NO	((1 << 15) | (0 << 14))
#define CMD_SET_CRC7C		((0 << 13) | (0 << 12))
#define CMD_SET_CRC7C_BITS	((0 << 13) | (1 << 12))
#define CMD_SET_CRC7C_INTERNAL	((1 << 13) | (0 << 12))
#define CMD_SET_CRC16C		(1 << 10)
#define CMD_SET_CRCSTE		(1 << 8)
#define CMD_SET_TBIT		(1 << 7)
#define CMD_SET_OPDM		(1 << 6)
#define CMD_SET_CCSH		(1 << 5)
#define CMD_SET_DATW_1		((0 << 1) | (0 << 0))
#define CMD_SET_DATW_4		((0 << 1) | (1 << 0))
#define CMD_SET_DATW_8		((1 << 1) | (0 << 0))
#define CMD_CTRL_BREAK		(1 << 0)
#define BLOCK_SIZE_MASK		0x0000ffff
#define INT_CCSDE		(1 << 29)
#define INT_CMD12DRE		(1 << 26)
#define INT_CMD12RBE		(1 << 25)
#define INT_CMD12CRE		(1 << 24)
#define INT_DTRANE		(1 << 23)
#define INT_BUFRE		(1 << 22)
#define INT_BUFWEN		(1 << 21)
#define INT_BUFREN		(1 << 20)
#define INT_CCSRCV		(1 << 19)
#define INT_RBSYE		(1 << 17)
#define INT_CRSPE		(1 << 16)
#define INT_CMDVIO		(1 << 15)
#define INT_BUFVIO		(1 << 14)
#define INT_WDATERR		(1 << 11)
#define INT_RDATERR		(1 << 10)
#define INT_RIDXERR		(1 << 9)
#define INT_RSPERR		(1 << 8)
#define INT_CCSTO		(1 << 5)
#define INT_CRCSTO		(1 << 4)
#define INT_WDATTO		(1 << 3)
#define INT_RDATTO		(1 << 2)
#define INT_RBSYTO		(1 << 1)
#define INT_RSPTO		(1 << 0)
#define INT_ERR_STS		(INT_CMDVIO | INT_BUFVIO | INT_WDATERR |  \
INT_RDATERR | INT_RIDXERR | INT_RSPERR | \
INT_CCSTO | INT_CRCSTO | INT_WDATTO |	  \
INT_RDATTO | INT_RBSYTO | INT_RSPTO)
#define MASK_ALL		0x00000000
#define MASK_MCCSDE		(1 << 29)
#define MASK_MCMD12DRE		(1 << 26)
#define MASK_MCMD12RBE		(1 << 25)
#define MASK_MCMD12CRE		(1 << 24)
#define MASK_MDTRANE		(1 << 23)
#define MASK_MBUFRE		(1 << 22)
#define MASK_MBUFWEN		(1 << 21)
#define MASK_MBUFREN		(1 << 20)
#define MASK_MCCSRCV		(1 << 19)
#define MASK_MRBSYE		(1 << 17)
#define MASK_MCRSPE		(1 << 16)
#define MASK_MCMDVIO		(1 << 15)
#define MASK_MBUFVIO		(1 << 14)
#define MASK_MWDATERR		(1 << 11)
#define MASK_MRDATERR		(1 << 10)
#define MASK_MRIDXERR		(1 << 9)
#define MASK_MRSPERR		(1 << 8)
#define MASK_MCCSTO		(1 << 5)
#define MASK_MCRCSTO		(1 << 4)
#define MASK_MWDATTO		(1 << 3)
#define MASK_MRDATTO		(1 << 2)
#define MASK_MRBSYTO		(1 << 1)
#define MASK_MRSPTO		(1 << 0)
#define STS1_CMDSEQ		(1 << 31)
#define STS2_CRCSTE		(1 << 31)
#define STS2_CRC16E		(1 << 30)
#define STS2_AC12CRCE		(1 << 29)
#define STS2_RSPCRC7E		(1 << 28)
#define STS2_CRCSTEBE		(1 << 27)
#define STS2_RDATEBE		(1 << 26)
#define STS2_AC12REBE		(1 << 25)
#define STS2_RSPEBE		(1 << 24)
#define STS2_AC12IDXE		(1 << 23)
#define STS2_RSPIDXE		(1 << 22)
#define STS2_CCSTO		(1 << 15)
#define STS2_RDATTO		(1 << 14)
#define STS2_DATBSYTO		(1 << 13)
#define STS2_CRCSTTO		(1 << 12)
#define STS2_AC12BSYTO		(1 << 11)
#define STS2_RSPBSYTO		(1 << 10)
#define STS2_AC12RSPTO		(1 << 9)
#define STS2_RSPTO		(1 << 8)
#define STS2_CRC_ERR		(STS2_CRCSTE | STS2_CRC16E |		\
STS2_AC12CRCE | STS2_RSPCRC7E | STS2_CRCSTEBE)
#define STS2_TIMEOUT_ERR	(STS2_CCSTO | STS2_RDATTO |		\
STS2_DATBSYTO | STS2_CRCSTTO |		\
STS2_AC12BSYTO | STS2_RSPBSYTO |	\
STS2_AC12RSPTO | STS2_RSPTO)
#define CLKDEV_EMMC_DATA	52000000
#define CLKDEV_MMC_DATA		20000000
#define CLKDEV_INIT		400000
enum mmcif_state ;
struct sh_mmcif_host ;
static inline void sh_mmcif_bitset(struct sh_mmcif_host *host,
unsigned int reg, u32 val)
static inline void sh_mmcif_bitclr(struct sh_mmcif_host *host,
unsigned int reg, u32 val)
static void mmcif_dma_complete(void *arg)
static void sh_mmcif_start_dma_rx(struct sh_mmcif_host *host)
static void sh_mmcif_start_dma_tx(struct sh_mmcif_host *host)
static bool sh_mmcif_filter(struct dma_chan *chan, void *arg)
static void sh_mmcif_request_dma(struct sh_mmcif_host *host,
struct sh_mmcif_plat_data *pdata)
static void sh_mmcif_release_dma(struct sh_mmcif_host *host)
static void sh_mmcif_clock_control(struct sh_mmcif_host *host, unsigned int clk)
static void sh_mmcif_sync_reset(struct sh_mmcif_host *host)
static int sh_mmcif_error_manage(struct sh_mmcif_host *host)
static int sh_mmcif_single_read(struct sh_mmcif_host *host,
struct mmc_request *mrq)
static int sh_mmcif_multi_read(struct sh_mmcif_host *host,
struct mmc_request *mrq)
static int sh_mmcif_single_write(struct sh_mmcif_host *host,
struct mmc_request *mrq)
static int sh_mmcif_multi_write(struct sh_mmcif_host *host,
struct mmc_request *mrq)
static void sh_mmcif_get_response(struct sh_mmcif_host *host,
struct mmc_command *cmd)
static void sh_mmcif_get_cmd12response(struct sh_mmcif_host *host,
struct mmc_command *cmd)
static u32 sh_mmcif_set_cmd(struct sh_mmcif_host *host,
struct mmc_request *mrq, struct mmc_command *cmd, u32 opc)
static int sh_mmcif_data_trans(struct sh_mmcif_host *host,
struct mmc_request *mrq, u32 opc)
static void sh_mmcif_start_cmd(struct sh_mmcif_host *host,
struct mmc_request *mrq, struct mmc_command *cmd)
static void sh_mmcif_stop_cmd(struct sh_mmcif_host *host,
struct mmc_request *mrq, struct mmc_command *cmd)
static void sh_mmcif_request(struct mmc_host *mmc, struct mmc_request *mrq)
static void sh_mmcif_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
static int sh_mmcif_get_cd(struct mmc_host *mmc)
static struct mmc_host_ops sh_mmcif_ops = ;
static void sh_mmcif_detect(struct mmc_host *mmc)
static irqreturn_t sh_mmcif_intr(int irq, void *dev_id)
static int __devinit sh_mmcif_probe(struct platform_device *pdev)
static int __devexit sh_mmcif_remove(struct platform_device *pdev)
static int sh_mmcif_suspend(struct device *dev)
static int sh_mmcif_resume(struct device *dev)
#define sh_mmcif_suspend	NULL
#define sh_mmcif_resume		NULL
static const struct dev_pm_ops sh_mmcif_dev_pm_ops = ;
static struct platform_driver sh_mmcif_driver = ;
static int __init sh_mmcif_init(void)
static void __exit sh_mmcif_exit(void)
module_init(sh_mmcif_init);
module_exit(sh_mmcif_exit);
MODULE_DESCRIPTION("SuperH on-chip MMC/eMMC interface driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRIVER_NAME);
MODULE_AUTHOR("Yusuke Goda <yusuke.goda.sx@renesas.com>");
