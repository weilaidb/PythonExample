#define AUTOSENSE
#define PSEUDO_DMA
#define CUMANASCSI_PUBLIC_RELEASE 1
#define priv(host)			((struct NCR5380_hostdata *)(host)->hostdata)
#define NCR5380_local_declare()		struct Scsi_Host *_instance
#define NCR5380_setup(instance)		_instance = instance
#define NCR5380_read(reg)		cumanascsi_read(_instance, reg)
#define NCR5380_write(reg, value)	cumanascsi_write(_instance, reg, value)
#define NCR5380_intr			cumanascsi_intr
#define NCR5380_queue_command		cumanascsi_queue_command
#define NCR5380_proc_info		cumanascsi_proc_info
#define NCR5380_implementation_fields	\
unsigned ctrl;			\
void __iomem *base;		\
void __iomem *dma
#define BOARD_NORMAL	0
#define BOARD_NCR53C400	1
void cumanascsi_setup(char *str, int *ints)
const char *cumanascsi_info(struct Scsi_Host *spnt)
#define CTRL	0x16fc
#define STAT	0x2004
#define L(v)	(((v)<<16)|((v) & 0x0000ffff))
#define H(v)	(((v)>>16)|((v) & 0xffff0000))
static inline int
NCR5380_pwrite(struct Scsi_Host *host, unsigned char *addr, int len)
static inline int
NCR5380_pread(struct Scsi_Host *host, unsigned char *addr, int len)
static unsigned char cumanascsi_read(struct Scsi_Host *host, unsigned int reg)
static void cumanascsi_write(struct Scsi_Host *host, unsigned int reg, unsigned int value)
static struct scsi_host_template cumanascsi_template = ;
static int __devinit
cumanascsi1_probe(struct expansion_card *ec, const struct ecard_id *id)
static void __devexit cumanascsi1_remove(struct expansion_card *ec)
static const struct ecard_id cumanascsi1_cids[] = ;
static struct ecard_driver cumanascsi1_driver = ;
static int __init cumanascsi_init(void)
static void __exit cumanascsi_exit(void)
module_init(cumanascsi_init);
module_exit(cumanascsi_exit);
MODULE_DESCRIPTION("Cumana SCSI-1 driver for Acorn machines");
MODULE_LICENSE("GPL");
