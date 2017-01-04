static void isci_remote_device_not_ready(struct isci_host *ihost,
struct isci_remote_device *idev, u32 reason)
static void isci_remote_device_ready(struct isci_host *ihost, struct isci_remote_device *idev)
static void rnc_destruct_done(void *_dev)
static enum sci_status sci_remote_device_terminate_requests(struct isci_remote_device *idev)
enum sci_status sci_remote_device_stop(struct isci_remote_device *idev,
u32 timeout)
enum sci_status sci_remote_device_reset(struct isci_remote_device *idev)
enum sci_status sci_remote_device_reset_complete(struct isci_remote_device *idev)
enum sci_status sci_remote_device_suspend(struct isci_remote_device *idev,
u32 suspend_type)
enum sci_status sci_remote_device_frame_handler(struct isci_remote_device *idev,
u32 frame_index)
static bool is_remote_device_ready(struct isci_remote_device *idev)
enum sci_status sci_remote_device_event_handler(struct isci_remote_device *idev,
u32 event_code)
static void sci_remote_device_start_request(struct isci_remote_device *idev,
struct isci_request *ireq,
enum sci_status status)
enum sci_status sci_remote_device_start_io(struct isci_host *ihost,
struct isci_remote_device *idev,
struct isci_request *ireq)
static enum sci_status common_complete_io(struct isci_port *iport,
struct isci_remote_device *idev,
struct isci_request *ireq)
enum sci_status sci_remote_device_complete_io(struct isci_host *ihost,
struct isci_remote_device *idev,
struct isci_request *ireq)
static void sci_remote_device_continue_request(void *dev)
enum sci_status sci_remote_device_start_task(struct isci_host *ihost,
struct isci_remote_device *idev,
struct isci_request *ireq)
void sci_remote_device_post_request(struct isci_remote_device *idev, u32 request)
static void remote_device_resume_done(void *_dev)
static void sci_stp_remote_device_ready_idle_substate_resume_complete_handler(void *_dev)
static void sci_remote_device_initial_state_enter(struct sci_base_state_machine *sm)
static enum sci_status sci_remote_device_destruct(struct isci_remote_device *idev)
static void isci_remote_device_deconstruct(struct isci_host *ihost, struct isci_remote_device *idev)
static void sci_remote_device_stopped_state_enter(struct sci_base_state_machine *sm)
static void sci_remote_device_starting_state_enter(struct sci_base_state_machine *sm)
static void sci_remote_device_ready_state_enter(struct sci_base_state_machine *sm)
static void sci_remote_device_ready_state_exit(struct sci_base_state_machine *sm)
static void sci_remote_device_resetting_state_enter(struct sci_base_state_machine *sm)
static void sci_remote_device_resetting_state_exit(struct sci_base_state_machine *sm)
static void sci_stp_remote_device_ready_idle_substate_enter(struct sci_base_state_machine *sm)
static void sci_stp_remote_device_ready_cmd_substate_enter(struct sci_base_state_machine *sm)
static void sci_stp_remote_device_ready_ncq_error_substate_enter(struct sci_base_state_machine *sm)
static void sci_smp_remote_device_ready_idle_substate_enter(struct sci_base_state_machine *sm)
static void sci_smp_remote_device_ready_cmd_substate_enter(struct sci_base_state_machine *sm)
static void sci_smp_remote_device_ready_cmd_substate_exit(struct sci_base_state_machine *sm)
static const struct sci_base_state sci_remote_device_state_table[] = ;
static void sci_remote_device_construct(struct isci_port *iport,
struct isci_remote_device *idev)
static enum sci_status sci_remote_device_da_construct(struct isci_port *iport,
struct isci_remote_device *idev)
static enum sci_status sci_remote_device_ea_construct(struct isci_port *iport,
struct isci_remote_device *idev)
static enum sci_status sci_remote_device_start(struct isci_remote_device *idev,
u32 timeout)
static enum sci_status isci_remote_device_construct(struct isci_port *iport,
struct isci_remote_device *idev)
void isci_remote_device_nuke_requests(struct isci_host *ihost, struct isci_remote_device *idev)
static struct isci_remote_device *
isci_remote_device_alloc(struct isci_host *ihost, struct isci_port *iport)
void isci_remote_device_release(struct kref *kref)
enum sci_status isci_remote_device_stop(struct isci_host *ihost, struct isci_remote_device *idev)
void isci_remote_device_gone(struct domain_device *dev)
int isci_remote_device_found(struct domain_device *domain_dev)
bool isci_device_is_reset_pending(
struct isci_host *isci_host,
struct isci_remote_device *isci_device)
void isci_device_clear_reset_pending(struct isci_host *ihost, struct isci_remote_device *idev)
