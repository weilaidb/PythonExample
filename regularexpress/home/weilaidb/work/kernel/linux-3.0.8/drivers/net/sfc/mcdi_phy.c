struct efx_mcdi_phy_data ;
static int
efx_mcdi_get_phy_cfg(struct efx_nic *efx, struct efx_mcdi_phy_data *cfg)
static int efx_mcdi_set_link(struct efx_nic *efx, u32 capabilities,
u32 flags, u32 loopback_mode,
u32 loopback_speed)
static int efx_mcdi_loopback_modes(struct efx_nic *efx, u64 *loopback_modes)
int efx_mcdi_mdio_read(struct efx_nic *efx, unsigned int bus,
unsigned int prtad, unsigned int devad, u16 addr,
u16 *value_out, u32 *status_out)
int efx_mcdi_mdio_write(struct efx_nic *efx, unsigned int bus,
unsigned int prtad, unsigned int devad, u16 addr,
u16 value, u32 *status_out)
static u32 mcdi_to_ethtool_cap(u32 media, u32 cap)
static u32 ethtool_to_mcdi_cap(u32 cap)
static u32 efx_get_mcdi_phy_flags(struct efx_nic *efx)
static u32 mcdi_to_ethtool_media(u32 media)
static int efx_mcdi_phy_probe(struct efx_nic *efx)
int efx_mcdi_phy_reconfigure(struct efx_nic *efx)
void efx_mcdi_phy_decode_link(struct efx_nic *efx,
struct efx_link_state *link_state,
u32 speed, u32 flags, u32 fcntl)
void efx_mcdi_phy_check_fcntl(struct efx_nic *efx, u32 lpa)
static bool efx_mcdi_phy_poll(struct efx_nic *efx)
static void efx_mcdi_phy_remove(struct efx_nic *efx)
static void efx_mcdi_phy_get_settings(struct efx_nic *efx, struct ethtool_cmd *ecmd)
static int efx_mcdi_phy_set_settings(struct efx_nic *efx, struct ethtool_cmd *ecmd)
static int efx_mcdi_phy_test_alive(struct efx_nic *efx)
static const char *const mcdi_sft9001_cable_diag_names[] = ;
static int efx_mcdi_bist(struct efx_nic *efx, unsigned int bist_mode,
int *results)
static int efx_mcdi_phy_run_tests(struct efx_nic *efx, int *results,
unsigned flags)
static const char *efx_mcdi_phy_test_name(struct efx_nic *efx,
unsigned int index)
const struct efx_phy_operations efx_mcdi_phy_ops = ;
