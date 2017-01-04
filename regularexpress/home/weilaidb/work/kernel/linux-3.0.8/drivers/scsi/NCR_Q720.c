static struct ncr_chip q720_chip __initdata = ;
MODULE_AUTHOR("James Bottomley");
MODULE_DESCRIPTION("NCR Quad 720 SCSI Driver");
MODULE_LICENSE("GPL");
#define NCR_Q720_VERSION		"0.9"
struct NCR_Q720_private ;
static struct scsi_host_template NCR_Q720_tpnt = ;
static irqreturn_t
NCR_Q720_intr(int irq, void *data)
static int __init
NCR_Q720_probe_one(struct NCR_Q720_private *p, int siop,
int irq, int slot, __u32 paddr, void __iomem *vaddr)
static int __init
NCR_Q720_probe(struct device *dev)
static void __exit
NCR_Q720_remove_one(struct Scsi_Host *host)
static int __exit
NCR_Q720_remove(struct device *dev)
static short NCR_Q720_id_table[] = ;
static struct mca_driver NCR_Q720_driver = ;
static int __init
NCR_Q720_init(void)
static void __exit
NCR_Q720_exit(void)
module_init(NCR_Q720_init);
module_exit(NCR_Q720_exit);
