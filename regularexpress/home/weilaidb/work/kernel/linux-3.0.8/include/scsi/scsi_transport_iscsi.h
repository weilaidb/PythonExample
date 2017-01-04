#define SCSI_TRANSPORT_ISCSI_H
struct scsi_transport_template;
struct iscsi_transport;
struct iscsi_endpoint;
struct Scsi_Host;
struct scsi_cmnd;
struct iscsi_cls_conn;
struct iscsi_conn;
struct iscsi_task;
struct sockaddr;
struct iscsi_transport ;
extern struct scsi_transport_template *iscsi_register_transport(struct iscsi_transport *tt);
extern int iscsi_unregister_transport(struct iscsi_transport *tt);
extern void iscsi_conn_error_event(struct iscsi_cls_conn *conn,
enum iscsi_err error);
extern int iscsi_recv_pdu(struct iscsi_cls_conn *conn, struct iscsi_hdr *hdr,
char *data, uint32_t data_size);
extern int iscsi_offload_mesg(struct Scsi_Host *shost,
struct iscsi_transport *transport, uint32_t type,
char *data, uint16_t data_size);
struct iscsi_cls_conn ;
#define iscsi_dev_to_conn(_dev) \
container_of(_dev, struct iscsi_cls_conn, dev)
#define iscsi_conn_to_session(_conn) \
iscsi_dev_to_session(_conn->dev.parent)
enum ;
#define ISCSI_MAX_TARGET -1
struct iscsi_cls_session ;
#define iscsi_dev_to_session(_dev) \
container_of(_dev, struct iscsi_cls_session, dev)
#define iscsi_session_to_shost(_session) \
dev_to_shost(_session->dev.parent)
#define starget_to_session(_stgt) \
iscsi_dev_to_session(_stgt->dev.parent)
struct iscsi_cls_host ;
extern void iscsi_host_for_each_session(struct Scsi_Host *shost,
void (*fn)(struct iscsi_cls_session *));
struct iscsi_endpoint ;
#define iscsi_cls_session_printk(prefix, _cls_session, fmt, a...) \
dev_printk(prefix, &(_cls_session)->dev, fmt, ##a)
#define iscsi_cls_conn_printk(prefix, _cls_conn, fmt, a...) \
dev_printk(prefix, &(_cls_conn)->dev, fmt, ##a)
extern int iscsi_session_chkready(struct iscsi_cls_session *session);
extern struct iscsi_cls_session *iscsi_alloc_session(struct Scsi_Host *shost,
struct iscsi_transport *transport, int dd_size);
extern int iscsi_add_session(struct iscsi_cls_session *session,
unsigned int target_id);
extern int iscsi_session_event(struct iscsi_cls_session *session,
enum iscsi_uevent_e event);
extern struct iscsi_cls_session *iscsi_create_session(struct Scsi_Host *shost,
struct iscsi_transport *t,
int dd_size,
unsigned int target_id);
extern void iscsi_remove_session(struct iscsi_cls_session *session);
extern void iscsi_free_session(struct iscsi_cls_session *session);
extern int iscsi_destroy_session(struct iscsi_cls_session *session);
extern struct iscsi_cls_conn *iscsi_create_conn(struct iscsi_cls_session *sess,
int dd_size, uint32_t cid);
extern int iscsi_destroy_conn(struct iscsi_cls_conn *conn);
extern void iscsi_unblock_session(struct iscsi_cls_session *session);
extern void iscsi_block_session(struct iscsi_cls_session *session);
extern int iscsi_scan_finished(struct Scsi_Host *shost, unsigned long time);
extern struct iscsi_endpoint *iscsi_create_endpoint(int dd_size);
extern void iscsi_destroy_endpoint(struct iscsi_endpoint *ep);
extern struct iscsi_endpoint *iscsi_lookup_endpoint(u64 handle);
extern int iscsi_block_scsi_eh(struct scsi_cmnd *cmd);
