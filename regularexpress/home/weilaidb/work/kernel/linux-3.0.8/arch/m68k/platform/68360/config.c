extern void m360_cpm_reset(void);
#define MCU_PREEN   ((unsigned short)(0x0001 << 13))
#if defined(CONFIG_UCQUICC)
#define OSCILLATOR  (unsigned long int)33000000
unsigned long int system_clock;
extern QUICC *pquicc;
extern unsigned long int system_clock;
static irqreturn_t hw_tick(int irq, void *dummy)
static struct irqaction m68360_timer_irq = ;
void hw_timer_init(void)
void BSP_gettod (int *yearp, int *monp, int *dayp,
int *hourp, int *minp, int *secp)
int BSP_set_clock_mmss(unsigned long nowtime)
void BSP_reset (void)
unsigned char *scc1_hwaddr;
static int errno;
#if defined (CONFIG_UCQUICC)
_bsc0(char *, getserialnum)
_bsc1(unsigned char *, gethwaddr, int, a)
_bsc1(char *, getbenv, char *, a)
void config_BSP(char *command, int len)
