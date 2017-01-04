#define DEBUG
#define VERBOSE_DEBUG
#define DEBUG_NCQ
#undef	DRV_NAME
#undef	DRV_VERSION
#define DRV_NAME        "sata-dwc"
#define DRV_VERSION     "1.3"
#define DMA_NUM_CHANS		1
#define DMA_NUM_CHAN_REGS	8
#define AHB_DMA_BRST_DFLT	64
struct dmareg ;
struct dma_chan_regs ;
struct dma_interrupt_regs ;
struct ahb_dma_regs ;
struct lli ;
enum ;
enum ;
#define	DMA_CTL_BLK_TS(size)	((size) & 0x000000FFF)
#define DMA_CHANNEL(ch)		(0x00000001 << (ch))
#define	DMA_ENABLE_CHAN(ch)	((0x00000001 << (ch)) |			\
((0x000000001 << (ch)) << 8))
#define	DMA_DISABLE_CHAN(ch)	(0x00000000 | ((0x000000001 << (ch)) << 8))
#define	DMA_CTL_TTFC(type)	(((type) & 0x7) << 20)
#define	DMA_CTL_SMS(num)	(((num) & 0x3) << 25)
#define	DMA_CTL_DMS(num)	(((num) & 0x3) << 23)
#define DMA_CTL_SRC_MSIZE(size) (((size) & 0x7) << 14)
#define	DMA_CTL_DST_MSIZE(size) (((size) & 0x7) << 11)
#define	DMA_CTL_SRC_TRWID(size) (((size) & 0x7) << 4)
#define	DMA_CTL_DST_TRWID(size) (((size) & 0x7) << 1)
#define	DMA_CFG_HW_HS_DEST(int_num) (((int_num) & 0xF) << 11)
#define	DMA_CFG_HW_HS_SRC(int_num) (((int_num) & 0xF) << 7)
#define	DMA_LLP_LMS(addr, master) (((addr) & 0xfffffffc) | (master))
enum ;
struct sata_dwc_regs ;
enum ;
#define SATA_DWC_SCR0_SPD_GET(v)	(((v) >> 4) & 0x0000000F)
#define SATA_DWC_DMACR_TX_CLEAR(v)	(((v) & ~SATA_DWC_DMACR_TXCHEN) |\
SATA_DWC_DMACR_TMOD_TXCHEN)
#define SATA_DWC_DMACR_RX_CLEAR(v)	(((v) & ~SATA_DWC_DMACR_RXCHEN) |\
SATA_DWC_DMACR_TMOD_TXCHEN)
#define SATA_DWC_DBTSR_MWR(size)	(((size)/4) & SATA_DWC_TXFIFO_DEPTH)
#define SATA_DWC_DBTSR_MRD(size)	((((size)/4) & SATA_DWC_RXFIFO_DEPTH)\
<< 16)
struct sata_dwc_device ;
#define SATA_DWC_QCMD_MAX	32
struct sata_dwc_device_port ;
#define HSDEV_FROM_HOST(host)  ((struct sata_dwc_device *)\
(host)->private_data)
#define HSDEV_FROM_AP(ap)  ((struct sata_dwc_device *)\
(ap)->host->private_data)
#define HSDEVP_FROM_AP(ap)   ((struct sata_dwc_device_port *)\
(ap)->private_data)
#define HSDEV_FROM_QC(qc)	((struct sata_dwc_device *)\
(qc)->ap->host->private_data)
#define HSDEV_FROM_HSDEVP(p)	((struct sata_dwc_device *)\
(hsdevp)->hsdev)
enum ;
struct sata_dwc_host_priv ;
struct sata_dwc_host_priv host_pvt;
static void sata_dwc_bmdma_start_by_tag(struct ata_queued_cmd *qc, u8 tag);
static int sata_dwc_qc_complete(struct ata_port *ap, struct ata_queued_cmd *qc,
u32 check_status);
static void sata_dwc_dma_xfer_complete(struct ata_port *ap, u32 check_status);
static void sata_dwc_port_stop(struct ata_port *ap);
static void sata_dwc_clear_dmacr(struct sata_dwc_device_port *hsdevp, u8 tag);
static int dma_dwc_init(struct sata_dwc_device *hsdev, int irq);
static void dma_dwc_exit(struct sata_dwc_device *hsdev);
static int dma_dwc_xfer_setup(struct scatterlist *sg, int num_elems,
struct lli *lli, dma_addr_t dma_lli,
void __iomem *addr, int dir);
static void dma_dwc_xfer_start(int dma_ch);
static const char *get_prot_descript(u8 protocol)
static const char *get_dma_dir_descript(int dma_dir)
static void sata_dwc_tf_dump(struct ata_taskfile *tf)
static  int get_burst_length_encode(int datalength)
static  void clear_chan_interrupts(int c)
static int dma_request_channel(void)
static irqreturn_t dma_dwc_interrupt(int irq, void *hsdev_instance)
static int dma_request_interrupts(struct sata_dwc_device *hsdev, int irq)
static int map_sg_to_lli(struct scatterlist *sg, int num_elems,
struct lli *lli, dma_addr_t dma_lli,
void __iomem *dmadr_addr, int dir)
static void dma_dwc_xfer_start(int dma_ch)
static int dma_dwc_xfer_setup(struct scatterlist *sg, int num_elems,
struct lli *lli, dma_addr_t dma_lli,
void __iomem *addr, int dir)
static void dma_dwc_exit(struct sata_dwc_device *hsdev)
static int dma_dwc_init(struct sata_dwc_device *hsdev, int irq)
static int sata_dwc_scr_read(struct ata_link *link, unsigned int scr, u32 *val)
static int sata_dwc_scr_write(struct ata_link *link, unsigned int scr, u32 val)
static u32 core_scr_read(unsigned int scr)
static void core_scr_write(unsigned int scr, u32 val)
static void clear_serror(void)
static void clear_interrupt_bit(struct sata_dwc_device *hsdev, u32 bit)
static u32 qcmd_tag_to_mask(u8 tag)
static void sata_dwc_error_intr(struct ata_port *ap,
struct sata_dwc_device *hsdev, uint intpr)
static irqreturn_t sata_dwc_isr(int irq, void *dev_instance)
static void sata_dwc_clear_dmacr(struct sata_dwc_device_port *hsdevp, u8 tag)
static void sata_dwc_dma_xfer_complete(struct ata_port *ap, u32 check_status)
static int sata_dwc_qc_complete(struct ata_port *ap, struct ata_queued_cmd *qc,
u32 check_status)
static void sata_dwc_enable_interrupts(struct sata_dwc_device *hsdev)
static void sata_dwc_setup_port(struct ata_ioports *port, unsigned long base)
static int sata_dwc_port_start(struct ata_port *ap)
static void sata_dwc_port_stop(struct ata_port *ap)
static void sata_dwc_exec_command_by_tag(struct ata_port *ap,
struct ata_taskfile *tf,
u8 tag, u32 cmd_issued)
static void sata_dwc_bmdma_setup_by_tag(struct ata_queued_cmd *qc, u8 tag)
static void sata_dwc_bmdma_setup(struct ata_queued_cmd *qc)
static void sata_dwc_bmdma_start_by_tag(struct ata_queued_cmd *qc, u8 tag)
static void sata_dwc_bmdma_start(struct ata_queued_cmd *qc)
static void sata_dwc_qc_prep_by_tag(struct ata_queued_cmd *qc, u8 tag)
static unsigned int sata_dwc_qc_issue(struct ata_queued_cmd *qc)
static void sata_dwc_qc_prep(struct ata_queued_cmd *qc)
static void sata_dwc_error_handler(struct ata_port *ap)
static struct scsi_host_template sata_dwc_sht = ;
static struct ata_port_operations sata_dwc_ops = ;
static const struct ata_port_info sata_dwc_port_info[] = ;
static int sata_dwc_probe(struct platform_device *ofdev)
static int sata_dwc_remove(struct platform_device *ofdev)
static const struct of_device_id sata_dwc_match[] = ;
MODULE_DEVICE_TABLE(of, sata_dwc_match);
static struct platform_driver sata_dwc_driver = ;
static int __init sata_dwc_init(void)
static void __exit sata_dwc_exit(void)
module_init(sata_dwc_init);
module_exit(sata_dwc_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mark Miesfeld <mmiesfeld@amcc.com>");
MODULE_DESCRIPTION("DesignWare Cores SATA controller low lever driver");
MODULE_VERSION(DRV_VERSION);
