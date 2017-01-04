struct platform_device *mxs_add_platform_device_dmamask(
const char *name, int id,
const struct resource *res, unsigned int num_resources,
const void *data, size_t size_data, u64 dmamask);
static inline struct platform_device *mxs_add_platform_device(
const char *name, int id,
const struct resource *res, unsigned int num_resources,
const void *data, size_t size_data)
int __init mxs_add_amba_device(const struct amba_device *dev);
int __init mxs_add_duart(const struct amba_device *dev);
struct mxs_auart_data ;
struct platform_device *__init mxs_add_auart(
const struct mxs_auart_data *data);
struct mxs_fec_data ;
struct platform_device *__init mxs_add_fec(
const struct mxs_fec_data *data,
const struct fec_platform_data *pdata);
struct mxs_flexcan_data ;
struct platform_device *__init mxs_add_flexcan(
const struct mxs_flexcan_data *data,
const struct flexcan_platform_data *pdata);
struct mxs_mxs_i2c_data ;
struct platform_device * __init mxs_add_mxs_i2c(
const struct mxs_mxs_i2c_data *data);
struct mxs_mxs_mmc_data ;
struct platform_device *__init mxs_add_mxs_mmc(
const struct mxs_mxs_mmc_data *data,
const struct mxs_mmc_platform_data *pdata);
struct platform_device *__init mxs_add_mxs_pwm(
resource_size_t iobase, int id);
