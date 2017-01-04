#define SCU_CONTEXT_RAM_INIT_STALL_TIME      200
#define smu_max_ports(dcc_value) \
(\
(((dcc_value) & SMU_DEVICE_CONTEXT_CAPACITY_MAX_LP_MASK) \
>> SMU_DEVICE_CONTEXT_CAPACITY_MAX_LP_SHIFT) + 1 \
)
#define smu_max_task_contexts(dcc_value)	\
(\
(((dcc_value) & SMU_DEVICE_CONTEXT_CAPACITY_MAX_TC_MASK) \
>> SMU_DEVICE_CONTEXT_CAPACITY_MAX_TC_SHIFT) + 1 \
)
#define smu_max_rncs(dcc_value) \
(\
(((dcc_value) & SMU_DEVICE_CONTEXT_CAPACITY_MAX_RNC_MASK) \
>> SMU_DEVICE_CONTEXT_CAPACITY_MAX_RNC_SHIFT) + 1 \
)
#define SCIC_SDS_CONTROLLER_PHY_START_TIMEOUT      100
#define SCIC_SDS_CONTROLLER_POWER_CONTROL_INTERVAL 500
#define NORMALIZE_PUT_POINTER(x) \
((x) & SMU_COMPLETION_QUEUE_PUT_POINTER_MASK)
#define NORMALIZE_EVENT_POINTER(x) \
(\
((x) & SMU_COMPLETION_QUEUE_GET_EVENT_POINTER_MASK) \
>> SMU_COMPLETION_QUEUE_GET_EVENT_POINTER_SHIFT	\
)
#define NORMALIZE_GET_POINTER(x) \
((x) & SMU_COMPLETION_QUEUE_GET_POINTER_MASK)
#define NORMALIZE_GET_POINTER_CYCLE_BIT(x) \
((SMU_CQGR_CYCLE_BIT & (x)) << (31 - SMU_COMPLETION_QUEUE_GET_CYCLE_BIT_SHIFT))
#define COMPLETION_QUEUE_CYCLE_BIT(x) ((x) & 0x80000000)
void sci_init_sm(struct sci_base_state_machine *sm,
const struct sci_base_state *state_table, u32 initial_state)
void sci_change_state(struct sci_base_state_machine *sm, u32 next_state)
static bool sci_controller_completion_queue_has_entries(struct isci_host *ihost)
static bool sci_controller_isr(struct isci_host *ihost)
irqreturn_t isci_msix_isr(int vec, void *data)
static bool sci_controller_error_isr(struct isci_host *ihost)
static void sci_controller_task_completion(struct isci_host *ihost, u32 ent)
static void sci_controller_sdma_completion(struct isci_host *ihost, u32 ent)
static void sci_controller_unsolicited_frame(struct isci_host *ihost, u32 ent)
static void sci_controller_event_completion(struct isci_host *ihost, u32 ent)
static void sci_controller_process_completions(struct isci_host *ihost)
static void sci_controller_error_handler(struct isci_host *ihost)
irqreturn_t isci_intx_isr(int vec, void *data)
irqreturn_t isci_error_isr(int vec, void *data)
static void isci_host_start_complete(struct isci_host *ihost, enum sci_status completion_status)
int isci_host_scan_finished(struct Scsi_Host *shost, unsigned long time)
static u32 sci_controller_get_suggested_start_timeout(struct isci_host *ihost)
static void sci_controller_enable_interrupts(struct isci_host *ihost)
void sci_controller_disable_interrupts(struct isci_host *ihost)
static void sci_controller_enable_port_task_scheduler(struct isci_host *ihost)
static void sci_controller_assign_task_entries(struct isci_host *ihost)
static void sci_controller_initialize_completion_queue(struct isci_host *ihost)
static void sci_controller_initialize_unsolicited_frame_queue(struct isci_host *ihost)
static void sci_controller_transition_to_ready(struct isci_host *ihost, enum sci_status status)
static bool is_phy_starting(struct isci_phy *iphy)
static enum sci_status sci_controller_start_next_phy(struct isci_host *ihost)
static void phy_startup_timeout(unsigned long data)
static u16 isci_tci_active(struct isci_host *ihost)
static enum sci_status sci_controller_start(struct isci_host *ihost,
u32 timeout)
void isci_host_scan_start(struct Scsi_Host *shost)
static void isci_host_stop_complete(struct isci_host *ihost, enum sci_status completion_status)
static void sci_controller_completion_handler(struct isci_host *ihost)
static void isci_host_completion_routine(unsigned long data)
static enum sci_status sci_controller_stop(struct isci_host *ihost, u32 timeout)
static enum sci_status sci_controller_reset(struct isci_host *ihost)
void isci_host_deinit(struct isci_host *ihost)
static void __iomem *scu_base(struct isci_host *isci_host)
static void __iomem *smu_base(struct isci_host *isci_host)
static void isci_user_parameters_get(struct sci_user_parameters *u)
static void sci_controller_initial_state_enter(struct sci_base_state_machine *sm)
static inline void sci_controller_starting_state_exit(struct sci_base_state_machine *sm)
#define INTERRUPT_COALESCE_TIMEOUT_BASE_RANGE_LOWER_BOUND_NS 853
#define INTERRUPT_COALESCE_TIMEOUT_BASE_RANGE_UPPER_BOUND_NS 1280
#define INTERRUPT_COALESCE_TIMEOUT_MAX_US                    2700000
#define INTERRUPT_COALESCE_NUMBER_MAX                        256
#define INTERRUPT_COALESCE_TIMEOUT_ENCODE_MIN                7
#define INTERRUPT_COALESCE_TIMEOUT_ENCODE_MAX                28
static enum sci_status
sci_controller_set_interrupt_coalescence(struct isci_host *ihost,
u32 coalesce_number,
u32 coalesce_timeout)
static void sci_controller_ready_state_enter(struct sci_base_state_machine *sm)
static void sci_controller_ready_state_exit(struct sci_base_state_machine *sm)
static enum sci_status sci_controller_stop_phys(struct isci_host *ihost)
static enum sci_status sci_controller_stop_ports(struct isci_host *ihost)
static enum sci_status sci_controller_stop_devices(struct isci_host *ihost)
static void sci_controller_stopping_state_enter(struct sci_base_state_machine *sm)
static void sci_controller_stopping_state_exit(struct sci_base_state_machine *sm)
static void sci_controller_reset_hardware(struct isci_host *ihost)
static void sci_controller_resetting_state_enter(struct sci_base_state_machine *sm)
static const struct sci_base_state sci_controller_state_table[] = ;
static void sci_controller_set_default_config_parameters(struct isci_host *ihost)
static void controller_timeout(unsigned long data)
static enum sci_status sci_controller_construct(struct isci_host *ihost,
void __iomem *scu_base,
void __iomem *smu_base)
int sci_oem_parameters_validate(struct sci_oem_params *oem)
static enum sci_status sci_oem_parameters_set(struct isci_host *ihost)
static void power_control_timeout(unsigned long data)
void sci_controller_power_control_queue_insert(struct isci_host *ihost,
struct isci_phy *iphy)
void sci_controller_power_control_queue_remove(struct isci_host *ihost,
struct isci_phy *iphy)
#define AFE_REGISTER_WRITE_DELAY 10
static void sci_controller_afe_initialization(struct isci_host *ihost)
static void sci_controller_initialize_power_control(struct isci_host *ihost)
static enum sci_status sci_controller_initialize(struct isci_host *ihost)
static enum sci_status sci_user_parameters_set(struct isci_host *ihost,
struct sci_user_parameters *sci_parms)
static int sci_controller_mem_init(struct isci_host *ihost)
int isci_host_init(struct isci_host *ihost)
void sci_controller_link_up(struct isci_host *ihost, struct isci_port *iport,
struct isci_phy *iphy)
void sci_controller_link_down(struct isci_host *ihost, struct isci_port *iport,
struct isci_phy *iphy)
static bool sci_controller_has_remote_devices_stopping(struct isci_host *ihost)
void sci_controller_remote_device_stopped(struct isci_host *ihost,
struct isci_remote_device *idev)
void sci_controller_post_request(struct isci_host *ihost, u32 request)
struct isci_request *sci_request_by_tag(struct isci_host *ihost, u16 io_tag)
enum sci_status sci_controller_allocate_remote_node_context(struct isci_host *ihost,
struct isci_remote_device *idev,
u16 *node_id)
void sci_controller_free_remote_node_context(struct isci_host *ihost,
struct isci_remote_device *idev,
u16 node_id)
void sci_controller_copy_sata_response(void *response_buffer,
void *frame_header,
void *frame_buffer)
void sci_controller_release_frame(struct isci_host *ihost, u32 frame_index)
void isci_tci_free(struct isci_host *ihost, u16 tci)
static u16 isci_tci_alloc(struct isci_host *ihost)
static u16 isci_tci_space(struct isci_host *ihost)
u16 isci_alloc_tag(struct isci_host *ihost)
enum sci_status isci_free_tag(struct isci_host *ihost, u16 io_tag)
enum sci_status sci_controller_start_io(struct isci_host *ihost,
struct isci_remote_device *idev,
struct isci_request *ireq)
enum sci_status sci_controller_terminate_request(struct isci_host *ihost,
struct isci_remote_device *idev,
struct isci_request *ireq)
enum sci_status sci_controller_complete_io(struct isci_host *ihost,
struct isci_remote_device *idev,
struct isci_request *ireq)
enum sci_status sci_controller_continue_io(struct isci_request *ireq)
enum sci_task_status sci_controller_start_task(struct isci_host *ihost,
struct isci_remote_device *idev,
struct isci_request *ireq)
