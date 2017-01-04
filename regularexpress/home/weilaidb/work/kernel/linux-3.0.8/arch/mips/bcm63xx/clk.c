static DEFINE_MUTEX(clocks_mutex);
static void clk_enable_unlocked(struct clk *clk)
static void clk_disable_unlocked(struct clk *clk)
static void bcm_hwclock_set(u32 mask, int enable)
static void enet_misc_set(struct clk *clk, int enable)
static struct clk clk_enet_misc = ;
static void enetx_set(struct clk *clk, int enable)
static struct clk clk_enet0 = ;
static struct clk clk_enet1 = ;
static void ephy_set(struct clk *clk, int enable)
static struct clk clk_ephy = ;
static void pcm_set(struct clk *clk, int enable)
static struct clk clk_pcm = ;
static void usbh_set(struct clk *clk, int enable)
static struct clk clk_usbh = ;
static void spi_set(struct clk *clk, int enable)
static struct clk clk_spi = ;
static struct clk clk_periph = ;
int clk_enable(struct clk *clk)
EXPORT_SYMBOL(clk_enable);
void clk_disable(struct clk *clk)
EXPORT_SYMBOL(clk_disable);
unsigned long clk_get_rate(struct clk *clk)
EXPORT_SYMBOL(clk_get_rate);
struct clk *clk_get(struct device *dev, const char *id)
EXPORT_SYMBOL(clk_get);
void clk_put(struct clk *clk)
EXPORT_SYMBOL(clk_put);
