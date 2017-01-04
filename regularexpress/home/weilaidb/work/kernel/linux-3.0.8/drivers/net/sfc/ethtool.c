struct ethtool_string ;
struct efx_ethtool_stat ;
#define EFX_ETHTOOL_STAT(stat_name, source_name, field, field_type, \
get_stat_function)
static u64 efx_get_uint_stat(void *field)
static u64 efx_get_ulong_stat(void *field)
static u64 efx_get_u64_stat(void *field)
static u64 efx_get_atomic_stat(void *field)
#define EFX_ETHTOOL_ULONG_MAC_STAT(field)			\
EFX_ETHTOOL_STAT(field, mac_stats, field, 		\
unsigned long, efx_get_ulong_stat)
#define EFX_ETHTOOL_U64_MAC_STAT(field)				\
EFX_ETHTOOL_STAT(field, mac_stats, field, 		\
u64, efx_get_u64_stat)
#define EFX_ETHTOOL_UINT_NIC_STAT(name)				\
EFX_ETHTOOL_STAT(name, nic, n_##name,			\
unsigned int, efx_get_uint_stat)
#define EFX_ETHTOOL_ATOMIC_NIC_ERROR_STAT(field)		\
EFX_ETHTOOL_STAT(field, nic, field,			\
atomic_t, efx_get_atomic_stat)
#define EFX_ETHTOOL_UINT_CHANNEL_STAT(field)			\
EFX_ETHTOOL_STAT(field, channel, n_##field,		\
unsigned int, efx_get_uint_stat)
#define EFX_ETHTOOL_UINT_TXQ_STAT(field)			\
EFX_ETHTOOL_STAT(tx_##field, tx_queue, field,		\
unsigned int, efx_get_uint_stat)
static struct efx_ethtool_stat efx_ethtool_stats[] = ;
#define EFX_ETHTOOL_NUM_STATS ARRAY_SIZE(efx_ethtool_stats)
#define EFX_ETHTOOL_EEPROM_MAGIC 0xEFAB
static int efx_ethtool_phys_id(struct net_device *net_dev,
enum ethtool_phys_id_state state)
static int efx_ethtool_get_settings(struct net_device *net_dev,
struct ethtool_cmd *ecmd)
static int efx_ethtool_set_settings(struct net_device *net_dev,
struct ethtool_cmd *ecmd)
static void efx_ethtool_get_drvinfo(struct net_device *net_dev,
struct ethtool_drvinfo *info)
static int efx_ethtool_get_regs_len(struct net_device *net_dev)
static void efx_ethtool_get_regs(struct net_device *net_dev,
struct ethtool_regs *regs, void *buf)
static u32 efx_ethtool_get_msglevel(struct net_device *net_dev)
static void efx_ethtool_set_msglevel(struct net_device *net_dev, u32 msg_enable)
static void efx_fill_test(unsigned int test_index,
struct ethtool_string *strings, u64 *data,
int *test, const char *unit_format, int unit_id,
const char *test_format, const char *test_id)
#define EFX_CHANNEL_NAME(_channel) "chan%d", _channel->channel
#define EFX_TX_QUEUE_NAME(_tx_queue) "txq%d", _tx_queue->queue
#define EFX_RX_QUEUE_NAME(_rx_queue) "rxq%d", _rx_queue->queue
#define EFX_LOOPBACK_NAME(_mode, _counter)			\
"loopback.%s." _counter, STRING_TABLE_LOOKUP(_mode, efx_loopback_mode)
static int efx_fill_loopback_test(struct efx_nic *efx,
struct efx_loopback_self_tests *lb_tests,
enum efx_loopback_mode mode,
unsigned int test_index,
struct ethtool_string *strings, u64 *data)
static int efx_ethtool_fill_self_tests(struct efx_nic *efx,
struct efx_self_tests *tests,
struct ethtool_string *strings,
u64 *data)
static int efx_ethtool_get_sset_count(struct net_device *net_dev,
int string_set)
static void efx_ethtool_get_strings(struct net_device *net_dev,
u32 string_set, u8 *strings)
static void efx_ethtool_get_stats(struct net_device *net_dev,
struct ethtool_stats *stats,
u64 *data)
static void efx_ethtool_self_test(struct net_device *net_dev,
struct ethtool_test *test, u64 *data)
static int efx_ethtool_nway_reset(struct net_device *net_dev)
static int efx_ethtool_get_coalesce(struct net_device *net_dev,
struct ethtool_coalesce *coalesce)
static int efx_ethtool_set_coalesce(struct net_device *net_dev,
struct ethtool_coalesce *coalesce)
static void efx_ethtool_get_ringparam(struct net_device *net_dev,
struct ethtool_ringparam *ring)
static int efx_ethtool_set_ringparam(struct net_device *net_dev,
struct ethtool_ringparam *ring)
static int efx_ethtool_set_pauseparam(struct net_device *net_dev,
struct ethtool_pauseparam *pause)
static void efx_ethtool_get_pauseparam(struct net_device *net_dev,
struct ethtool_pauseparam *pause)
static void efx_ethtool_get_wol(struct net_device *net_dev,
struct ethtool_wolinfo *wol)
static int efx_ethtool_set_wol(struct net_device *net_dev,
struct ethtool_wolinfo *wol)
static int efx_ethtool_reset(struct net_device *net_dev, u32 *flags)
static int
efx_ethtool_get_rxnfc(struct net_device *net_dev,
struct ethtool_rxnfc *info, void *rules __always_unused)
static int efx_ethtool_set_rx_ntuple(struct net_device *net_dev,
struct ethtool_rx_ntuple *ntuple)
static int efx_ethtool_get_rxfh_indir(struct net_device *net_dev,
struct ethtool_rxfh_indir *indir)
static int efx_ethtool_set_rxfh_indir(struct net_device *net_dev,
const struct ethtool_rxfh_indir *indir)
const struct ethtool_ops efx_ethtool_ops = ;
