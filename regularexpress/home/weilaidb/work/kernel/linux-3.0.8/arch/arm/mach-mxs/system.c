#define MX23_CLKCTRL_RESET_OFFSET	0x120
#define MX28_CLKCTRL_RESET_OFFSET	0x1e0
#define MXS_CLKCTRL_RESET_CHIP		(1 << 1)
#define MXS_MODULE_CLKGATE		(1 << 30)
#define MXS_MODULE_SFTRST		(1 << 31)
static void __iomem *mxs_clkctrl_reset_addr;
void arch_reset(char mode, const char *cmd)
static int __init mxs_arch_reset_init(void)
core_initcall(mxs_arch_reset_init);
static int clear_poll_bit(void __iomem *addr, u32 mask)
int mxs_reset_block(void __iomem *reset_addr)
EXPORT_SYMBOL(mxs_reset_block);
