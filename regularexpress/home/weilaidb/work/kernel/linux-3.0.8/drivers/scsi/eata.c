static int eata2x_detect(struct scsi_host_template *);
static int eata2x_release(struct Scsi_Host *);
static int eata2x_queuecommand(struct Scsi_Host *, struct scsi_cmnd *);
static int eata2x_eh_abort(struct scsi_cmnd *);
static int eata2x_eh_host_reset(struct scsi_cmnd *);
static int eata2x_bios_param(struct scsi_device *, struct block_device *,
sector_t, int *);
static int eata2x_slave_configure(struct scsi_device *);
static struct scsi_host_template driver_template = ;
#if !defined(__BIG_ENDIAN_BITFIELD) && !defined(__LITTLE_ENDIAN_BITFIELD)
#error "Adjust your <asm/byteorder.h> defines"
#define ISA  0
#define ESA 1
#undef  FORCE_CONFIG
#undef  DEBUG_LINKED_COMMANDS
#undef  DEBUG_DETECT
#undef  DEBUG_PCI_DETECT
#undef  DEBUG_INTERRUPT
#undef  DEBUG_RESET
#undef  DEBUG_GENERATE_ERRORS
#undef  DEBUG_GENERATE_ABORTS
#undef  DEBUG_GEOMETRY
#define MAX_ISA 4
#define MAX_VESA 0
#define MAX_EISA 15
#define MAX_PCI 16
#define MAX_BOARDS (MAX_ISA + MAX_VESA + MAX_EISA + MAX_PCI)
#define MAX_CHANNEL 4
#define MAX_LUN 32
#define MAX_TARGET 32
#define MAX_MAILBOXES 64
#define MAX_SGLIST 64
#define MAX_LARGE_SGLIST 122
#define MAX_INTERNAL_RETRIES 64
#define MAX_CMD_PER_LUN 2
#define MAX_TAGGED_CMD_PER_LUN (MAX_MAILBOXES - MAX_CMD_PER_LUN)
#define SKIP ULONG_MAX
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
#define REG_CMD         7
#define REG_STATUS      7
#define REG_AUX_STATUS  8
#define REG_DATA        0
#define REG_DATA2       1
#define REG_SEE         6
#define REG_LOW         2
#define REG_LM          3
#define REG_MID         4
#define REG_MSB         5
#define REGION_SIZE     9UL
#define MAX_ISA_ADDR    0x03ff
#define MIN_EISA_ADDR   0x1c88
#define MAX_EISA_ADDR   0xfc88
#define BSY_ASSERTED      0x80
#define DRQ_ASSERTED      0x08
#define ABSY_ASSERTED     0x01
#define IRQ_ASSERTED      0x02
#define READ_CONFIG_PIO   0xf0
#define SET_CONFIG_PIO    0xf1
#define SEND_CP_PIO       0xf2
#define RECEIVE_SP_PIO    0xf3
#define TRUNCATE_XFR_PIO  0xf4
#define RESET_PIO         0xf9
#define READ_CONFIG_DMA   0xfd
#define SET_CONFIG_DMA    0xfe
#define SEND_CP_DMA       0xff
#define ASOK              0x00
#define ASST              0x01
#define YESNO(a) ((a) ? 'y' : 'n')
#define TLDEV(type) ((type) == TYPE_DISK || (type) == TYPE_ROM)
#define EATA_SIG_BE 0x45415441
#define EATA_2_0A_SIZE 28
#define EATA_2_0B_SIZE 30
#define EATA_2_0C_SIZE 34
struct eata_info ;
struct eata_config ;
struct mssp ;
struct sg_list ;
struct mscp ;
#define CP_TAIL_SIZE (sizeof(struct sglist *) + sizeof(dma_addr_t))
struct hostdata ;
static struct Scsi_Host *sh[MAX_BOARDS];
static const char *driver_name = "EATA";
static char sha[MAX_BOARDS];
static DEFINE_SPINLOCK(driver_lock);
static unsigned int num_boards = MAX_BOARDS;
static unsigned long io_port[] = ;
#define H2DEV(x)   cpu_to_be32(x)
#define DEV2H(x)   be32_to_cpu(x)
#define H2DEV16(x) cpu_to_be16(x)
#define DEV2H16(x) be16_to_cpu(x)
#define REG2H(x)   le16_to_cpu(x)
static irqreturn_t do_interrupt_handler(int, void *);
static void flush_dev(struct scsi_device *, unsigned long, struct hostdata *,
unsigned int);
static int do_trace = 0;
static int setup_done = 0;
static int link_statistics;
static int ext_tran = 0;
static int rev_scan = 1;
#if defined(CONFIG_SCSI_EATA_TAGGED_QUEUE)
static int tag_mode = TAG_SIMPLE;
static int tag_mode = TAG_DISABLED;
#if defined(CONFIG_SCSI_EATA_LINKED_COMMANDS)
static int linked_comm = 1;
static int linked_comm = 0;
#if defined(CONFIG_SCSI_EATA_MAX_TAGS)
static int max_queue_depth = CONFIG_SCSI_EATA_MAX_TAGS;
static int max_queue_depth = MAX_CMD_PER_LUN;
#if defined(CONFIG_ISA)
static int isa_probe = 1;
static int isa_probe = 0;
#if defined(CONFIG_EISA)
static int eisa_probe = 1;
static int eisa_probe = 0;
#if defined(CONFIG_PCI)
static int pci_probe = 1;
static int pci_probe = 0;
#define MAX_INT_PARAM 10
#define MAX_BOOT_OPTIONS_SIZE 256
static char boot_options[MAX_BOOT_OPTIONS_SIZE];
#if defined(MODULE)
module_param_string(eata, boot_options, MAX_BOOT_OPTIONS_SIZE, 0);
MODULE_PARM_DESC(eata, " equivalent to the \"eata=...\" kernel boot option."
"            Example: modprobe eata \"eata=0x7410,0x230,lc:y,tm:0,mq:4,ep:n\"");
MODULE_AUTHOR("Dario Ballabio");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("EATA/DMA SCSI Driver");
static int eata2x_slave_configure(struct scsi_device *dev)
static int wait_on_busy(unsigned long iobase, unsigned int loop)
static int do_dma(unsigned long iobase, unsigned long addr, unchar cmd)
static int read_pio(unsigned long iobase, ushort * start, ushort * end)
static struct pci_dev *get_pci_dev(unsigned long port_base)
static void enable_pci_ports(void)
static int port_detect(unsigned long port_base, unsigned int j,
struct scsi_host_template *tpnt)
static void internal_setup(char *str, int *ints)
static int option_setup(char *str)
static void add_pci_ports(void)
static int eata2x_detect(struct scsi_host_template *tpnt)
static void map_dma(unsigned int i, struct hostdata *ha)
static void unmap_dma(unsigned int i, struct hostdata *ha)
static void sync_dma(unsigned int i, struct hostdata *ha)
static void scsi_to_dev_dir(unsigned int i, struct hostdata *ha)
static int eata2x_queuecommand_lck(struct scsi_cmnd *SCpnt,
void (*done) (struct scsi_cmnd *))
static DEF_SCSI_QCMD(eata2x_queuecommand)
static int eata2x_eh_abort(struct scsi_cmnd *SCarg)
static int eata2x_eh_host_reset(struct scsi_cmnd *SCarg)
int eata2x_bios_param(struct scsi_device *sdev, struct block_device *bdev,
sector_t capacity, int *dkinfo)
static void sort(unsigned long sk[], unsigned int da[], unsigned int n,
unsigned int rev)
static int reorder(struct hostdata *ha, unsigned long cursec,
unsigned int ihdlr, unsigned int il[], unsigned int n_ready)
static void flush_dev(struct scsi_device *dev, unsigned long cursec,
struct hostdata *ha, unsigned int ihdlr)
static irqreturn_t ihdlr(struct Scsi_Host *shost)
static irqreturn_t do_interrupt_handler(int dummy, void *shap)
static int eata2x_release(struct Scsi_Host *shost)
__setup("eata=", option_setup);
