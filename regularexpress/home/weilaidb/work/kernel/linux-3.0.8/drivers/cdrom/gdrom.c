#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define GDROM_DEV_NAME "gdrom"
#define GD_SESSION_OFFSET 150
#define GDROM_COM_SOFTRESET 0x08
#define GDROM_COM_EXECDIAG 0x90
#define GDROM_COM_PACKET 0xA0
#define GDROM_COM_IDDEV 0xA1
#define GDROM_BASE_REG			0xA05F7000
#define GDROM_ALTSTATUS_REG		(GDROM_BASE_REG + 0x18)
#define GDROM_DATA_REG			(GDROM_BASE_REG + 0x80)
#define GDROM_ERROR_REG		(GDROM_BASE_REG + 0x84)
#define GDROM_INTSEC_REG		(GDROM_BASE_REG + 0x88)
#define GDROM_SECNUM_REG		(GDROM_BASE_REG + 0x8C)
#define GDROM_BCL_REG			(GDROM_BASE_REG + 0x90)
#define GDROM_BCH_REG			(GDROM_BASE_REG + 0x94)
#define GDROM_DSEL_REG			(GDROM_BASE_REG + 0x98)
#define GDROM_STATUSCOMMAND_REG	(GDROM_BASE_REG + 0x9C)
#define GDROM_RESET_REG		(GDROM_BASE_REG + 0x4E4)
#define GDROM_DMA_STARTADDR_REG	(GDROM_BASE_REG + 0x404)
#define GDROM_DMA_LENGTH_REG		(GDROM_BASE_REG + 0x408)
#define GDROM_DMA_DIRECTION_REG	(GDROM_BASE_REG + 0x40C)
#define GDROM_DMA_ENABLE_REG		(GDROM_BASE_REG + 0x414)
#define GDROM_DMA_STATUS_REG		(GDROM_BASE_REG + 0x418)
#define GDROM_DMA_WAIT_REG		(GDROM_BASE_REG + 0x4A0)
#define GDROM_DMA_ACCESS_CTRL_REG	(GDROM_BASE_REG + 0x4B8)
#define GDROM_HARD_SECTOR	2048
#define BLOCK_LAYER_SECTOR	512
#define GD_TO_BLK		4
#define GDROM_DEFAULT_TIMEOUT	(HZ * 7)
static DEFINE_MUTEX(gdrom_mutex);
static const struct  sense_texts[] = ;
static struct platform_device *pd;
static int gdrom_major;
static DECLARE_WAIT_QUEUE_HEAD(command_queue);
static DECLARE_WAIT_QUEUE_HEAD(request_queue);
static DEFINE_SPINLOCK(gdrom_lock);
static void gdrom_readdisk_dma(struct work_struct *work);
static DECLARE_WORK(work, gdrom_readdisk_dma);
static LIST_HEAD(gdrom_deferred);
struct gdromtoc ;
static struct gdrom_unit  gd;
struct gdrom_id ;
static int gdrom_getsense(short *bufstring);
static int gdrom_packetcommand(struct cdrom_device_info *cd_info,
struct packet_command *command);
static int gdrom_hardreset(struct cdrom_device_info *cd_info);
static bool gdrom_is_busy(void)
static bool gdrom_data_request(void)
static bool gdrom_wait_clrbusy(void)
static bool gdrom_wait_busy_sleeps(void)
static void gdrom_identifydevice(void *buf)
static void gdrom_spicommand(void *spi_string, int buflen)
static char gdrom_execute_diagnostic(void)
static int gdrom_preparedisk_cmd(void)
static int gdrom_readtoc_cmd(struct gdromtoc *toc, int session)
static int get_entry_lba(int track)
static int get_entry_q_ctrl(int track)
static int get_entry_track(int track)
static int gdrom_get_last_session(struct cdrom_device_info *cd_info,
struct cdrom_multisession *ms_info)
static int gdrom_open(struct cdrom_device_info *cd_info, int purpose)
static void gdrom_release(struct cdrom_device_info *cd_info)
static int gdrom_drivestatus(struct cdrom_device_info *cd_info, int ignore)
static unsigned int gdrom_check_events(struct cdrom_device_info *cd_info,
unsigned int clearing, int ignore)
static int gdrom_hardreset(struct cdrom_device_info *cd_info)
static int gdrom_packetcommand(struct cdrom_device_info *cd_info,
struct packet_command *command)
static int gdrom_getsense(short *bufstring)
static int gdrom_audio_ioctl(struct cdrom_device_info *cdi, unsigned int cmd,
void *arg)
static struct cdrom_device_ops gdrom_ops = ;
static int gdrom_bdops_open(struct block_device *bdev, fmode_t mode)
static int gdrom_bdops_release(struct gendisk *disk, fmode_t mode)
static unsigned int gdrom_bdops_check_events(struct gendisk *disk,
unsigned int clearing)
static int gdrom_bdops_ioctl(struct block_device *bdev, fmode_t mode,
unsigned cmd, unsigned long arg)
static const struct block_device_operations gdrom_bdops = ;
static irqreturn_t gdrom_command_interrupt(int irq, void *dev_id)
static irqreturn_t gdrom_dma_interrupt(int irq, void *dev_id)
static int __devinit gdrom_set_interrupt_handlers(void)
static void gdrom_readdisk_dma(struct work_struct *work)
static void gdrom_request(struct request_queue *rq)
static int __devinit gdrom_outputversion(void)
static int __devinit gdrom_init_dma_mode(void)
static void __devinit probe_gdrom_setupcd(void)
static void __devinit probe_gdrom_setupdisk(void)
static int __devinit probe_gdrom_setupqueue(void)
static int __devinit probe_gdrom(struct platform_device *devptr)
static int __devexit remove_gdrom(struct platform_device *devptr)
static struct platform_driver gdrom_driver = ;
static int __init init_gdrom(void)
static void __exit exit_gdrom(void)
module_init(init_gdrom);
module_exit(exit_gdrom);
MODULE_AUTHOR("Adrian McMenamin <adrian@mcmen.demon.co.uk>");
MODULE_DESCRIPTION("SEGA Dreamcast GD-ROM Driver");
MODULE_LICENSE("GPL");
