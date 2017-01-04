#define _LINUX_MCA_H
extern int MCA_bus;
#define MCA_bus 0
typedef int (*MCA_ProcFn)(char* buf, int slot, void* dev);
extern void mca_handle_nmi(void);
enum MCA_AdapterStatus ;
struct mca_device ;
#define to_mca_device(mdev) container_of(mdev, struct mca_device, dev)
struct mca_bus_accessor_functions ;
struct mca_bus ;
#define to_mca_bus(mdev) container_of(mdev, struct mca_bus, dev)
struct mca_driver ;
#define to_mca_driver(mdriver) container_of(mdriver, struct mca_driver, driver)
extern struct mca_device *mca_find_device_by_slot(int slot);
extern int mca_system_init(void);
extern struct mca_bus *mca_attach_bus(int);
extern unsigned char mca_device_read_stored_pos(struct mca_device *mca_dev,
int reg);
extern unsigned char mca_device_read_pos(struct mca_device *mca_dev, int reg);
extern void mca_device_write_pos(struct mca_device *mca_dev, int reg,
unsigned char byte);
extern int mca_device_transform_irq(struct mca_device *mca_dev, int irq);
extern int mca_device_transform_ioport(struct mca_device *mca_dev, int port);
extern void *mca_device_transform_memory(struct mca_device *mca_dev,
void *mem);
extern int mca_device_claimed(struct mca_device *mca_dev);
extern void mca_device_set_claim(struct mca_device *mca_dev, int val);
extern void mca_device_set_name(struct mca_device *mca_dev, const char *name);
static inline char *mca_device_get_name(struct mca_device *mca_dev)
extern enum MCA_AdapterStatus mca_device_status(struct mca_device *mca_dev);
extern struct bus_type mca_bus_type;
extern int mca_register_driver(struct mca_driver *drv);
extern int mca_register_driver_integrated(struct mca_driver *, int);
extern void mca_unregister_driver(struct mca_driver *drv);
extern int mca_register_device(int bus, struct mca_device *mca_dev);
extern void mca_do_proc_init(void);
extern void mca_set_adapter_procfn(int slot, MCA_ProcFn, void* dev);
static inline void mca_do_proc_init(void)
static inline void mca_set_adapter_procfn(int slot, MCA_ProcFn fn, void* dev)
