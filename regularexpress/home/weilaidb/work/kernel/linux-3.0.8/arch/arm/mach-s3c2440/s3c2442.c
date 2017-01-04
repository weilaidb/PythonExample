static unsigned long s3c2442_camif_upll_round(struct clk *clk,
unsigned long rate)
static int s3c2442_camif_upll_setrate(struct clk *clk, unsigned long rate)
static struct clk s3c2442_clk_cam = ;
static struct clk s3c2442_clk_cam_upll = ;
static int s3c2442_clk_add(struct sys_device *sysdev)
static struct sysdev_driver s3c2442_clk_driver = ;
static __init int s3c2442_clk_init(void)
arch_initcall(s3c2442_clk_init);
static struct sys_device s3c2442_sysdev = ;
int __init s3c2442_init(void)
void __init s3c2442_map_io(void)
