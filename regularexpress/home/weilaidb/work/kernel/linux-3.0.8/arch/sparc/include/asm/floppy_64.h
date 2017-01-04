#define __ASM_SPARC64_FLOPPY_H
#undef PCI_FDC_SWAP_DRIVES
struct sun_flpy_controller ;
static struct sun_flpy_controller *sun_fdc = (struct sun_flpy_controller *)-1;
unsigned long fdc_status;
static struct platform_device *floppy_op = NULL;
struct sun_floppy_ops ;
static struct sun_floppy_ops sun_fdops;
#define fd_inb(port)              sun_fdops.fd_inb(port)
#define fd_outb(value,port)       sun_fdops.fd_outb(value,port)
#define fd_enable_dma()           sun_fdops.fd_enable_dma()
#define fd_disable_dma()          sun_fdops.fd_disable_dma()
#define fd_request_dma()          (0)
#define fd_free_dma()
#define fd_clear_dma_ff()
#define fd_set_dma_mode(mode)     sun_fdops.fd_set_dma_mode(mode)
#define fd_set_dma_addr(addr)     sun_fdops.fd_set_dma_addr(addr)
#define fd_set_dma_count(count)   sun_fdops.fd_set_dma_count(count)
#define get_dma_residue(x)        sun_fdops.get_dma_residue()
#define fd_cacheflush(addr, size)
#define fd_request_irq()          sun_fdops.fd_request_irq()
#define fd_free_irq()             sun_fdops.fd_free_irq()
#define fd_eject(drive)           sun_fdops.fd_eject(drive)
#undef HAVE_DISABLE_HLT
static int sun_floppy_types[2] = ;
#define FLOPPY0_TYPE		sun_floppy_init()
#define FLOPPY1_TYPE		sun_floppy_types[1]
#define FDC1			((unsigned long)sun_fdc)
#define N_FDC    1
#define N_DRIVE  8
#define CROSS_64KB(a,s) (0)
static unsigned char sun_82077_fd_inb(unsigned long port)
static void sun_82077_fd_outb(unsigned char value, unsigned long port)
unsigned char *pdma_vaddr;
unsigned long pdma_size;
volatile int doing_pdma = 0;
char *pdma_base = NULL;
unsigned long pdma_areasize;
static void sun_fd_disable_dma(void)
static void sun_fd_set_dma_mode(int mode)
static void sun_fd_set_dma_addr(char *buffer)
static void sun_fd_set_dma_count(int length)
static void sun_fd_enable_dma(void)
irqreturn_t sparc_floppy_irq(int irq, void *dev_cookie)
static int sun_fd_request_irq(void)
static void sun_fd_free_irq(void)
static unsigned int sun_get_dma_residue(void)
static int sun_fd_eject(int drive)
static struct ebus_dma_info sun_pci_fd_ebus_dma;
static struct device *sun_floppy_dev;
static int sun_pci_broken_drive = -1;
struct sun_pci_dma_op ;
static struct sun_pci_dma_op sun_pci_dma_current = ;
static struct sun_pci_dma_op sun_pci_dma_pending = ;
extern irqreturn_t floppy_interrupt(int irq, void *dev_id);
static unsigned char sun_pci_fd_inb(unsigned long port)
static void sun_pci_fd_outb(unsigned char val, unsigned long port)
static void sun_pci_fd_broken_outb(unsigned char val, unsigned long port)
static void sun_pci_fd_lde_broken_outb(unsigned char val, unsigned long port)
static void sun_pci_fd_enable_dma(void)
static void sun_pci_fd_disable_dma(void)
static void sun_pci_fd_set_dma_mode(int mode)
static void sun_pci_fd_set_dma_count(int length)
static void sun_pci_fd_set_dma_addr(char *buffer)
static unsigned int sun_pci_get_dma_residue(void)
static int sun_pci_fd_request_irq(void)
static void sun_pci_fd_free_irq(void)
static int sun_pci_fd_eject(int drive)
void sun_pci_fd_dma_callback(struct ebus_dma_info *p, int event, void *cookie)
#define DOR	(port + 2)
#define MSR	(port + 4)
#define FIFO	(port + 5)
static void sun_pci_fd_out_byte(unsigned long port, unsigned char val,
unsigned long reg)
static unsigned char sun_pci_fd_sensei(unsigned long port)
static void sun_pci_fd_reset(unsigned long port)
static int sun_pci_fd_test_drive(unsigned long port, int drive)
#undef FIFO
#undef MSR
#undef DOR
static int __init ebus_fdthree_p(struct device_node *dp)
static unsigned long __init sun_floppy_init(void)
#define EXTRA_FLOPPY_PARAMS
static DEFINE_SPINLOCK(dma_spin_lock);
#define claim_dma_lock() \
()
#define release_dma_lock(__flags) \
spin_unlock_irqrestore(&dma_spin_lock, __flags);
