struct arxescsi_info ;
#define DMADATA_OFFSET	(0x200)
#define DMASTAT_OFFSET	(0x600)
#define DMASTAT_DRQ	(1 << 0)
#define CSTATUS_IRQ	(1 << 0)
#define VERSION "1.10 (23/01/2003 2.5.57)"
static fasdmatype_t
arxescsi_dma_setup(struct Scsi_Host *host, struct scsi_pointer *SCp,
fasdmadir_t direction, fasdmatype_t min_type)
static void arxescsi_pseudo_dma_write(unsigned char *addr, void __iomem *base)
static void
arxescsi_dma_pseudo(struct Scsi_Host *host, struct scsi_pointer *SCp,
fasdmadir_t direction, int transfer)
static void arxescsi_dma_stop(struct Scsi_Host *host, struct scsi_pointer *SCp)
static const char *arxescsi_info(struct Scsi_Host *host)
static int
arxescsi_proc_info(struct Scsi_Host *host, char *buffer, char **start, off_t offset, int length,
int inout)
static struct scsi_host_template arxescsi_template = ;
static int __devinit
arxescsi_probe(struct expansion_card *ec, const struct ecard_id *id)
static void __devexit arxescsi_remove(struct expansion_card *ec)
static const struct ecard_id arxescsi_cids[] = ;
static struct ecard_driver arxescsi_driver = ;
static int __init init_arxe_scsi_driver(void)
static void __exit exit_arxe_scsi_driver(void)
module_init(init_arxe_scsi_driver);
module_exit(exit_arxe_scsi_driver);
MODULE_AUTHOR("Stefan Hanske");
MODULE_DESCRIPTION("ARXESCSI driver for Acorn machines");
MODULE_LICENSE("GPL");
