#define _ISCI_TASK_H_
struct isci_request;
enum isci_tmf_cb_state ;
enum isci_tmf_function_codes ;
struct isci_tmf ;
static inline void isci_print_tmf(struct isci_tmf *tmf)
int isci_task_execute_task(
struct sas_task *task,
int num,
gfp_t gfp_flags);
int isci_task_abort_task(
struct sas_task *task);
int isci_task_abort_task_set(
struct domain_device *d_device,
u8 *lun);
int isci_task_clear_aca(
struct domain_device *d_device,
u8 *lun);
int isci_task_clear_task_set(
struct domain_device *d_device,
u8 *lun);
int isci_task_query_task(
struct sas_task *task);
int isci_task_lu_reset(
struct domain_device *d_device,
u8 *lun);
int isci_task_clear_nexus_port(
struct asd_sas_port *port);
int isci_task_clear_nexus_ha(
struct sas_ha_struct *ha);
int isci_task_I_T_nexus_reset(
struct domain_device *d_device);
void isci_task_request_complete(
struct isci_host *isci_host,
struct isci_request *request,
enum sci_task_status completion_status);
u16 isci_task_ssp_request_get_io_tag_to_manage(
struct isci_request *request);
u8 isci_task_ssp_request_get_function(
struct isci_request *request);
void *isci_task_ssp_request_get_response_data_address(
struct isci_request *request);
u32 isci_task_ssp_request_get_response_data_length(
struct isci_request *request);
int isci_queuecommand(
struct scsi_cmnd *scsi_cmd,
void (*donefunc)(struct scsi_cmnd *));
int isci_bus_reset_handler(struct scsi_cmnd *cmd);
enum isci_completion_selection ;
static inline void isci_set_task_doneflags(
struct sas_task *task)
static inline void isci_task_all_done(
struct sas_task *task)
static inline enum isci_completion_selection
isci_task_set_completion_status(
struct sas_task *task,
enum service_response response,
enum exec_status status,
enum isci_completion_selection task_notification_selection)
static inline void isci_execpath_callback(struct isci_host *ihost,
struct sas_task  *task,
void (*func)(struct sas_task *))
