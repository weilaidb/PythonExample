#define __ASM_SUN3X_FLOPPY_H
#define SUN3X_FDC_IRQ 0x40
#define FCR_TC 0x1
#define FCR_EJECT 0x2
#define FCR_MTRON 0x4
#define FCR_DSEL1 0x8
#define FCR_DSEL0 0x10
#undef release_region
#undef request_region
#define release_region(X, Y)	do  while(0)
#define request_region(X, Y, Z)	(1)
struct sun3xflop_private  sun3x_fdc;
#undef HAVE_DISABLE_HLT
static unsigned char sun3x_82072_fd_inb(int port)
static void sun3x_82072_fd_outb(unsigned char value, int port)
asmlinkage irqreturn_t sun3xflop_hardint(int irq, void *dev_id)
static int sun3xflop_request_irq(void)
static void __init floppy_set_flags(int *ints,int param, int param2);
static int sun3xflop_init(void)
static int sun3x_eject(void)
#define fd_eject(drive) sun3x_eject()
