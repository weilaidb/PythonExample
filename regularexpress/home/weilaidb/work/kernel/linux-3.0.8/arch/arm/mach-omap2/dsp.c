extern phys_addr_t omap_dsp_get_mempool_base(void);
static struct platform_device *omap_dsp_pdev;
static struct omap_dsp_platform_data omap_dsp_pdata __initdata = ;
static int __init omap_dsp_init(void)
module_init(omap_dsp_init);
static void __exit omap_dsp_exit(void)
module_exit(omap_dsp_exit);
MODULE_AUTHOR("Hiroshi DOYU");
MODULE_DESCRIPTION("TI's OMAP DSP platform device registration");
MODULE_LICENSE("GPL");
