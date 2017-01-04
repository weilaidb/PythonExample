static void __iomem *base;
int mxc_iomux_v3_setup_pad(iomux_v3_cfg_t pad)
EXPORT_SYMBOL(mxc_iomux_v3_setup_pad);
int mxc_iomux_v3_setup_multiple_pads(iomux_v3_cfg_t *pad_list, unsigned count)
EXPORT_SYMBOL(mxc_iomux_v3_setup_multiple_pads);
void mxc_iomux_v3_init(void __iomem *iomux_v3_base)
