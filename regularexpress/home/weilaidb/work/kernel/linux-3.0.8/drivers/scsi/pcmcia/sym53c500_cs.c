#define SYM53C500_DEBUG 0
#define VERBOSE_SYM53C500_DEBUG 0
#define USE_FAST_PIO 1
#define SYNC_MODE 0
#define C1_IMG   0x07
#define C2_IMG   0x48
#define C3_IMG   0x20
#define C4_IMG   0x04
#define C5_IMG   0xa4
#define C7_IMG   0x80
#define TC_LSB		0x00
#define TC_MSB		0x01
#define SCSI_FIFO	0x02
#define CMD_REG		0x03
#define STAT_REG	0x04
#define DEST_ID		0x04
#define INT_REG		0x05
#define SRTIMOUT	0x05
#define SEQ_REG		0x06
#define SYNCPRD		0x06
#define FIFO_FLAGS	0x07
#define SYNCOFF		0x07
#define CONFIG1		0x08
#define CLKCONV		0x09
#define CONFIG2		0x0B
#define CONFIG3		0x0C
#define CONFIG4		0x0D
#define TC_HIGH		0x0E
#define PIO_FIFO	0x04
#define PIO_STATUS	0x08
#define PIO_FLAG	0x0B
#define CONFIG5		0x09
#define CONFIG7		0x0d
#define REG0(x)		(outb(C4_IMG, (x) + CONFIG4))
#define REG1(x)		outb(C7_IMG, (x) + CONFIG7); outb(C5_IMG, (x) + CONFIG5)
#if SYM53C500_DEBUG
#define DEB(x) x
#define DEB(x)
#if VERBOSE_SYM53C500_DEBUG
#define VDEB(x) x
#define VDEB(x)
#define LOAD_DMA_COUNT(x, count) \
outb(count & 0xff, (x) + TC_LSB); \
outb((count >> 8) & 0xff, (x) + TC_MSB); \
outb((count >> 16) & 0xff, (x) + TC_HIGH);
#define DMA_OP               0x80
#define SCSI_NOP             0x00
#define FLUSH_FIFO           0x01
#define CHIP_RESET           0x02
#define SCSI_RESET           0x03
#define RESELECT             0x40
#define SELECT_NO_ATN        0x41
#define SELECT_ATN           0x42
#define SELECT_ATN_STOP      0x43
#define ENABLE_SEL           0x44
#define DISABLE_SEL          0x45
#define SELECT_ATN3          0x46
#define RESELECT3            0x47
#define TRANSFER_INFO        0x10
#define INIT_CMD_COMPLETE    0x11
#define MSG_ACCEPT           0x12
#define TRANSFER_PAD         0x18
#define SET_ATN              0x1a
#define RESET_ATN            0x1b
#define SEND_MSG             0x20
#define SEND_STATUS          0x21
#define SEND_DATA            0x22
#define DISCONN_SEQ          0x23
#define TERMINATE_SEQ        0x24
#define TARG_CMD_COMPLETE    0x25
#define DISCONN              0x27
#define RECV_MSG             0x28
#define RECV_CMD             0x29
#define RECV_DATA            0x2a
#define RECV_CMD_SEQ         0x2b
#define TARGET_ABORT_DMA     0x04
struct scsi_info_t ;
struct sym53c500_data ;
enum Phase ;
static void
chip_init(int io_port)
static void
SYM53C500_int_host_reset(int io_port)
static __inline__ int
SYM53C500_pio_read(int fast_pio, int base, unsigned char *request, unsigned int reqlen)
static __inline__ int
SYM53C500_pio_write(int fast_pio, int base, unsigned char *request, unsigned int reqlen)
static irqreturn_t
SYM53C500_intr(int irq, void *dev_id)
static void
SYM53C500_release(struct pcmcia_device *link)
static const char*
SYM53C500_info(struct Scsi_Host *SChost)
static int
SYM53C500_queue_lck(struct scsi_cmnd *SCpnt, void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(SYM53C500_queue)
static int
SYM53C500_host_reset(struct scsi_cmnd *SCpnt)
static int
SYM53C500_biosparm(struct scsi_device *disk,
struct block_device *dev,
sector_t capacity, int *info_array)
static ssize_t
SYM53C500_show_pio(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
SYM53C500_store_pio(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute SYM53C500_pio_attr = ;
static struct device_attribute *SYM53C500_shost_attrs[] = ;
static struct scsi_host_template sym53c500_driver_template = ;
static int SYM53C500_config_check(struct pcmcia_device *p_dev, void *priv_data)
static int
SYM53C500_config(struct pcmcia_device *link)
static int sym53c500_resume(struct pcmcia_device *link)
static void
SYM53C500_detach(struct pcmcia_device *link)
static int
SYM53C500_probe(struct pcmcia_device *link)
MODULE_AUTHOR("Bob Tracy <rct@frus.com>");
MODULE_DESCRIPTION("SYM53C500 PCMCIA SCSI driver");
MODULE_LICENSE("GPL");
static const struct pcmcia_device_id sym53c500_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, sym53c500_ids);
static struct pcmcia_driver sym53c500_cs_driver = ;
static int __init
init_sym53c500_cs(void)
static void __exit
exit_sym53c500_cs(void)
module_init(init_sym53c500_cs);
module_exit(exit_sym53c500_cs);
