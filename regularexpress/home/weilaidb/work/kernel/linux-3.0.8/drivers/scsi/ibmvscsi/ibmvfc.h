#define _IBMVFC_H
#define IBMVFC_NAME	"ibmvfc"
#define IBMVFC_DRIVER_VERSION		"1.0.9"
#define IBMVFC_DRIVER_DATE		"(August 5, 2010)"
#define IBMVFC_DEFAULT_TIMEOUT	60
#define IBMVFC_ADISC_CANCEL_TIMEOUT	45
#define IBMVFC_ADISC_TIMEOUT		15
#define IBMVFC_ADISC_PLUS_CANCEL_TIMEOUT	\
(IBMVFC_ADISC_TIMEOUT + IBMVFC_ADISC_CANCEL_TIMEOUT)
#define IBMVFC_INIT_TIMEOUT		120
#define IBMVFC_ABORT_TIMEOUT		8
#define IBMVFC_ABORT_WAIT_TIMEOUT	40
#define IBMVFC_MAX_REQUESTS_DEFAULT	100
#define IBMVFC_DEBUG			0
#define IBMVFC_MAX_TARGETS		1024
#define IBMVFC_MAX_LUN			0xffffffff
#define IBMVFC_MAX_SECTORS		0xffffu
#define IBMVFC_MAX_DISC_THREADS	4
#define IBMVFC_TGT_MEMPOOL_SZ		64
#define IBMVFC_MAX_CMDS_PER_LUN	64
#define IBMVFC_MAX_HOST_INIT_RETRIES	6
#define IBMVFC_MAX_TGT_INIT_RETRIES		3
#define IBMVFC_DEV_LOSS_TMO		(5 * 60)
#define IBMVFC_DEFAULT_LOG_LEVEL	2
#define IBMVFC_MAX_CDB_LEN		16
#define IBMVFC_NUM_INTERNAL_REQ	(1 + 1 + 1 + 2 + (disc_threads * 2))
#define IBMVFC_MAD_SUCCESS		0x00
#define IBMVFC_MAD_NOT_SUPPORTED	0xF1
#define IBMVFC_MAD_FAILED		0xF7
#define IBMVFC_MAD_DRIVER_FAILED	0xEE
#define IBMVFC_MAD_CRQ_ERROR		0xEF
enum ibmvfc_crq_valid ;
enum ibmvfc_crq_format ;
enum ibmvfc_cmd_status_flags ;
enum ibmvfc_fabric_mapped_errors ;
enum ibmvfc_vios_errors ;
enum ibmvfc_mad_types ;
struct ibmvfc_mad_common __attribute__((packed, aligned (8)));
struct ibmvfc_npiv_login_mad __attribute__((packed, aligned (8)));
struct ibmvfc_npiv_logout_mad __attribute__((packed, aligned (8)));
#define IBMVFC_MAX_NAME 256
struct ibmvfc_npiv_login __attribute__((packed, aligned (8)));
struct ibmvfc_common_svc_parms __attribute__((packed, aligned (4)));
struct ibmvfc_service_parms __attribute__((packed, aligned (4)));
struct ibmvfc_npiv_login_resp __attribute__((packed, aligned (8)));
union ibmvfc_npiv_login_data __attribute__((packed, aligned (8)));
struct ibmvfc_discover_targets_buf ;
struct ibmvfc_discover_targets __attribute__((packed, aligned (8)));
enum ibmvfc_fc_reason ;
enum ibmvfc_fc_type ;
enum ibmvfc_gs_explain ;
struct ibmvfc_port_login __attribute__((packed, aligned (8)));
struct ibmvfc_prli_svc_parms __attribute__((packed, aligned (4)));
struct ibmvfc_process_login __attribute__((packed, aligned (8)));
struct ibmvfc_query_tgt __attribute__((packed, aligned (8)));
struct ibmvfc_implicit_logout __attribute__((packed, aligned (8)));
struct ibmvfc_tmf __attribute__((packed, aligned (8)));
enum ibmvfc_fcp_rsp_info_codes ;
struct ibmvfc_fcp_rsp_info __attribute__((packed, aligned (2)));
enum ibmvfc_fcp_rsp_flags ;
union ibmvfc_fcp_rsp_data __attribute__((packed, aligned (8)));
struct ibmvfc_fcp_rsp __attribute__((packed, aligned (8)));
enum ibmvfc_cmd_flags ;
enum ibmvfc_fc_task_attr ;
enum ibmvfc_fc_tmf_flags ;
struct ibmvfc_fcp_cmd_iu __attribute__((packed, aligned (4)));
struct ibmvfc_cmd __attribute__((packed, aligned (8)));
struct ibmvfc_passthru_fc_iu ;
struct ibmvfc_passthru_iu __attribute__((packed, aligned (8)));
struct ibmvfc_passthru_mad __attribute__((packed, aligned (8)));
struct ibmvfc_trace_start_entry __attribute__((packed));
struct ibmvfc_trace_end_entry __attribute__((packed));
struct ibmvfc_trace_entry __attribute__((packed, aligned (8)));
enum ibmvfc_crq_formats ;
enum ibmvfc_async_event ;
struct ibmvfc_async_desc ;
struct ibmvfc_crq __attribute__((packed, aligned (8)));
struct ibmvfc_crq_queue ;
enum ibmvfc_ae_link_state ;
struct ibmvfc_async_crq __attribute__((packed, aligned (8)));
struct ibmvfc_async_crq_queue ;
union ibmvfc_iu __attribute__((packed, aligned (8)));
enum ibmvfc_target_action ;
struct ibmvfc_target ;
struct ibmvfc_event ;
struct ibmvfc_event_pool ;
enum ibmvfc_host_action ;
enum ibmvfc_host_state ;
struct ibmvfc_host ;
#define DBG_CMD(CMD) do  while (0)
#define tgt_dbg(t, fmt, ...)			\
DBG_CMD(dev_info((t)->vhost->dev, "%llX: " fmt, (t)->scsi_id, ##__VA_ARGS__))
#define tgt_info(t, fmt, ...)		\
dev_info((t)->vhost->dev, "%llX: " fmt, (t)->scsi_id, ##__VA_ARGS__)
#define tgt_err(t, fmt, ...)		\
dev_err((t)->vhost->dev, "%llX: " fmt, (t)->scsi_id, ##__VA_ARGS__)
#define tgt_log(t, level, fmt, ...) \
do  while (0)
#define ibmvfc_dbg(vhost, ...) \
DBG_CMD(dev_info((vhost)->dev, ##__VA_ARGS__))
#define ibmvfc_log(vhost, level, ...) \
do  while (0)
#define ENTER DBG_CMD(printk(KERN_INFO IBMVFC_NAME": Entering %s\n", __func__))
#define LEAVE DBG_CMD(printk(KERN_INFO IBMVFC_NAME": Leaving %s\n", __func__))
#define ibmvfc_create_trace_file(kobj, attr) sysfs_create_bin_file(kobj, attr)
#define ibmvfc_remove_trace_file(kobj, attr) sysfs_remove_bin_file(kobj, attr)
#define ibmvfc_create_trace_file(kobj, attr) 0
#define ibmvfc_remove_trace_file(kobj, attr) do  while (0)
