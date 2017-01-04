#define SCIC_SDS_PORT_HARD_RESET_TIMEOUT  (1000)
#define SCU_DUMMY_INDEX    (0xFFFF)
static void isci_port_change_state(struct isci_port *iport, enum isci_status status)
static void sci_port_get_protocols(struct isci_port *iport, struct sci_phy_proto *proto)
static u32 sci_port_get_phys(struct isci_port *iport)
static enum sci_status sci_port_get_properties(struct isci_port *iport,
struct sci_port_properties *prop)
static void sci_port_bcn_enable(struct isci_port *iport)
void isci_port_bcn_enable(struct isci_host *ihost, struct isci_port *iport)
static void isci_port_bc_change_received(struct isci_host *ihost,
struct isci_port *iport,
struct isci_phy *iphy)
static void isci_port_link_up(struct isci_host *isci_host,
struct isci_port *iport,
struct isci_phy *iphy)
static void isci_port_link_down(struct isci_host *isci_host,
struct isci_phy *isci_phy,
struct isci_port *isci_port)
static void isci_port_ready(struct isci_host *isci_host, struct isci_port *isci_port)
static void isci_port_not_ready(struct isci_host *isci_host, struct isci_port *isci_port)
static void isci_port_stop_complete(struct isci_host *ihost,
struct isci_port *iport,
enum sci_status completion_status)
static void isci_port_hard_reset_complete(struct isci_port *isci_port,
enum sci_status completion_status)
bool sci_port_is_valid_phy_assignment(struct isci_port *iport, u32 phy_index)
static bool sci_port_is_phy_mask_valid(
struct isci_port *iport,
u32 phy_mask)
static struct isci_phy *sci_port_get_a_connected_phy(struct isci_port *iport)
static enum sci_status sci_port_set_phy(struct isci_port *iport, struct isci_phy *iphy)
static enum sci_status sci_port_clear_phy(struct isci_port *iport, struct isci_phy *iphy)
void sci_port_get_sas_address(struct isci_port *iport, struct sci_sas_address *sas)
void sci_port_get_attached_sas_address(struct isci_port *iport, struct sci_sas_address *sas)
static void sci_port_construct_dummy_rnc(struct isci_port *iport, u16 rni)
static void sci_port_construct_dummy_task(struct isci_port *iport, u16 tag)
static void sci_port_destroy_dummy_resources(struct isci_port *iport)
void sci_port_setup_transports(struct isci_port *iport, u32 device_id)
static void sci_port_activate_phy(struct isci_port *iport, struct isci_phy *iphy,
bool do_notify_user)
void sci_port_deactivate_phy(struct isci_port *iport, struct isci_phy *iphy,
bool do_notify_user)
static void sci_port_invalid_link_up(struct isci_port *iport, struct isci_phy *iphy)
static bool is_port_ready_state(enum sci_port_states state)
static void port_state_machine_change(struct isci_port *iport,
enum sci_port_states state)
static void sci_port_general_link_up_handler(struct isci_port *iport,
struct isci_phy *iphy,
bool do_notify_user)
static bool sci_port_is_wide(struct isci_port *iport)
bool sci_port_link_detected(
struct isci_port *iport,
struct isci_phy *iphy)
static void port_timeout(unsigned long data)
static void sci_port_update_viit_entry(struct isci_port *iport)
enum sas_linkrate sci_port_get_max_allowed_speed(struct isci_port *iport)
static void sci_port_suspend_port_task_scheduler(struct isci_port *iport)
static void sci_port_post_dummy_request(struct isci_port *iport)
static void sci_port_abort_dummy_request(struct isci_port *iport)
static void
sci_port_resume_port_task_scheduler(struct isci_port *iport)
static void sci_port_ready_substate_waiting_enter(struct sci_base_state_machine *sm)
static void sci_port_ready_substate_operational_enter(struct sci_base_state_machine *sm)
static void sci_port_invalidate_dummy_remote_node(struct isci_port *iport)
static void sci_port_ready_substate_operational_exit(struct sci_base_state_machine *sm)
static void sci_port_ready_substate_configuring_enter(struct sci_base_state_machine *sm)
static void sci_port_ready_substate_configuring_exit(struct sci_base_state_machine *sm)
enum sci_status sci_port_start(struct isci_port *iport)
enum sci_status sci_port_stop(struct isci_port *iport)
static enum sci_status sci_port_hard_reset(struct isci_port *iport, u32 timeout)
enum sci_status sci_port_add_phy(struct isci_port *iport,
struct isci_phy *iphy)
enum sci_status sci_port_remove_phy(struct isci_port *iport,
struct isci_phy *iphy)
enum sci_status sci_port_link_up(struct isci_port *iport,
struct isci_phy *iphy)
enum sci_status sci_port_link_down(struct isci_port *iport,
struct isci_phy *iphy)
enum sci_status sci_port_start_io(struct isci_port *iport,
struct isci_remote_device *idev,
struct isci_request *ireq)
enum sci_status sci_port_complete_io(struct isci_port *iport,
struct isci_remote_device *idev,
struct isci_request *ireq)
static void sci_port_enable_port_task_scheduler(struct isci_port *iport)
static void sci_port_disable_port_task_scheduler(struct isci_port *iport)
static void sci_port_post_dummy_remote_node(struct isci_port *iport)
static void sci_port_stopped_state_enter(struct sci_base_state_machine *sm)
static void sci_port_stopped_state_exit(struct sci_base_state_machine *sm)
static void sci_port_ready_state_enter(struct sci_base_state_machine *sm)
static void sci_port_resetting_state_exit(struct sci_base_state_machine *sm)
static void sci_port_stopping_state_exit(struct sci_base_state_machine *sm)
static void sci_port_failed_state_enter(struct sci_base_state_machine *sm)
static const struct sci_base_state sci_port_state_table[] = ;
void sci_port_construct(struct isci_port *iport, u8 index,
struct isci_host *ihost)
void isci_port_init(struct isci_port *iport, struct isci_host *ihost, int index)
enum isci_status isci_port_get_state(
struct isci_port *isci_port)
void sci_port_broadcast_change_received(struct isci_port *iport, struct isci_phy *iphy)
int isci_port_perform_hard_reset(struct isci_host *ihost, struct isci_port *iport,
struct isci_phy *iphy)
void isci_port_deformed(struct asd_sas_phy *phy)
void isci_port_formed(struct asd_sas_phy *phy)
