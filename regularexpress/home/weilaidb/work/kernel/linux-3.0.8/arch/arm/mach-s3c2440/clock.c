static unsigned long s3c2440_camif_upll_round(struct clk *clk,
unsigned long rate)
static int s3c2440_camif_upll_setrate(struct clk *clk, unsigned long rate)
static struct clk s3c2440_clk_cam = ;
static struct clk s3c2440_clk_cam_upll = ;
static struct clk s3c2440_clk_ac97 = ;
static int s3c2440_clk_add(struct sys_device *sysdev)
static struct sysdev_driver s3c2440_clk_driver = ;
static __init int s3c24xx_clk_driver(void)
arch_initcall(s3c24xx_clk_driver);
