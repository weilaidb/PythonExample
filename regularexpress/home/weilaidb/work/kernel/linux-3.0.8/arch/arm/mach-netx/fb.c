static struct clcd_panel *netx_panel;
void netx_clcd_enable(struct clcd_fb *fb)
int netx_clcd_setup(struct clcd_fb *fb)
int netx_clcd_mmap(struct clcd_fb *fb, struct vm_area_struct *vma)
void netx_clcd_remove(struct clcd_fb *fb)
void clk_disable(struct clk *clk)
int clk_set_rate(struct clk *clk, unsigned long rate)
int clk_enable(struct clk *clk)
struct clk *clk_get(struct device *dev, const char *id)
void clk_put(struct clk *clk)
static struct amba_device fb_device = ;
int netx_fb_init(struct clcd_board *board, struct clcd_panel *panel)
