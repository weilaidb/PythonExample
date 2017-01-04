#define __ASM_ARM_FLOPPY_H
#define fd_outb(val,port)			\
do  while(0)
#define fd_inb(port)		inb((port))
#define fd_request_irq()	request_irq(IRQ_FLOPPYDISK,floppy_interrupt,\
IRQF_DISABLED,"floppy",NULL)
#define fd_free_irq()		free_irq(IRQ_FLOPPYDISK,NULL)
#define fd_disable_irq()	disable_irq(IRQ_FLOPPYDISK)
#define fd_enable_irq()		enable_irq(IRQ_FLOPPYDISK)
static inline int fd_dma_setup(void *data, unsigned int length,
unsigned int mode, unsigned long addr)
#define fd_dma_setup		fd_dma_setup
#define fd_request_dma()	request_dma(DMA_FLOPPY,"floppy")
#define fd_free_dma()		free_dma(DMA_FLOPPY)
#define fd_disable_dma()	disable_dma(DMA_FLOPPY)
#define DMA_FLOPPYDISK		DMA_FLOPPY
static unsigned char floppy_selects[2][4] =
;
#define fd_setdor(dor)								\
do  while (0)
static inline void fd_scandrives (void)
#define FDC1 (0x3f0)
#define FLOPPY0_TYPE 4
#define FLOPPY1_TYPE 4
#define N_FDC 1
#define N_DRIVE 4
#define CROSS_64KB(a,s) (0)
static void driveswap(int *ints, int dummy, int dummy2)
#define EXTRA_FLOPPY_PARAMS ,
