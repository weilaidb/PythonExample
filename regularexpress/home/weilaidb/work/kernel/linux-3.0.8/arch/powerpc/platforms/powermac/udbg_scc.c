extern u8 real_readb(volatile u8 __iomem  *addr);
extern void real_writeb(u8 data, volatile u8 __iomem *addr);
#define	SCC_TXRDY	4
#define SCC_RXRDY	1
static volatile u8 __iomem *sccc;
static volatile u8 __iomem *sccd;
static void udbg_scc_putc(char c)
static int udbg_scc_getc_poll(void)
static int udbg_scc_getc(void)
static unsigned char scc_inittab[] = ;
void udbg_scc_init(int force_scc)
static void udbg_real_scc_putc(char c)
void __init udbg_init_pmac_realmode(void)
