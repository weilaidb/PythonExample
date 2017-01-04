#define __VLYNQ_H__
#define VLYNQ_NUM_IRQS 32
struct vlynq_mapping ;
enum vlynq_divisor ;
struct vlynq_device_id ;
struct vlynq_regs;
struct vlynq_device ;
struct vlynq_driver ;
struct plat_vlynq_ops ;
static inline struct vlynq_driver *to_vlynq_driver(struct device_driver *drv)
static inline struct vlynq_device *to_vlynq_device(struct device *device)
extern struct bus_type vlynq_bus_type;
extern int __vlynq_register_driver(struct vlynq_driver *driver,
struct module *owner);
static inline int vlynq_register_driver(struct vlynq_driver *driver)
static inline void *vlynq_get_drvdata(struct vlynq_device *dev)
static inline void vlynq_set_drvdata(struct vlynq_device *dev, void *data)
static inline u32 vlynq_mem_start(struct vlynq_device *dev)
static inline u32 vlynq_mem_end(struct vlynq_device *dev)
static inline u32 vlynq_mem_len(struct vlynq_device *dev)
static inline int vlynq_virq_to_irq(struct vlynq_device *dev, int virq)
static inline int vlynq_irq_to_virq(struct vlynq_device *dev, int irq)
extern void vlynq_unregister_driver(struct vlynq_driver *driver);
extern int vlynq_enable_device(struct vlynq_device *dev);
extern void vlynq_disable_device(struct vlynq_device *dev);
extern int vlynq_set_local_mapping(struct vlynq_device *dev, u32 tx_offset,
struct vlynq_mapping *mapping);
extern int vlynq_set_remote_mapping(struct vlynq_device *dev, u32 tx_offset,
struct vlynq_mapping *mapping);
extern int vlynq_set_local_irq(struct vlynq_device *dev, int virq);
extern int vlynq_set_remote_irq(struct vlynq_device *dev, int virq);
