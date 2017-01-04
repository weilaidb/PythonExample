#define _LINUX_UWB_UMC_H_
#define UMC_CAP_ID_WHCI_RC      0x00
#define UMC_CAP_ID_WHCI_WUSB_HC 0x01
struct umc_dev ;
#define to_umc_dev(d) container_of(d, struct umc_dev, dev)
struct umc_driver ;
#define to_umc_driver(d) container_of(d, struct umc_driver, driver)
extern struct bus_type umc_bus_type;
struct umc_dev *umc_device_create(struct device *parent, int n);
int __must_check umc_device_register(struct umc_dev *umc);
void umc_device_unregister(struct umc_dev *umc);
int __must_check __umc_driver_register(struct umc_driver *umc_drv,
struct module *mod,
const char *mod_name);
static inline int __must_check umc_driver_register(struct umc_driver *umc_drv)
void umc_driver_unregister(struct umc_driver *umc_drv);
int umc_match_pci_id(struct umc_driver *umc_drv, struct umc_dev *umc);
static inline struct pci_dev *umc_parent_pci_dev(struct umc_dev *umc_dev)
static inline struct umc_dev *umc_dev_get(struct umc_dev *umc_dev)
static inline void umc_dev_put(struct umc_dev *umc_dev)
static inline void umc_set_drvdata(struct umc_dev *umc_dev, void *data)
static inline void *umc_get_drvdata(struct umc_dev *umc_dev)
int umc_controller_reset(struct umc_dev *umc);
