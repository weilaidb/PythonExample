#define __ASM_SPARC_FLOPPY_H
#undef release_region
#undef request_region
#define release_region(X, Y)	do  while(0)
#define request_region(X, Y, Z)	(1)
struct sun_flpy_controller ;
static struct sun_flpy_controller *sun_fdc = NULL;
extern volatile unsigned char *fdc_status;
struct sun_floppy_ops ;
static struct sun_floppy_ops sun_fdops;
#define fd_inb(port)              sun_fdops.fd_inb(port)
#define fd_outb(value,port)       sun_fdops.fd_outb(value,port)
#define fd_enable_dma()           sun_fd_enable_dma()
#define fd_disable_dma()          sun_fd_disable_dma()
#define fd_request_dma()          (0)
#define fd_free_dma()
#define fd_clear_dma_ff()
#define fd_set_dma_mode(mode)     sun_fd_set_dma_mode(mode)
#define fd_set_dma_addr(addr)     sun_fd_set_dma_addr(addr)
#define fd_set_dma_count(count)   sun_fd_set_dma_count(count)
#define fd_enable_irq()
#define fd_disable_irq()
#define fd_cacheflush(addr, size)
#define fd_request_irq()          sun_fd_request_irq()
#define fd_free_irq()
#define get_dma_residue(x)        (0)
#define FLOPPY0_TYPE  4
#define FLOPPY1_TYPE  0
#undef HAVE_DISABLE_HLT
#define FDC1                      sun_floppy_init()
#define N_FDC    1
#define N_DRIVE  8
#define CROSS_64KB(a,s) (0)
static void sun_set_dor(unsigned char value, int fdc_82077)
static unsigned char sun_read_dir(void)
static unsigned char sun_82072_fd_inb(int port)
static void sun_82072_fd_outb(unsigned char value, int port)
static unsigned char sun_82077_fd_inb(int port)
static void sun_82077_fd_outb(unsigned char value, int port)
extern char *pdma_vaddr;
extern unsigned long pdma_size;
extern volatile int doing_pdma;
extern char *pdma_base;
extern unsigned long pdma_areasize;
static inline void virtual_dma_init(void)
static inline void sun_fd_disable_dma(void)
static inline void sun_fd_set_dma_mode(int mode)
static inline void sun_fd_set_dma_addr(char *buffer)
static inline void sun_fd_set_dma_count(int length)
static inline void sun_fd_enable_dma(void)
extern int sparc_floppy_request_irq(unsigned int irq,
irq_handler_t irq_handler);
static int sun_fd_request_irq(void)
static struct linux_prom_registers fd_regs[2];
static int sun_floppy_init(void)
static int sparc_eject(void)
#define fd_eject(drive) sparc_eject()
#define EXTRA_FLOPPY_PARAMS
static DEFINE_SPINLOCK(dma_spin_lock);
#define claim_dma_lock() \
()
#define release_dma_lock(__flags) \
spin_unlock_irqrestore(&dma_spin_lock, __flags);
