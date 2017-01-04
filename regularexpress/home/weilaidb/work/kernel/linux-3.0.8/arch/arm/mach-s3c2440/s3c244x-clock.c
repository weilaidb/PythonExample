static int s3c2440_setparent_armclk(struct clk *clk, struct clk *parent)
static struct clk clk_arm = ;
static int s3c244x_clk_add(struct sys_device *sysdev)
static struct sysdev_driver s3c2440_clk_driver = ;
static int s3c2440_clk_init(void)
arch_initcall(s3c2440_clk_init);
static struct sysdev_driver s3c2442_clk_driver = ;
static int s3c2442_clk_init(void)
arch_initcall(s3c2442_clk_init);
