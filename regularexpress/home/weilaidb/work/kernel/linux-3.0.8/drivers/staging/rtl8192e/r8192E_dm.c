#define DRV_NAME "rtl819xE"
static const u32 edca_setting_DL[HT_IOT_PEER_MAX] =
;
static const u32 edca_setting_UL[HT_IOT_PEER_MAX] =
;
#define RTK_UL_EDCA 0xa44f
#define RTK_DL_EDCA 0x5e4322
dig_t	dm_digtable;
DRxPathSel	DM_RxPathSelTable;
void dm_gpio_change_rf_callback(struct work_struct *work);
static void dm_check_rate_adaptive(struct r8192_priv *priv);
static void dm_init_bandwidth_autoswitch(struct r8192_priv *priv);
static void dm_bandwidth_autoswitch(struct r8192_priv *priv);
static void dm_check_txpower_tracking(struct r8192_priv *priv);
static void dm_dig_init(struct r8192_priv *priv);
static void dm_ctrl_initgain_byrssi(struct r8192_priv *priv);
static void dm_ctrl_initgain_byrssi_highpwr(struct r8192_priv *priv);
static void dm_ctrl_initgain_byrssi_by_driverrssi(struct r8192_priv *priv);
static void dm_ctrl_initgain_byrssi_by_fwfalse_alarm(struct r8192_priv *priv);
static void dm_initial_gain(struct r8192_priv *priv);
static void dm_pd_th(struct r8192_priv *priv);
static void dm_cs_ratio(struct r8192_priv *priv);
static void dm_init_ctstoself(struct r8192_priv *priv);
static void dm_check_edca_turbo(struct r8192_priv *priv);
static void dm_init_edca_turbo(struct r8192_priv *priv);
static void dm_check_rfctrl_gpio(struct r8192_priv *priv);
static void dm_check_rx_path_selection(struct r8192_priv *priv);
static void dm_init_rxpath_selection(struct r8192_priv *priv);
static void dm_rxpath_sel_byrssi(struct r8192_priv *priv);
static void dm_init_fsync(struct r8192_priv *priv);
static void dm_deInit_fsync(struct r8192_priv *priv);
static void dm_check_txrateandretrycount(struct r8192_priv *priv);
static void dm_check_fsync(struct r8192_priv *priv);
static void dm_init_dynamic_txpower(struct r8192_priv *priv);
static void dm_dynamic_txpower(struct r8192_priv *priv);
static void dm_send_rssi_tofw(struct r8192_priv *priv);
static void dm_ctstoself(struct r8192_priv *priv);
static void dm_fsync_timer_callback(unsigned long data);
void init_hal_dm(struct r8192_priv *priv)
void deinit_hal_dm(struct r8192_priv *priv)
void hal_dm_watchdog(struct r8192_priv *priv)
void init_rate_adaptive(struct r8192_priv *priv)
static void dm_check_rate_adaptive(struct r8192_priv *priv)
static void dm_init_bandwidth_autoswitch(struct r8192_priv *priv)
static void dm_bandwidth_autoswitch(struct r8192_priv *priv)
static const u32 OFDMSwingTable[OFDM_Table_Length] = ;
static const u8 CCKSwingTable_Ch1_Ch13[CCK_Table_length][8] = ;
static const u8 CCKSwingTable_Ch14[CCK_Table_length][8] = ;
#define		Pw_Track_Flag				0x11d
#define		Tssi_Mea_Value				0x13c
#define		Tssi_Report_Value1			0x134
#define		Tssi_Report_Value2			0x13e
#define		FW_Busy_Flag				0x13f
static void dm_TXPowerTrackingCallback_TSSI(struct r8192_priv *priv)
static void dm_TXPowerTrackingCallback_ThermalMeter(struct r8192_priv *priv)
void dm_txpower_trackingcallback(struct work_struct *work)
static const txbbgain_struct rtl8192_txbbgain_table[] = ;
static const ccktxbbgain_struct rtl8192_cck_txbbgain_table[] = ;
static const ccktxbbgain_struct rtl8192_cck_txbbgain_ch14_table[] = ;
static void dm_InitializeTXPowerTracking_TSSI(struct r8192_priv *priv)
static void dm_InitializeTXPowerTracking_ThermalMeter(struct r8192_priv *priv)
void dm_initialize_txpower_tracking(struct r8192_priv *priv)
static void dm_CheckTXPowerTracking_TSSI(struct r8192_priv *priv)
static void dm_CheckTXPowerTracking_ThermalMeter(struct r8192_priv *priv)
static void dm_check_txpower_tracking(struct r8192_priv *priv)
static void dm_CCKTxPowerAdjust_TSSI(struct r8192_priv *priv, bool bInCH14)
static void dm_CCKTxPowerAdjust_ThermalMeter(struct r8192_priv *priv,
bool bInCH14)
void dm_cck_txpower_adjust(struct r8192_priv *priv, bool binch14)
static void dm_dig_init(struct r8192_priv *priv)
static void dm_ctrl_initgain_byrssi(struct r8192_priv *priv)
static void dm_ctrl_initgain_byrssi_by_driverrssi(struct r8192_priv *priv)
static void dm_ctrl_initgain_byrssi_by_fwfalse_alarm(struct r8192_priv *priv)
static void dm_ctrl_initgain_byrssi_highpwr(struct r8192_priv *priv)
static void dm_initial_gain(struct r8192_priv *priv)
static void dm_pd_th(struct r8192_priv *priv)
static void dm_cs_ratio(struct r8192_priv *priv)
void dm_init_edca_turbo(struct r8192_priv *priv)
static void dm_check_edca_turbo(struct r8192_priv *priv)
static void dm_init_ctstoself(struct r8192_priv *priv)
static void dm_ctstoself(struct r8192_priv *priv)
static void dm_check_rfctrl_gpio(struct r8192_priv *priv)
void dm_gpio_change_rf_callback(struct work_struct *work)
void dm_rf_pathcheck_workitemcallback(struct work_struct *work)
static void dm_init_rxpath_selection(struct r8192_priv *priv)
static void dm_rxpath_sel_byrssi(struct r8192_priv *priv)
static void dm_check_rx_path_selection(struct r8192_priv *priv)
static void dm_init_fsync(struct r8192_priv *priv)
static void dm_deInit_fsync(struct r8192_priv *priv)
static void dm_fsync_timer_callback(unsigned long data)
static void dm_StartHWFsync(struct r8192_priv *priv)
static void dm_EndSWFsync(struct r8192_priv *priv)
static void dm_StartSWFsync(struct r8192_priv *priv)
static void dm_EndHWFsync(struct r8192_priv *priv)
static void dm_check_fsync(struct r8192_priv *priv)
static void dm_init_dynamic_txpower(struct r8192_priv *priv)
static void dm_dynamic_txpower(struct r8192_priv *priv)
static void dm_check_txrateandretrycount(struct r8192_priv *priv)
static void dm_send_rssi_tofw(struct r8192_priv *priv)
