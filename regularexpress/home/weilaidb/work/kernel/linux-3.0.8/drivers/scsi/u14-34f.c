#undef HAVE_OLD_UX4F_FIRMWARE
static int u14_34f_detect(struct scsi_host_template *);
static int u14_34f_release(struct Scsi_Host *);
static int u14_34f_queuecommand(struct Scsi_Host *, struct scsi_cmnd *);
static int u14_34f_eh_abort(struct scsi_cmnd *);
static int u14_34f_eh_host_reset(struct scsi_cmnd *);
static int u14_34f_bios_param(struct scsi_device *, struct block_device *,
sector_t, int *);
static int u14_34f_slave_configure(struct scsi_device *);
static struct scsi_host_template driver_template = ;
#if !defined(__BIG_ENDIAN_BITFIELD) && !defined(__LITTLE_ENDIAN_BITFIELD)
#error "Adjust your <asm/byteorder.h> defines"
#define PRODUCT_ID1  0x56
#define PRODUCT_ID2  0x40
#define ISA  0
#define ESA 1
#define OP_HOST_ADAPTER   0x1
#define OP_SCSI           0x2
#define OP_RESET          0x4
#define DTD_SCSI          0x0
#define DTD_IN            0x1
#define DTD_OUT           0x2
#define DTD_NONE          0x3
#define HA_CMD_INQUIRY    0x1
#define HA_CMD_SELF_DIAG  0x2
#define HA_CMD_READ_BUFF  0x3
#define HA_CMD_WRITE_BUFF 0x4
#undef  DEBUG_LINKED_COMMANDS
#undef  DEBUG_DETECT
#undef  DEBUG_INTERRUPT
#undef  DEBUG_RESET
#undef  DEBUG_GENERATE_ERRORS
#undef  DEBUG_GENERATE_ABORTS
#undef  DEBUG_GEOMETRY
#define MAX_ISA 3
#define MAX_VESA 1
#define MAX_EISA 0
#define MAX_PCI 0
#define MAX_BOARDS (MAX_ISA + MAX_VESA + MAX_EISA + MAX_PCI)
#define MAX_CHANNEL 1
#define MAX_LUN 8
#define MAX_TARGET 8
#define MAX_MAILBOXES 16
#define MAX_SGLIST 32
#define MAX_SAFE_SGLIST 16
#define MAX_INTERNAL_RETRIES 64
#define MAX_CMD_PER_LUN 2
#define MAX_TAGGED_CMD_PER_LUN (MAX_MAILBOXES - MAX_CMD_PER_LUN)
#define SKIP ULONG_MAX
#define FALSE 0
#define TRUE 1
#define FREE 0
#define IN_USE   1
#define LOCKED   2
#define IN_RESET 3
#define IGNORE   4
#define READY    5
#define ABORTING 6
#define NO_DMA  0xff
#define MAXLOOP  10000
#define TAG_DISABLED 0
#define TAG_SIMPLE   1
#define TAG_ORDERED  2
#define REG_LCL_MASK      0
#define REG_LCL_INTR      1
#define REG_SYS_MASK      2
#define REG_SYS_INTR      3
#define REG_PRODUCT_ID1   4
#define REG_PRODUCT_ID2   5
#define REG_CONFIG1       6
#define REG_CONFIG2       7
#define REG_OGM           8
#define REG_ICM           12
#define REGION_SIZE       13UL
#define BSY_ASSERTED      0x01
#define IRQ_ASSERTED      0x01
#define CMD_RESET         0xc0
#define CMD_OGM_INTR      0x01
#define CMD_CLR_INTR      0x01
#define CMD_ENA_INTR      0x81
#define ASOK              0x00
#define ASST              0x91
#define YESNO(a) ((a) ? 'y' : 'n')
#define TLDEV(type) ((type) == TYPE_DISK || (type) == TYPE_ROM)
#define PACKED          __attribute__((packed))
struct sg_list ;
struct mscp ;
#define CP_TAIL_SIZE (sizeof(struct sglist *) + sizeof(dma_addr_t))
struct hostdata ;
static struct Scsi_Host *sh[MAX_BOARDS + 1];
static const char *driver_name = "Ux4F";
static char sha[MAX_BOARDS];
static DEFINE_SPINLOCK(driver_lock);
static unsigned int num_boards = MAX_BOARDS;
static unsigned long io_port[] = ;
#define HD(board) ((struct hostdata *) &sh[board]->hostdata)
#define BN(board) (HD(board)->board_name)
#define H2DEV(x) cpu_to_le32(x)
#define DEV2H(x) le32_to_cpu(x)
static irqreturn_t do_interrupt_handler(int, void *);
static void flush_dev(struct scsi_device *, unsigned long, unsigned int, unsigned int);
static int do_trace = FALSE;
static int setup_done = FALSE;
static int link_statistics;
static int ext_tran = FALSE;
#if defined(HAVE_OLD_UX4F_FIRMWARE)
static int have_old_firmware = TRUE;
static int have_old_firmware = FALSE;
#if defined(CONFIG_SCSI_U14_34F_TAGGED_QUEUE)
static int tag_mode = TAG_SIMPLE;
static int tag_mode = TAG_DISABLED;
#if defined(CONFIG_SCSI_U14_34F_LINKED_COMMANDS)
static int linked_comm = TRUE;
static int linked_comm = FALSE;
#if defined(CONFIG_SCSI_U14_34F_MAX_TAGS)
static int max_queue_depth = CONFIG_SCSI_U14_34F_MAX_TAGS;
static int max_queue_depth = MAX_CMD_PER_LUN;
#define MAX_INT_PARAM 10
#define MAX_BOOT_OPTIONS_SIZE 256
static char boot_options[MAX_BOOT_OPTIONS_SIZE];
#if defined(MODULE)
module_param_string(u14_34f, boot_options, MAX_BOOT_OPTIONS_SIZE, 0);
MODULE_PARM_DESC(u14_34f, " equivalent to the \"u14-34f=...\" kernel boot " \
"option." \
"      Example: modprobe u14-34f \"u14_34f=0x340,0x330,lc:y,tm:0,mq:4\"");
MODULE_AUTHOR("Dario Ballabio");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("UltraStor 14F/34F SCSI Driver");
static int u14_34f_slave_configure(struct scsi_device *dev)
static int wait_on_busy(unsigned long iobase, unsigned int loop)
static int board_inquiry(unsigned int j)
static int port_detect \
(unsigned long port_base, unsigned int j, struct scsi_host_template *tpnt)
static void internal_setup(char *str, int *ints)
static int option_setup(char *str)
static int u14_34f_detect(struct scsi_host_template *tpnt)
static void map_dma(unsigned int i, unsigned int j)
static void unmap_dma(unsigned int i, unsigned int j)
static void sync_dma(unsigned int i, unsigned int j)
static void scsi_to_dev_dir(unsigned int i, unsigned int j)
static int u14_34f_queuecommand_lck(struct scsi_cmnd *SCpnt, void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(u14_34f_queuecommand)
static int u14_34f_eh_abort(struct scsi_cmnd *SCarg)
static int u14_34f_eh_host_reset(struct scsi_cmnd *SCarg)
static int u14_34f_bios_param(struct scsi_device *disk,
struct block_device *bdev, sector_t capacity, int *dkinfo)
static void sort(unsigned long sk[], unsigned int da[], unsigned int n,
unsigned int rev)
static int reorder(unsigned int j, unsigned long cursec,
unsigned int ihdlr, unsigned int il[], unsigned int n_ready)
static void flush_dev(struct scsi_device *dev, unsigned long cursec, unsigned int j,
unsigned int ihdlr)
static irqreturn_t ihdlr(unsigned int j)
static irqreturn_t do_interrupt_handler(int irq, void *shap)
static int u14_34f_release(struct Scsi_Host *shpnt)
__setup("u14-34f=", option_setup);
