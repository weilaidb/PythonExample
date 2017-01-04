#define _LINUX_IOC3_H
#define IOC3_MAX_SUBMODULES	32
#define IOC3_CLASS_NONE		0
#define IOC3_CLASS_BASE_IP27	1
#define IOC3_CLASS_BASE_IP30	2
#define IOC3_CLASS_MENET_123	3
#define IOC3_CLASS_MENET_4	4
#define IOC3_CLASS_CADDUO	5
#define IOC3_CLASS_SERIAL	6
struct ioc3_driver_data ;
struct ioc3_submodule ;
#define IOC3_W_IES		0
#define IOC3_W_IEC		1
extern int ioc3_register_submodule(struct ioc3_submodule *);
extern void ioc3_unregister_submodule(struct ioc3_submodule *);
extern void ioc3_enable(struct ioc3_submodule *, struct ioc3_driver_data *, unsigned int);
extern void ioc3_ack(struct ioc3_submodule *, struct ioc3_driver_data *, unsigned int);
extern void ioc3_disable(struct ioc3_submodule *, struct ioc3_driver_data *, unsigned int);
extern void ioc3_gpcr_set(struct ioc3_driver_data *, unsigned int);
extern void ioc3_write_ireg(struct ioc3_driver_data *idd, uint32_t value, int reg);
