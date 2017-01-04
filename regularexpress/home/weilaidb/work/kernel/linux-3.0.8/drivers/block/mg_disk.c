#define MG_RES_SEC (CONFIG_MG_DISK_RES << 1)
#define MG_DISK_NAME "mgd"
#define MG_DISK_MAJ 0
#define MG_DISK_MAX_PART 16
#define MG_SECTOR_SIZE 512
#define MG_MAX_SECTS 256
#define MG_BUFF_OFFSET			0x8000
#define MG_REG_OFFSET			0xC000
#define MG_REG_FEATURE			(MG_REG_OFFSET + 2)
#define MG_REG_ERROR			(MG_REG_OFFSET + 2)
#define MG_REG_SECT_CNT			(MG_REG_OFFSET + 4)
#define MG_REG_SECT_NUM			(MG_REG_OFFSET + 6)
#define MG_REG_CYL_LOW			(MG_REG_OFFSET + 8)
#define MG_REG_CYL_HIGH			(MG_REG_OFFSET + 0xA)
#define MG_REG_DRV_HEAD			(MG_REG_OFFSET + 0xC)
#define MG_REG_COMMAND			(MG_REG_OFFSET + 0xE)
#define MG_REG_STATUS			(MG_REG_OFFSET + 0xE)
#define MG_REG_DRV_CTRL			(MG_REG_OFFSET + 0x10)
#define MG_REG_BURST_CTRL		(MG_REG_OFFSET + 0x12)
#define MG_STAT_READY	(ATA_DRDY | ATA_DSC)
#define MG_READY_OK(s)	(((s) & (MG_STAT_READY | (ATA_BUSY | ATA_DF | \
ATA_ERR))) == MG_STAT_READY)
#define MG_ERR_NONE		0
#define MG_ERR_TIMEOUT		0x100
#define MG_ERR_INIT_STAT	0x101
#define MG_ERR_TRANSLATION	0x102
#define MG_ERR_CTRL_RST		0x103
#define MG_ERR_INV_STAT		0x104
#define MG_ERR_RSTOUT		0x105
#define MG_MAX_ERRORS	6
#define MG_CMD_RD 0x20
#define MG_CMD_WR 0x30
#define MG_CMD_SLEEP 0x99
#define MG_CMD_WAKEUP 0xC3
#define MG_CMD_ID 0xEC
#define MG_CMD_WR_CONF 0x3C
#define MG_CMD_RD_CONF 0x40
#define MG_OP_CASCADE (1 << 0)
#define MG_OP_CASCADE_SYNC_RD (1 << 1)
#define MG_OP_CASCADE_SYNC_WR (1 << 2)
#define MG_OP_INTERLEAVE (1 << 3)
#define MG_BURST_LAT_4 (3 << 4)
#define MG_BURST_LAT_5 (4 << 4)
#define MG_BURST_LAT_6 (5 << 4)
#define MG_BURST_LAT_7 (6 << 4)
#define MG_BURST_LAT_8 (7 << 4)
#define MG_BURST_LEN_4 (1 << 1)
#define MG_BURST_LEN_8 (2 << 1)
#define MG_BURST_LEN_16 (3 << 1)
#define MG_BURST_LEN_32 (4 << 1)
#define MG_BURST_LEN_CONT (0 << 1)
#define MG_TMAX_CONF_TO_CMD	1
#define MG_TMAX_WAIT_RD_DRQ	10
#define MG_TMAX_WAIT_WR_DRQ	500
#define MG_TMAX_RST_TO_BUSY	10
#define MG_TMAX_HDRST_TO_RDY	500
#define MG_TMAX_SWRST_TO_RDY	500
#define MG_TMAX_RSTOUT		3000
#define MG_DEV_MASK (MG_BOOT_DEV | MG_STORAGE_DEV | MG_STORAGE_DEV_SKIP_RST)
struct mg_host ;
#undef DO_MG_DEBUG
#  define MG_DBG(fmt, args...) \
printk(KERN_DEBUG "%s:%d "fmt, __func__, __LINE__, ##args)
#  define MG_DBG(fmt, args...) do  while (0)
static void mg_request(struct request_queue *);
static bool mg_end_request(struct mg_host *host, int err, unsigned int nr_bytes)
static bool mg_end_request_cur(struct mg_host *host, int err)
static void mg_dump_status(const char *msg, unsigned int stat,
struct mg_host *host)
static unsigned int mg_wait(struct mg_host *host, u32 expect, u32 msec)
static unsigned int mg_wait_rstout(u32 rstout, u32 msec)
static void mg_unexpected_intr(struct mg_host *host)
static irqreturn_t mg_irq(int irq, void *dev_id)
static void mg_id_string(const u16 *id, unsigned char *s,
unsigned int ofs, unsigned int len)
static void mg_id_c_string(const u16 *id, unsigned char *s,
unsigned int ofs, unsigned int len)
static int mg_get_disk_id(struct mg_host *host)
static int mg_disk_init(struct mg_host *host)
static void mg_bad_rw_intr(struct mg_host *host)
static unsigned int mg_out(struct mg_host *host,
unsigned int sect_num,
unsigned int sect_cnt,
unsigned int cmd,
void (*intr_addr)(struct mg_host *))
static void mg_read_one(struct mg_host *host, struct request *req)
static void mg_read(struct request *req)
static void mg_write_one(struct mg_host *host, struct request *req)
static void mg_write(struct request *req)
static void mg_read_intr(struct mg_host *host)
static void mg_write_intr(struct mg_host *host)
void mg_times_out(unsigned long data)
static void mg_request_poll(struct request_queue *q)
static unsigned int mg_issue_req(struct request *req,
struct mg_host *host,
unsigned int sect_num,
unsigned int sect_cnt)
static void mg_request(struct request_queue *q)
static int mg_getgeo(struct block_device *bdev, struct hd_geometry *geo)
static const struct block_device_operations mg_disk_ops = ;
static int mg_suspend(struct platform_device *plat_dev, pm_message_t state)
static int mg_resume(struct platform_device *plat_dev)
static int mg_probe(struct platform_device *plat_dev)
static int mg_remove(struct platform_device *plat_dev)
static struct platform_driver mg_disk_driver = ;
static int __init mg_init(void)
static void __exit mg_exit(void)
module_init(mg_init);
module_exit(mg_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("unsik Kim <donari75@gmail.com>");
MODULE_DESCRIPTION("mGine m[g]flash device driver");
