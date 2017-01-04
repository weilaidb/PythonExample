static int s3c2412_clkcon_enable(struct clk *clk, int enable)
static int s3c2412_upll_enable(struct clk *clk, int enable)
static struct clk clk_erefclk = ;
static struct clk clk_urefclk = ;
static int s3c2412_setparent_usysclk(struct clk *clk, struct clk *parent)
static struct clk clk_usysclk = ;
static struct clk clk_mrefclk = ;
static struct clk clk_mdivclk = ;
static int s3c2412_setparent_usbsrc(struct clk *clk, struct clk *parent)
static unsigned long s3c2412_roundrate_usbsrc(struct clk *clk,
unsigned long rate)
static unsigned long s3c2412_getrate_usbsrc(struct clk *clk)
static int s3c2412_setrate_usbsrc(struct clk *clk, unsigned long rate)
static struct clk clk_usbsrc = ;
static int s3c2412_setparent_msysclk(struct clk *clk, struct clk *parent)
static struct clk clk_msysclk = ;
static int s3c2412_setparent_armclk(struct clk *clk, struct clk *parent)
static struct clk clk_armclk = ;
static unsigned long s3c2412_roundrate_clksrc(struct clk *clk,
unsigned long rate)
static int s3c2412_setparent_uart(struct clk *clk, struct clk *parent)
static unsigned long s3c2412_getrate_uart(struct clk *clk)
static int s3c2412_setrate_uart(struct clk *clk, unsigned long rate)
static struct clk clk_uart = ;
static int s3c2412_setparent_i2s(struct clk *clk, struct clk *parent)
static unsigned long s3c2412_getrate_i2s(struct clk *clk)
static int s3c2412_setrate_i2s(struct clk *clk, unsigned long rate)
static struct clk clk_i2s = ;
static int s3c2412_setparent_cam(struct clk *clk, struct clk *parent)
static unsigned long s3c2412_getrate_cam(struct clk *clk)
static int s3c2412_setrate_cam(struct clk *clk, unsigned long rate)
static struct clk clk_cam = ;
static struct clk init_clocks_disable[] = ;
static struct clk init_clocks[] = ;
struct clk_init ;
static struct clk_init clks_src[] __initdata = ;
static void __init s3c2412_clk_initparents(void)
static struct clk *clks[] __initdata = ;
int __init s3c2412_baseclk_add(void)
