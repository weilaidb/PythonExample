#define AUTOSENSE
#define OAKSCSI_PUBLIC_RELEASE 1
#define priv(host)			((struct NCR5380_hostdata *)(host)->hostdata)
#define NCR5380_local_declare()		void __iomem *_base
#define NCR5380_setup(host)		_base = priv(host)->base
#define NCR5380_read(reg)		readb(_base + ((reg) << 2))
#define NCR5380_write(reg, value)	writeb(value, _base + ((reg) << 2))
#define NCR5380_intr			oakscsi_intr
#define NCR5380_queue_command		oakscsi_queue_command
#define NCR5380_proc_info		oakscsi_proc_info
#define NCR5380_implementation_fields	\
void __iomem *base
#define BOARD_NORMAL	0
#define BOARD_NCR53C400	1
#undef START_DMA_INITIATOR_RECEIVE_REG
#define START_DMA_INITIATOR_RECEIVE_REG	(128 + 7)
const char * oakscsi_info (struct Scsi_Host *spnt)
#define STAT	((128 + 16) << 2)
#define DATA	((128 + 8) << 2)
static inline int NCR5380_pwrite(struct Scsi_Host *instance, unsigned char *addr,
int len)
static inline int NCR5380_pread(struct Scsi_Host *instance, unsigned char *addr,
int len)
#undef STAT
#undef DATA
static struct scsi_host_template oakscsi_template = ;
static int __devinit
oakscsi_probe(struct expansion_card *ec, const struct ecard_id *id)
static void __devexit oakscsi_remove(struct expansion_card *ec)
static const struct ecard_id oakscsi_cids[] = ;
static struct ecard_driver oakscsi_driver = ;
static int __init oakscsi_init(void)
static void __exit oakscsi_exit(void)
module_init(oakscsi_init);
module_exit(oakscsi_exit);
MODULE_AUTHOR("Russell King");
MODULE_DESCRIPTION("Oak SCSI driver");
MODULE_LICENSE("GPL");
