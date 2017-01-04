#define DRV_NAME	"pata_pxa"
#define DRV_VERSION	"0.1"
struct pata_pxa_data ;
static void pxa_load_dmac(struct scatterlist *sg, struct ata_queued_cmd *qc)
static void pxa_qc_prep(struct ata_queued_cmd *qc)
static void pxa_bmdma_setup(struct ata_queued_cmd *qc)
static void pxa_bmdma_start(struct ata_queued_cmd *qc)
static void pxa_bmdma_stop(struct ata_queued_cmd *qc)
static unsigned char pxa_bmdma_status(struct ata_port *ap)
static void pxa_irq_clear(struct ata_port *ap)
static int pxa_check_atapi_dma(struct ata_queued_cmd *qc)
static struct scsi_host_template pxa_ata_sht = ;
static struct ata_port_operations pxa_ata_port_ops = ;
static void pxa_ata_dma_irq(int dma, void *port)
static int __devinit pxa_ata_probe(struct platform_device *pdev)
static int __devexit pxa_ata_remove(struct platform_device *pdev)
static struct platform_driver pxa_ata_driver = ;
static int __init pxa_ata_init(void)
static void __exit pxa_ata_exit(void)
module_init(pxa_ata_init);
module_exit(pxa_ata_exit);
MODULE_AUTHOR("Marek Vasut <marek.vasut@gmail.com>");
MODULE_DESCRIPTION("DMA-capable driver for PATA on PXA CPU");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
MODULE_ALIAS("platform:" DRV_NAME);
