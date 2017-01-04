#define _LINUX_IOC4_H
#define IOC4_EXTINT_COUNT_DIVISOR 520
struct ioc4_misc_regs ;
#define IOC4_GPCR_DIR_0 0x01
#define IOC4_GPCR_DIR_1 0x02
#define IOC4_GPCR_DIR_2 0x04
#define IOC4_GPCR_DIR_3 0x08
#define IOC4_GPCR_DIR_4 0x10
#define IOC4_GPCR_DIR_5 0x20
#define IOC4_GPCR_DIR_6 0x40
#define IOC4_GPCR_DIR_7 0x80
#define IOC4_GPCR_EDGE_0 0x01
#define IOC4_GPCR_EDGE_1 0x02
#define IOC4_GPCR_EDGE_2 0x04
#define IOC4_GPCR_EDGE_3 0x08
#define IOC4_GPCR_EDGE_4 0x10
#define IOC4_GPCR_EDGE_5 0x20
#define IOC4_GPCR_EDGE_6 0x40
#define IOC4_GPCR_EDGE_7 0x80
#define IOC4_VARIANT_IO9	0x0900
#define IOC4_VARIANT_PCI_RT	0x0901
#define IOC4_VARIANT_IO10	0x1000
struct ioc4_driver_data ;
struct ioc4_submodule ;
#define IOC4_NUM_CARDS		8
extern int ioc4_register_submodule(struct ioc4_submodule *);
extern void ioc4_unregister_submodule(struct ioc4_submodule *);
