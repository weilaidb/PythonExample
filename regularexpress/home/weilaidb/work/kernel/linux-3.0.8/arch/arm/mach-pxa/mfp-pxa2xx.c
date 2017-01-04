#define PGSR(x)		__REG2(0x40F00020, (x) << 2)
#define __GAFR(u, x)	__REG2((u) ? 0x40E00058 : 0x40E00054, (x) << 3)
#define GAFR_L(x)	__GAFR(0, x)
#define GAFR_U(x)	__GAFR(1, x)
#define PWER_WE35	(1 << 24)
struct gpio_desc ;
static struct gpio_desc gpio_desc[MFP_PIN_GPIO127 + 1];
static unsigned long gpdr_lpm[4];
static int __mfp_config_gpio(unsigned gpio, unsigned long c)
static inline int __mfp_validate(int mfp)
void pxa2xx_mfp_config(unsigned long *mfp_cfgs, int num)
void pxa2xx_mfp_set_lpm(int mfp, unsigned long lpm)
int gpio_set_wake(unsigned int gpio, unsigned int on)
static void __init pxa25x_mfp_init(void)
static inline void pxa25x_mfp_init(void)
static int pxa27x_pkwr_gpio[] = ;
int keypad_set_wake(unsigned int on)
#define PWER_WEMUX2_GPIO38	(1 << 16)
#define PWER_WEMUX2_GPIO53	(2 << 16)
#define PWER_WEMUX2_GPIO40	(3 << 16)
#define PWER_WEMUX2_GPIO36	(4 << 16)
#define PWER_WEMUX2_MASK	(7 << 16)
#define PWER_WEMUX3_GPIO31	(1 << 19)
#define PWER_WEMUX3_GPIO113	(2 << 19)
#define PWER_WEMUX3_MASK	(3 << 19)
#define INIT_GPIO_DESC_MUXED(mux, gpio)				\
do  while (0)
static void __init pxa27x_mfp_init(void)
static inline void pxa27x_mfp_init(void)
static unsigned long saved_gafr[2][4];
static unsigned long saved_gpdr[4];
static unsigned long saved_pgsr[4];
static int pxa2xx_mfp_suspend(void)
static void pxa2xx_mfp_resume(void)
#define pxa2xx_mfp_suspend	NULL
#define pxa2xx_mfp_resume	NULL
struct syscore_ops pxa2xx_mfp_syscore_ops = ;
static int __init pxa2xx_mfp_init(void)
postcore_initcall(pxa2xx_mfp_init);
