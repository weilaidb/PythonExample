#define EFX_FILTER_H
enum efx_filter_type ;
enum efx_filter_priority ;
enum efx_filter_flags ;
struct efx_filter_spec ;
static inline void efx_filter_init_rx(struct efx_filter_spec *spec,
enum efx_filter_priority priority,
enum efx_filter_flags flags,
unsigned rxq_id)
extern int efx_filter_set_ipv4_local(struct efx_filter_spec *spec, u8 proto,
__be32 host, __be16 port);
extern int efx_filter_set_ipv4_full(struct efx_filter_spec *spec, u8 proto,
__be32 host, __be16 port,
__be32 rhost, __be16 rport);
extern int efx_filter_set_eth_local(struct efx_filter_spec *spec,
u16 vid, const u8 *addr);
enum ;
