#define __R8192UDM_H__
#define		DM_DIG_THRESH_HIGH					40
#define		DM_DIG_THRESH_LOW					35
#define		DM_DIG_HIGH_PWR_THRESH_HIGH		75
#define		DM_DIG_HIGH_PWR_THRESH_LOW		70
#define		BW_AUTO_SWITCH_HIGH_LOW			25
#define		BW_AUTO_SWITCH_LOW_HIGH			30
#define		DM_check_fsync_time_interval				500
#define		DM_DIG_BACKOFF				12
#define		DM_DIG_MAX					0x36
#define		DM_DIG_MIN					0x1c
#define		DM_DIG_MIN_Netcore			0x12
#define		RxPathSelection_SS_TH_low		30
#define		RxPathSelection_diff_TH			18
#define		RateAdaptiveTH_High			50
#define		RateAdaptiveTH_Low_20M		30
#define		RateAdaptiveTH_Low_40M		10
#define		VeryLowRSSI					15
#define		CTSToSelfTHVal					30
#define		E_FOR_TX_POWER_TRACK               300
#define		TX_POWER_NEAR_FIELD_THRESH_HIGH		68
#define		TX_POWER_NEAR_FIELD_THRESH_LOW		62
#define         TX_POWER_ATHEROAP_THRESH_HIGH           78
#define 	TX_POWER_ATHEROAP_THRESH_LOW		72
#define 		Current_Tx_Rate_Reg         0x1b8
#define 		Initial_Tx_Rate_Reg         	  0x1b9
#define 		Tx_Retry_Count_Reg         0x1ac
#define		RegC38_TH				 20
typedef struct _dynamic_initial_gain_threshold_
dig_t;
typedef enum tag_dynamic_init_gain_state_definition
dm_dig_sta_e;
typedef enum tag_dynamic_ratr_state_definition
dm_ratr_sta_e;
typedef enum tag_dynamic_init_gain_operation_type_definition
dm_dig_op_e;
typedef enum tag_dig_algorithm_definition
dm_dig_alg_e;
typedef enum tag_dig_dbgmode_definition
dm_dig_dbg_e;
typedef enum tag_dig_connect_definition
dm_dig_connect_e;
typedef enum tag_dig_packetdetection_threshold_definition
dm_dig_pd_th_e;
typedef enum tag_dig_cck_cs_ratio_state_definition
dm_dig_cs_ratio_e;
typedef struct _Dynamic_Rx_Path_Selection_
DRxPathSel;
typedef enum tag_CCK_Rx_Path_Method_Definition
DM_CCK_Rx_Path_Method;
typedef enum tag_DM_DbgMode_Definition
DM_DBG_E;
typedef struct tag_Tx_Config_Cmd_Format
DCMD_TXCMD_T, *PDCMD_TXCMD_T;
extern	dig_t	dm_digtable;
extern	u8		dm_shadow[16][256];
extern DRxPathSel      DM_RxPathSelTable;
extern  void    init_hal_dm(struct net_device *dev);
extern  void deinit_hal_dm(struct net_device *dev);
extern void hal_dm_watchdog(struct net_device *dev);
extern  void    init_rate_adaptive(struct net_device *dev);
extern  void    dm_txpower_trackingcallback(struct work_struct *work);
extern  void    dm_restore_dynamic_mechanism_state(struct net_device *dev);
extern  void    dm_backup_dynamic_mechanism_state(struct net_device *dev);
extern  void    dm_change_dynamic_initgain_thresh(struct net_device *dev,
u32 dm_type, u32 dm_value);
extern  void    dm_force_tx_fw_info(struct net_device *dev,u32 force_type, u32 force_value);
extern  void    dm_init_edca_turbo(struct net_device *dev);
extern  void    dm_rf_operation_test_callback(unsigned long data);
extern  void    dm_rf_pathcheck_workitemcallback(struct work_struct *work);
extern  void dm_fsync_timer_callback(unsigned long data);
extern	void	dm_cck_txpower_adjust(struct net_device *dev,bool  binch14);
extern  void    dm_shadow_init(struct net_device *dev);
extern void dm_initialize_txpower_tracking(struct net_device *dev);
