static DEFINE_SPINLOCK(gpiomux_lock);
int msm_gpiomux_write(unsigned gpio,
gpiomux_config_t active,
gpiomux_config_t suspended)
EXPORT_SYMBOL(msm_gpiomux_write);
int msm_gpiomux_get(unsigned gpio)
EXPORT_SYMBOL(msm_gpiomux_get);
int msm_gpiomux_put(unsigned gpio)
EXPORT_SYMBOL(msm_gpiomux_put);
static int __init gpiomux_init(void)
postcore_initcall(gpiomux_init);
