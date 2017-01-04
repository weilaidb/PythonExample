#define AUTOSENSE
#define PSEUDO_DMA
#define FOO
#define UNSAFE
#define PDEBUG 0
#define AUTOPROBE_IRQ
static int pas_maxi = 0;
static int pas_wmaxi = 0;
static unsigned short pas16_addr = 0;
static int pas16_irq = 0;
static const int scsi_irq_translate[] =
;
static int default_irqs[] __initdata =
;
static struct override  overrides
[] __initdata = PAS16_OVERRIDE;
[4] __initdata = ;
#define NO_OVERRIDES ARRAY_SIZE(overrides)
static struct base  bases[] __initdata =
;
#define NO_BASES ARRAY_SIZE(bases)
static const unsigned short  pas16_offset[ 8 ] =
;
#if 1
#define rtrc(i)
#define rtrc(i)
static void __init
enable_board( int  board_num,  unsigned short port )
static void __init
init_board( unsigned short io_port, int irq, int force_irq )
static int __init
pas16_hw_detect( unsigned short  board_num )
void __init pas16_setup(char *str, int *ints)
int __init pas16_detect(struct scsi_host_template * tpnt)
int pas16_biosparam(struct scsi_device *sdev, struct block_device *dev,
sector_t capacity, int * ip)
static inline int NCR5380_pread (struct Scsi_Host *instance, unsigned char *dst,
int len)
static inline int NCR5380_pwrite (struct Scsi_Host *instance, unsigned char *src,
int len)
static int pas16_release(struct Scsi_Host *shost)
static struct scsi_host_template driver_template = ;
module_param(pas16_addr, ushort, 0);
module_param(pas16_irq, int, 0);
MODULE_LICENSE("GPL");
