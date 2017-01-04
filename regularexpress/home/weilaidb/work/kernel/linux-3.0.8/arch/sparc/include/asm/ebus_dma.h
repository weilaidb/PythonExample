#define __ASM_SPARC_EBUS_DMA_H
struct ebus_dma_info ;
extern int ebus_dma_register(struct ebus_dma_info *p);
extern int ebus_dma_irq_enable(struct ebus_dma_info *p, int on);
extern void ebus_dma_unregister(struct ebus_dma_info *p);
extern int ebus_dma_request(struct ebus_dma_info *p, dma_addr_t bus_addr,
size_t len);
extern void ebus_dma_prepare(struct ebus_dma_info *p, int write);
extern unsigned int ebus_dma_residue(struct ebus_dma_info *p);
extern unsigned int ebus_dma_addr(struct ebus_dma_info *p);
extern void ebus_dma_enable(struct ebus_dma_info *p, int on);
