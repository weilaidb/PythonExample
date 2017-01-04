static u32 edca_setting_DL[HT_IOT_PEER_MAX] =
;
static u32 edca_setting_UL[HT_IOT_PEER_MAX] =
;
#define RTK_UL_EDCA 0xa44f
#define RTK_DL_EDCA 0x5e4322
dig_t	dm_digtable;
u8		dm_shadow[16][256] = ;
DRxPathSel	DM_RxPathSelTable;
extern	void	init_hal_dm(struct net_device *dev);
extern	void deinit_hal_dm(struct net_device *dev);
extern void hal_dm_watchdog(struct net_device *dev);
extern	void	init_rate_adaptive(struct net_device *dev);
extern	void	dm_txpower_trackingcallback(struct work_struct *work);
extern	void	dm_cck_txpower_adjust(struct net_device *dev,bool  binch14);
extern	void	dm_restore_dynamic_mechanism_state(struct net_device *dev);
extern	void	dm_backup_dynamic_mechanism_state(struct net_device *dev);
extern	void	dm_change_dynamic_initgain_thresh(struct net_device *dev,
u32		dm_type,
u32		dm_value);
extern	void	DM_ChangeFsyncSetting(struct net_device *dev,
s32		DM_Type,
s32		DM_Value);
extern	void dm_force_tx_fw_info(struct net_device *dev,
u32		force_type,
u32		force_value);
extern	void	dm_init_edca_turbo(struct net_device *dev);
extern	void	dm_rf_operation_test_callback(unsigned long data);
extern	void	dm_rf_pathcheck_workitemcallback(struct work_struct *work);
extern	void dm_fsync_timer_callback(unsigned long data);
extern	void dm_check_fsync(struct net_device *dev);
extern	void	dm_shadow_init(struct net_device *dev);
static	void	dm_check_rate_adaptive(struct net_device *dev);
static	void	dm_init_bandwidth_autoswitch(struct net_device *dev);
static	void	dm_bandwidth_autoswitch(	struct net_device *dev);
static	void	dm_check_txpower_tracking(struct net_device *dev);
static	void	dm_bb_initialgain_restore(struct net_device *dev);
static	void	dm_bb_initialgain_backup(struct net_device *dev);
static	void	dm_dig_init(struct net_device *dev);
static	void	dm_ctrl_initgain_byrssi(struct net_device *dev);
static	void	dm_ctrl_initgain_byrssi_highpwr(struct net_device *dev);
static	void	dm_ctrl_initgain_byrssi_by_driverrssi(	struct net_device *dev);
static	void	dm_ctrl_initgain_byrssi_by_fwfalse_alarm(struct net_device *dev);
static	void	dm_initial_gain(struct net_device *dev);
static	void	dm_pd_th(struct net_device *dev);
static	void	dm_cs_ratio(struct net_device *dev);
static	void dm_init_ctstoself(struct net_device *dev);
static	void	dm_check_edca_turbo(struct net_device *dev);
static	void	dm_check_rfctrl_gpio(struct net_device *dev);
static	void dm_check_pbc_gpio(struct net_device *dev);
static	void	dm_check_rx_path_selection(struct net_device *dev);
static 	void dm_init_rxpath_selection(struct net_device *dev);
static	void dm_rxpath_sel_byrssi(struct net_device *dev);
static void dm_init_fsync(struct net_device *dev);
static void dm_deInit_fsync(struct net_device *dev);
static	void	dm_check_txrateandretrycount(struct net_device *dev);
static	void	dm_init_dynamic_txpower(struct net_device *dev);
static	void	dm_dynamic_txpower(struct net_device *dev);
static	void dm_send_rssi_tofw(struct net_device *dev);
static	void	dm_ctstoself(struct net_device *dev);
extern	void
init_hal_dm(struct net_device *dev)
extern void deinit_hal_dm(struct net_device *dev)
void dm_CheckRxAggregation(struct net_device *dev)
extern  void    hal_dm_watchdog(struct net_device *dev)
extern void init_rate_adaptive(struct net_device * dev)
static void dm_check_rate_adaptive(struct net_device * dev)
static void dm_init_bandwidth_autoswitch(struct net_device * dev)
static void dm_bandwidth_autoswitch(struct net_device * dev)
static u32 OFDMSwingTable[OFDM_Table_Length] = ;
static u8	CCKSwingTable_Ch1_Ch13[CCK_Table_length][8] = ;
static u8	CCKSwingTable_Ch14[CCK_Table_length][8] = ;
static void dm_TXPowerTrackingCallback_TSSI(struct net_device * dev)
static void dm_TXPowerTrackingCallback_ThermalMeter(struct net_device * dev)
extern	void	dm_txpower_trackingcallback(struct work_struct *work)
static void dm_InitializeTXPowerTracking_TSSI(struct net_device *dev)
static void dm_InitializeTXPowerTracking_ThermalMeter(struct net_device *dev)
void dm_initialize_txpower_tracking(struct net_device *dev)
static void dm_CheckTXPowerTracking_TSSI(struct net_device *dev)
static void dm_CheckTXPowerTracking_ThermalMeter(struct net_device *dev)
static void dm_check_txpower_tracking(struct net_device *dev)
static void dm_CCKTxPowerAdjust_TSSI(struct net_device *dev, bool  bInCH14)
static void dm_CCKTxPowerAdjust_ThermalMeter(struct net_device *dev,	bool  bInCH14)
extern void dm_cck_txpower_adjust(
struct net_device *dev,
bool  binch14
)
static void dm_txpower_reset_recovery(
struct net_device *dev
)
extern void dm_restore_dynamic_mechanism_state(struct net_device *dev)
static void dm_bb_initialgain_restore(struct net_device *dev)
extern void dm_backup_dynamic_mechanism_state(struct net_device *dev)
static void dm_bb_initialgain_backup(struct net_device *dev)
extern void dm_change_dynamic_initgain_thresh(struct net_device *dev,
u32		dm_type,
u32		dm_value)
extern	void
dm_change_fsync_setting(
struct net_device *dev,
s32		DM_Type,
s32		DM_Value)
extern void
dm_change_rxpath_selection_setting(
struct net_device *dev,
s32		DM_Type,
s32		DM_Value)
static void dm_dig_init(struct net_device *dev)
static void dm_ctrl_initgain_byrssi(struct net_device *dev)
static void dm_ctrl_initgain_byrssi_by_driverrssi(
struct net_device *dev)
static void dm_ctrl_initgain_byrssi_by_fwfalse_alarm(
struct net_device *dev)
static void dm_ctrl_initgain_byrssi_highpwr(
struct net_device * dev)
static void dm_initial_gain(
struct net_device * dev)
static void dm_pd_th(
struct net_device * dev)
static	void dm_cs_ratio(
struct net_device * dev)
extern void dm_init_edca_turbo(struct net_device * dev)
static void dm_check_edca_turbo(
struct net_device * dev)
extern void DM_CTSToSelfSetting(struct net_device * dev,u32 DM_Type, u32 DM_Value)
static void dm_init_ctstoself(struct net_device * dev)
static void dm_ctstoself(struct net_device *dev)
static void dm_check_rfctrl_gpio(struct net_device * dev)
static	void	dm_check_pbc_gpio(struct net_device *dev)
extern	void	dm_gpio_change_rf_callback(struct work_struct *work)
extern	void	dm_rf_pathcheck_workitemcallback(struct work_struct *work)
static void dm_init_rxpath_selection(struct net_device * dev)
static void dm_rxpath_sel_byrssi(struct net_device * dev)
static	void	dm_check_rx_path_selection(struct net_device *dev)
static void dm_init_fsync (struct net_device *dev)
static void dm_deInit_fsync(struct net_device *dev)
extern void dm_fsync_timer_callback(unsigned long data)
static void dm_StartHWFsync(struct net_device *dev)
static void dm_EndSWFsync(struct net_device *dev)
static void dm_StartSWFsync(struct net_device *dev)
static void dm_EndHWFsync(struct net_device *dev)
void dm_check_fsync(struct net_device *dev)
extern void dm_shadow_init(struct net_device *dev)
static void dm_init_dynamic_txpower(struct net_device *dev)
static void dm_dynamic_txpower(struct net_device *dev)
static void dm_check_txrateandretrycount(struct net_device * dev)
static void dm_send_rssi_tofw(struct net_device *dev)
