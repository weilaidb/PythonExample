#define clk_is_primary(x)	((x)->type & CLK_TYPE_PRIMARY)
#define clk_is_programmable(x)	((x)->type & CLK_TYPE_PROGRAMMABLE)
#define clk_is_peripheral(x)	((x)->type & CLK_TYPE_PERIPHERAL)
#define clk_is_sys(x)		((x)->type & CLK_TYPE_SYSTEM)
#define cpu_has_utmi()		(  cpu_is_at91cap9() \
|| cpu_is_at91sam9rl() \
|| cpu_is_at91sam9g45())
#define cpu_has_800M_plla()	(  cpu_is_at91sam9g20() \
|| cpu_is_at91sam9g45())
#define cpu_has_300M_plla()	(cpu_is_at91sam9g10())
#define cpu_has_pllb()		(!(cpu_is_at91sam9rl() \
|| cpu_is_at91sam9g45()))
#define cpu_has_upll()		(cpu_is_at91sam9g45())
#define cpu_has_uhp()		(!cpu_is_at91sam9rl())
#define cpu_has_udpfs()		(!(cpu_is_at91sam9rl() \
|| cpu_is_at91sam9g45()))
static LIST_HEAD(clocks);
static DEFINE_SPINLOCK(clk_lock);
static u32 at91_pllb_usb_init;
static struct clk clk32k = ;
static struct clk main_clk = ;
static struct clk plla = ;
static void pllb_mode(struct clk *clk, int is_on)
static struct clk pllb = ;
static void pmc_sys_mode(struct clk *clk, int is_on)
static void pmc_uckr_mode(struct clk *clk, int is_on)
static struct clk udpck = ;
struct clk utmi_clk = ;
static struct clk uhpck = ;
struct clk mck = ;
static void pmc_periph_mode(struct clk *clk, int is_on)
static struct clk __init *at91_css_to_clk(unsigned long css)
static void __clk_enable(struct clk *clk)
int clk_enable(struct clk *clk)
EXPORT_SYMBOL(clk_enable);
static void __clk_disable(struct clk *clk)
void clk_disable(struct clk *clk)
EXPORT_SYMBOL(clk_disable);
unsigned long clk_get_rate(struct clk *clk)
EXPORT_SYMBOL(clk_get_rate);
long clk_round_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL(clk_round_rate);
int clk_set_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL(clk_set_rate);
struct clk *clk_get_parent(struct clk *clk)
EXPORT_SYMBOL(clk_get_parent);
int clk_set_parent(struct clk *clk, struct clk *parent)
EXPORT_SYMBOL(clk_set_parent);
static void __init init_programmable_clock(struct clk *clk)
static int at91_clk_show(struct seq_file *s, void *unused)
static int at91_clk_open(struct inode *inode, struct file *file)
static const struct file_operations at91_clk_operations = ;
static int __init at91_clk_debugfs_init(void)
postcore_initcall(at91_clk_debugfs_init);
static void __init at91_clk_add(struct clk *clk)
int __init clk_register(struct clk *clk)
static u32 __init at91_pll_rate(struct clk *pll, u32 freq, u32 reg)
static u32 __init at91_usb_rate(struct clk *pll, u32 freq, u32 reg)
static unsigned __init at91_pll_calc(unsigned main_freq, unsigned out_freq)
static struct clk *const standard_pmc_clocks[] __initdata = ;
static void __init at91_pllb_usbfs_clock_init(unsigned long main_clock)
static void __init at91_upll_usbfs_clock_init(unsigned long main_clock)
int __init at91_clock_init(unsigned long main_clock)
static int __init at91_clock_reset(void)
late_initcall(at91_clock_reset);
