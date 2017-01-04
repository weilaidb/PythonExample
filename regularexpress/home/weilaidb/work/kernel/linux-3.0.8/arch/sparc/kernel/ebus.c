#define EBDMA_CSR	0x00UL
#define EBDMA_ADDR	0x04UL
#define EBDMA_COUNT	0x08UL
#define EBDMA_CSR_INT_PEND	0x00000001
#define EBDMA_CSR_ERR_PEND	0x00000002
#define EBDMA_CSR_DRAIN		0x00000004
#define EBDMA_CSR_INT_EN	0x00000010
#define EBDMA_CSR_RESET		0x00000080
#define EBDMA_CSR_WRITE		0x00000100
#define EBDMA_CSR_EN_DMA	0x00000200
#define EBDMA_CSR_CYC_PEND	0x00000400
#define EBDMA_CSR_DIAG_RD_DONE	0x00000800
#define EBDMA_CSR_DIAG_WR_DONE	0x00001000
#define EBDMA_CSR_EN_CNT	0x00002000
#define EBDMA_CSR_TC		0x00004000
#define EBDMA_CSR_DIS_CSR_DRN	0x00010000
#define EBDMA_CSR_BURST_SZ_MASK	0x000c0000
#define EBDMA_CSR_BURST_SZ_1	0x00080000
#define EBDMA_CSR_BURST_SZ_4	0x00000000
#define EBDMA_CSR_BURST_SZ_8	0x00040000
#define EBDMA_CSR_BURST_SZ_16	0x000c0000
#define EBDMA_CSR_DIAG_EN	0x00100000
#define EBDMA_CSR_DIS_ERR_PEND	0x00400000
#define EBDMA_CSR_TCI_DIS	0x00800000
#define EBDMA_CSR_EN_NEXT	0x01000000
#define EBDMA_CSR_DMA_ON	0x02000000
#define EBDMA_CSR_A_LOADED	0x04000000
#define EBDMA_CSR_NA_LOADED	0x08000000
#define EBDMA_CSR_DEV_ID_MASK	0xf0000000
#define EBUS_DMA_RESET_TIMEOUT	10000
static void __ebus_dma_reset(struct ebus_dma_info *p, int no_drain)
static irqreturn_t ebus_dma_irq(int irq, void *dev_id)
int ebus_dma_register(struct ebus_dma_info *p)
EXPORT_SYMBOL(ebus_dma_register);
int ebus_dma_irq_enable(struct ebus_dma_info *p, int on)
EXPORT_SYMBOL(ebus_dma_irq_enable);
void ebus_dma_unregister(struct ebus_dma_info *p)
EXPORT_SYMBOL(ebus_dma_unregister);
int ebus_dma_request(struct ebus_dma_info *p, dma_addr_t bus_addr, size_t len)
EXPORT_SYMBOL(ebus_dma_request);
void ebus_dma_prepare(struct ebus_dma_info *p, int write)
EXPORT_SYMBOL(ebus_dma_prepare);
unsigned int ebus_dma_residue(struct ebus_dma_info *p)
EXPORT_SYMBOL(ebus_dma_residue);
unsigned int ebus_dma_addr(struct ebus_dma_info *p)
EXPORT_SYMBOL(ebus_dma_addr);
void ebus_dma_enable(struct ebus_dma_info *p, int on)
EXPORT_SYMBOL(ebus_dma_enable);
