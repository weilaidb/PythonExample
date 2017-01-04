#define __ASM_ALPHA_FLOPPY_H
#define fd_inb(port)			inb_p(port)
#define fd_outb(value,port)		outb_p(value,port)
#define fd_enable_dma()         enable_dma(FLOPPY_DMA)
#define fd_disable_dma()        disable_dma(FLOPPY_DMA)
#define fd_request_dma()        request_dma(FLOPPY_DMA,"floppy")
#define fd_free_dma()           free_dma(FLOPPY_DMA)
#define fd_clear_dma_ff()       clear_dma_ff(FLOPPY_DMA)
#define fd_set_dma_mode(mode)   set_dma_mode(FLOPPY_DMA,mode)
#define fd_set_dma_addr(addr)   set_dma_addr(FLOPPY_DMA,virt_to_bus(addr))
#define fd_set_dma_count(count) set_dma_count(FLOPPY_DMA,count)
#define fd_enable_irq()         enable_irq(FLOPPY_IRQ)
#define fd_disable_irq()        disable_irq(FLOPPY_IRQ)
#define fd_cacheflush(addr,size)
#define fd_request_irq()        request_irq(FLOPPY_IRQ, floppy_interrupt,\
IRQF_DISABLED, "floppy", NULL)
#define fd_free_irq()           free_irq(FLOPPY_IRQ, NULL);
#define fd_dma_setup(addr,size,mode,io) alpha_fd_dma_setup(addr,size,mode,io)
static __inline__ int
alpha_fd_dma_setup(char *addr, unsigned long size, int mode, int io)
__inline__ void virtual_dma_init(void)
static int FDC1 = 0x3f0;
static int FDC2 = -1;
#define FLOPPY0_TYPE 6
#define FLOPPY1_TYPE 0
#define N_FDC 2
#define N_DRIVE 8
static inline unsigned long CROSS_64KB(void *a, unsigned long s)
#define EXTRA_FLOPPY_PARAMS
