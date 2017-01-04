#define _ASM_PARISC_PARISC_DEVICE_H_
struct parisc_device ;
struct parisc_driver ;
#define to_parisc_device(d)	container_of(d, struct parisc_device, dev)
#define to_parisc_driver(d)	container_of(d, struct parisc_driver, drv)
#define parisc_parent(d)	to_parisc_device(d->dev.parent)
static inline const char *parisc_pathname(struct parisc_device *d)
static inline void
parisc_set_drvdata(struct parisc_device *d, void *p)
static inline void *
parisc_get_drvdata(struct parisc_device *d)
extern struct bus_type parisc_bus_type;
