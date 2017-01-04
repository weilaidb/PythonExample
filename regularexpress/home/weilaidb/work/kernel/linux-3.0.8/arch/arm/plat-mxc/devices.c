int __init mxc_register_device(struct platform_device *pdev, void *data)
struct platform_device *__init imx_add_platform_device_dmamask(
const char *name, int id,
const struct resource *res, unsigned int num_resources,
const void *data, size_t size_data, u64 dmamask)
