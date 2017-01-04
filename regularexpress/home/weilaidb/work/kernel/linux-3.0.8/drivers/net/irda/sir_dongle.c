static LIST_HEAD(dongle_list);
static DEFINE_MUTEX(dongle_list_lock);
int irda_register_dongle(struct dongle_driver *new)
EXPORT_SYMBOL(irda_register_dongle);
int irda_unregister_dongle(struct dongle_driver *drv)
EXPORT_SYMBOL(irda_unregister_dongle);
int sirdev_get_dongle(struct sir_dev *dev, IRDA_DONGLE type)
int sirdev_put_dongle(struct sir_dev *dev)
