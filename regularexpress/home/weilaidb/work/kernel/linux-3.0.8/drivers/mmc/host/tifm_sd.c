#define DRIVER_NAME "tifm_sd"
#define DRIVER_VERSION "0.8"
static int no_dma = 0;
static int fixed_timeout = 0;
module_param(no_dma, bool, 0644);
module_param(fixed_timeout, bool, 0644);
#define TIFM_MMCSD_RESET      0x0002
#define TIFM_MMCSD_CLKMASK    0x03ff
#define TIFM_MMCSD_POWER      0x0800
#define TIFM_MMCSD_4BBUS      0x8000
#define TIFM_MMCSD_RXDE       0x8000
#define TIFM_MMCSD_TXDE       0x0080
#define TIFM_MMCSD_BUFINT     0x0c00
#define TIFM_MMCSD_DPE        0x0020
#define TIFM_MMCSD_INAB       0x0080
#define TIFM_MMCSD_READ       0x8000
#define TIFM_MMCSD_ERRMASK    0x01e0
#define TIFM_MMCSD_EOC        0x0001
#define TIFM_MMCSD_CD         0x0002
#define TIFM_MMCSD_CB         0x0004
#define TIFM_MMCSD_BRS        0x0008
#define TIFM_MMCSD_EOFB       0x0010
#define TIFM_MMCSD_DTO        0x0020
#define TIFM_MMCSD_DCRC       0x0040
#define TIFM_MMCSD_CTO        0x0080
#define TIFM_MMCSD_CCRC       0x0100
#define TIFM_MMCSD_AF         0x0400
#define TIFM_MMCSD_AE         0x0800
#define TIFM_MMCSD_OCRB       0x1000
#define TIFM_MMCSD_CIRQ       0x2000
#define TIFM_MMCSD_CERR       0x4000
#define TIFM_MMCSD_ODTO       0x0040
#define TIFM_MMCSD_CARD_RO    0x0200
#define TIFM_MMCSD_FIFO_SIZE  0x0020
#define TIFM_MMCSD_RSP_R0     0x0000
#define TIFM_MMCSD_RSP_R1     0x0100
#define TIFM_MMCSD_RSP_R2     0x0200
#define TIFM_MMCSD_RSP_R3     0x0300
#define TIFM_MMCSD_RSP_R4     0x0400
#define TIFM_MMCSD_RSP_R5     0x0500
#define TIFM_MMCSD_RSP_R6     0x0600
#define TIFM_MMCSD_RSP_BUSY   0x0800
#define TIFM_MMCSD_CMD_BC     0x0000
#define TIFM_MMCSD_CMD_BCR    0x1000
#define TIFM_MMCSD_CMD_AC     0x2000
#define TIFM_MMCSD_CMD_ADTC   0x3000
#define TIFM_MMCSD_MAX_BLOCK_SIZE  0x0800UL
enum ;
struct tifm_sd ;
static void tifm_sd_read_fifo(struct tifm_sd *host, struct page *pg,
unsigned int off, unsigned int cnt)
static void tifm_sd_write_fifo(struct tifm_sd *host, struct page *pg,
unsigned int off, unsigned int cnt)
static void tifm_sd_transfer_data(struct tifm_sd *host)
static void tifm_sd_copy_page(struct page *dst, unsigned int dst_off,
struct page *src, unsigned int src_off,
unsigned int count)
static void tifm_sd_bounce_block(struct tifm_sd *host, struct mmc_data *r_data)
static int tifm_sd_set_dma_data(struct tifm_sd *host, struct mmc_data *r_data)
static unsigned int tifm_sd_op_flags(struct mmc_command *cmd)
static void tifm_sd_exec(struct tifm_sd *host, struct mmc_command *cmd)
static void tifm_sd_fetch_resp(struct mmc_command *cmd, struct tifm_dev *sock)
static void tifm_sd_check_status(struct tifm_sd *host)
static void tifm_sd_data_event(struct tifm_dev *sock)
static void tifm_sd_card_event(struct tifm_dev *sock)
static void tifm_sd_set_data_timeout(struct tifm_sd *host,
struct mmc_data *data)
static void tifm_sd_request(struct mmc_host *mmc, struct mmc_request *mrq)
static void tifm_sd_end_cmd(unsigned long data)
static void tifm_sd_abort(unsigned long data)
static void tifm_sd_ios(struct mmc_host *mmc, struct mmc_ios *ios)
static int tifm_sd_ro(struct mmc_host *mmc)
static const struct mmc_host_ops tifm_sd_ops = ;
static int tifm_sd_initialize_host(struct tifm_sd *host)
static int tifm_sd_probe(struct tifm_dev *sock)
static void tifm_sd_remove(struct tifm_dev *sock)
static int tifm_sd_suspend(struct tifm_dev *sock, pm_message_t state)
static int tifm_sd_resume(struct tifm_dev *sock)
#define tifm_sd_suspend NULL
#define tifm_sd_resume NULL
static struct tifm_device_id tifm_sd_id_tbl[] = ;
static struct tifm_driver tifm_sd_driver = ;
static int __init tifm_sd_init(void)
static void __exit tifm_sd_exit(void)
MODULE_AUTHOR("Alex Dubov");
MODULE_DESCRIPTION("TI FlashMedia SD driver");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(tifm, tifm_sd_id_tbl);
MODULE_VERSION(DRIVER_VERSION);
module_init(tifm_sd_init);
module_exit(tifm_sd_exit);
