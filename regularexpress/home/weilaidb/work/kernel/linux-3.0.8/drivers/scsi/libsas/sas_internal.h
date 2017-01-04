#define _SAS_INTERNAL_H_
#define sas_printk(fmt, ...) printk(KERN_NOTICE "sas: " fmt, ## __VA_ARGS__)
#define SAS_DPRINTK(fmt, ...) printk(KERN_DEBUG "sas: " fmt, ## __VA_ARGS__)
#define TO_SAS_TASK(_scsi_cmd)  ((void *)(_scsi_cmd)->host_scribble)
#define ASSIGN_SAS_TASK(_sc, _t) do  while (0)
void sas_scsi_recover_host(struct Scsi_Host *shost);
int sas_show_class(enum sas_class class, char *buf);
int sas_show_proto(enum sas_protocol proto, char *buf);
int sas_show_linkrate(enum sas_linkrate linkrate, char *buf);
int sas_show_oob_mode(enum sas_oob_mode oob_mode, char *buf);
int  sas_register_phys(struct sas_ha_struct *sas_ha);
void sas_unregister_phys(struct sas_ha_struct *sas_ha);
int  sas_register_ports(struct sas_ha_struct *sas_ha);
void sas_unregister_ports(struct sas_ha_struct *sas_ha);
enum blk_eh_timer_return sas_scsi_timed_out(struct scsi_cmnd *);
int  sas_init_queue(struct sas_ha_struct *sas_ha);
int  sas_init_events(struct sas_ha_struct *sas_ha);
void sas_shutdown_queue(struct sas_ha_struct *sas_ha);
void sas_deform_port(struct asd_sas_phy *phy, int gone);
void sas_porte_bytes_dmaed(struct work_struct *work);
void sas_porte_broadcast_rcvd(struct work_struct *work);
void sas_porte_link_reset_err(struct work_struct *work);
void sas_porte_timer_event(struct work_struct *work);
void sas_porte_hard_reset(struct work_struct *work);
int sas_notify_lldd_dev_found(struct domain_device *);
void sas_notify_lldd_dev_gone(struct domain_device *);
int sas_smp_phy_control(struct domain_device *dev, int phy_id,
enum phy_func phy_func, struct sas_phy_linkrates *);
int sas_smp_get_phy_events(struct sas_phy *phy);
struct domain_device *sas_find_dev_by_rphy(struct sas_rphy *rphy);
void sas_hae_reset(struct work_struct *work);
extern int sas_smp_host_handler(struct Scsi_Host *shost, struct request *req,
struct request *rsp);
static inline int sas_smp_host_handler(struct Scsi_Host *shost,
struct request *req,
struct request *rsp)
static inline void sas_queue_event(int event, spinlock_t *lock,
unsigned long *pending,
struct work_struct *work,
struct sas_ha_struct *sas_ha)
static inline void sas_begin_event(int event, spinlock_t *lock,
unsigned long *pending)
static inline void sas_fill_in_rphy(struct domain_device *dev,
struct sas_rphy *rphy)
static inline void sas_add_parent_port(struct domain_device *dev, int phy_id)
