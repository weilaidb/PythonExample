static void bnx2x_dcbx_stop_hw_tx(struct bnx2x *bp);
static void bnx2x_pfc_set_pfc(struct bnx2x *bp);
static void bnx2x_dcbx_update_ets_params(struct bnx2x *bp);
static void bnx2x_dcbx_resume_hw_tx(struct bnx2x *bp);
static void bnx2x_dcbx_get_ets_pri_pg_tbl(struct bnx2x *bp,
u32 *set_configuration_ets_pg,
u32 *pri_pg_tbl);
static void bnx2x_dcbx_get_num_pg_traf_type(struct bnx2x *bp,
u32 *pg_pri_orginal_spread,
struct pg_help_data *help_data);
static void bnx2x_dcbx_fill_cos_params(struct bnx2x *bp,
struct pg_help_data *help_data,
struct dcbx_ets_feature *ets,
u32 *pg_pri_orginal_spread);
static void bnx2x_dcbx_separate_pauseable_from_non(struct bnx2x *bp,
struct cos_help_data *cos_data,
u32 *pg_pri_orginal_spread,
struct dcbx_ets_feature *ets);
static void bnx2x_pfc_fw_struct_e2(struct bnx2x *bp);
static void bnx2x_pfc_set(struct bnx2x *bp)
static void bnx2x_pfc_clear(struct bnx2x *bp)
static void  bnx2x_dump_dcbx_drv_param(struct bnx2x *bp,
struct dcbx_features *features,
u32 error)
static void bnx2x_dcbx_get_ap_priority(struct bnx2x *bp,
u8 pri_bitmap,
u8 llfc_traf_type)
static void bnx2x_dcbx_get_ap_feature(struct bnx2x *bp,
struct dcbx_app_priority_feature *app,
u32 error)
static void bnx2x_dcbx_get_ets_feature(struct bnx2x *bp,
struct dcbx_ets_feature *ets,
u32 error)
static void  bnx2x_dcbx_get_pfc_feature(struct bnx2x *bp,
struct dcbx_pfc_feature *pfc, u32 error)
static void bnx2x_get_dcbx_drv_param(struct bnx2x *bp,
struct dcbx_features *features,
u32 error)
#define DCBX_LOCAL_MIB_MAX_TRY_READ		(100)
static int bnx2x_dcbx_read_mib(struct bnx2x *bp,
u32 *base_mib_addr,
u32 offset,
int read_mib_type)
static void bnx2x_pfc_set_pfc(struct bnx2x *bp)
static void bnx2x_dcbx_stop_hw_tx(struct bnx2x *bp)
static void bnx2x_dcbx_resume_hw_tx(struct bnx2x *bp)
static void bnx2x_dcbx_update_ets_params(struct bnx2x *bp)
static int bnx2x_dcbx_read_shmem_remote_mib(struct bnx2x *bp)
static int bnx2x_dcbx_read_shmem_neg_results(struct bnx2x *bp)
static inline
u8 bnx2x_dcbx_dcbnl_app_up(struct dcbx_app_priority_entry *ent)
static inline
u8 bnx2x_dcbx_dcbnl_app_idtype(struct dcbx_app_priority_entry *ent)
static inline
void bnx2x_dcbx_invalidate_local_apps(struct bnx2x *bp)
int bnx2x_dcbnl_update_applist(struct bnx2x *bp, bool delall)
void bnx2x_dcbx_set_params(struct bnx2x *bp, u32 state)
#define LLDP_STATS_OFFSET(bp)		(BP_PORT(bp)*\
sizeof(struct lldp_dcbx_stat))
#define LLDP_PARAMS_OFFSET(bp)		(BP_PORT(bp)*sizeof(struct lldp_params))
#define LLDP_ADMIN_MIB_OFFSET(bp)	(PORT_MAX*sizeof(struct lldp_params) + \
BP_PORT(bp)*sizeof(struct lldp_admin_mib))
static void bnx2x_dcbx_lldp_updated_params(struct bnx2x *bp,
u32 dcbx_lldp_params_offset)
static void bnx2x_dcbx_admin_mib_updated_params(struct bnx2x *bp,
u32 dcbx_lldp_params_offset)
void bnx2x_dcbx_set_state(struct bnx2x *bp, bool dcb_on, u32 dcbx_enabled)
void bnx2x_dcbx_init_params(struct bnx2x *bp)
void bnx2x_dcbx_init(struct bnx2x *bp)
void bnx2x_dcb_init_intmem_pfc(struct bnx2x *bp)
static void
bnx2x_dcbx_print_cos_params(struct bnx2x *bp,
struct flow_control_configuration *pfc_fw_cfg)
static void bnx2x_dcbx_get_num_pg_traf_type(struct bnx2x *bp,
u32 *pg_pri_orginal_spread,
struct pg_help_data *help_data)
static void bnx2x_dcbx_ets_disabled_entry_data(struct bnx2x *bp,
struct cos_help_data *cos_data,
u32 pri_join_mask)
static inline void bnx2x_dcbx_add_to_cos_bw(struct bnx2x *bp,
struct cos_entry_help_data *data,
u8 pg_bw)
static void bnx2x_dcbx_separate_pauseable_from_non(struct bnx2x *bp,
struct cos_help_data *cos_data,
u32 *pg_pri_orginal_spread,
struct dcbx_ets_feature *ets)
#define POWER_OF_2(x)	((0 != x) && (0 == (x & (x-1))))
static void bxn2x_dcbx_single_pg_to_cos_params(struct bnx2x *bp,
struct pg_help_data *pg_help_data,
struct cos_help_data *cos_data,
u32 pri_join_mask,
u8 num_of_dif_pri)
static void bnx2x_dcbx_two_pg_to_cos_params(
struct bnx2x		*bp,
struct  pg_help_data	*pg_help_data,
struct dcbx_ets_feature	*ets,
struct cos_help_data	*cos_data,
u32			*pg_pri_orginal_spread,
u32				pri_join_mask,
u8				num_of_dif_pri)
static void bnx2x_dcbx_three_pg_to_cos_params(
struct bnx2x		*bp,
struct pg_help_data	*pg_help_data,
struct dcbx_ets_feature	*ets,
struct cos_help_data	*cos_data,
u32			*pg_pri_orginal_spread,
u32			pri_join_mask,
u8			num_of_dif_pri)
static void bnx2x_dcbx_fill_cos_params(struct bnx2x *bp,
struct pg_help_data *help_data,
struct dcbx_ets_feature *ets,
u32 *pg_pri_orginal_spread)
static void bnx2x_dcbx_get_ets_pri_pg_tbl(struct bnx2x *bp,
u32 *set_configuration_ets_pg,
u32 *pri_pg_tbl)
static void bnx2x_pfc_fw_struct_e2(struct bnx2x *bp)
#define BNX2X_DCBX_CAPS		(DCB_CAP_DCBX_LLD_MANAGED | \
DCB_CAP_DCBX_VER_CEE | DCB_CAP_DCBX_STATIC)
static inline bool bnx2x_dcbnl_set_valid(struct bnx2x *bp)
static u8 bnx2x_dcbnl_get_state(struct net_device *netdev)
static u8 bnx2x_dcbnl_set_state(struct net_device *netdev, u8 state)
static void bnx2x_dcbnl_get_perm_hw_addr(struct net_device *netdev,
u8 *perm_addr)
static void bnx2x_dcbnl_set_pg_tccfg_tx(struct net_device *netdev, int prio,
u8 prio_type, u8 pgid, u8 bw_pct,
u8 up_map)
static void bnx2x_dcbnl_set_pg_bwgcfg_tx(struct net_device *netdev,
int pgid, u8 bw_pct)
static void bnx2x_dcbnl_set_pg_tccfg_rx(struct net_device *netdev, int prio,
u8 prio_type, u8 pgid, u8 bw_pct,
u8 up_map)
static void bnx2x_dcbnl_set_pg_bwgcfg_rx(struct net_device *netdev,
int pgid, u8 bw_pct)
static void bnx2x_dcbnl_get_pg_tccfg_tx(struct net_device *netdev, int prio,
u8 *prio_type, u8 *pgid, u8 *bw_pct,
u8 *up_map)
static void bnx2x_dcbnl_get_pg_bwgcfg_tx(struct net_device *netdev,
int pgid, u8 *bw_pct)
static void bnx2x_dcbnl_get_pg_tccfg_rx(struct net_device *netdev, int prio,
u8 *prio_type, u8 *pgid, u8 *bw_pct,
u8 *up_map)
static void bnx2x_dcbnl_get_pg_bwgcfg_rx(struct net_device *netdev,
int pgid, u8 *bw_pct)
static void bnx2x_dcbnl_set_pfc_cfg(struct net_device *netdev, int prio,
u8 setting)
static void bnx2x_dcbnl_get_pfc_cfg(struct net_device *netdev, int prio,
u8 *setting)
static u8 bnx2x_dcbnl_set_all(struct net_device *netdev)
static u8 bnx2x_dcbnl_get_cap(struct net_device *netdev, int capid, u8 *cap)
static u8 bnx2x_dcbnl_get_numtcs(struct net_device *netdev, int tcid, u8 *num)
static u8 bnx2x_dcbnl_set_numtcs(struct net_device *netdev, int tcid, u8 num)
static u8  bnx2x_dcbnl_get_pfc_state(struct net_device *netdev)
static void bnx2x_dcbnl_set_pfc_state(struct net_device *netdev, u8 state)
static void bnx2x_admin_app_set_ent(
struct bnx2x_admin_priority_app_table *app_ent,
u8 idtype, u16 idval, u8 up)
static bool bnx2x_admin_app_is_equal(
struct bnx2x_admin_priority_app_table *app_ent,
u8 idtype, u16 idval)
static int bnx2x_set_admin_app_up(struct bnx2x *bp, u8 idtype, u16 idval, u8 up)
static u8 bnx2x_dcbnl_set_app_up(struct net_device *netdev, u8 idtype,
u16 idval, u8 up)
static u8 bnx2x_dcbnl_get_dcbx(struct net_device *netdev)
static u8 bnx2x_dcbnl_set_dcbx(struct net_device *netdev, u8 state)
static u8 bnx2x_dcbnl_get_featcfg(struct net_device *netdev, int featid,
u8 *flags)
static u8 bnx2x_dcbnl_set_featcfg(struct net_device *netdev, int featid,
u8 flags)
static int bnx2x_peer_appinfo(struct net_device *netdev,
struct dcb_peer_app_info *info, u16* app_count)
static int bnx2x_peer_apptable(struct net_device *netdev,
struct dcb_app *table)
static int bnx2x_cee_peer_getpg(struct net_device *netdev, struct cee_pg *pg)
static int bnx2x_cee_peer_getpfc(struct net_device *netdev,
struct cee_pfc *pfc)
const struct dcbnl_rtnl_ops bnx2x_dcbnl_ops = ;
