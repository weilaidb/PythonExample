#define _SCIC_SDS_REMOTE_NODE_CONTEXT_H_
#define SCIC_SDS_REMOTE_NODE_CONTEXT_INVALID_INDEX    0x0FFF
#define SCU_HARDWARE_SUSPENSION  (0)
#define SCI_SOFTWARE_SUSPENSION  (1)
struct isci_request;
struct isci_remote_device;
struct sci_remote_node_context;
typedef void (*scics_sds_remote_node_context_callback)(void *);
enum scis_sds_remote_node_context_states ;
enum sci_remote_node_context_destination_state ;
struct sci_remote_node_context ;
void sci_remote_node_context_construct(struct sci_remote_node_context *rnc,
u16 remote_node_index);
bool sci_remote_node_context_is_ready(
struct sci_remote_node_context *sci_rnc);
enum sci_status sci_remote_node_context_event_handler(struct sci_remote_node_context *sci_rnc,
u32 event_code);
enum sci_status sci_remote_node_context_destruct(struct sci_remote_node_context *sci_rnc,
scics_sds_remote_node_context_callback callback,
void *callback_parameter);
enum sci_status sci_remote_node_context_suspend(struct sci_remote_node_context *sci_rnc,
u32 suspend_type,
scics_sds_remote_node_context_callback cb_fn,
void *cb_p);
enum sci_status sci_remote_node_context_resume(struct sci_remote_node_context *sci_rnc,
scics_sds_remote_node_context_callback cb_fn,
void *cb_p);
enum sci_status sci_remote_node_context_start_task(struct sci_remote_node_context *sci_rnc,
struct isci_request *ireq);
enum sci_status sci_remote_node_context_start_io(struct sci_remote_node_context *sci_rnc,
struct isci_request *ireq);
