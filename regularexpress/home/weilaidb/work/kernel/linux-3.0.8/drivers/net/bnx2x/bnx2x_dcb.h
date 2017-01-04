#define BNX2X_DCB_H
#define LLFC_DRIVER_TRAFFIC_TYPE_MAX 3
struct bnx2x_dcbx_app_params ;
#define E2_NUM_OF_COS			2
#define BNX2X_DCBX_COS_NOT_STRICT	0
#define BNX2X_DCBX_COS_LOW_STRICT	1
#define BNX2X_DCBX_COS_HIGH_STRICT	2
struct bnx2x_dcbx_cos_params ;
struct bnx2x_dcbx_pg_params ;
struct bnx2x_dcbx_pfc_params ;
struct bnx2x_dcbx_port_params ;
#define BNX2X_DCBX_CONFIG_INV_VALUE			(0xFFFFFFFF)
#define BNX2X_DCBX_OVERWRITE_SETTINGS_DISABLE		0
#define BNX2X_DCBX_OVERWRITE_SETTINGS_ENABLE		1
#define BNX2X_DCBX_OVERWRITE_SETTINGS_INVALID	(BNX2X_DCBX_CONFIG_INV_VALUE)
struct bnx2x_config_lldp_params ;
struct bnx2x_admin_priority_app_table ;
struct bnx2x_config_dcbx_params ;
#define GET_FLAGS(flags, bits)		((flags) & (bits))
#define SET_FLAGS(flags, bits)		((flags) |= (bits))
#define RESET_FLAGS(flags, bits)	((flags) &= ~(bits))
enum ;
#define ETH_TYPE_FCOE		(0x8906)
#define TCP_PORT_ISCSI		(0xCBC)
#define PFC_VALUE_FRAME_SIZE				(512)
#define PFC_QUANTA_IN_NANOSEC_FROM_SPEED_MEGA(mega_speed)  \
((1000 * PFC_VALUE_FRAME_SIZE)/(mega_speed))
#define PFC_BRB1_REG_HIGH_LLFC_LOW_THRESHOLD			130
#define PFC_BRB1_REG_HIGH_LLFC_HIGH_THRESHOLD			170
struct cos_entry_help_data ;
struct cos_help_data ;
#define DCBX_ILLEGAL_PG				(0xFF)
#define DCBX_PFC_PRI_MASK			(0xFF)
#define DCBX_STRICT_PRIORITY			(15)
#define DCBX_INVALID_COS_BW			(0xFFFFFFFF)
#define DCBX_PFC_PRI_NON_PAUSE_MASK(bp)		\
((bp)->dcbx_port_params.pfc.priority_non_pauseable_mask)
#define DCBX_PFC_PRI_PAUSE_MASK(bp)		\
((u8)~DCBX_PFC_PRI_NON_PAUSE_MASK(bp))
#define DCBX_PFC_PRI_GET_PAUSE(bp, pg_pri)	\
((pg_pri) & (DCBX_PFC_PRI_PAUSE_MASK(bp)))
#define DCBX_PFC_PRI_GET_NON_PAUSE(bp, pg_pri)	\
(DCBX_PFC_PRI_NON_PAUSE_MASK(bp) & (pg_pri))
#define IS_DCBX_PFC_PRI_ONLY_PAUSE(bp, pg_pri)	\
(pg_pri == DCBX_PFC_PRI_GET_PAUSE((bp), (pg_pri)))
#define IS_DCBX_PFC_PRI_ONLY_NON_PAUSE(bp, pg_pri)\
((pg_pri) == DCBX_PFC_PRI_GET_NON_PAUSE((bp), (pg_pri)))
#define IS_DCBX_PFC_PRI_MIX_PAUSE(bp, pg_pri)	\
(!(IS_DCBX_PFC_PRI_ONLY_NON_PAUSE((bp), (pg_pri)) || \
IS_DCBX_PFC_PRI_ONLY_PAUSE((bp), (pg_pri))))
struct pg_entry_help_data ;
struct pg_help_data ;
struct bnx2x;
void bnx2x_dcb_init_intmem_pfc(struct bnx2x *bp);
void bnx2x_dcbx_update(struct work_struct *work);
void bnx2x_dcbx_init_params(struct bnx2x *bp);
void bnx2x_dcbx_set_state(struct bnx2x *bp, bool dcb_on, u32 dcbx_enabled);
enum ;
void bnx2x_dcbx_set_params(struct bnx2x *bp, u32 state);
extern const struct dcbnl_rtnl_ops bnx2x_dcbnl_ops;
int bnx2x_dcbnl_update_applist(struct bnx2x *bp, bool delall);
