static void siena_init_wol(struct efx_nic *efx);
static void siena_push_irq_moderation(struct efx_channel *channel)
static void siena_push_multicast_hash(struct efx_nic *efx)
static int siena_mdio_write(struct net_device *net_dev,
int prtad, int devad, u16 addr, u16 value)
static int siena_mdio_read(struct net_device *net_dev,
int prtad, int devad, u16 addr)
static int siena_probe_port(struct efx_nic *efx)
static void siena_remove_port(struct efx_nic *efx)
static const struct efx_nic_register_test siena_register_tests[] = ;
static int siena_test_registers(struct efx_nic *efx)
static int siena_reset_hw(struct efx_nic *efx, enum reset_type method)
static int siena_probe_nvconfig(struct efx_nic *efx)
static int siena_probe_nic(struct efx_nic *efx)
static int siena_init_nic(struct efx_nic *efx)
static void siena_remove_nic(struct efx_nic *efx)
#define STATS_GENERATION_INVALID ((u64)(-1))
static int siena_try_update_nic_stats(struct efx_nic *efx)
static void siena_update_nic_stats(struct efx_nic *efx)
static void siena_start_nic_stats(struct efx_nic *efx)
static void siena_stop_nic_stats(struct efx_nic *efx)
static void siena_get_wol(struct efx_nic *efx, struct ethtool_wolinfo *wol)
static int siena_set_wol(struct efx_nic *efx, u32 type)
static void siena_init_wol(struct efx_nic *efx)
const struct efx_nic_type siena_a0_nic_type = ;
