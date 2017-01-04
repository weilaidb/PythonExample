unsigned efx_mdio_id_oui(u32 id)
int efx_mdio_reset_mmd(struct efx_nic *port, int mmd,
int spins, int spintime)
static int efx_mdio_check_mmd(struct efx_nic *efx, int mmd)
#define MDIO45_RESET_TIME	1000
#define MDIO45_RESET_ITERS	100
int efx_mdio_wait_reset_mmds(struct efx_nic *efx, unsigned int mmd_mask)
int efx_mdio_check_mmds(struct efx_nic *efx, unsigned int mmd_mask)
bool efx_mdio_links_ok(struct efx_nic *efx, unsigned int mmd_mask)
void efx_mdio_transmit_disable(struct efx_nic *efx)
void efx_mdio_phy_reconfigure(struct efx_nic *efx)
static void efx_mdio_set_mmd_lpower(struct efx_nic *efx,
int lpower, int mmd)
void efx_mdio_set_mmds_lpower(struct efx_nic *efx,
int low_power, unsigned int mmd_mask)
int efx_mdio_set_settings(struct efx_nic *efx, struct ethtool_cmd *ecmd)
void efx_mdio_an_reconfigure(struct efx_nic *efx)
u8 efx_mdio_get_pause(struct efx_nic *efx)
int efx_mdio_test_alive(struct efx_nic *efx)
