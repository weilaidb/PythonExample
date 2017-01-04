#define DRV_NAME	"sata_sx4"
#define DRV_VERSION	"0.12"
enum ;
#define ECC_ERASE_BUF_SZ (128 * 1024)
struct pdc_port_priv ;
struct pdc_host_priv ;
static int pdc_sata_init_one(struct pci_dev *pdev, const struct pci_device_id *ent);
static void pdc_error_handler(struct ata_port *ap);
static void pdc_freeze(struct ata_port *ap);
static void pdc_thaw(struct ata_port *ap);
static int pdc_port_start(struct ata_port *ap);
static void pdc20621_qc_prep(struct ata_queued_cmd *qc);
static void pdc_tf_load_mmio(struct ata_port *ap, const struct ata_taskfile *tf);
static void pdc_exec_command_mmio(struct ata_port *ap, const struct ata_taskfile *tf);
static unsigned int pdc20621_dimm_init(struct ata_host *host);
static int pdc20621_detect_dimm(struct ata_host *host);
static unsigned int pdc20621_i2c_read(struct ata_host *host,
u32 device, u32 subaddr, u32 *pdata);
static int pdc20621_prog_dimm0(struct ata_host *host);
static unsigned int pdc20621_prog_dimm_global(struct ata_host *host);
static void pdc20621_get_from_dimm(struct ata_host *host,
void *psource, u32 offset, u32 size);
static void pdc20621_put_to_dimm(struct ata_host *host,
void *psource, u32 offset, u32 size);
static void pdc20621_irq_clear(struct ata_port *ap);
static unsigned int pdc20621_qc_issue(struct ata_queued_cmd *qc);
static int pdc_softreset(struct ata_link *link, unsigned int *class,
unsigned long deadline);
static void pdc_post_internal_cmd(struct ata_queued_cmd *qc);
static int pdc_check_atapi_dma(struct ata_queued_cmd *qc);
static struct scsi_host_template pdc_sata_sht = ;
static struct ata_port_operations pdc_20621_ops = ;
static const struct ata_port_info pdc_port_info[] = ;
static const struct pci_device_id pdc_sata_pci_tbl[] = ;
static struct pci_driver pdc_sata_pci_driver = ;
static int pdc_port_start(struct ata_port *ap)
static inline void pdc20621_ata_sg(struct ata_taskfile *tf, u8 *buf,
unsigned int portno,
unsigned int total_len)
static inline void pdc20621_host_sg(struct ata_taskfile *tf, u8 *buf,
unsigned int portno,
unsigned int total_len)
static inline unsigned int pdc20621_ata_pkt(struct ata_taskfile *tf,
unsigned int devno, u8 *buf,
unsigned int portno)
static inline void pdc20621_host_pkt(struct ata_taskfile *tf, u8 *buf,
unsigned int portno)
static void pdc20621_dma_prep(struct ata_queued_cmd *qc)
static void pdc20621_nodata_prep(struct ata_queued_cmd *qc)
static void pdc20621_qc_prep(struct ata_queued_cmd *qc)
static void __pdc20621_push_hdma(struct ata_queued_cmd *qc,
unsigned int seq,
u32 pkt_ofs)
static void pdc20621_push_hdma(struct ata_queued_cmd *qc,
unsigned int seq,
u32 pkt_ofs)
static void pdc20621_pop_hdma(struct ata_queued_cmd *qc)
static void pdc20621_dump_hdma(struct ata_queued_cmd *qc)
static inline void pdc20621_dump_hdma(struct ata_queued_cmd *qc)
static void pdc20621_packet_start(struct ata_queued_cmd *qc)
static unsigned int pdc20621_qc_issue(struct ata_queued_cmd *qc)
static inline unsigned int pdc20621_host_intr(struct ata_port *ap,
struct ata_queued_cmd *qc,
unsigned int doing_hdma,
void __iomem *mmio)
static void pdc20621_irq_clear(struct ata_port *ap)
static irqreturn_t pdc20621_interrupt(int irq, void *dev_instance)
static void pdc_freeze(struct ata_port *ap)
static void pdc_thaw(struct ata_port *ap)
static void pdc_reset_port(struct ata_port *ap)
static int pdc_softreset(struct ata_link *link, unsigned int *class,
unsigned long deadline)
static void pdc_error_handler(struct ata_port *ap)
static void pdc_post_internal_cmd(struct ata_queued_cmd *qc)
static int pdc_check_atapi_dma(struct ata_queued_cmd *qc)
static void pdc_tf_load_mmio(struct ata_port *ap, const struct ata_taskfile *tf)
static void pdc_exec_command_mmio(struct ata_port *ap, const struct ata_taskfile *tf)
static void pdc_sata_setup_port(struct ata_ioports *port, void __iomem *base)
static void pdc20621_get_from_dimm(struct ata_host *host, void *psource,
u32 offset, u32 size)
static void pdc20621_put_to_dimm(struct ata_host *host, void *psource,
u32 offset, u32 size)
static unsigned int pdc20621_i2c_read(struct ata_host *host, u32 device,
u32 subaddr, u32 *pdata)
static int pdc20621_detect_dimm(struct ata_host *host)
static int pdc20621_prog_dimm0(struct ata_host *host)
static unsigned int pdc20621_prog_dimm_global(struct ata_host *host)
static unsigned int pdc20621_dimm_init(struct ata_host *host)
static void pdc_20621_init(struct ata_host *host)
static int pdc_sata_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static int __init pdc_sata_init(void)
static void __exit pdc_sata_exit(void)
MODULE_AUTHOR("Jeff Garzik");
MODULE_DESCRIPTION("Promise SATA low-level driver");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, pdc_sata_pci_tbl);
MODULE_VERSION(DRV_VERSION);
module_init(pdc_sata_init);
module_exit(pdc_sata_exit);
