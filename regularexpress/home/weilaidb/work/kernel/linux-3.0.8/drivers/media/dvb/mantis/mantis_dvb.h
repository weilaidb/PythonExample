#define __MANTIS_DVB_H
enum mantis_power ;
extern int mantis_frontend_power(struct mantis_pci *mantis, enum mantis_power power);
extern void mantis_frontend_soft_reset(struct mantis_pci *mantis);
extern int mantis_dvb_init(struct mantis_pci *mantis);
extern int mantis_dvb_exit(struct mantis_pci *mantis);
