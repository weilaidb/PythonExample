static u8		async_cs, sync_cs;
static unsigned		refclk_psec;
static unsigned
next_clk(unsigned t1_NS, unsigned t2_ps, unsigned fclk_ps)
static int tusb_set_async_mode(unsigned sysclk_ps, unsigned fclk_ps)
static int tusb_set_sync_mode(unsigned sysclk_ps, unsigned fclk_ps)
extern unsigned long gpmc_get_fclk_period(void);
int tusb6010_platform_retime(unsigned is_refclk)
EXPORT_SYMBOL_GPL(tusb6010_platform_retime);
static struct resource tusb_resources[] = ;
static u64 tusb_dmamask = ~(u32)0;
static struct platform_device tusb_device = ;
int __init
tusb6010_setup_interface(struct musb_hdrc_platform_data *data,
unsigned ps_refclk, unsigned waitpin,
unsigned async, unsigned sync,
unsigned irq, unsigned dmachan)
