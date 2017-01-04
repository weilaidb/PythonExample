#define __ASM_POWERPC_FLOPPY_H
#define fd_inb(port)		inb_p(port)
#define fd_outb(value,port)	outb_p(value,port)
#define fd_enable_dma()         enable_dma(FLOPPY_DMA)
#define fd_disable_dma()	 fd_ops->_disable_dma(FLOPPY_DMA)
#define fd_free_dma()           fd_ops->_free_dma(FLOPPY_DMA)
#define fd_clear_dma_ff()       clear_dma_ff(FLOPPY_DMA)
#define fd_set_dma_mode(mode)   set_dma_mode(FLOPPY_DMA, mode)
#define fd_set_dma_count(count) set_dma_count(FLOPPY_DMA, count)
#define fd_get_dma_residue()    fd_ops->_get_dma_residue(FLOPPY_DMA)
#define fd_enable_irq()         enable_irq(FLOPPY_IRQ)
#define fd_disable_irq()        disable_irq(FLOPPY_IRQ)
#define fd_cacheflush(addr,size)
#define fd_free_irq()           free_irq(FLOPPY_IRQ, NULL);
#define fd_dma_setup(addr,size,mode,io) fd_ops->_dma_setup(addr,size,mode,io)
static int fd_request_dma(void);
struct fd_dma_ops ;
static int virtual_dma_count;
static int virtual_dma_residue;
static char *virtual_dma_addr;
static int virtual_dma_mode;
static int doing_vdma;
static struct fd_dma_ops *fd_ops;
static irqreturn_t floppy_hardint(int irq, void *dev_id)
static void vdma_disable_dma(unsigned int dummy)
static void vdma_nop(unsigned int dummy)
static int vdma_get_dma_residue(unsigned int dummy)
static int fd_request_irq(void)
static int vdma_dma_setup(char *addr, unsigned long size, int mode, int io)
static int hard_dma_setup(char *addr, unsigned long size, int mode, int io)
static struct fd_dma_ops real_dma_ops =
;
static struct fd_dma_ops virt_dma_ops =
;
static int fd_request_dma(void)
static int FDC1 = 0x3f0;
static int FDC2 = -1;
#define FLOPPY0_TYPE 6
#define FLOPPY1_TYPE 0
#define N_FDC 2
#define N_DRIVE 8
#define CROSS_64KB(a,s)	(0)
#define EXTRA_FLOPPY_PARAMS
