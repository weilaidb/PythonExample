#define NCR53C406A_DEBUG 0
#define VERBOSE_NCR53C406A_DEBUG 0
#define USE_PIO 1
#define USE_BIOS 0
#define USE_FAST_PIO 1
#define WATCHDOG 5000000
#define SYNC_MODE 0
#undef NCR53C406A_DEBUG
#define NCR53C406A_DEBUG 1
#if USE_PIO
#define USE_DMA 0
#define USE_DMA 1
#define C1_IMG   0x07
#define C2_IMG   0x48
#if USE_DMA
#define C3_IMG   0x21
#define C3_IMG   0x20
#define C4_IMG   0x04
#define C5_IMG   0xb6
#define REG0 (outb(C4_IMG, CONFIG4))
#define REG1 (outb(C5_IMG, CONFIG5))
#if NCR53C406A_DEBUG
#define DEB(x) x
#define DEB(x)
#if VERBOSE_NCR53C406A_DEBUG
#define VDEB(x) x
#define VDEB(x)
#define LOAD_DMA_COUNT(count) \
outb(count & 0xff, TC_LSB); \
outb((count >> 8) & 0xff, TC_MSB); \
outb((count >> 16) & 0xff, TC_HIGH);
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
#if NCR53C406A_DEBUG
#define rtrc(i)
#define rtrc(i)
enum Phase ;
static void NCR53c406a_intr(void *);
static irqreturn_t do_NCR53c406a_intr(int, void *);
static void chip_init(void);
static void calc_port_addr(void);
static int irq_probe(void);
#if USE_BIOS
static void *bios_base;
static int port_base = PORT_BASE;
static int port_base;
static int irq_level = IRQ_LEV;
static int irq_level = -1;
#if USE_DMA
static int dma_chan;
#if USE_PIO
static int fast_pio = USE_FAST_PIO;
static Scsi_Cmnd *current_SC;
static char info_msg[256];
#if USE_BIOS
static void *addresses[] = ;
#define ADDRESS_COUNT ARRAY_SIZE(addresses)
static unsigned short ports[] = ;
#define PORT_COUNT ARRAY_SIZE(ports)
static unsigned short intrs[] = ;
#define INTR_COUNT ARRAY_SIZE(intrs)
#if USE_BIOS
struct signature  signatures[] __initdata = ;
#define SIGNATURE_COUNT ARRAY_SIZE(signatures)
static int TC_LSB;
static int TC_MSB;
static int SCSI_FIFO;
static int CMD_REG;
static int STAT_REG;
static int DEST_ID;
static int INT_REG;
static int SRTIMOUT;
static int SEQ_REG;
static int SYNCPRD;
static int FIFO_FLAGS;
static int SYNCOFF;
static int CONFIG1;
static int CLKCONV;
static int CONFIG3;
static int CONFIG4;
static int TC_HIGH;
static int CONFIG5;
#if USE_DMA
static __inline__ int NCR53c406a_dma_setup(unsigned char *ptr, unsigned int count, unsigned char mode)
static __inline__ int NCR53c406a_dma_write(unsigned char *src, unsigned int count)
static __inline__ int NCR53c406a_dma_read(unsigned char *src, unsigned int count)
static __inline__ int NCR53c406a_dma_residual(void)
#if USE_PIO
static __inline__ int NCR53c406a_pio_read(unsigned char *request, unsigned int reqlen)
static __inline__ int NCR53c406a_pio_write(unsigned char *request, unsigned int reqlen)
static int __init NCR53c406a_detect(struct scsi_host_template * tpnt)
static int NCR53c406a_release(struct Scsi_Host *shost)
static int __init NCR53c406a_setup(char *str)
__setup("ncr53c406a=", NCR53c406a_setup);
static const char *NCR53c406a_info(struct Scsi_Host *SChost)
static int NCR53c406a_queue_lck(Scsi_Cmnd * SCpnt, void (*done) (Scsi_Cmnd *))
static DEF_SCSI_QCMD(NCR53c406a_queue)
static int NCR53c406a_host_reset(Scsi_Cmnd * SCpnt)
static int NCR53c406a_biosparm(struct scsi_device *disk,
struct block_device *dev,
sector_t capacity, int *info_array)
static irqreturn_t do_NCR53c406a_intr(int unused, void *dev_id)
static void NCR53c406a_intr(void *dev_id)
static int irq_probe(void)
static void chip_init(void)
static void __init calc_port_addr(void)
MODULE_LICENSE("GPL");
static struct scsi_host_template driver_template =
;
