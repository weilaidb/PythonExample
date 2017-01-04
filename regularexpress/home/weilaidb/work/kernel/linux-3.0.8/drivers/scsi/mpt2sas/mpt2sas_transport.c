static struct _sas_node *
_transport_sas_node_find_by_sas_address(struct MPT2SAS_ADAPTER *ioc,
u64 sas_address)
static enum sas_linkrate
_transport_convert_phy_link_rate(u8 link_rate)
static int
_transport_set_identify(struct MPT2SAS_ADAPTER *ioc, u16 handle,
struct sas_identify *identify)
u8
mpt2sas_transport_done(struct MPT2SAS_ADAPTER *ioc, u16 smid, u8 msix_index,
u32 reply)
struct rep_manu_request;
struct rep_manu_reply;
static int
_transport_expander_report_manufacture(struct MPT2SAS_ADAPTER *ioc,
u64 sas_address, struct sas_expander_device *edev)
static void
_transport_delete_port(struct MPT2SAS_ADAPTER *ioc,
struct _sas_port *mpt2sas_port)
static void
_transport_delete_phy(struct MPT2SAS_ADAPTER *ioc,
struct _sas_port *mpt2sas_port, struct _sas_phy *mpt2sas_phy)
static void
_transport_add_phy(struct MPT2SAS_ADAPTER *ioc, struct _sas_port *mpt2sas_port,
struct _sas_phy *mpt2sas_phy)
static void
_transport_add_phy_to_an_existing_port(struct MPT2SAS_ADAPTER *ioc,
struct _sas_node *sas_node, struct _sas_phy *mpt2sas_phy, u64 sas_address)
static void
_transport_del_phy_from_an_existing_port(struct MPT2SAS_ADAPTER *ioc,
struct _sas_node *sas_node, struct _sas_phy *mpt2sas_phy)
static void
_transport_sanity_check(struct MPT2SAS_ADAPTER *ioc, struct _sas_node *sas_node,
u64 sas_address)
struct _sas_port *
mpt2sas_transport_port_add(struct MPT2SAS_ADAPTER *ioc, u16 handle,
u64 sas_address)
void
mpt2sas_transport_port_remove(struct MPT2SAS_ADAPTER *ioc, u64 sas_address,
u64 sas_address_parent)
int
mpt2sas_transport_add_host_phy(struct MPT2SAS_ADAPTER *ioc, struct _sas_phy
*mpt2sas_phy, Mpi2SasPhyPage0_t phy_pg0, struct device *parent_dev)
int
mpt2sas_transport_add_expander_phy(struct MPT2SAS_ADAPTER *ioc, struct _sas_phy
*mpt2sas_phy, Mpi2ExpanderPage1_t expander_pg1, struct device *parent_dev)
void
mpt2sas_transport_update_links(struct MPT2SAS_ADAPTER *ioc,
u64 sas_address, u16 handle, u8 phy_number, u8 link_rate)
static inline void *
phy_to_ioc(struct sas_phy *phy)
static inline void *
rphy_to_ioc(struct sas_rphy *rphy)
struct phy_error_log_request;
struct phy_error_log_reply;
static int
_transport_get_expander_phy_error_log(struct MPT2SAS_ADAPTER *ioc,
struct sas_phy *phy)
static int
_transport_get_linkerrors(struct sas_phy *phy)
static int
_transport_get_enclosure_identifier(struct sas_rphy *rphy, u64 *identifier)
static int
_transport_get_bay_identifier(struct sas_rphy *rphy)
struct phy_control_request;
struct phy_control_reply;
#define SMP_PHY_CONTROL_LINK_RESET	(0x01)
#define SMP_PHY_CONTROL_HARD_RESET	(0x02)
#define SMP_PHY_CONTROL_DISABLE		(0x03)
static int
_transport_expander_phy_control(struct MPT2SAS_ADAPTER *ioc,
struct sas_phy *phy, u8 phy_operation)
static int
_transport_phy_reset(struct sas_phy *phy, int hard_reset)
static int
_transport_phy_enable(struct sas_phy *phy, int enable)
static int
_transport_phy_speed(struct sas_phy *phy, struct sas_phy_linkrates *rates)
static int
_transport_smp_handler(struct Scsi_Host *shost, struct sas_rphy *rphy,
struct request *req)
struct sas_function_template mpt2sas_transport_functions = ;
struct scsi_transport_template *mpt2sas_transport_template;
