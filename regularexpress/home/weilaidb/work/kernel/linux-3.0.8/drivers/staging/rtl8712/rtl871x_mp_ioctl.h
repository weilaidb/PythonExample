#define _RTL871X_MP_IOCTL_H
#define TESTFWCMDNUMBER			1000000
#define TEST_H2CINT_WAIT_TIME		500
#define TEST_C2HINT_WAIT_TIME		500
#define HCI_TEST_SYSCFG_HWMASK		1
#define _BUSCLK_40M			(4 << 2)
struct CFG_DBG_MSG_STRUCT ;
struct mp_rw_reg ;
struct eeprom_rw_param ;
struct EFUSE_ACCESS_STRUCT ;
struct burst_rw_reg ;
struct usb_vendor_req ;
struct DR_VARIABLE_STRUCT ;
int mp_start_joinbss(struct _adapter *padapter, struct ndis_802_11_ssid *pssid);
uint oid_rt_pro8711_join_bss_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_read_register_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_write_register_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_burst_read_register_hdl(struct oid_par_priv*
poid_par_priv);
uint oid_rt_pro_burst_write_register_hdl(struct oid_par_priv*
poid_par_priv);
uint oid_rt_pro_write_txcmd_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_read16_eeprom_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_write16_eeprom_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_pro8711_wi_poll_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_pro8711_pkt_loss_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_rd_attrib_mem_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_wr_attrib_mem_hdl(struct oid_par_priv *poid_par_priv);
uint  oid_rt_pro_set_rf_intfs_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_poll_rx_status_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_cfg_debug_message_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_set_data_rate_ex_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_set_basic_rate_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_set_power_tracking_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_qry_pwrstate_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_set_pwrstate_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_h2c_set_rate_table_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_h2c_get_rate_table_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_set_data_rate_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_start_test_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_stop_test_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_set_channel_direct_call_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_set_antenna_bb_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_set_tx_power_control_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_query_tx_packet_sent_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_query_rx_packet_received_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_query_rx_packet_crc32_error_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_reset_tx_packet_sent_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_reset_rx_packet_received_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_set_modulation_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_set_continuous_tx_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_set_single_carrier_tx_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_set_carrier_suppression_tx_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_set_single_tone_tx_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_write_bb_reg_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_read_bb_reg_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_write_rf_reg_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_read_rf_reg_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_wireless_mode_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_encryption_ctrl_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_add_sta_info_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_dele_sta_info_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_query_dr_variable_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_rx_packet_type_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_read_efuse_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_write_efuse_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_rw_efuse_pgpkt_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_get_efuse_current_size_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_efuse_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_efuse_map_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_set_bandwidth_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_set_crystal_cap_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_set_rx_packet_type_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_get_efuse_max_size_hdl(struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_set_tx_agc_offset_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_pro_set_pkt_test_mode_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_get_thermal_meter_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_reset_phy_rx_packet_count_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_get_phy_rx_packet_received_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_get_phy_rx_packet_crc32_error_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_set_power_down_hdl(
struct oid_par_priv *poid_par_priv);
uint oid_rt_get_power_mode_hdl(
struct oid_par_priv *poid_par_priv);
static const struct oid_obj_priv oid_rtl_seg_81_80_00[] = ;
static const struct oid_obj_priv oid_rtl_seg_81_80_20[] = ;
static const struct oid_obj_priv oid_rtl_seg_81_80_40[] = ;
static const struct oid_obj_priv oid_rtl_seg_81_80_80[] = ;
static const struct oid_obj_priv oid_rtl_seg_81_85[] = ;
extern struct oid_obj_priv oid_rtl_seg_81_80_00[32];
extern struct oid_obj_priv oid_rtl_seg_81_80_20[16];
extern struct oid_obj_priv oid_rtl_seg_81_80_40[6];
extern struct oid_obj_priv oid_rtl_seg_81_80_80[3];
extern struct oid_obj_priv oid_rtl_seg_81_85[1];
extern struct oid_obj_priv oid_rtl_seg_81_87[5];
extern struct oid_obj_priv oid_rtl_seg_87_11_00[32];
extern struct oid_obj_priv oid_rtl_seg_87_11_20[5];
extern struct oid_obj_priv oid_rtl_seg_87_11_50[2];
extern struct oid_obj_priv oid_rtl_seg_87_11_80[1];
extern struct oid_obj_priv oid_rtl_seg_87_11_B0[1];
extern struct oid_obj_priv oid_rtl_seg_87_11_F0[16];
extern struct oid_obj_priv oid_rtl_seg_87_12_00[32];
enum MP_MODE ;
struct rwreg_param ;
struct bbreg_param ;
struct txpower_param ;
struct datarate_param ;
struct rfintfs_parm ;
struct mp_xmit_packet ;
struct psmode_param ;
struct mp_ioctl_handler ;
struct mp_ioctl_param ;
#define GEN_MP_IOCTL_SUBCODE(code) _MP_IOCTL_ ## code ## _CMD_
enum RTL871X_MP_IOCTL_SUBCODE ;
unsigned int mp_ioctl_xmit_packet_hdl(struct oid_par_priv *poid_par_priv);
static struct mp_ioctl_handler mp_ioctl_hdl[] = ;
extern struct mp_ioctl_handler mp_ioctl_hdl[];
