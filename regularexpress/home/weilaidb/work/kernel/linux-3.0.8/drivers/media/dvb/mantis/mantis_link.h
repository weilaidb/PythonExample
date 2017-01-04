#define __MANTIS_LINK_H
enum mantis_sbuf_status ;
struct mantis_slot ;
enum mantis_slot_state ;
struct mantis_ca ;
extern void mantis_event_cam_plugin(struct mantis_ca *ca);
extern void mantis_event_cam_unplug(struct mantis_ca *ca);
extern int mantis_pcmcia_init(struct mantis_ca *ca);
extern void mantis_pcmcia_exit(struct mantis_ca *ca);
extern int mantis_evmgr_init(struct mantis_ca *ca);
extern void mantis_evmgr_exit(struct mantis_ca *ca);
extern int mantis_hif_init(struct mantis_ca *ca);
extern void mantis_hif_exit(struct mantis_ca *ca);
extern int mantis_hif_read_mem(struct mantis_ca *ca, u32 addr);
extern int mantis_hif_write_mem(struct mantis_ca *ca, u32 addr, u8 data);
extern int mantis_hif_read_iom(struct mantis_ca *ca, u32 addr);
extern int mantis_hif_write_iom(struct mantis_ca *ca, u32 addr, u8 data);
