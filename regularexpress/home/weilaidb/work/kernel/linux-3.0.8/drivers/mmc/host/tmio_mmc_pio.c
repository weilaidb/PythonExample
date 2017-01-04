static u16 sd_ctrl_read16(struct tmio_mmc_host *host, int addr)
static void sd_ctrl_read16_rep(struct tmio_mmc_host *host, int addr,
u16 *buf, int count)
static u32 sd_ctrl_read32(struct tmio_mmc_host *host, int addr)
static void sd_ctrl_write16(struct tmio_mmc_host *host, int addr, u16 val)
static void sd_ctrl_write16_rep(struct tmio_mmc_host *host, int addr,
u16 *buf, int count)
static void sd_ctrl_write32(struct tmio_mmc_host *host, int addr, u32 val)
void tmio_mmc_enable_mmc_irqs(struct tmio_mmc_host *host, u32 i)
void tmio_mmc_disable_mmc_irqs(struct tmio_mmc_host *host, u32 i)
static void tmio_mmc_ack_mmc_irqs(struct tmio_mmc_host *host, u32 i)
static void tmio_mmc_init_sg(struct tmio_mmc_host *host, struct mmc_data *data)
static int tmio_mmc_next_sg(struct tmio_mmc_host *host)
#define STATUS_TO_TEXT(a, status, i) \
do  while (0)
static void pr_debug_status(u32 status)
#define pr_debug_status(s)  do  while (0)
static void tmio_mmc_enable_sdio_irq(struct mmc_host *mmc, int enable)
static void tmio_mmc_set_clock(struct tmio_mmc_host *host, int new_clock)
static void tmio_mmc_clk_stop(struct tmio_mmc_host *host)
static void tmio_mmc_clk_start(struct tmio_mmc_host *host)
static void tmio_mmc_reset(struct tmio_mmc_host *host)
static void tmio_mmc_reset_work(struct work_struct *work)
static void tmio_mmc_finish_request(struct tmio_mmc_host *host)
#define APP_CMD        0x0040
#define RESP_NONE      0x0300
#define RESP_R1        0x0400
#define RESP_R1B       0x0500
#define RESP_R2        0x0600
#define RESP_R3        0x0700
#define DATA_PRESENT   0x0800
#define TRANSFER_READ  0x1000
#define TRANSFER_MULTI 0x2000
#define SECURITY_CMD   0x4000
static int tmio_mmc_start_command(struct tmio_mmc_host *host, struct mmc_command *cmd)
static void tmio_mmc_pio_irq(struct tmio_mmc_host *host)
static void tmio_mmc_check_bounce_buffer(struct tmio_mmc_host *host)
void tmio_mmc_do_data_irq(struct tmio_mmc_host *host)
static void tmio_mmc_data_irq(struct tmio_mmc_host *host)
static void tmio_mmc_cmd_irq(struct tmio_mmc_host *host,
unsigned int stat)
irqreturn_t tmio_mmc_irq(int irq, void *devid)
EXPORT_SYMBOL(tmio_mmc_irq);
static int tmio_mmc_start_data(struct tmio_mmc_host *host,
struct mmc_data *data)
static void tmio_mmc_request(struct mmc_host *mmc, struct mmc_request *mrq)
static void tmio_mmc_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
static int tmio_mmc_get_ro(struct mmc_host *mmc)
static int tmio_mmc_get_cd(struct mmc_host *mmc)
static const struct mmc_host_ops tmio_mmc_ops = ;
int __devinit tmio_mmc_host_probe(struct tmio_mmc_host **host,
struct platform_device *pdev,
struct tmio_mmc_data *pdata)
EXPORT_SYMBOL(tmio_mmc_host_probe);
void tmio_mmc_host_remove(struct tmio_mmc_host *host)
EXPORT_SYMBOL(tmio_mmc_host_remove);
int tmio_mmc_host_suspend(struct device *dev)
EXPORT_SYMBOL(tmio_mmc_host_suspend);
int tmio_mmc_host_resume(struct device *dev)
EXPORT_SYMBOL(tmio_mmc_host_resume);
int tmio_mmc_host_runtime_suspend(struct device *dev)
EXPORT_SYMBOL(tmio_mmc_host_runtime_suspend);
int tmio_mmc_host_runtime_resume(struct device *dev)
EXPORT_SYMBOL(tmio_mmc_host_runtime_resume);
MODULE_LICENSE("GPL v2");
