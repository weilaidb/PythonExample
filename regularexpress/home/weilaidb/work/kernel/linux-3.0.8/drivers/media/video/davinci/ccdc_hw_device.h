#define _CCDC_HW_DEVICE_H
struct ccdc_hw_ops ;
struct ccdc_hw_device ;
int vpfe_register_ccdc_device(struct ccdc_hw_device *dev);
void vpfe_unregister_ccdc_device(struct ccdc_hw_device *dev);
