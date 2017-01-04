struct lm_device ;
struct lm_driver ;
int lm_driver_register(struct lm_driver *drv);
void lm_driver_unregister(struct lm_driver *drv);
int lm_device_register(struct lm_device *dev);
#define lm_get_drvdata(lm)	dev_get_drvdata(&(lm)->dev)
#define lm_set_drvdata(lm,d)	dev_set_drvdata(&(lm)->dev, d)
