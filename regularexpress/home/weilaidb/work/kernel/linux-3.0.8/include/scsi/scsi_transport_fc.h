#define SCSI_TRANSPORT_FC_H
struct scsi_transport_template;
enum fc_port_type ;
enum fc_port_state ;
enum fc_vport_state ;
#define FC_COS_UNSPECIFIED		0
#define FC_COS_CLASS1			2
#define FC_COS_CLASS2			4
#define FC_COS_CLASS3			8
#define FC_COS_CLASS4			0x10
#define FC_COS_CLASS6			0x40
#define FC_PORTSPEED_UNKNOWN		0
#define FC_PORTSPEED_1GBIT		1
#define FC_PORTSPEED_2GBIT		2
#define FC_PORTSPEED_4GBIT		4
#define FC_PORTSPEED_10GBIT		8
#define FC_PORTSPEED_8GBIT		0x10
#define FC_PORTSPEED_16GBIT		0x20
#define FC_PORTSPEED_NOT_NEGOTIATED	(1 << 15)
enum fc_tgtid_binding_type  ;
#define FC_PORT_ROLE_UNKNOWN			0x00
#define FC_PORT_ROLE_FCP_TARGET			0x01
#define FC_PORT_ROLE_FCP_INITIATOR		0x02
#define FC_PORT_ROLE_IP_PORT			0x04
#define FC_RPORT_ROLE_UNKNOWN			FC_PORT_ROLE_UNKNOWN
#define FC_RPORT_ROLE_FCP_TARGET		FC_PORT_ROLE_FCP_TARGET
#define FC_RPORT_ROLE_FCP_INITIATOR		FC_PORT_ROLE_FCP_INITIATOR
#define FC_RPORT_ROLE_IP_PORT			FC_PORT_ROLE_IP_PORT
#define FC_VPORT_ATTR(_name,_mode,_show,_store)		\
struct device_attribute dev_attr_vport_##_name = 	\
__ATTR(_name,_mode,_show,_store)
#define FC_VPORT_SYMBOLIC_NAMELEN		64
struct fc_vport_identifiers ;
struct fc_vport  __attribute__((aligned(sizeof(unsigned long))));
#define FC_VPORT_CREATING		0x01
#define FC_VPORT_DELETING		0x02
#define FC_VPORT_DELETED		0x04
#define FC_VPORT_DEL			0x06
#define	dev_to_vport(d)				\
container_of(d, struct fc_vport, dev)
#define transport_class_to_vport(dev)		\
dev_to_vport(dev->parent)
#define vport_to_shost(v)			\
(v->shost)
#define vport_to_shost_channel(v)		\
(v->channel)
#define vport_to_parent(v)			\
(v->dev.parent)
#define VPCERR_UNSUPPORTED		-ENOSYS
#define VPCERR_BAD_WWN			-ENOTUNIQ
#define VPCERR_NO_FABRIC_SUPP		-EOPNOTSUPP
struct fc_rport_identifiers ;
#define FC_RPORT_ATTR(_name,_mode,_show,_store)				\
struct device_attribute dev_attr_rport_##_name = 	\
__ATTR(_name,_mode,_show,_store)
struct fc_rport  __attribute__((aligned(sizeof(unsigned long))));
#define FC_RPORT_DEVLOSS_PENDING	0x01
#define FC_RPORT_SCAN_PENDING		0x02
#define FC_RPORT_FAST_FAIL_TIMEDOUT	0x04
#define FC_RPORT_DEVLOSS_CALLBK_DONE	0x08
#define	dev_to_rport(d)				\
container_of(d, struct fc_rport, dev)
#define transport_class_to_rport(dev)	\
dev_to_rport(dev->parent)
#define rport_to_shost(r)			\
dev_to_shost(r->dev.parent)
struct fc_starget_attrs ;
#define fc_starget_node_name(x) \
(((struct fc_starget_attrs *)&(x)->starget_data)->node_name)
#define fc_starget_port_name(x)	\
(((struct fc_starget_attrs *)&(x)->starget_data)->port_name)
#define fc_starget_port_id(x) \
(((struct fc_starget_attrs *)&(x)->starget_data)->port_id)
#define starget_to_rport(s)			\
scsi_is_fc_rport(s->dev.parent) ? dev_to_rport(s->dev.parent) : NULL
struct fc_host_statistics ;
enum fc_host_event_code  ;
#define FC_FC4_LIST_SIZE		32
#define FC_SYMBOLIC_NAME_SIZE		256
#define FC_VERSION_STRING_SIZE		64
#define FC_SERIAL_NUMBER_SIZE		80
struct fc_host_attrs ;
#define shost_to_fc_host(x) \
((struct fc_host_attrs *)(x)->shost_data)
#define fc_host_node_name(x) \
(((struct fc_host_attrs *)(x)->shost_data)->node_name)
#define fc_host_port_name(x)	\
(((struct fc_host_attrs *)(x)->shost_data)->port_name)
#define fc_host_permanent_port_name(x)	\
(((struct fc_host_attrs *)(x)->shost_data)->permanent_port_name)
#define fc_host_supported_classes(x)	\
(((struct fc_host_attrs *)(x)->shost_data)->supported_classes)
#define fc_host_supported_fc4s(x)	\
(((struct fc_host_attrs *)(x)->shost_data)->supported_fc4s)
#define fc_host_supported_speeds(x)	\
(((struct fc_host_attrs *)(x)->shost_data)->supported_speeds)
#define fc_host_maxframe_size(x)	\
(((struct fc_host_attrs *)(x)->shost_data)->maxframe_size)
#define fc_host_max_npiv_vports(x)	\
(((struct fc_host_attrs *)(x)->shost_data)->max_npiv_vports)
#define fc_host_serial_number(x)	\
(((struct fc_host_attrs *)(x)->shost_data)->serial_number)
#define fc_host_port_id(x)	\
(((struct fc_host_attrs *)(x)->shost_data)->port_id)
#define fc_host_port_type(x)	\
(((struct fc_host_attrs *)(x)->shost_data)->port_type)
#define fc_host_port_state(x)	\
(((struct fc_host_attrs *)(x)->shost_data)->port_state)
#define fc_host_active_fc4s(x)	\
(((struct fc_host_attrs *)(x)->shost_data)->active_fc4s)
#define fc_host_speed(x)	\
(((struct fc_host_attrs *)(x)->shost_data)->speed)
#define fc_host_fabric_name(x)	\
(((struct fc_host_attrs *)(x)->shost_data)->fabric_name)
#define fc_host_symbolic_name(x)	\
(((struct fc_host_attrs *)(x)->shost_data)->symbolic_name)
#define fc_host_system_hostname(x)	\
(((struct fc_host_attrs *)(x)->shost_data)->system_hostname)
#define fc_host_tgtid_bind_type(x) \
(((struct fc_host_attrs *)(x)->shost_data)->tgtid_bind_type)
#define fc_host_rports(x) \
(((struct fc_host_attrs *)(x)->shost_data)->rports)
#define fc_host_rport_bindings(x) \
(((struct fc_host_attrs *)(x)->shost_data)->rport_bindings)
#define fc_host_vports(x) \
(((struct fc_host_attrs *)(x)->shost_data)->vports)
#define fc_host_next_rport_number(x) \
(((struct fc_host_attrs *)(x)->shost_data)->next_rport_number)
#define fc_host_next_target_id(x) \
(((struct fc_host_attrs *)(x)->shost_data)->next_target_id)
#define fc_host_next_vport_number(x) \
(((struct fc_host_attrs *)(x)->shost_data)->next_vport_number)
#define fc_host_npiv_vports_inuse(x)	\
(((struct fc_host_attrs *)(x)->shost_data)->npiv_vports_inuse)
#define fc_host_work_q_name(x) \
(((struct fc_host_attrs *)(x)->shost_data)->work_q_name)
#define fc_host_work_q(x) \
(((struct fc_host_attrs *)(x)->shost_data)->work_q)
#define fc_host_devloss_work_q_name(x) \
(((struct fc_host_attrs *)(x)->shost_data)->devloss_work_q_name)
#define fc_host_devloss_work_q(x) \
(((struct fc_host_attrs *)(x)->shost_data)->devloss_work_q)
#define fc_host_dev_loss_tmo(x) \
(((struct fc_host_attrs *)(x)->shost_data)->dev_loss_tmo)
struct fc_bsg_buffer ;
#define FC_RQST_STATE_INPROGRESS	0
#define FC_RQST_STATE_DONE		1
struct fc_bsg_job ;
struct fc_function_template ;
static inline int
fc_remote_port_chkready(struct fc_rport *rport)
static inline u64 wwn_to_u64(u8 *wwn)
static inline void u64_to_wwn(u64 inm, u8 *wwn)
static inline void
fc_vport_set_state(struct fc_vport *vport, enum fc_vport_state new_state)
struct scsi_transport_template *fc_attach_transport(
struct fc_function_template *);
void fc_release_transport(struct scsi_transport_template *);
void fc_remove_host(struct Scsi_Host *);
struct fc_rport *fc_remote_port_add(struct Scsi_Host *shost,
int channel, struct fc_rport_identifiers  *ids);
void fc_remote_port_delete(struct fc_rport  *rport);
void fc_remote_port_rolechg(struct fc_rport  *rport, u32 roles);
int scsi_is_fc_rport(const struct device *);
u32 fc_get_event_number(void);
void fc_host_post_event(struct Scsi_Host *shost, u32 event_number,
enum fc_host_event_code event_code, u32 event_data);
void fc_host_post_vendor_event(struct Scsi_Host *shost, u32 event_number,
u32 data_len, char * data_buf, u64 vendor_id);
struct fc_vport *fc_vport_create(struct Scsi_Host *shost, int channel,
struct fc_vport_identifiers *);
int fc_vport_terminate(struct fc_vport *vport);
int fc_block_scsi_eh(struct scsi_cmnd *cmnd);
