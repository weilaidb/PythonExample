#define	_wlioctl_h_
#define INTF_NAME_SIZ	16
#define	WL_BSS_INFO_VERSION	108
typedef struct wl_bss_info  wl_bss_info_t;
typedef struct wlc_ssid  wlc_ssid_t;
typedef struct chan_scandata  chan_scandata_t;
typedef enum wl_scan_type  wl_scan_type_t;
#define WLC_EXTDSCAN_MAX_SSID		5
#define WL_BSS_FLAGS_FROM_BEACON	0x01
#define WL_BSS_FLAGS_FROM_CACHE		0x02
#define WL_BSS_FLAGS_RSSI_ONCHANNEL     0x04
typedef struct wl_extdscan_params  wl_extdscan_params_t;
#define WL_EXTDSCAN_PARAMS_FIXED_SIZE 	(sizeof(wl_extdscan_params_t) - sizeof(chan_scandata_t))
#define WL_BSSTYPE_INFRA 1
#define WL_BSSTYPE_INDEP 0
#define WL_BSSTYPE_ANY   2
#define WL_SCANFLAGS_PASSIVE 0x01
#define WL_SCANFLAGS_RESERVED 0x02
#define WL_SCANFLAGS_PROHIBITED 0x04
typedef struct wl_scan_params  wl_scan_params_t;
#define WL_SCAN_PARAMS_FIXED_SIZE 64
#define WL_SCAN_PARAMS_COUNT_MASK 0x0000ffff
#define WL_SCAN_PARAMS_NSSID_SHIFT 16
#define WL_SCAN_ACTION_START      1
#define WL_SCAN_ACTION_CONTINUE   2
#define WL_SCAN_ACTION_ABORT      3
#define ISCAN_REQ_VERSION 1
typedef struct wl_iscan_params  wl_iscan_params_t;
#define WL_ISCAN_PARAMS_FIXED_SIZE (offsetof(wl_iscan_params_t, params) + sizeof(wlc_ssid_t))
typedef struct wl_scan_results  wl_scan_results_t;
#define WL_SCAN_RESULTS_FIXED_SIZE (sizeof(wl_scan_results_t) - sizeof(wl_bss_info_t))
#define WL_SCAN_RESULTS_SUCCESS	0
#define WL_SCAN_RESULTS_PARTIAL	1
#define WL_SCAN_RESULTS_PENDING	2
#define WL_SCAN_RESULTS_ABORTED	3
#define WL_SCAN_RESULTS_NO_MEM	4
#define ESCAN_REQ_VERSION 1
typedef struct wl_escan_params  wl_escan_params_t;
#define WL_ESCAN_PARAMS_FIXED_SIZE (offsetof(wl_escan_params_t, params) + sizeof(wlc_ssid_t))
typedef struct wl_escan_result  wl_escan_result_t;
#define WL_ESCAN_RESULTS_FIXED_SIZE (sizeof(wl_escan_result_t) - sizeof(wl_bss_info_t))
typedef struct wl_iscan_results  wl_iscan_results_t;
#define WL_ISCAN_RESULTS_FIXED_SIZE \
(WL_SCAN_RESULTS_FIXED_SIZE + offsetof(wl_iscan_results_t, results))
typedef struct wl_probe_params  wl_probe_params_t;
#define WL_NUMRATES		16
typedef struct wl_rateset  wl_rateset_t;
typedef struct wl_rateset_args  wl_rateset_args_t;
typedef struct wl_u32_list  wl_u32_list_t;
typedef struct wl_assoc_params  wl_assoc_params_t;
#define WL_ASSOC_PARAMS_FIXED_SIZE 	(sizeof(wl_assoc_params_t) - sizeof(chanspec_t))
typedef wl_assoc_params_t wl_reassoc_params_t;
#define WL_REASSOC_PARAMS_FIXED_SIZE	WL_ASSOC_PARAMS_FIXED_SIZE
typedef struct wl_join_params  wl_join_params_t;
#define WL_JOIN_PARAMS_FIXED_SIZE 	(sizeof(wl_join_params_t) - sizeof(chanspec_t))
#define NRATE_MCS_INUSE	0x00000080
#define NRATE_RATE_MASK 0x0000007f
#define NRATE_STF_MASK	0x0000ff00
#define NRATE_STF_SHIFT	8
#define NRATE_OVERRIDE	0x80000000
#define NRATE_OVERRIDE_MCS_ONLY 0x40000000
#define NRATE_SGI_MASK  0x00800000
#define NRATE_SGI_SHIFT 23
#define NRATE_LDPC_CODING 0x00400000
#define NRATE_LDPC_SHIFT 22
#define NRATE_STF_SISO	0
#define NRATE_STF_CDD	1
#define NRATE_STF_STBC	2
#define NRATE_STF_SDM	3
#define ANTENNA_NUM_1	1
#define ANTENNA_NUM_2	2
#define ANTENNA_NUM_3	3
#define ANTENNA_NUM_4	4
#define ANT_SELCFG_AUTO		0x80
#define ANT_SELCFG_MASK		0x33
#define ANT_SELCFG_MAX		4
#define ANT_SELCFG_TX_UNICAST	0
#define ANT_SELCFG_RX_UNICAST	1
#define ANT_SELCFG_TX_DEF	2
#define ANT_SELCFG_RX_DEF	3
#define MAX_STREAMS_SUPPORTED	4
typedef struct  wlc_antselcfg_t;
#define HIGHEST_SINGLE_STREAM_MCS	7
#define MAX_CCA_CHANNELS 38
#define MAX_CCA_SECS     60
#define IBSS_MED        15
#define IBSS_HI         25
#define OBSS_MED        12
#define OBSS_HI         25
#define INTERFER_MED    5
#define INTERFER_HI     10
#define  CCA_FLAG_2G_ONLY		0x01
#define  CCA_FLAG_5G_ONLY		0x02
#define  CCA_FLAG_IGNORE_DURATION	0x04
#define  CCA_FLAGS_PREFER_1_6_11	0x10
#define  CCA_FLAG_IGNORE_INTERFER 	0x20
#define CCA_ERRNO_BAND 		1
#define CCA_ERRNO_DURATION	2
#define CCA_ERRNO_PREF_CHAN	3
#define CCA_ERRNO_INTERFER	4
#define CCA_ERRNO_TOO_FEW	5
typedef struct  cca_congest_t;
typedef struct  cca_congest_channel_req_t;
#define WLC_CNTRY_BUF_SZ	4
typedef struct wl_country  wl_country_t;
typedef struct wl_channels_in_country  wl_channels_in_country_t;
typedef struct wl_country_list  wl_country_list_t;
#define WL_NUM_RPI_BINS		8
#define WL_RM_TYPE_BASIC	1
#define WL_RM_TYPE_CCA		2
#define WL_RM_TYPE_RPI		3
#define WL_RM_FLAG_PARALLEL	(1<<0)
#define WL_RM_FLAG_LATE		(1<<1)
#define WL_RM_FLAG_INCAPABLE	(1<<2)
#define WL_RM_FLAG_REFUSED	(1<<3)
typedef struct wl_rm_req_elt  wl_rm_req_elt_t;
typedef struct wl_rm_req  wl_rm_req_t;
#define WL_RM_REQ_FIXED_LEN	offsetof(wl_rm_req_t, req)
typedef struct wl_rm_rep_elt  wl_rm_rep_elt_t;
#define WL_RM_REP_ELT_FIXED_LEN	24
#define WL_RPI_REP_BIN_NUM 8
typedef struct wl_rm_rpi_rep  wl_rm_rpi_rep_t;
typedef struct wl_rm_rep  wl_rm_rep_t;
#define WL_RM_REP_FIXED_LEN	8
#define	CRYPTO_ALGO_OFF			0
#define	CRYPTO_ALGO_WEP1		1
#define	CRYPTO_ALGO_TKIP		2
#define	CRYPTO_ALGO_WEP128		3
#define CRYPTO_ALGO_AES_CCM		4
#define CRYPTO_ALGO_AES_RESERVED1	5
#define CRYPTO_ALGO_AES_RESERVED2	6
#define CRYPTO_ALGO_NALG		7
#define WSEC_GEN_MIC_ERROR	0x0001
#define WSEC_GEN_REPLAY		0x0002
#define WSEC_GEN_ICV_ERROR	0x0004
#define WL_SOFT_KEY	(1 << 0)
#define WL_PRIMARY_KEY	(1 << 1)
#define WL_KF_RES_4	(1 << 4)
#define WL_KF_RES_5	(1 << 5)
#define WL_IBSS_PEER_GROUP_KEY	(1 << 6)
typedef struct wl_wsec_key  wl_wsec_key_t;
#define WSEC_MIN_PSK_LEN	8
#define WSEC_MAX_PSK_LEN	64
#define WSEC_PASSPHRASE		(1<<0)
typedef struct  wsec_pmk_t;
#define WEP_ENABLED		0x0001
#define TKIP_ENABLED		0x0002
#define AES_ENABLED		0x0004
#define WSEC_SWFLAG		0x0008
#define SES_OW_ENABLED		0x0040
#define WPA_AUTH_DISABLED	0x0000
#define WPA_AUTH_NONE		0x0001
#define WPA_AUTH_UNSPECIFIED	0x0002
#define WPA_AUTH_PSK		0x0004
#define WPA_AUTH_RESERVED1	0x0008
#define WPA_AUTH_RESERVED2	0x0010
#define WPA2_AUTH_PSK		0x0080
#define WPA2_AUTH_RESERVED3	0x0200
#define WPA2_AUTH_RESERVED4	0x0400
#define WPA2_AUTH_RESERVED5	0x0800
#define	MAXPMKID		16
typedef struct _pmkid  pmkid_t;
typedef struct _pmkid_list  pmkid_list_t;
typedef struct _pmkid_cand  pmkid_cand_t;
typedef struct _pmkid_cand_list  pmkid_cand_list_t;
typedef struct wl_led_info  wl_led_info_t;
typedef struct  rw_reg_t;
typedef struct  scb_val_t;
typedef struct channel_info  channel_info_t;
struct maclist ;
typedef struct wl_ioctl  wl_ioctl_t;
typedef struct wlc_rev_info  wlc_rev_info_t;
#define WL_REV_INFO_LEGACY_LENGTH	48
#define	WLC_IOCTL_SMLEN			256
#define WLC_IOCTL_MEDLEN		1536
#define	WLC_IOCTL_MAXLEN	8192
#define WLC_GET_MAGIC				0
#define WLC_GET_VERSION				1
#define WLC_UP					2
#define WLC_DOWN				3
#define WLC_GET_LOOP				4
#define WLC_SET_LOOP				5
#define WLC_DUMP				6
#define WLC_GET_MSGLEVEL			7
#define WLC_SET_MSGLEVEL			8
#define WLC_GET_PROMISC				9
#define WLC_SET_PROMISC				10
#define WLC_OVERLAY_IOCTL			11
#define WLC_GET_RATE				12
#define WLC_GET_TXANT				61
#define WLC_SET_TXANT				62
#define WLC_GET_ANTDIV				63
#define WLC_SET_ANTDIV				64
#define WLC_SET_FORCELINK			91
#define WLC_FREQ_ACCURACY			92
#define WLC_CARRIER_SUPPRESS			93
#define WLC_GET_PHYREG				94
#define WLC_SET_PHYREG				95
#define WLC_GET_RADIOREG			96
#define WLC_SET_RADIOREG			97
#define WLC_GET_REVINFO				98
#define WLC_GET_UCANTDIV			99
#define WLC_SET_UCANTDIV			100
#define WLC_R_REG				101
#define WLC_W_REG				102
#define WLC_GET_SCANSUPPRESS			115
#define WLC_SET_SCANSUPPRESS			116
#define WLC_GET_AP				117
#define WLC_SET_AP				118
#define WLC_GET_EAP_RESTRICT			119
#define WLC_SET_EAP_RESTRICT			120
#define WLC_SCB_AUTHORIZE			121
#define WLC_SCB_DEAUTHORIZE			122
#define WLC_GET_WDSLIST				123
#define WLC_SET_WDSLIST				124
#define WLC_GET_ATIM				125
#define WLC_SET_ATIM				126
#define WLC_GET_RSSI				127
#define WLC_GET_PHYANTDIV			128
#define WLC_SET_PHYANTDIV			129
#define WLC_AP_RX_ONLY				130
#define WLC_GET_TX_PATH_PWR			131
#define WLC_SET_TX_PATH_PWR			132
#define WLC_GET_WSEC				133
#define WLC_SET_WSEC				134
#define WLC_GET_PHY_NOISE			135
#define WLC_GET_BSS_INFO			136
#define WLC_GET_PKTCNTS				137
#define WLC_GET_LAZYWDS				138
#define WLC_SET_LAZYWDS				139
#define WLC_GET_BANDLIST			140
#define WLC_GET_BAND				141
#define WLC_SET_BAND				142
#define WLC_SCB_DEAUTHENTICATE			143
#define WLC_GET_SHORTSLOT			144
#define WLC_GET_SHORTSLOT_OVERRIDE		145
#define WLC_SET_SHORTSLOT_OVERRIDE		146
#define WLC_GET_SHORTSLOT_RESTRICT		147
#define WLC_SET_SHORTSLOT_RESTRICT		148
#define WLC_GET_GMODE_PROTECTION		149
#define WLC_GET_GMODE_PROTECTION_OVERRIDE	150
#define WLC_SET_GMODE_PROTECTION_OVERRIDE	151
#define WLC_UPGRADE				152
#define WLC_DECRYPT_STATUS			182
#define WLC_GET_KEY_SEQ				183
#define WLC_GET_SCAN_CHANNEL_TIME		184
#define WLC_SET_SCAN_CHANNEL_TIME		185
#define WLC_GET_SCAN_UNASSOC_TIME		186
#define WLC_SET_SCAN_UNASSOC_TIME		187
#define WLC_GET_SCAN_HOME_TIME			188
#define WLC_SET_SCAN_HOME_TIME			189
#define WLC_GET_SCAN_NPROBES			190
#define WLC_SET_SCAN_NPROBES			191
#define WLC_GET_PRB_RESP_TIMEOUT		192
#define WLC_SET_PRB_RESP_TIMEOUT		193
#define WLC_GET_ATTEN				194
#define WLC_SET_ATTEN				195
#define WLC_GET_SHMEM				196
#define WLC_SET_SHMEM				197
#define WLC_WDS_GET_WPA_SUP			247
#define WLC_SET_CS_SCAN_TIMER			248
#define WLC_GET_CS_SCAN_TIMER			249
#define WLC_MEASURE_REQUEST			250
#define WLC_INIT				251
#define WLC_SEND_QUIET				252
#define WLC_KEEPALIVE			253
#define WLC_SEND_PWR_CONSTRAINT			254
#define WLC_UPGRADE_STATUS			255
#define WLC_CURRENT_PWR				256
#define WLC_GET_SCAN_PASSIVE_TIME		257
#define WLC_SET_SCAN_PASSIVE_TIME		258
#define WLC_LEGACY_LINK_BEHAVIOR		259
#define WLC_GET_CHANNELS_IN_COUNTRY		260
#define WLC_GET_COUNTRY_LIST			261
#define WLC_GET_VAR				262
#define WLC_SET_VAR				263
#define WLC_NVRAM_GET				264
#define WLC_NVRAM_SET				265
#define WLC_NVRAM_DUMP				266
#define WLC_REBOOT				267
#define WLC_SET_WSEC_PMK			268
#define WLC_GET_AUTH_MODE			269
#define WLC_SET_AUTH_MODE			270
#define WLC_GET_WAKEENTRY			271
#define WLC_SET_WAKEENTRY			272
#define WLC_NDCONFIG_ITEM			273
#define WLC_NVOTPW				274
#define WLC_OTPW				275
#define WLC_IOV_BLOCK_GET			276
#define WLC_IOV_MODULES_GET			277
#define WLC_SOFT_RESET				278
#define WLC_GET_ALLOW_MODE			279
#define WLC_SET_ALLOW_MODE			280
#define WLC_GET_DESIRED_BSSID			281
#define WLC_SET_DESIRED_BSSID			282
#define	WLC_DISASSOC_MYAP			283
#define WLC_GET_RESERVED10			284
#define WLC_GET_RESERVED11			285
#define WLC_GET_RESERVED12			286
#define WLC_GET_RESERVED13			287
#define WLC_GET_RESERVED14			288
#define WLC_SET_RESERVED15			289
#define WLC_SET_RESERVED16			290
#define WLC_GET_RESERVED17			291
#define WLC_GET_RESERVED18			292
#define WLC_GET_RESERVED19			293
#define WLC_SET_RESERVED1A			294
#define WLC_GET_RESERVED1B			295
#define WLC_GET_RESERVED1C			296
#define WLC_GET_RESERVED1D			297
#define WLC_SET_RESERVED1E			298
#define WLC_GET_RESERVED1F			299
#define WLC_GET_RESERVED20			300
#define WLC_GET_RESERVED21			301
#define WLC_GET_RESERVED22			302
#define WLC_GET_RESERVED23			303
#define WLC_GET_RESERVED24			304
#define WLC_SET_RESERVED25			305
#define WLC_GET_RESERVED26			306
#define WLC_NPHY_SAMPLE_COLLECT			307
#define WLC_UM_PRIV				308
#define WLC_GET_CMD				309
#define WLC_UPGRADE_SUCCESS			0
#define WLC_UPGRADE_PENDING			1
#define WL_AUTH_OPEN_SYSTEM		0
#define WL_AUTH_SHARED_KEY		1
#define WL_AUTH_OPEN_SHARED		2
#define WL_RADIO_SW_DISABLE		(1<<0)
#define WL_RADIO_HW_DISABLE		(1<<1)
#define WL_RADIO_MPC_DISABLE		(1<<2)
#define WL_RADIO_COUNTRY_DISABLE	(1<<3)
#define	WL_SPURAVOID_OFF	0
#define	WL_SPURAVOID_ON1	1
#define	WL_SPURAVOID_ON2	2
#define WL_TXPWR_OVERRIDE	(1U<<31)
#define WL_PHY_PAVARS_LEN	6
typedef struct wl_po  wl_po_t;
#define WLC_TXPWR_MAX		(127)
#define WL_DIAG_INTERRUPT			1
#define WL_DIAG_LOOPBACK			2
#define WL_DIAG_MEMORY				3
#define WL_DIAG_LED				4
#define WL_DIAG_REG				5
#define WL_DIAG_SROM				6
#define WL_DIAG_DMA				7
#define WL_DIAGERR_SUCCESS			0
#define WL_DIAGERR_FAIL_TO_RUN			1
#define WL_DIAGERR_NOT_SUPPORTED		2
#define WL_DIAGERR_INTERRUPT_FAIL		3
#define WL_DIAGERR_LOOPBACK_FAIL		4
#define WL_DIAGERR_SROM_FAIL			5
#define WL_DIAGERR_SROM_BADCRC			6
#define WL_DIAGERR_REG_FAIL			7
#define WL_DIAGERR_MEMORY_FAIL			8
#define WL_DIAGERR_NOMEM			9
#define WL_DIAGERR_DMA_FAIL			10
#define WL_DIAGERR_MEMORY_TIMEOUT		11
#define WL_DIAGERR_MEMORY_BADPATTERN		12
#define	WLC_BAND_AUTO		0
#define	WLC_BAND_5G		1
#define	WLC_BAND_2G		2
#define	WLC_BAND_ALL		3
#define WL_CHAN_FREQ_RANGE_2G      0
#define WL_CHAN_FREQ_RANGE_5GL     1
#define WL_CHAN_FREQ_RANGE_5GM     2
#define WL_CHAN_FREQ_RANGE_5GH     3
#define	WLC_PHY_TYPE_A		0
#define	WLC_PHY_TYPE_B		1
#define	WLC_PHY_TYPE_G		2
#define	WLC_PHY_TYPE_N		4
#define	WLC_PHY_TYPE_LP		5
#define	WLC_PHY_TYPE_SSN	6
#define	WLC_PHY_TYPE_HT		7
#define	WLC_PHY_TYPE_LCN	8
#define	WLC_PHY_TYPE_NULL	0xf
#define WLC_MACMODE_DISABLED	0
#define WLC_MACMODE_DENY	1
#define WLC_MACMODE_ALLOW	2
#define GMODE_LEGACY_B		0
#define GMODE_AUTO		1
#define GMODE_ONLY		2
#define GMODE_B_DEFERRED	3
#define GMODE_PERFORMANCE	4
#define GMODE_LRS		5
#define GMODE_MAX		6
#define WLC_PLCP_AUTO	-1
#define WLC_PLCP_SHORT	0
#define WLC_PLCP_LONG	1
#define WLC_PROTECTION_AUTO		-1
#define WLC_PROTECTION_OFF		0
#define WLC_PROTECTION_ON		1
#define WLC_PROTECTION_MMHDR_ONLY	2
#define WLC_PROTECTION_CTS_ONLY		3
#define WLC_PROTECTION_CTL_OFF		0
#define WLC_PROTECTION_CTL_LOCAL	1
#define WLC_PROTECTION_CTL_OVERLAP	2
#define WLC_N_PROTECTION_OFF		0
#define WLC_N_PROTECTION_OPTIONAL	1
#define WLC_N_PROTECTION_20IN40		2
#define WLC_N_PROTECTION_MIXEDMODE	3
#define WLC_N_PREAMBLE_MIXEDMODE	0
#define WLC_N_PREAMBLE_GF		1
#define WLC_N_PREAMBLE_GF_BRCM          2
#define WLC_N_BW_20ALL			0
#define WLC_N_BW_40ALL			1
#define WLC_N_BW_20IN2G_40IN5G		2
#define WLC_N_TXRX_CHAIN0		0
#define WLC_N_TXRX_CHAIN1		1
#define WLC_N_SGI_20			0x01
#define WLC_N_SGI_40			0x02
#define PM_OFF	0
#define PM_MAX	1
#define	INTERFERE_OVRRIDE_OFF	-1
#define	INTERFERE_NONE	0
#define	NON_WLAN	1
#define	WLAN_MANUAL	2
#define	WLAN_AUTO	3
#define	WLAN_AUTO_W_NOISE	4
#define	AUTO_ACTIVE	(1 << 7)
#define WL_RSSI_ANT_VERSION	1
#define WL_ANT_RX_MAX		2
#define WL_ANT_HT_RX_MAX	3
#define WL_ANT_IDX_1		0
#define WL_ANT_IDX_2		1
#define WL_RSSI_ANT_MAX		4
#elif WL_RSSI_ANT_MAX != 4
#error "WL_RSSI_ANT_MAX does not match"
typedef struct  wl_rssi_ant_t;
#define NUM_PWRCTRL_RATES 12
typedef struct  tx_power_legacy_t;
#define WL_TX_POWER_RATES_LEGACY	45
#define WL_TX_POWER_MCS20_FIRST	        12
#define WL_TX_POWER_MCS20_NUM	        16
#define WL_TX_POWER_MCS40_FIRST	        28
#define WL_TX_POWER_MCS40_NUM	        17
#define WL_TX_POWER_RATES	       101
#define WL_TX_POWER_CCK_FIRST	       0
#define WL_TX_POWER_CCK_NUM	       4
#define WL_TX_POWER_OFDM_FIRST	       4
#define WL_TX_POWER_OFDM20_CDD_FIRST   12
#define WL_TX_POWER_OFDM40_SISO_FIRST  52
#define WL_TX_POWER_OFDM40_CDD_FIRST   60
#define WL_TX_POWER_OFDM_NUM	       8
#define WL_TX_POWER_MCS20_SISO_FIRST   20
#define WL_TX_POWER_MCS20_CDD_FIRST    28
#define WL_TX_POWER_MCS20_STBC_FIRST   36
#define WL_TX_POWER_MCS20_SDM_FIRST    44
#define WL_TX_POWER_MCS40_SISO_FIRST   68
#define WL_TX_POWER_MCS40_CDD_FIRST    76
#define WL_TX_POWER_MCS40_STBC_FIRST   84
#define WL_TX_POWER_MCS40_SDM_FIRST    92
#define WL_TX_POWER_MCS_1_STREAM_NUM   8
#define WL_TX_POWER_MCS_2_STREAM_NUM   8
#define WL_TX_POWER_MCS_32	       100
#define WL_TX_POWER_MCS_32_NUM	       1
#define WL_TX_POWER_MCS20_SISO_FIRST_SSN   12
#define WL_TX_POWER_F_ENABLED	1
#define WL_TX_POWER_F_HW	2
#define WL_TX_POWER_F_MIMO	4
#define WL_TX_POWER_F_SISO	8
typedef struct  tx_power_t;
typedef struct tx_inst_power  tx_inst_power_t;
#define WL_ERROR_VAL		0x00000001
#define WL_TRACE_VAL		0x00000002
#define WL_NUMCHANNELS		64
#define WL_NUMCHANSPECS		100
struct tsinfo_arg ;
#define	NFIFO			6
struct wl_msglevel2 ;
struct ampdu_tid_control ;
struct ampdu_ea_tid ;
struct ampdu_retry_tid ;
#define WL_SWFL_NOHWRADIO	0x0004
#define WL_SWFL_FLOWCONTROL     0x0008
#define WL_SWFL_WLBSSSORT	0x0010
#define WL_LIFETIME_MAX 0xFFFF
typedef struct wl_pkt_filter_pattern  wl_pkt_filter_pattern_t;
typedef struct wl_pkt_filter  wl_pkt_filter_t;
#define WL_PKT_FILTER_FIXED_LEN		  offsetof(wl_pkt_filter_t, u)
#define WL_PKT_FILTER_PATTERN_FIXED_LEN	  offsetof(wl_pkt_filter_pattern_t, mask_and_pattern)
typedef struct wl_pkt_filter_enable  wl_pkt_filter_enable_t;
#define	WLC_RSSI_INVALID	 0
#define WL_11N_2x2			1
#define WL_11N_3x3			3
#define WL_11N_4x4			4
#define WLFEATURE_DISABLE_11N		0x00000001
#define WLFEATURE_DISABLE_11N_STBC_TX	0x00000002
#define WLFEATURE_DISABLE_11N_STBC_RX	0x00000004
#define WLFEATURE_DISABLE_11N_SGI_TX	0x00000008
#define WLFEATURE_DISABLE_11N_SGI_RX	0x00000010
#define WLFEATURE_DISABLE_11N_AMPDU_TX	0x00000020
#define WLFEATURE_DISABLE_11N_AMPDU_RX	0x00000040
#define WLFEATURE_DISABLE_11N_GF	0x00000080
#define WL_EVENTING_MASK_LEN	16
#define TOE_TX_CSUM_OL		0x00000001
#define TOE_RX_CSUM_OL		0x00000002
#define PM_OFF	0
#define PM_MAX	1
#define PM_FAST 2
typedef enum sup_auth_status  sup_auth_status_t;
