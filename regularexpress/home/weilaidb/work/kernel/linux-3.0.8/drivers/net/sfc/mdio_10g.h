#define EFX_MDIO_10G_H
static inline unsigned efx_mdio_id_rev(u32 id)
static inline unsigned efx_mdio_id_model(u32 id)
extern unsigned efx_mdio_id_oui(u32 id);
static inline int efx_mdio_read(struct efx_nic *efx, int devad, int addr)
static inline void
efx_mdio_write(struct efx_nic *efx, int devad, int addr, int value)
static inline u32 efx_mdio_read_id(struct efx_nic *efx, int mmd)
static inline bool efx_mdio_phyxgxs_lane_sync(struct efx_nic *efx)
extern const char *efx_mdio_mmd_name(int mmd);
extern int efx_mdio_reset_mmd(struct efx_nic *efx, int mmd,
int spins, int spintime);
int efx_mdio_check_mmds(struct efx_nic *efx, unsigned int mmd_mask);
extern bool efx_mdio_links_ok(struct efx_nic *efx, unsigned int mmd_mask);
extern void efx_mdio_transmit_disable(struct efx_nic *efx);
extern void efx_mdio_phy_reconfigure(struct efx_nic *efx);
extern void efx_mdio_set_mmds_lpower(struct efx_nic *efx,
int low_power, unsigned int mmd_mask);
extern int efx_mdio_set_settings(struct efx_nic *efx, struct ethtool_cmd *ecmd);
extern void efx_mdio_an_reconfigure(struct efx_nic *efx);
u8 efx_mdio_get_pause(struct efx_nic *efx);
extern int efx_mdio_wait_reset_mmds(struct efx_nic *efx,
unsigned int mmd_mask);
static inline void
efx_mdio_set_flag(struct efx_nic *efx, int devad, int addr,
int mask, bool state)
extern int efx_mdio_test_alive(struct efx_nic *efx);
