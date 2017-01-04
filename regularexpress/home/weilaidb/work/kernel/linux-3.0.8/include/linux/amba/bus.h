#define ASMARM_AMBA_H
#define AMBA_NR_IRQS	2
#define AMBA_CID	0xb105f00d
struct clk;
struct amba_device ;
struct amba_id ;
struct amba_driver ;
enum amba_vendor ;
extern struct bus_type amba_bustype;
#define to_amba_device(d)	container_of(d, struct amba_device, dev)
#define amba_get_drvdata(d)	dev_get_drvdata(&d->dev)
#define amba_set_drvdata(d,p)	dev_set_drvdata(&d->dev, p)
int amba_driver_register(struct amba_driver *);
void amba_driver_unregister(struct amba_driver *);
int amba_device_register(struct amba_device *, struct resource *);
void amba_device_unregister(struct amba_device *);
struct amba_device *amba_find_device(const char *, struct device *, unsigned int, unsigned int);
int amba_request_regions(struct amba_device *, const char *);
void amba_release_regions(struct amba_device *);
#define amba_pclk_enable(d)	\
(IS_ERR((d)->pclk) ? 0 : clk_enable((d)->pclk))
#define amba_pclk_disable(d)	\
do  while (0)
#define amba_vcore_enable(d)	\
(IS_ERR((d)->vcore) ? 0 : regulator_enable((d)->vcore))
#define amba_vcore_disable(d)	\
do  while (0)
#define AMBA_CONFIG_BITS(a) (((a) >> 24) & 0xff)
#define AMBA_REV_BITS(a) (((a) >> 20) & 0x0f)
#define AMBA_MANF_BITS(a) (((a) >> 12) & 0xff)
#define AMBA_PART_BITS(a) ((a) & 0xfff)
#define amba_config(d)	AMBA_CONFIG_BITS((d)->periphid)
#define amba_rev(d)	AMBA_REV_BITS((d)->periphid)
#define amba_manf(d)	AMBA_MANF_BITS((d)->periphid)
#define amba_part(d)	AMBA_PART_BITS((d)->periphid)
