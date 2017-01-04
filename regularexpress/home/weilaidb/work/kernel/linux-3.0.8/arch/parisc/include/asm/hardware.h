#define _PARISC_HARDWARE_H
#define HWTYPE_ANY_ID		PA_HWTYPE_ANY_ID
#define HVERSION_ANY_ID		PA_HVERSION_ANY_ID
#define HVERSION_REV_ANY_ID	PA_HVERSION_REV_ANY_ID
#define SVERSION_ANY_ID		PA_SVERSION_ANY_ID
struct hp_hardware ;
struct parisc_device;
enum cpu_type ;
extern const char * const cpu_name_version[][2];
struct parisc_driver;
struct io_module ;
struct bc_module ;
#define HPHW_NPROC     0
#define HPHW_MEMORY    1
#define HPHW_B_DMA     2
#define HPHW_OBSOLETE  3
#define HPHW_A_DMA     4
#define HPHW_A_DIRECT  5
#define HPHW_OTHER     6
#define HPHW_BCPORT    7
#define HPHW_CIO       8
#define HPHW_CONSOLE   9
#define HPHW_FIO       10
#define HPHW_BA        11
#define HPHW_IOA       12
#define HPHW_BRIDGE    13
#define HPHW_FABRIC    14
#define HPHW_MC	       15
#define HPHW_FAULTY    31
extern const char *parisc_hardware_description(struct parisc_device_id *id);
extern enum cpu_type parisc_get_cpu_type(unsigned long hversion);
struct pci_dev;
extern struct parisc_device *alloc_pa_dev(unsigned long hpa,
struct hardware_path *path);
extern int register_parisc_device(struct parisc_device *dev);
extern int register_parisc_driver(struct parisc_driver *driver);
extern int count_parisc_driver(struct parisc_driver *driver);
extern int unregister_parisc_driver(struct parisc_driver *driver);
extern void walk_central_bus(void);
extern const struct parisc_device *find_pa_parent_type(const struct parisc_device *, int);
extern void print_parisc_devices(void);
extern char *print_pa_hwpath(struct parisc_device *dev, char *path);
extern char *print_pci_hwpath(struct pci_dev *dev, char *path);
extern void get_pci_node_path(struct pci_dev *dev, struct hardware_path *path);
extern void init_parisc_bus(void);
extern struct device *hwpath_to_device(struct hardware_path *modpath);
extern void device_to_hwpath(struct device *dev, struct hardware_path *path);
extern void do_memory_inventory(void);
extern void do_device_inventory(void);
