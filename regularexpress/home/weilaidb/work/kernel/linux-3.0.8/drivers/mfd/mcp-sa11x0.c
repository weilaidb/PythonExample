struct mcp_sa11x0 ;
#define priv(mcp)	((struct mcp_sa11x0 *)mcp_priv(mcp))
static void
mcp_sa11x0_set_telecom_divisor(struct mcp *mcp, unsigned int divisor)
static void
mcp_sa11x0_set_audio_divisor(struct mcp *mcp, unsigned int divisor)
static void
mcp_sa11x0_write(struct mcp *mcp, unsigned int reg, unsigned int val)
static unsigned int
mcp_sa11x0_read(struct mcp *mcp, unsigned int reg)
static void mcp_sa11x0_enable(struct mcp *mcp)
static void mcp_sa11x0_disable(struct mcp *mcp)
static struct mcp_ops mcp_sa11x0 = ;
static int mcp_sa11x0_probe(struct platform_device *pdev)
static int mcp_sa11x0_remove(struct platform_device *dev)
static int mcp_sa11x0_suspend(struct platform_device *dev, pm_message_t state)
static int mcp_sa11x0_resume(struct platform_device *dev)
MODULE_ALIAS("platform:sa11x0-mcp");
static struct platform_driver mcp_sa11x0_driver = ;
static int __init mcp_sa11x0_init(void)
static void __exit mcp_sa11x0_exit(void)
module_init(mcp_sa11x0_init);
module_exit(mcp_sa11x0_exit);
MODULE_AUTHOR("Russell King <rmk@arm.linux.org.uk>");
MODULE_DESCRIPTION("SA11x0 multimedia communications port driver");
MODULE_LICENSE("GPL");
