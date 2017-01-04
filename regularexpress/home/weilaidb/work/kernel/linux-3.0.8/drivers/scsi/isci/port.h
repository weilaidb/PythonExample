#define _ISCI_PORT_H_
#define SCIC_SDS_DUMMY_PORT   0xFF
struct isci_phy;
struct isci_host;
enum isci_status ;
struct isci_port ;
enum sci_port_not_ready_reason_code ;
struct sci_port_end_point_properties ;
struct sci_port_properties ;
enum sci_port_states ;
static inline void sci_port_decrement_request_count(struct isci_port *iport)
#define sci_port_active_phy(port, phy) \
(((port)->active_phy_mask & (1 << (phy)->phy_index)) != 0)
void sci_port_construct(
struct isci_port *iport,
u8 port_index,
struct isci_host *ihost);
enum sci_status sci_port_start(struct isci_port *iport);
enum sci_status sci_port_stop(struct isci_port *iport);
enum sci_status sci_port_add_phy(
struct isci_port *iport,
struct isci_phy *iphy);
enum sci_status sci_port_remove_phy(
struct isci_port *iport,
struct isci_phy *iphy);
void sci_port_setup_transports(
struct isci_port *iport,
u32 device_id);
void isci_port_bcn_enable(struct isci_host *, struct isci_port *);
void sci_port_deactivate_phy(
struct isci_port *iport,
struct isci_phy *iphy,
bool do_notify_user);
bool sci_port_link_detected(
struct isci_port *iport,
struct isci_phy *iphy);
enum sci_status sci_port_link_up(struct isci_port *iport,
struct isci_phy *iphy);
enum sci_status sci_port_link_down(struct isci_port *iport,
struct isci_phy *iphy);
struct isci_request;
struct isci_remote_device;
enum sci_status sci_port_start_io(
struct isci_port *iport,
struct isci_remote_device *idev,
struct isci_request *ireq);
enum sci_status sci_port_complete_io(
struct isci_port *iport,
struct isci_remote_device *idev,
struct isci_request *ireq);
enum sas_linkrate sci_port_get_max_allowed_speed(
struct isci_port *iport);
void sci_port_broadcast_change_received(
struct isci_port *iport,
struct isci_phy *iphy);
bool sci_port_is_valid_phy_assignment(
struct isci_port *iport,
u32 phy_index);
void sci_port_get_sas_address(
struct isci_port *iport,
struct sci_sas_address *sas_address);
void sci_port_get_attached_sas_address(
struct isci_port *iport,
struct sci_sas_address *sas_address);
enum isci_status isci_port_get_state(
struct isci_port *isci_port);
void isci_port_formed(struct asd_sas_phy *);
void isci_port_deformed(struct asd_sas_phy *);
void isci_port_init(
struct isci_port *port,
struct isci_host *host,
int index);
int isci_port_perform_hard_reset(struct isci_host *ihost, struct isci_port *iport,
struct isci_phy *iphy);
