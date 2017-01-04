#define __MACIO_ASIC_H__
extern struct bus_type macio_bus_type;
struct macio_driver;
struct macio_chip;
#define MACIO_DEV_COUNT_RESOURCES	8
#define MACIO_DEV_COUNT_IRQS		8
struct macio_bus
;
struct macio_dev
;
#define	to_macio_device(d) container_of(d, struct macio_dev, ofdev.dev)
#define	of_to_macio_device(d) container_of(d, struct macio_dev, ofdev)
extern struct macio_dev *macio_dev_get(struct macio_dev *dev);
extern void macio_dev_put(struct macio_dev *dev);
static inline int macio_resource_count(struct macio_dev *dev)
static inline unsigned long macio_resource_start(struct macio_dev *dev, int resource_no)
static inline unsigned long macio_resource_end(struct macio_dev *dev, int resource_no)
static inline unsigned long macio_resource_len(struct macio_dev *dev, int resource_no)
extern int macio_enable_devres(struct macio_dev *dev);
extern int macio_request_resource(struct macio_dev *dev, int resource_no, const char *name);
extern void macio_release_resource(struct macio_dev *dev, int resource_no);
extern int macio_request_resources(struct macio_dev *dev, const char *name);
extern void macio_release_resources(struct macio_dev *dev);
static inline int macio_irq_count(struct macio_dev *dev)
static inline int macio_irq(struct macio_dev *dev, int irq_no)
static inline void macio_set_drvdata(struct macio_dev *dev, void *data)
static inline void* macio_get_drvdata(struct macio_dev *dev)
static inline struct device_node *macio_get_of_node(struct macio_dev *mdev)
static inline struct pci_dev *macio_get_pci_dev(struct macio_dev *mdev)
struct macio_driver
;
#define	to_macio_driver(drv) container_of(drv,struct macio_driver, driver)
extern int macio_register_driver(struct macio_driver *);
extern void macio_unregister_driver(struct macio_driver *);
