#define EFX_SELFTEST_H
struct efx_loopback_self_tests ;
#define EFX_MAX_PHY_TESTS 20
struct efx_self_tests ;
extern void efx_loopback_rx_packet(struct efx_nic *efx,
const char *buf_ptr, int pkt_len);
extern int efx_selftest(struct efx_nic *efx,
struct efx_self_tests *tests,
unsigned flags);
