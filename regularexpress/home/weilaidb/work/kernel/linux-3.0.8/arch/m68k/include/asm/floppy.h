asmlinkage irqreturn_t floppy_hardint(int irq, void *dev_id);
#undef MAX_DMA_ADDRESS
#define MAX_DMA_ADDRESS   0x00
#define FLOPPY0_TYPE (MACH_IS_Q40 ? 6 : 4)
#define FLOPPY1_TYPE 0
#define  FDC1 m68k_floppy_init()
#define N_FDC 1
#define N_DRIVE 8
static int virtual_dma_count=0;
static int virtual_dma_residue=0;
static char *virtual_dma_addr=NULL;
static int virtual_dma_mode=0;
static int doing_pdma=0;
extern spinlock_t  dma_spin_lock;
static __inline__ unsigned long claim_dma_lock(void)
static __inline__ void release_dma_lock(unsigned long flags)
static __inline__ unsigned char fd_inb(int port)
static __inline__ void fd_outb(unsigned char value, int port)
static int fd_request_irq(void)
static void fd_free_irq(void)
#define fd_request_dma()        vdma_request_dma(FLOPPY_DMA,"floppy")
#define fd_get_dma_residue()    vdma_get_dma_residue(FLOPPY_DMA)
#define fd_dma_mem_alloc(size)	vdma_mem_alloc(size)
#define fd_dma_setup(addr, size, mode, io) vdma_dma_setup(addr, size, mode, io)
#define fd_enable_irq()
#define fd_disable_irq()
#define fd_free_dma()
#define CROSS_64KB(a,s) (0)
#define DMA_MODE_READ  0x44
#define DMA_MODE_WRITE 0x48
static int m68k_floppy_init(void)
static int vdma_request_dma(unsigned int dmanr, const char * device_id)
static int vdma_get_dma_residue(unsigned int dummy)
static unsigned long vdma_mem_alloc(unsigned long size)
static void _fd_dma_mem_free(unsigned long addr, unsigned long size)
#define fd_dma_mem_free(addr,size) _fd_dma_mem_free(addr, size)
static int vdma_dma_setup(char *addr, unsigned long size, int mode, int io)
static void fd_disable_dma(void)
asmlinkage irqreturn_t floppy_hardint(int irq, void *dev_id)
#define EXTRA_FLOPPY_PARAMS
