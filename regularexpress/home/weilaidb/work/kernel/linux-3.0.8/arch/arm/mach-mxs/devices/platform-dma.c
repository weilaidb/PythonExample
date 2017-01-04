static struct platform_device *__init mxs_add_dma(const char *devid,
resource_size_t base)
static int __init mxs_add_mxs_dma(void)
arch_initcall(mxs_add_mxs_dma);
