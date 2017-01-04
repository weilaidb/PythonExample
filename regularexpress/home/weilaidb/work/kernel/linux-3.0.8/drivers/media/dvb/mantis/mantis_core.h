#define __MANTIS_CORE_H
#define FE_TYPE_SAT	0
#define FE_TYPE_CAB	1
#define FE_TYPE_TER	2
#define FE_TYPE_TS204	0
#define FE_TYPE_TS188	1
struct vendorname ;
struct devicetype ;
extern int mantis_dma_init(struct mantis_pci *mantis);
extern int mantis_dma_exit(struct mantis_pci *mantis);
extern void mantis_dma_start(struct mantis_pci *mantis);
extern void mantis_dma_stop(struct mantis_pci *mantis);
extern int mantis_i2c_init(struct mantis_pci *mantis);
extern int mantis_i2c_exit(struct mantis_pci *mantis);
extern int mantis_core_init(struct mantis_pci *mantis);
extern int mantis_core_exit(struct mantis_pci *mantis);
