#define _LIBSAS_H_
struct block_device;
enum sas_class ;
enum sas_phy_role ;
enum sas_phy_type ;
enum ha_event ;
enum port_event ;
enum phy_event ;
enum discover_event ;
#define to_dom_device(_obj) container_of(_obj, struct domain_device, dev_obj)
#define to_dev_attr(_attr)  container_of(_attr, struct domain_dev_attribute,\
attr)
enum routing_attribute ;
enum ex_phy_state ;
struct ex_phy ;
struct expander_device ;
enum ata_command_set ;
struct sata_device ;
struct domain_device ;
struct sas_discovery_event ;
struct sas_discovery ;
struct asd_sas_port ;
struct asd_sas_event ;
struct asd_sas_phy ;
struct scsi_core ;
struct sas_ha_event ;
enum sas_ha_state ;
struct sas_ha_struct ;
#define SHOST_TO_SAS_HA(_shost) (*(struct sas_ha_struct **)(_shost)->hostdata)
static inline struct domain_device *
starget_to_domain_dev(struct scsi_target *starget)
static inline struct domain_device *
sdev_to_domain_dev(struct scsi_device *sdev)
static inline struct domain_device *
cmd_to_domain_dev(struct scsi_cmnd *cmd)
void sas_hash_addr(u8 *hashed, const u8 *sas_addr);
static inline void sas_phy_disconnected(struct asd_sas_phy *phy)
enum service_response ;
enum exec_status ;
struct ata_task_resp ;
#define SAS_STATUS_BUF_SIZE 96
struct task_status_struct ;
struct sas_ata_task ;
struct sas_smp_task ;
enum task_attribute ;
struct sas_ssp_task ;
struct sas_task ;
extern struct kmem_cache *sas_task_cache;
#define SAS_TASK_STATE_PENDING      1
#define SAS_TASK_STATE_DONE         2
#define SAS_TASK_STATE_ABORTED      4
#define SAS_TASK_NEED_DEV_RESET     8
#define SAS_TASK_AT_INITIATOR       16
static inline struct sas_task *sas_alloc_task(gfp_t flags)
static inline void sas_free_task(struct sas_task *task)
struct sas_domain_function_template ;
extern int sas_register_ha(struct sas_ha_struct *);
extern int sas_unregister_ha(struct sas_ha_struct *);
int sas_set_phy_speed(struct sas_phy *phy,
struct sas_phy_linkrates *rates);
int sas_phy_enable(struct sas_phy *phy, int enabled);
int sas_phy_reset(struct sas_phy *phy, int hard_reset);
int sas_queue_up(struct sas_task *task);
extern int sas_queuecommand(struct Scsi_Host * ,struct scsi_cmnd *);
extern int sas_target_alloc(struct scsi_target *);
extern int sas_slave_alloc(struct scsi_device *);
extern int sas_slave_configure(struct scsi_device *);
extern void sas_slave_destroy(struct scsi_device *);
extern int sas_change_queue_depth(struct scsi_device *, int new_depth,
int reason);
extern int sas_change_queue_type(struct scsi_device *, int qt);
extern int sas_bios_param(struct scsi_device *,
struct block_device *,
sector_t capacity, int *hsc);
extern struct scsi_transport_template *
sas_domain_attach_transport(struct sas_domain_function_template *);
extern void sas_domain_release_transport(struct scsi_transport_template *);
int  sas_discover_root_expander(struct domain_device *);
void sas_init_ex_attr(void);
int  sas_ex_revalidate_domain(struct domain_device *);
void sas_unregister_domain_devices(struct asd_sas_port *port);
void sas_init_disc(struct sas_discovery *disc, struct asd_sas_port *);
int  sas_discover_event(struct asd_sas_port *, enum discover_event ev);
int  sas_discover_sata(struct domain_device *);
int  sas_discover_end_dev(struct domain_device *);
void sas_unregister_dev(struct domain_device *);
void sas_init_dev(struct domain_device *);
void sas_task_abort(struct sas_task *);
int __sas_task_abort(struct sas_task *);
int sas_eh_device_reset_handler(struct scsi_cmnd *cmd);
int sas_eh_bus_reset_handler(struct scsi_cmnd *cmd);
extern void sas_target_destroy(struct scsi_target *);
extern int sas_slave_alloc(struct scsi_device *);
extern int sas_ioctl(struct scsi_device *sdev, int cmd, void __user *arg);
extern int sas_smp_handler(struct Scsi_Host *shost, struct sas_rphy *rphy,
struct request *req);
extern void sas_ssp_task_response(struct device *dev, struct sas_task *task,
struct ssp_response_iu *iu);
struct sas_phy *sas_find_local_phy(struct domain_device *dev);
int sas_request_addr(struct Scsi_Host *shost, u8 *addr);
