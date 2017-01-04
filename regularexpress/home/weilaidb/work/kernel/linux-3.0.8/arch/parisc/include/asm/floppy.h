#define __ASM_PARISC_FLOPPY_H
#define _CROSS_64KB(a,s,vdma) \
(!vdma && ((unsigned long)(a)/K_64 != ((unsigned long)(a) + (s) - 1) / K_64))
#define CROSS_64KB(a,s) _CROSS_64KB(a,s,use_virtual_dma & 1)
#define SW fd_routine[use_virtual_dma&1]
#define CSW fd_routine[can_use_virtual_dma & 1]
#define fd_inb(port)			readb(port)
#define fd_outb(value, port)		writeb(value, port)
#define fd_request_dma()        CSW._request_dma(FLOPPY_DMA,"floppy")
#define fd_free_dma()           CSW._free_dma(FLOPPY_DMA)
#define fd_enable_irq()         enable_irq(FLOPPY_IRQ)
#define fd_disable_irq()        disable_irq(FLOPPY_IRQ)
#define fd_free_irq()		free_irq(FLOPPY_IRQ, NULL)
#define fd_get_dma_residue()    SW._get_dma_residue(FLOPPY_DMA)
#define fd_dma_mem_alloc(size)	SW._dma_mem_alloc(size)
#define fd_dma_setup(addr, size, mode, io) SW._dma_setup(addr, size, mode, io)
#define FLOPPY_CAN_FALLBACK_ON_NODMA
static int virtual_dma_count=0;
static int virtual_dma_residue=0;
static char *virtual_dma_addr=0;
static int virtual_dma_mode=0;
static int doing_pdma=0;
static void floppy_hardint(int irq, void *dev_id, struct pt_regs * regs)
static void fd_disable_dma(void)
static int vdma_request_dma(unsigned int dmanr, const char * device_id)
static void vdma_nop(unsigned int dummy)
static int vdma_get_dma_residue(unsigned int dummy)
static int fd_request_irq(void)
static unsigned long dma_mem_alloc(unsigned long size)
static unsigned long vdma_mem_alloc(unsigned long size)
#define nodma_mem_alloc(size) vdma_mem_alloc(size)
static void _fd_dma_mem_free(unsigned long addr, unsigned long size)
#define fd_dma_mem_free(addr, size)  _fd_dma_mem_free(addr, size)
static void _fd_chose_dma_mode(char *addr, unsigned long size)
#define fd_chose_dma_mode(addr, size) _fd_chose_dma_mode(addr, size)
static int vdma_dma_setup(char *addr, unsigned long size, int mode, int io)
static int hard_dma_setup(char *addr, unsigned long size, int mode, int io)
static struct fd_routine_l  fd_routine[] = ;
static int FDC1 = 0x3f0;
static int FDC2 = -1;
#define FLOPPY0_TYPE	0
#define FLOPPY1_TYPE	0
#define N_FDC 1
#define N_DRIVE 8
#define EXTRA_FLOPPY_PARAMS
