#define SCIC_SDS_PHY_MAX_ARBITRATION_WAIT_TIME  (700)
enum sas_linkrate sci_phy_linkrate(struct isci_phy *iphy)
static enum sci_status
sci_phy_transport_layer_initialization(struct isci_phy *iphy,
struct scu_transport_layer_registers __iomem *reg)
static enum sci_status
sci_phy_link_layer_initialization(struct isci_phy *iphy,
struct scu_link_layer_registers __iomem *reg)
static void phy_sata_timeout(unsigned long data)
struct isci_port *phy_get_non_dummy_port(struct isci_phy *iphy)
void sci_phy_set_port(
struct isci_phy *iphy,
struct isci_port *iport)
enum sci_status sci_phy_initialize(struct isci_phy *iphy,
struct scu_transport_layer_registers __iomem *tl,
struct scu_link_layer_registers __iomem *ll)
void sci_phy_setup_transport(struct isci_phy *iphy, u32 device_id)
static void sci_phy_suspend(struct isci_phy *iphy)
void sci_phy_resume(struct isci_phy *iphy)
void sci_phy_get_sas_address(struct isci_phy *iphy, struct sci_sas_address *sas)
void sci_phy_get_attached_sas_address(struct isci_phy *iphy, struct sci_sas_address *sas)
void sci_phy_get_protocols(struct isci_phy *iphy, struct sci_phy_proto *proto)
enum sci_status sci_phy_start(struct isci_phy *iphy)
enum sci_status sci_phy_stop(struct isci_phy *iphy)
enum sci_status sci_phy_reset(struct isci_phy *iphy)
enum sci_status sci_phy_consume_power_handler(struct isci_phy *iphy)
static void sci_phy_start_sas_link_training(struct isci_phy *iphy)
static void sci_phy_start_sata_link_training(struct isci_phy *iphy)
static void sci_phy_complete_link_training(struct isci_phy *iphy,
enum sas_linkrate max_link_rate,
u32 next_state)
enum sci_status sci_phy_event_handler(struct isci_phy *iphy, u32 event_code)
enum sci_status sci_phy_frame_handler(struct isci_phy *iphy, u32 frame_index)
static void sci_phy_starting_initial_substate_enter(struct sci_base_state_machine *sm)
static void sci_phy_starting_await_sas_power_substate_enter(struct sci_base_state_machine *sm)
static void sci_phy_starting_await_sas_power_substate_exit(struct sci_base_state_machine *sm)
static void sci_phy_starting_await_sata_power_substate_enter(struct sci_base_state_machine *sm)
static void sci_phy_starting_await_sata_power_substate_exit(struct sci_base_state_machine *sm)
static void sci_phy_starting_await_sata_phy_substate_enter(struct sci_base_state_machine *sm)
static void sci_phy_starting_await_sata_phy_substate_exit(struct sci_base_state_machine *sm)
static void sci_phy_starting_await_sata_speed_substate_enter(struct sci_base_state_machine *sm)
static void sci_phy_starting_await_sata_speed_substate_exit(struct sci_base_state_machine *sm)
static void sci_phy_starting_await_sig_fis_uf_substate_enter(struct sci_base_state_machine *sm)
static void sci_phy_starting_await_sig_fis_uf_substate_exit(struct sci_base_state_machine *sm)
static void sci_phy_starting_final_substate_enter(struct sci_base_state_machine *sm)
static void scu_link_layer_stop_protocol_engine(
struct isci_phy *iphy)
static void scu_link_layer_start_oob(
struct isci_phy *iphy)
static void scu_link_layer_tx_hard_reset(
struct isci_phy *iphy)
static void sci_phy_stopped_state_enter(struct sci_base_state_machine *sm)
static void sci_phy_starting_state_enter(struct sci_base_state_machine *sm)
static void sci_phy_ready_state_enter(struct sci_base_state_machine *sm)
static void sci_phy_ready_state_exit(struct sci_base_state_machine *sm)
static void sci_phy_resetting_state_enter(struct sci_base_state_machine *sm)
static const struct sci_base_state sci_phy_state_table[] = ;
void sci_phy_construct(struct isci_phy *iphy,
struct isci_port *iport, u8 phy_index)
void isci_phy_init(struct isci_phy *iphy, struct isci_host *ihost, int index)
int isci_phy_control(struct asd_sas_phy *sas_phy,
enum phy_func func,
void *buf)
