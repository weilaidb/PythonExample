extern void *_quicc_base;
extern unsigned int system_clock;
static uint dp_alloc_base;
static uint dp_alloc_top;
QUICC  *pquicc;
struct	cpm_action ;
static	struct	cpm_action cpm_vecs[CPMVEC_NR];
static	void	cpm_interrupt(int irq, void * dev, struct pt_regs * regs);
static	void	cpm_error_interrupt(void *);
void cpm_install_handler(int vec, void (*handler)(), void *dev_id);
void m360_cpm_reset(void);
void m360_cpm_reset()
void
cpm_interrupt_init(void)
static	void
cpm_interrupt(int irq, void * dev, struct pt_regs * regs)
static	void
cpm_error_interrupt(void *dev)
void
cpm_install_handler(int vec, void (*handler)(), void *dev_id)
void
cpm_free_handler(int vec)
uint
m360_cpm_dpalloc(uint size)
#define BRG_INT_CLK		system_clock
#define BRG_UART_CLK	(BRG_INT_CLK/16)
void
m360_cpm_setbrg(uint brg, uint rate)
