int __umc_driver_register(struct umc_driver *umc_drv, struct module *module,
const char *mod_name)
EXPORT_SYMBOL_GPL(__umc_driver_register);
void umc_driver_unregister(struct umc_driver *umc_drv)
EXPORT_SYMBOL_GPL(umc_driver_unregister);
