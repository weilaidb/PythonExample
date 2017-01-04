MODULE_AUTHOR("Rickard E. Faith");
MODULE_DESCRIPTION("Future domain SCSI driver");
MODULE_LICENSE("GPL");
#define VERSION          "$Revision: 5.51 $"
#define DEBUG            0
#define ENABLE_PARITY    1
#define FIFO_COUNT       2
#if DEBUG
#define EVERY_ACCESS     0
#define ERRORS_ONLY      1
#define DEBUG_DETECT     0
#define DEBUG_MESSAGES   1
#define DEBUG_ABORT      1
#define DEBUG_RESET      1
#define DEBUG_RACE       1
#define EVERY_ACCESS     0
#define ERRORS_ONLY      0
#define DEBUG_DETECT     0
#define DEBUG_MESSAGES   0
#define DEBUG_ABORT      0
#define DEBUG_RESET      0
#define DEBUG_RACE       0
#if EVERY_ACCESS
#undef ERRORS_ONLY
#define ERRORS_ONLY      0
#if ENABLE_PARITY
#define PARITY_MASK      0x08
#define PARITY_MASK      0x00
enum chip_type ;
enum ;
enum in_port_type ;
enum out_port_type ;
static int               port_base;
static unsigned long     bios_base;
static void __iomem *    bios_mem;
static int               bios_major;
static int               bios_minor;
static int               PCI_bus;
static struct pci_dev	*PCI_dev;
static int               Quantum;
static int               interrupt_level;
static volatile int      in_command;
static struct scsi_cmnd  *current_SC;
static enum chip_type    chip              = unknown;
static int               adapter_mask;
static int               this_id;
static int               setup_called;
#if DEBUG_RACE
static volatile int      in_interrupt_flag;
static int               FIFO_Size = 0x2000;
static irqreturn_t       do_fdomain_16x0_intr( int irq, void *dev_id );
static char * fdomain = NULL;
module_param(fdomain, charp, 0);
static unsigned long addresses[] = ;
#define ADDRESS_COUNT ARRAY_SIZE(addresses)
static unsigned short ports[] = ;
#define PORT_COUNT ARRAY_SIZE(ports)
static unsigned short ints[] = ;
static struct signature  signatures[] = ;
#define SIGNATURE_COUNT ARRAY_SIZE(signatures)
static void print_banner( struct Scsi_Host *shpnt )
int fdomain_setup(char *str)
__setup("fdomain=", fdomain_setup);
static void do_pause(unsigned amount)
static inline void fdomain_make_bus_idle( void )
static int fdomain_is_valid_port( int port )
static int fdomain_test_loopback( void )
static int fdomain_get_irq( int base )
static int fdomain_isa_detect( int *irq, int *iobase )
static int fdomain_isa_detect( int *irq, int *iobase )
static int fdomain_pci_bios_detect( int *irq, int *iobase, struct pci_dev **ret_pdev )
struct Scsi_Host *__fdomain_16x0_detect(struct scsi_host_template *tpnt )
static int fdomain_16x0_detect(struct scsi_host_template *tpnt)
static const char *fdomain_16x0_info( struct Scsi_Host *ignore )
outb(0x00, port_base + SCSI_Cntl);
outb(adapter_mask, port_base + SCSI_Data_NoACK);
outb(0x04 | PARITY_MASK, port_base + TMC_Cntl);
timeout = 500;
do  while (--timeout);
fdomain_make_bus_idle();
#if EVERY_ACCESS
printk( "Arbitration failed, status = %x\n", status );
#if ERRORS_ONLY
printk( "scsi: <fdomain> Arbitration failed, status = %x\n", status );
return 1;
}
static int fdomain_select( int target )
static void my_done(int error)
static irqreturn_t do_fdomain_16x0_intr(int irq, void *dev_id)
static int fdomain_16x0_queue_lck(struct scsi_cmnd *SCpnt,
void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(fdomain_16x0_queue)
#if DEBUG_ABORT
static void print_info(struct scsi_cmnd *SCpnt)
static int fdomain_16x0_abort(struct scsi_cmnd *SCpnt)
int fdomain_16x0_bus_reset(struct scsi_cmnd *SCpnt)
static int fdomain_16x0_biosparam(struct scsi_device *sdev,
struct block_device *bdev,
sector_t capacity, int *info_array)
static int fdomain_16x0_release(struct Scsi_Host *shpnt)
struct scsi_host_template fdomain_driver_template = ;
static struct pci_device_id fdomain_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, fdomain_pci_tbl);
#define driver_template fdomain_driver_template
