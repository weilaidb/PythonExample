#define DAVINCI_MMCCTL       0x00
#define DAVINCI_MMCCLK       0x04
#define DAVINCI_MMCST0       0x08
#define DAVINCI_MMCST1       0x0C
#define DAVINCI_MMCIM        0x10
#define DAVINCI_MMCTOR       0x14
#define DAVINCI_MMCTOD       0x18
#define DAVINCI_MMCBLEN      0x1C
#define DAVINCI_MMCNBLK      0x20
#define DAVINCI_MMCNBLC      0x24
#define DAVINCI_MMCDRR       0x28
#define DAVINCI_MMCDXR       0x2C
#define DAVINCI_MMCCMD       0x30
#define DAVINCI_MMCARGHL     0x34
#define DAVINCI_MMCRSP01     0x38
#define DAVINCI_MMCRSP23     0x3C
#define DAVINCI_MMCRSP45     0x40
#define DAVINCI_MMCRSP67     0x44
#define DAVINCI_MMCDRSP      0x48
#define DAVINCI_MMCETOK      0x4C
#define DAVINCI_MMCCIDX      0x50
#define DAVINCI_MMCCKC       0x54
#define DAVINCI_MMCTORC      0x58
#define DAVINCI_MMCTODC      0x5C
#define DAVINCI_MMCBLNC      0x60
#define DAVINCI_SDIOCTL      0x64
#define DAVINCI_SDIOST0      0x68
#define DAVINCI_SDIOIEN      0x6C
#define DAVINCI_SDIOIST      0x70
#define DAVINCI_MMCFIFOCTL   0x74
#define MMCCTL_DATRST         (1 << 0)
#define MMCCTL_CMDRST         (1 << 1)
#define MMCCTL_WIDTH_8_BIT    (1 << 8)
#define MMCCTL_WIDTH_4_BIT    (1 << 2)
#define MMCCTL_DATEG_DISABLED (0 << 6)
#define MMCCTL_DATEG_RISING   (1 << 6)
#define MMCCTL_DATEG_FALLING  (2 << 6)
#define MMCCTL_DATEG_BOTH     (3 << 6)
#define MMCCTL_PERMDR_LE      (0 << 9)
#define MMCCTL_PERMDR_BE      (1 << 9)
#define MMCCTL_PERMDX_LE      (0 << 10)
#define MMCCTL_PERMDX_BE      (1 << 10)
#define MMCCLK_CLKEN          (1 << 8)
#define MMCCLK_CLKRT_MASK     (0xFF << 0)
#define MMCST0_DATDNE         BIT(0)
#define MMCST0_BSYDNE         BIT(1)
#define MMCST0_RSPDNE         BIT(2)
#define MMCST0_TOUTRD         BIT(3)
#define MMCST0_TOUTRS         BIT(4)
#define MMCST0_CRCWR          BIT(5)
#define MMCST0_CRCRD          BIT(6)
#define MMCST0_CRCRS          BIT(7)
#define MMCST0_DXRDY          BIT(9)
#define MMCST0_DRRDY          BIT(10)
#define MMCST0_DATED          BIT(11)
#define MMCST0_TRNDNE         BIT(12)
#define MMCST1_BUSY           (1 << 0)
#define MMCCMD_CMD_MASK       (0x3F << 0)
#define MMCCMD_PPLEN          (1 << 7)
#define MMCCMD_BSYEXP         (1 << 8)
#define MMCCMD_RSPFMT_MASK    (3 << 9)
#define MMCCMD_RSPFMT_NONE    (0 << 9)
#define MMCCMD_RSPFMT_R1456   (1 << 9)
#define MMCCMD_RSPFMT_R2      (2 << 9)
#define MMCCMD_RSPFMT_R3      (3 << 9)
#define MMCCMD_DTRW           (1 << 11)
#define MMCCMD_STRMTP         (1 << 12)
#define MMCCMD_WDATX          (1 << 13)
#define MMCCMD_INITCK         (1 << 14)
#define MMCCMD_DCLR           (1 << 15)
#define MMCCMD_DMATRIG        (1 << 16)
#define MMCFIFOCTL_FIFORST    (1 << 0)
#define MMCFIFOCTL_FIFODIR_WR (1 << 1)
#define MMCFIFOCTL_FIFODIR_RD (0 << 1)
#define MMCFIFOCTL_FIFOLEV    (1 << 2)
#define MMCFIFOCTL_ACCWD_4    (0 << 3)
#define MMCFIFOCTL_ACCWD_3    (1 << 3)
#define MMCFIFOCTL_ACCWD_2    (2 << 3)
#define MMCFIFOCTL_ACCWD_1    (3 << 3)
#define SDIOST0_DAT1_HI       BIT(0)
#define SDIOIEN_IOINTEN       BIT(0)
#define SDIOIST_IOINT         BIT(0)
#define MMCSD_INIT_CLOCK		200000
#define MAX_CCNT	((1 << 16) - 1)
#define MAX_NR_SG	16
static unsigned rw_threshold = 32;
module_param(rw_threshold, uint, S_IRUGO);
MODULE_PARM_DESC(rw_threshold,
"Read/Write threshold. Default = 32");
static unsigned __initdata use_dma = 1;
module_param(use_dma, uint, 0);
MODULE_PARM_DESC(use_dma, "Whether to use DMA or not. Default = 1");
struct mmc_davinci_host ;
static void mmc_davinci_sg_to_buf(struct mmc_davinci_host *host)
static void davinci_fifo_data_trans(struct mmc_davinci_host *host,
unsigned int n)
static void mmc_davinci_start_command(struct mmc_davinci_host *host,
struct mmc_command *cmd)
static void davinci_abort_dma(struct mmc_davinci_host *host)
static void
mmc_davinci_xfer_done(struct mmc_davinci_host *host, struct mmc_data *data);
static void mmc_davinci_dma_cb(unsigned channel, u16 ch_status, void *data)
static void __init mmc_davinci_dma_setup(struct mmc_davinci_host *host,
bool tx, struct edmacc_param *template)
static void mmc_davinci_send_dma_request(struct mmc_davinci_host *host,
struct mmc_data *data)
static int mmc_davinci_start_dma_transfer(struct mmc_davinci_host *host,
struct mmc_data *data)
static void __init_or_module
davinci_release_dma_channels(struct mmc_davinci_host *host)
static int __init davinci_acquire_dma_channels(struct mmc_davinci_host *host)
static void
mmc_davinci_prepare_data(struct mmc_davinci_host *host, struct mmc_request *req)
static void mmc_davinci_request(struct mmc_host *mmc, struct mmc_request *req)
static unsigned int calculate_freq_for_card(struct mmc_davinci_host *host,
unsigned int mmc_req_freq)
static void calculate_clk_divider(struct mmc_host *mmc, struct mmc_ios *ios)
static void mmc_davinci_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
static void
mmc_davinci_xfer_done(struct mmc_davinci_host *host, struct mmc_data *data)
static void mmc_davinci_cmd_done(struct mmc_davinci_host *host,
struct mmc_command *cmd)
static inline void mmc_davinci_reset_ctrl(struct mmc_davinci_host *host,
int val)
static void
davinci_abort_data(struct mmc_davinci_host *host, struct mmc_data *data)
static irqreturn_t mmc_davinci_sdio_irq(int irq, void *dev_id)
static irqreturn_t mmc_davinci_irq(int irq, void *dev_id)
static int mmc_davinci_get_cd(struct mmc_host *mmc)
static int mmc_davinci_get_ro(struct mmc_host *mmc)
static void mmc_davinci_enable_sdio_irq(struct mmc_host *mmc, int enable)
static struct mmc_host_ops mmc_davinci_ops = ;
static int mmc_davinci_cpufreq_transition(struct notifier_block *nb,
unsigned long val, void *data)
static inline int mmc_davinci_cpufreq_register(struct mmc_davinci_host *host)
static inline void mmc_davinci_cpufreq_deregister(struct mmc_davinci_host *host)
static inline int mmc_davinci_cpufreq_register(struct mmc_davinci_host *host)
static inline void mmc_davinci_cpufreq_deregister(struct mmc_davinci_host *host)
static void __init init_mmcsd_host(struct mmc_davinci_host *host)
static int __init davinci_mmcsd_probe(struct platform_device *pdev)
static int __exit davinci_mmcsd_remove(struct platform_device *pdev)
static int davinci_mmcsd_suspend(struct device *dev)
static int davinci_mmcsd_resume(struct device *dev)
static const struct dev_pm_ops davinci_mmcsd_pm = ;
#define davinci_mmcsd_pm_ops (&davinci_mmcsd_pm)
#define davinci_mmcsd_pm_ops NULL
static struct platform_driver davinci_mmcsd_driver = ;
static int __init davinci_mmcsd_init(void)
module_init(davinci_mmcsd_init);
static void __exit davinci_mmcsd_exit(void)
module_exit(davinci_mmcsd_exit);
MODULE_AUTHOR("Texas Instruments India");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("MMC/SD driver for Davinci MMC controller");
