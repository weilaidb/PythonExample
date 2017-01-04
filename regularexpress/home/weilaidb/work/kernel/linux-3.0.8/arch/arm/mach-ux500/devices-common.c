struct amba_device *
dbx500_add_amba_device(const char *name, resource_size_t base,
int irq, void *pdata, unsigned int periphid)
static struct platform_device *
dbx500_add_platform_device(const char *name, int id, void *pdata,
struct resource *res, int resnum)
struct platform_device *
dbx500_add_platform_device_4k1irq(const char *name, int id,
resource_size_t base,
int irq, void *pdata)
static struct platform_device *
dbx500_add_gpio(int id, resource_size_t addr, int irq,
struct nmk_gpio_platform_data *pdata)
void dbx500_add_gpios(resource_size_t *base, int num, int irq,
struct nmk_gpio_platform_data *pdata)
