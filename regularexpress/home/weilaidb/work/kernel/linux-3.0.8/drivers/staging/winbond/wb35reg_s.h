#define __WINBOND_WB35REG_S_H
struct hw_data;
#define GetBit(dwData, i)	(dwData & (0x00000001 << i))
#define SetBit(dwData, i)	(dwData | (0x00000001 << i))
#define ClearBit(dwData, i)	(dwData & ~(0x00000001 << i))
#define	IGNORE_INCREMENT	0
#define	AUTO_INCREMENT		0
#define	NO_INCREMENT		1
#define REG_DIRECTION(_x, _y)	((_y)->DIRECT == 0 ? usb_rcvctrlpipe(_x, 0) : usb_sndctrlpipe(_x, 0))
#define REG_BUF_SIZE(_x)	((_x)->bRequest == 0x04 ? cpu_to_le16((_x)->wLength) : 4)
#define BB48_DEFAULT_AL2230_11B		0x0033447c
#define BB4C_DEFAULT_AL2230_11B		0x0A00FEFF
#define BB48_DEFAULT_AL2230_11G		0x00332C1B
#define BB4C_DEFAULT_AL2230_11G		0x0A00FEFF
#define BB48_DEFAULT_WB242_11B		0x00292315
#define BB4C_DEFAULT_WB242_11B		0x0800FEFF
#define BB48_DEFAULT_WB242_11G		0x00453B24
#define BB4C_DEFAULT_WB242_11G		0x0E00FEFF
#define DEFAULT_CWMIN			31
#define DEFAULT_CWMAX			1023
#define DEFAULT_AID			1
#define DEFAULT_RATE_RETRY_LIMIT	2
#define DEFAULT_LONG_RETRY_LIMIT	7
#define DEFAULT_SHORT_RETRY_LIMIT	7
#define DEFAULT_PIFST			25
#define DEFAULT_EIFST			354
#define DEFAULT_DIFST			45
#define DEFAULT_SIFST			5
#define DEFAULT_OSIFST			10
#define DEFAULT_ATIMWD			0
#define DEFAULT_SLOT_TIME		20
#define DEFAULT_MAX_TX_MSDU_LIFE_TIME	512
#define DEFAULT_BEACON_INTERVAL		500
#define DEFAULT_PROBE_DELAY_TIME	200
#define DEFAULT_PROTOCOL_VERSION	0
#define DEFAULT_MAC_POWER_STATE		2
#define DEFAULT_DTIM_ALERT_TIME		0
struct wb35_reg_queue ;
#define MAX_SQ3_FILTER_SIZE		5
struct wb35_reg ;
void hal_remove_mapping_key(struct hw_data *hw_data, u8 *mac_addr);
void hal_remove_default_key(struct hw_data *hw_data, u32 index);
unsigned char hal_set_mapping_key(struct hw_data *adapter, u8 *mac_addr,
u8 null_key, u8 wep_on, u8 *tx_tsc,
u8 *rx_tsc, u8 key_type, u8 key_len,
u8 *key_data);
unsigned char hal_set_default_key(struct hw_data *adapter, u8 index,
u8 null_key, u8 wep_on, u8 *tx_tsc,
u8 *rx_tsc, u8 key_type, u8 key_len,
u8 *key_data);
void hal_clear_all_default_key(struct hw_data *hw_data);
void hal_clear_all_group_key(struct hw_data *hw_data);
void hal_clear_all_mapping_key(struct hw_data *hw_data);
void hal_clear_all_key(struct hw_data *hw_data);
void hal_set_power_save_mode(struct hw_data *hw_data, unsigned char power_save,
unsigned char wakeup, unsigned char dtim);
void hal_get_power_save_mode(struct hw_data *hw_data, u8 *in_pwr_save);
void hal_set_slot_time(struct hw_data *hw_data, u8 type);
#define hal_set_atim_window(_A, _ATM)
void hal_start_bss(struct hw_data *hw_data, u8 mac_op_mode);
void hal_join_request(struct hw_data *hw_data, u8 bss_type);
void hal_stop_sync_bss(struct hw_data *hw_data);
void hal_resume_sync_bss(struct hw_data *hw_data);
void hal_set_aid(struct hw_data *hw_data, u16 aid);
void hal_set_bssid(struct hw_data *hw_data, u8 *bssid);
void hal_get_bssid(struct hw_data *hw_data, u8 *bssid);
void hal_set_listen_interval(struct hw_data *hw_data, u16 listen_interval);
void hal_set_cap_info(struct hw_data *hw_data, u16 capability_info);
void hal_set_ssid(struct hw_data *hw_data, u8 *ssid, u8 ssid_len);
void hal_start_tx0(struct hw_data *hw_data);
#define hal_get_cwmin(_A)	((_A)->cwmin)
void hal_set_cwmax(struct hw_data *hw_data, u16 cwin_max);
#define hal_get_cwmax(_A)	((_A)->cwmax)
void hal_set_rsn_wpa(struct hw_data *hw_data, u32 *rsn_ie_bitmap,
u32 *rsn_oui_type , unsigned char desired_auth_mode);
void hal_set_connect_info(struct hw_data *hw_data, unsigned char bo_connect);
u8 hal_get_est_sq3(struct hw_data *hw_data, u8 count);
void hal_descriptor_indicate(struct hw_data *hw_data,
struct wb35_descriptor *des);
u8 hal_get_antenna_number(struct hw_data *hw_data);
u32 hal_get_bss_pk_cnt(struct hw_data *hw_data);
#define hal_get_region_from_EEPROM(_A)	((_A)->reg.EEPROMRegion)
#define hal_get_tx_buffer(_A, _B)	Wb35Tx_get_tx_buffer(_A, _B)
#define hal_software_set(_A)		(_A->SoftwareSet)
#define hal_driver_init_OK(_A)		(_A->IsInitOK)
#define hal_rssi_boundary_high(_A)	(_A->RSSI_high)
#define hal_rssi_boundary_low(_A)	(_A->RSSI_low)
#define hal_scan_interval(_A)		(_A->Scan_Interval)
#define PHY_DEBUG(msg, args...)
#define hal_get_time_count(_P)		(_P->time_count / 10)
#define hal_ibss_disconnect(_A)		(hal_stop_sync_bss(_A))
