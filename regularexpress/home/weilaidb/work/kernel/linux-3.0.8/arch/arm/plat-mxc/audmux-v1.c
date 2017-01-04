static void __iomem *audmux_base;
static unsigned char port_mapping[] = ;
int mxc_audmux_v1_configure_port(unsigned int port, unsigned int pcr)
EXPORT_SYMBOL_GPL(mxc_audmux_v1_configure_port);
static int mxc_audmux_v1_init(void)
postcore_initcall(mxc_audmux_v1_init);
