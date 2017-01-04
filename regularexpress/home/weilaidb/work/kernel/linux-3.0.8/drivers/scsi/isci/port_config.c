#define SCIC_SDS_MPC_RECONFIGURATION_TIMEOUT    (10)
#define SCIC_SDS_APC_RECONFIGURATION_TIMEOUT    (10)
#define SCIC_SDS_APC_WAIT_LINK_UP_NOTIFICATION  (100)
enum SCIC_SDS_APC_ACTIVITY ;
static s32 sci_sas_address_compare(
struct sci_sas_address address_one,
struct sci_sas_address address_two)
static struct isci_port *sci_port_configuration_agent_find_port(
struct isci_host *ihost,
struct isci_phy *iphy)
static enum sci_status sci_port_configuration_agent_validate_ports(
struct isci_host *ihost,
struct sci_port_configuration_agent *port_agent)
static enum sci_status
sci_mpc_agent_validate_phy_configuration(struct isci_host *ihost,
struct sci_port_configuration_agent *port_agent)
static void mpc_agent_timeout(unsigned long data)
static void sci_mpc_agent_link_up(struct isci_host *ihost,
struct sci_port_configuration_agent *port_agent,
struct isci_port *iport,
struct isci_phy *iphy)
static void sci_mpc_agent_link_down(
struct isci_host *ihost,
struct sci_port_configuration_agent *port_agent,
struct isci_port *iport,
struct isci_phy *iphy)
static enum sci_status
sci_apc_agent_validate_phy_configuration(struct isci_host *ihost,
struct sci_port_configuration_agent *port_agent)
static void sci_apc_agent_configure_ports(struct isci_host *ihost,
struct sci_port_configuration_agent *port_agent,
struct isci_phy *iphy,
bool start_timer)
static void sci_apc_agent_link_up(struct isci_host *ihost,
struct sci_port_configuration_agent *port_agent,
struct isci_port *iport,
struct isci_phy *iphy)
static void sci_apc_agent_link_down(
struct isci_host *ihost,
struct sci_port_configuration_agent *port_agent,
struct isci_port *iport,
struct isci_phy *iphy)
static void apc_agent_timeout(unsigned long data)
void sci_port_configuration_agent_construct(
struct sci_port_configuration_agent *port_agent)
enum sci_status sci_port_configuration_agent_initialize(
struct isci_host *ihost,
struct sci_port_configuration_agent *port_agent)
