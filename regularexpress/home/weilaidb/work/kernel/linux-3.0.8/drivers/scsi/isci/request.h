#define _ISCI_REQUEST_H_
enum isci_request_status ;
enum task_type ;
enum sci_request_protocol ;;
struct isci_stp_request ;
struct isci_request ;
static inline struct isci_request *to_ireq(struct isci_stp_request *stp_req)
enum sci_base_request_states ;
enum sci_status sci_request_start(struct isci_request *ireq);
enum sci_status sci_io_request_terminate(struct isci_request *ireq);
enum sci_status
sci_io_request_event_handler(struct isci_request *ireq,
u32 event_code);
enum sci_status
sci_io_request_frame_handler(struct isci_request *ireq,
u32 frame_index);
enum sci_status
sci_task_request_terminate(struct isci_request *ireq);
extern enum sci_status
sci_request_complete(struct isci_request *ireq);
extern enum sci_status
sci_io_request_tc_completion(struct isci_request *ireq, u32 code);
static inline dma_addr_t
sci_io_request_get_dma_addr(struct isci_request *ireq, void *virt_addr)
static inline enum isci_request_status
isci_request_change_state(struct isci_request *isci_request,
enum isci_request_status status)
static inline enum isci_request_status
isci_request_change_started_to_newstate(struct isci_request *isci_request,
struct completion *completion_ptr,
enum isci_request_status newstate)
static inline enum isci_request_status
isci_request_change_started_to_aborted(struct isci_request *isci_request,
struct completion *completion_ptr)
#define isci_request_access_task(req) ((req)->ttype_ptr.io_task_ptr)
#define isci_request_access_tmf(req) ((req)->ttype_ptr.tmf_task_ptr)
struct isci_request *isci_tmf_request_from_tag(struct isci_host *ihost,
struct isci_tmf *isci_tmf,
u16 tag);
int isci_request_execute(struct isci_host *ihost, struct isci_remote_device *idev,
struct sas_task *task, u16 tag);
void isci_terminate_pending_requests(struct isci_host *ihost,
struct isci_remote_device *idev);
enum sci_status
sci_task_request_construct(struct isci_host *ihost,
struct isci_remote_device *idev,
u16 io_tag,
struct isci_request *ireq);
enum sci_status
sci_task_request_construct_ssp(struct isci_request *ireq);
enum sci_status
sci_task_request_construct_sata(struct isci_request *ireq);
void sci_smp_request_copy_response(struct isci_request *ireq);
static inline int isci_task_is_ncq_recovery(struct sas_task *task)
