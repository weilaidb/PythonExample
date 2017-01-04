#define SCSI_TRANSPORT_SAS_H
struct scsi_transport_template;
struct sas_rphy;
struct request;
enum sas_device_type ;
static inline int sas_protocol_ata(enum sas_protocol proto)
enum sas_linkrate ;
struct sas_identify ;
struct sas_phy ;
#define dev_to_phy(d) \
container_of((d), struct sas_phy, dev)
#define transport_class_to_phy(dev) \
dev_to_phy((dev)->parent)
#define phy_to_shost(phy) \
dev_to_shost((phy)->dev.parent)
struct request_queue;
struct sas_rphy ;
#define dev_to_rphy(d) \
container_of((d), struct sas_rphy, dev)
#define transport_class_to_rphy(dev) \
dev_to_rphy((dev)->parent)
#define rphy_to_shost(rphy) \
dev_to_shost((rphy)->dev.parent)
#define target_to_rphy(targ) \
dev_to_rphy((targ)->dev.parent)
struct sas_end_device ;
#define rphy_to_end_device(r) \
container_of((r), struct sas_end_device, rphy)
struct sas_expander_device ;
#define rphy_to_expander_device(r) \
container_of((r), struct sas_expander_device, rphy)
struct sas_port ;
#define dev_to_sas_port(d) \
container_of((d), struct sas_port, dev)
#define transport_class_to_sas_port(dev) \
dev_to_sas_port((dev)->parent)
struct sas_phy_linkrates ;
struct sas_function_template ;
void sas_remove_children(struct device *);
extern void sas_remove_host(struct Scsi_Host *);
extern struct sas_phy *sas_phy_alloc(struct device *, int);
extern void sas_phy_free(struct sas_phy *);
extern int sas_phy_add(struct sas_phy *);
extern void sas_phy_delete(struct sas_phy *);
extern int scsi_is_sas_phy(const struct device *);
unsigned int sas_tlr_supported(struct scsi_device *);
unsigned int sas_is_tlr_enabled(struct scsi_device *);
void sas_disable_tlr(struct scsi_device *);
void sas_enable_tlr(struct scsi_device *);
extern struct sas_rphy *sas_end_device_alloc(struct sas_port *);
extern struct sas_rphy *sas_expander_alloc(struct sas_port *, enum sas_device_type);
void sas_rphy_free(struct sas_rphy *);
extern int sas_rphy_add(struct sas_rphy *);
extern void sas_rphy_remove(struct sas_rphy *);
extern void sas_rphy_delete(struct sas_rphy *);
extern int scsi_is_sas_rphy(const struct device *);
struct sas_port *sas_port_alloc(struct device *, int);
struct sas_port *sas_port_alloc_num(struct device *);
int sas_port_add(struct sas_port *);
void sas_port_free(struct sas_port *);
void sas_port_delete(struct sas_port *);
void sas_port_add_phy(struct sas_port *, struct sas_phy *);
void sas_port_delete_phy(struct sas_port *, struct sas_phy *);
void sas_port_mark_backlink(struct sas_port *);
int scsi_is_sas_port(const struct device *);
extern struct scsi_transport_template *
sas_attach_transport(struct sas_function_template *);
extern void sas_release_transport(struct scsi_transport_template *);
int sas_read_port_mode_page(struct scsi_device *);
static inline int
scsi_is_sas_expander_device(struct device *dev)
#define scsi_is_sas_phy_local(phy)	scsi_is_host_device((phy)->dev.parent)
