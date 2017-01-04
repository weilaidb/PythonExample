#define EFX_MAC_H
extern const struct efx_mac_operations falcon_xmac_operations;
extern const struct efx_mac_operations efx_mcdi_mac_operations;
extern int efx_mcdi_mac_stats(struct efx_nic *efx, dma_addr_t dma_addr,
u32 dma_len, int enable, int clear);
