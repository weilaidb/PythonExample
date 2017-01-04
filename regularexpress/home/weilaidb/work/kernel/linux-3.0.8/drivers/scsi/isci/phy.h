#define _ISCI_PHY_H_
#define SCIC_SDS_SIGNATURE_FIS_TIMEOUT    25000
#define SCIC_SDS_SATA_LINK_TRAINING_TIMEOUT  250
enum sci_phy_protocol ;
struct isci_phy ;
static inline struct isci_phy *to_iphy(struct asd_sas_phy *sas_phy)
struct sci_phy_cap   __packed;
struct sci_phy_proto  __packed;
struct sci_phy_properties ;
struct sci_sas_phy_properties ;
struct sci_sata_phy_properties ;
enum sci_phy_counter_id ;
enum sci_phy_states ;
void sci_phy_construct(
struct isci_phy *iphy,
struct isci_port *iport,
u8 phy_index);
struct isci_port *phy_get_non_dummy_port(struct isci_phy *iphy);
void sci_phy_set_port(
struct isci_phy *iphy,
struct isci_port *iport);
enum sci_status sci_phy_initialize(
struct isci_phy *iphy,
struct scu_transport_layer_registers __iomem *transport_layer_registers,
struct scu_link_layer_registers __iomem *link_layer_registers);
enum sci_status sci_phy_start(
struct isci_phy *iphy);
enum sci_status sci_phy_stop(
struct isci_phy *iphy);
enum sci_status sci_phy_reset(
struct isci_phy *iphy);
void sci_phy_resume(
struct isci_phy *iphy);
void sci_phy_setup_transport(
struct isci_phy *iphy,
u32 device_id);
enum sci_status sci_phy_event_handler(
struct isci_phy *iphy,
u32 event_code);
enum sci_status sci_phy_frame_handler(
struct isci_phy *iphy,
u32 frame_index);
enum sci_status sci_phy_consume_power_handler(
struct isci_phy *iphy);
void sci_phy_get_sas_address(
struct isci_phy *iphy,
struct sci_sas_address *sas_address);
void sci_phy_get_attached_sas_address(
struct isci_phy *iphy,
struct sci_sas_address *sas_address);
struct sci_phy_proto;
void sci_phy_get_protocols(
struct isci_phy *iphy,
struct sci_phy_proto *protocols);
enum sas_linkrate sci_phy_linkrate(struct isci_phy *iphy);
struct isci_host;
void isci_phy_init(struct isci_phy *iphy, struct isci_host *ihost, int index);
int isci_phy_control(struct asd_sas_phy *phy, enum phy_func func, void *buf);
