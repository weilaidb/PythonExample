struct platform_device *__init mxs_add_platform_device_dmamask(
const char *name, int id,
const struct resource *res, unsigned int num_resources,
const void *data, size_t size_data, u64 dmamask)
int __init mxs_add_amba_device(const struct amba_device *dev)
