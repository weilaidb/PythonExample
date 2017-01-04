#define _LINUX_ZORRO_H
#define ZORRO_MANUF(id)		((id) >> 16)
#define ZORRO_PROD(id)		(((id) >> 8) & 0xff)
#define ZORRO_EPC(id)		((id) & 0xff)
#define ZORRO_ID(manuf, prod, epc) \
((ZORRO_MANUF_##manuf << 16) | ((prod) << 8) | (epc))
typedef __u32 zorro_id;
#define GVP_PRODMASK			(0xf8)
#define GVP_SCSICLKMASK			(0x01)
enum GVP_flags ;
struct Node  __attribute__ ((packed));
struct ExpansionRom  __attribute__ ((packed));
#define ERT_TYPEMASK	0xc0
#define ERT_ZORROII	0xc0
#define ERT_ZORROIII	0x80
#define ERTB_MEMLIST	5
#define ERTF_MEMLIST	(1<<5)
struct ConfigDev  __attribute__ ((packed));
#define ZORRO_NUM_AUTO		16
struct zorro_dev ;
#define	to_zorro_dev(n)	container_of(n, struct zorro_dev, dev)
extern struct bus_type zorro_bus_type;
struct zorro_driver ;
#define	to_zorro_driver(drv)	container_of(drv, struct zorro_driver, driver)
#define zorro_for_each_dev(dev)	\
for (dev = &zorro_autocon[0]; dev < zorro_autocon+zorro_num_autocon; dev++)
extern int zorro_register_driver(struct zorro_driver *);
extern void zorro_unregister_driver(struct zorro_driver *);
extern const struct zorro_device_id *zorro_match_device(const struct zorro_device_id *ids, const struct zorro_dev *z);
static inline struct zorro_driver *zorro_dev_driver(const struct zorro_dev *z)
extern unsigned int zorro_num_autocon;
extern struct zorro_dev zorro_autocon[ZORRO_NUM_AUTO];
extern struct zorro_dev *zorro_find_device(zorro_id id,
struct zorro_dev *from);
#define zorro_resource_start(z)	((z)->resource.start)
#define zorro_resource_end(z)	((z)->resource.end)
#define zorro_resource_len(z)	((z)->resource.end-(z)->resource.start+1)
#define zorro_resource_flags(z)	((z)->resource.flags)
#define zorro_request_device(z, name) \
request_mem_region(zorro_resource_start(z), zorro_resource_len(z), name)
#define zorro_release_device(z) \
release_mem_region(zorro_resource_start(z), zorro_resource_len(z))
static inline void *zorro_get_drvdata (struct zorro_dev *z)
static inline void zorro_set_drvdata (struct zorro_dev *z, void *data)
extern DECLARE_BITMAP(zorro_unused_z2ram, 128);
#define Z2RAM_START		(0x00200000)
#define Z2RAM_END		(0x00a00000)
#define Z2RAM_SIZE		(0x00800000)
#define Z2RAM_CHUNKSIZE		(0x00010000)
#define Z2RAM_CHUNKMASK		(0x0000ffff)
#define Z2RAM_CHUNKSHIFT	(16)
