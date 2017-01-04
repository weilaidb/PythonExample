static void isci_task_refuse(struct isci_host *ihost, struct sas_task *task,
enum service_response response,
enum exec_status status)
#define for_each_sas_task(num, task) \
for (; num > 0; num--,\
task = list_entry(task->list.next, struct sas_task, list))
static inline int isci_device_io_ready(struct isci_remote_device *idev,
struct sas_task *task)
int isci_task_execute_task(struct sas_task *task, int num, gfp_t gfp_flags)
static enum sci_status isci_sata_management_task_request_build(struct isci_request *ireq)
static struct isci_request *isci_task_request_build(struct isci_host *ihost,
struct isci_remote_device *idev,
u16 tag, struct isci_tmf *isci_tmf)
static int isci_task_execute_tmf(struct isci_host *ihost,
struct isci_remote_device *idev,
struct isci_tmf *tmf, unsigned long timeout_ms)
static void isci_task_build_tmf(struct isci_tmf *tmf,
enum isci_tmf_function_codes code,
void (*tmf_sent_cb)(enum isci_tmf_cb_state,
struct isci_tmf *,
void *),
void *cb_data)
static void isci_task_build_abort_task_tmf(struct isci_tmf *tmf,
enum isci_tmf_function_codes code,
void (*tmf_sent_cb)(enum isci_tmf_cb_state,
struct isci_tmf *,
void *),
struct isci_request *old_request)
static enum isci_request_status isci_task_validate_request_to_abort(
struct isci_request *isci_request,
struct isci_host *isci_host,
struct isci_remote_device *isci_device,
struct completion *aborted_io_completion)
static void isci_request_cleanup_completed_loiterer(
struct isci_host          *isci_host,
struct isci_remote_device *isci_device,
struct isci_request       *isci_request,
struct sas_task           *task)
static void isci_terminate_request_core(struct isci_host *ihost,
struct isci_remote_device *idev,
struct isci_request *isci_request)
void isci_terminate_pending_requests(struct isci_host *ihost,
struct isci_remote_device *idev)
static int isci_task_send_lu_reset_sas(
struct isci_host *isci_host,
struct isci_remote_device *isci_device,
u8 *lun)
static int isci_task_send_lu_reset_sata(struct isci_host *ihost,
struct isci_remote_device *idev, u8 *lun)
int isci_task_lu_reset(struct domain_device *domain_device, u8 *lun)
int isci_task_clear_nexus_port(struct asd_sas_port *port)
int isci_task_clear_nexus_ha(struct sas_ha_struct *ha)
static void isci_abort_task_process_cb(
enum isci_tmf_cb_state cb_state,
struct isci_tmf *tmf,
void *cb_data)
int isci_task_abort_task(struct sas_task *task)
int isci_task_abort_task_set(
struct domain_device *d_device,
u8 *lun)
int isci_task_clear_aca(
struct domain_device *d_device,
u8 *lun)
int isci_task_clear_task_set(
struct domain_device *d_device,
u8 *lun)
int isci_task_query_task(
struct sas_task *task)
void
isci_task_request_complete(struct isci_host *ihost,
struct isci_request *ireq,
enum sci_task_status completion_status)
static void isci_smp_task_timedout(unsigned long _task)
static void isci_smp_task_done(struct sas_task *task)
static struct sas_task *isci_alloc_task(void)
static void isci_free_task(struct isci_host *ihost, struct sas_task  *task)
static int isci_smp_execute_task(struct isci_host *ihost,
struct domain_device *dev, void *req,
int req_size, void *resp, int resp_size)
#define DISCOVER_REQ_SIZE  16
#define DISCOVER_RESP_SIZE 56
int isci_smp_get_phy_attached_dev_type(struct isci_host *ihost,
struct domain_device *dev,
int phy_id, int *adt)
static void isci_wait_for_smp_phy_reset(struct isci_remote_device *idev, int phy_num)
static int isci_reset_device(struct isci_host *ihost,
struct isci_remote_device *idev)
int isci_task_I_T_nexus_reset(struct domain_device *dev)
int isci_bus_reset_handler(struct scsi_cmnd *cmd)
