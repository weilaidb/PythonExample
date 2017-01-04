#define BIT_DCB_MODE	0x01
#define BIT_PFC		0x02
#define BIT_PG_RX	0x04
#define BIT_PG_TX	0x08
#define BIT_APP_UPCHG	0x10
#define BIT_LINKSPEED   0x80
#define DCB_HW_CHG_RST  0
#define DCB_NO_HW_CHG   1
#define DCB_HW_CHG      2
int ixgbe_copy_dcb_cfg(struct ixgbe_dcb_config *src_dcb_cfg,
struct ixgbe_dcb_config *dst_dcb_cfg, int tc_max)
static u8 ixgbe_dcbnl_get_state(struct net_device *netdev)
static u8 ixgbe_dcbnl_set_state(struct net_device *netdev, u8 state)
static void ixgbe_dcbnl_get_perm_hw_addr(struct net_device *netdev,
u8 *perm_addr)
static void ixgbe_dcbnl_set_pg_tc_cfg_tx(struct net_device *netdev, int tc,
u8 prio, u8 bwg_id, u8 bw_pct,
u8 up_map)
static void ixgbe_dcbnl_set_pg_bwg_cfg_tx(struct net_device *netdev, int bwg_id,
u8 bw_pct)
static void ixgbe_dcbnl_set_pg_tc_cfg_rx(struct net_device *netdev, int tc,
u8 prio, u8 bwg_id, u8 bw_pct,
u8 up_map)
static void ixgbe_dcbnl_set_pg_bwg_cfg_rx(struct net_device *netdev, int bwg_id,
u8 bw_pct)
static void ixgbe_dcbnl_get_pg_tc_cfg_tx(struct net_device *netdev, int tc,
u8 *prio, u8 *bwg_id, u8 *bw_pct,
u8 *up_map)
static void ixgbe_dcbnl_get_pg_bwg_cfg_tx(struct net_device *netdev, int bwg_id,
u8 *bw_pct)
static void ixgbe_dcbnl_get_pg_tc_cfg_rx(struct net_device *netdev, int tc,
u8 *prio, u8 *bwg_id, u8 *bw_pct,
u8 *up_map)
static void ixgbe_dcbnl_get_pg_bwg_cfg_rx(struct net_device *netdev, int bwg_id,
u8 *bw_pct)
static void ixgbe_dcbnl_set_pfc_cfg(struct net_device *netdev, int priority,
u8 setting)
static void ixgbe_dcbnl_get_pfc_cfg(struct net_device *netdev, int priority,
u8 *setting)
static u8 ixgbe_dcbnl_set_all(struct net_device *netdev)
static u8 ixgbe_dcbnl_getcap(struct net_device *netdev, int capid, u8 *cap)
static u8 ixgbe_dcbnl_getnumtcs(struct net_device *netdev, int tcid, u8 *num)
static u8 ixgbe_dcbnl_setnumtcs(struct net_device *netdev, int tcid, u8 num)
static u8 ixgbe_dcbnl_getpfcstate(struct net_device *netdev)
static void ixgbe_dcbnl_setpfcstate(struct net_device *netdev, u8 state)
static u8 ixgbe_dcbnl_getapp(struct net_device *netdev, u8 idtype, u16 id)
static int ixgbe_dcbnl_ieee_getets(struct net_device *dev,
struct ieee_ets *ets)
static int ixgbe_dcbnl_ieee_setets(struct net_device *dev,
struct ieee_ets *ets)
static int ixgbe_dcbnl_ieee_getpfc(struct net_device *dev,
struct ieee_pfc *pfc)
static int ixgbe_dcbnl_ieee_setpfc(struct net_device *dev,
struct ieee_pfc *pfc)
static int ixgbe_dcbnl_ieee_setapp(struct net_device *dev,
struct dcb_app *app)
static u8 ixgbe_dcbnl_getdcbx(struct net_device *dev)
static u8 ixgbe_dcbnl_setdcbx(struct net_device *dev, u8 mode)
const struct dcbnl_rtnl_ops dcbnl_ops = ;
