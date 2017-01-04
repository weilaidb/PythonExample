#define MAX_QUEUE_NAME_LEN	4
static const struct  bnx2x_q_stats_arr[] = ;
#define BNX2X_NUM_Q_STATS ARRAY_SIZE(bnx2x_q_stats_arr)
static const struct  bnx2x_stats_arr[] = ;
#define BNX2X_NUM_STATS		ARRAY_SIZE(bnx2x_stats_arr)
static int bnx2x_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int bnx2x_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
#define IS_E1_ONLINE(info)	(((info) & RI_E1_ONLINE) == RI_E1_ONLINE)
#define IS_E1H_ONLINE(info)	(((info) & RI_E1H_ONLINE) == RI_E1H_ONLINE)
#define IS_E2_ONLINE(info)	(((info) & RI_E2_ONLINE) == RI_E2_ONLINE)
static int bnx2x_get_regs_len(struct net_device *dev)
static inline void bnx2x_read_pages_regs_e2(struct bnx2x *bp, u32 *p)
static void bnx2x_get_regs(struct net_device *dev,
struct ethtool_regs *regs, void *_p)
#define PHY_FW_VER_LEN			20
static void bnx2x_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static void bnx2x_get_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static int bnx2x_set_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static u32 bnx2x_get_msglevel(struct net_device *dev)
static void bnx2x_set_msglevel(struct net_device *dev, u32 level)
static int bnx2x_nway_reset(struct net_device *dev)
static u32 bnx2x_get_link(struct net_device *dev)
static int bnx2x_get_eeprom_len(struct net_device *dev)
static int bnx2x_acquire_nvram_lock(struct bnx2x *bp)
static int bnx2x_release_nvram_lock(struct bnx2x *bp)
static void bnx2x_enable_nvram_access(struct bnx2x *bp)
static void bnx2x_disable_nvram_access(struct bnx2x *bp)
static int bnx2x_nvram_read_dword(struct bnx2x *bp, u32 offset, __be32 *ret_val,
u32 cmd_flags)
static int bnx2x_nvram_read(struct bnx2x *bp, u32 offset, u8 *ret_buf,
int buf_size)
static int bnx2x_get_eeprom(struct net_device *dev,
struct ethtool_eeprom *eeprom, u8 *eebuf)
static int bnx2x_nvram_write_dword(struct bnx2x *bp, u32 offset, u32 val,
u32 cmd_flags)
#define BYTE_OFFSET(offset)		(8 * (offset & 0x03))
static int bnx2x_nvram_write1(struct bnx2x *bp, u32 offset, u8 *data_buf,
int buf_size)
static int bnx2x_nvram_write(struct bnx2x *bp, u32 offset, u8 *data_buf,
int buf_size)
static int bnx2x_set_eeprom(struct net_device *dev,
struct ethtool_eeprom *eeprom, u8 *eebuf)
static int bnx2x_get_coalesce(struct net_device *dev,
struct ethtool_coalesce *coal)
static int bnx2x_set_coalesce(struct net_device *dev,
struct ethtool_coalesce *coal)
static void bnx2x_get_ringparam(struct net_device *dev,
struct ethtool_ringparam *ering)
static int bnx2x_set_ringparam(struct net_device *dev,
struct ethtool_ringparam *ering)
static void bnx2x_get_pauseparam(struct net_device *dev,
struct ethtool_pauseparam *epause)
static int bnx2x_set_pauseparam(struct net_device *dev,
struct ethtool_pauseparam *epause)
static const struct  bnx2x_tests_str_arr[BNX2X_NUM_TESTS] = ;
static int bnx2x_test_registers(struct bnx2x *bp)
static int bnx2x_test_memory(struct bnx2x *bp)
static void bnx2x_wait_for_link(struct bnx2x *bp, u8 link_up, u8 is_serdes)
static int bnx2x_run_loopback(struct bnx2x *bp, int loopback_mode, u8 link_up)
static int bnx2x_test_loopback(struct bnx2x *bp, u8 link_up)
#define CRC32_RESIDUAL			0xdebb20e3
static int bnx2x_test_nvram(struct bnx2x *bp)
static int bnx2x_test_intr(struct bnx2x *bp)
static void bnx2x_self_test(struct net_device *dev,
struct ethtool_test *etest, u64 *buf)
#define IS_PORT_STAT(i) \
((bnx2x_stats_arr[i].flags & STATS_FLAGS_BOTH) == STATS_FLAGS_PORT)
#define IS_FUNC_STAT(i)		(bnx2x_stats_arr[i].flags & STATS_FLAGS_FUNC)
#define IS_MF_MODE_STAT(bp) \
(IS_MF(bp) && !(bp->msg_enable & BNX2X_MSG_STATS))
static int bnx2x_get_sset_count(struct net_device *dev, int stringset)
static void bnx2x_get_strings(struct net_device *dev, u32 stringset, u8 *buf)
static void bnx2x_get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *stats, u64 *buf)
static int bnx2x_set_phys_id(struct net_device *dev,
enum ethtool_phys_id_state state)
static int bnx2x_get_rxnfc(struct net_device *dev, struct ethtool_rxnfc *info,
void *rules __always_unused)
static int bnx2x_get_rxfh_indir(struct net_device *dev,
struct ethtool_rxfh_indir *indir)
static int bnx2x_set_rxfh_indir(struct net_device *dev,
const struct ethtool_rxfh_indir *indir)
static const struct ethtool_ops bnx2x_ethtool_ops = ;
void bnx2x_set_ethtool_ops(struct net_device *netdev)
