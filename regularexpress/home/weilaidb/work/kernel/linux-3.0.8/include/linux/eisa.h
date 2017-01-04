#define _LINUX_EISA_H
#define EISA_MAX_SLOTS 8
#define EISA_MAX_RESOURCES 4
#define EISA_DMA1_STATUS            8
#define EISA_INT1_CTRL           0x20
#define EISA_INT1_MASK           0x21
#define EISA_INT2_CTRL           0xA0
#define EISA_INT2_MASK           0xA1
#define EISA_DMA2_STATUS         0xD0
#define EISA_DMA2_WRITE_SINGLE   0xD4
#define EISA_EXT_NMI_RESET_CTRL 0x461
#define EISA_INT1_EDGE_LEVEL    0x4D0
#define EISA_INT2_EDGE_LEVEL    0x4D1
#define EISA_VENDOR_ID_OFFSET   0xC80
#define EISA_CONFIG_OFFSET      0xC84
#define EISA_CONFIG_ENABLED         1
#define EISA_CONFIG_FORCED          2
struct eisa_device ;
#define to_eisa_device(n) container_of(n, struct eisa_device, dev)
static inline int eisa_get_region_index (void *addr)
struct eisa_driver ;
#define to_eisa_driver(drv) container_of(drv,struct eisa_driver, driver)
extern struct bus_type eisa_bus_type;
int eisa_driver_register (struct eisa_driver *edrv);
void eisa_driver_unregister (struct eisa_driver *edrv);
static inline int eisa_driver_register (struct eisa_driver *edrv)
static inline void eisa_driver_unregister (struct eisa_driver *edrv)
static inline void *eisa_get_drvdata (struct eisa_device *edev)
static inline void eisa_set_drvdata (struct eisa_device *edev, void *data)
struct eisa_root_device ;
int eisa_root_register (struct eisa_root_device *root);
extern int EISA_bus;
# define EISA_bus 0
