static int efx_mcdi_set_mac(struct efx_nic *efx)
static int efx_mcdi_get_mac_faults(struct efx_nic *efx, u32 *faults)
int efx_mcdi_mac_stats(struct efx_nic *efx, dma_addr_t dma_addr,
u32 dma_len, int enable, int clear)
static int efx_mcdi_mac_reconfigure(struct efx_nic *efx)
static bool efx_mcdi_mac_check_fault(struct efx_nic *efx)
const struct efx_mac_operations efx_mcdi_mac_operations = ;
