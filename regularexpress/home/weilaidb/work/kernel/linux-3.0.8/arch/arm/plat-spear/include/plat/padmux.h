#define __PLAT_PADMUX_H
struct pmx_reg ;
struct pmx_dev_mode ;
struct pmx_mode ;
struct pmx_dev ;
struct pmx_driver ;
int pmx_register(struct pmx_driver *driver);
