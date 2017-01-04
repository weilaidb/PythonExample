#define IBMVSCSI_H
struct scsi_cmnd;
struct Scsi_Host;
#define MAX_INDIRECT_BUFS 10
#define IBMVSCSI_MAX_REQUESTS_DEFAULT 100
#define IBMVSCSI_CMDS_PER_LUN_DEFAULT 16
#define IBMVSCSI_MAX_SECTORS_DEFAULT 256
#define IBMVSCSI_MAX_CMDS_PER_LUN 64
struct crq_queue ;
struct srp_event_struct ;
struct event_pool ;
struct ibmvscsi_host_data ;
void ibmvscsi_handle_crq(struct viosrp_crq *crq,
struct ibmvscsi_host_data *hostdata);
struct ibmvscsi_ops ;
extern struct ibmvscsi_ops iseriesvscsi_ops;
extern struct ibmvscsi_ops rpavscsi_ops;
