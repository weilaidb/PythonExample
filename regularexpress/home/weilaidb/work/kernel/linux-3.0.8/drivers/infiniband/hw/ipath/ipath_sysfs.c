int ipath_parse_ushort(const char *str, unsigned short *valp)
static ssize_t show_version(struct device_driver *dev, char *buf)
static ssize_t show_num_units(struct device_driver *dev, char *buf)
static ssize_t show_status(struct device *dev,
struct device_attribute *attr,
char *buf)
static const char *ipath_status_str[] = ;
static ssize_t show_status_str(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t show_boardversion(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t show_localbus_info(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t show_lmc(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t store_lmc(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static ssize_t show_lid(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t store_lid(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static ssize_t show_mlid(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t store_mlid(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static ssize_t show_guid(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t store_guid(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static ssize_t show_nguid(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t show_nports(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t show_serial(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t show_unit(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t show_jint_max_packets(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t store_jint_max_packets(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static ssize_t show_jint_idle_ticks(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t store_jint_idle_ticks(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
#define DEVICE_COUNTER(name, attr) \
static ssize_t show_counter_##name(struct device *dev, \
struct device_attribute *attr, \
char *buf) \
\
static DEVICE_ATTR(name, S_IRUGO, show_counter_##name, NULL);
DEVICE_COUNTER(ib_link_downeds, IBLinkDownedCnt);
DEVICE_COUNTER(ib_link_err_recoveries, IBLinkErrRecoveryCnt);
DEVICE_COUNTER(ib_status_changes, IBStatusChangeCnt);
DEVICE_COUNTER(ib_symbol_errs, IBSymbolErrCnt);
DEVICE_COUNTER(lb_flow_stalls, LBFlowStallCnt);
DEVICE_COUNTER(lb_ints, LBIntCnt);
DEVICE_COUNTER(rx_bad_formats, RxBadFormatCnt);
DEVICE_COUNTER(rx_buf_ovfls, RxBufOvflCnt);
DEVICE_COUNTER(rx_data_pkts, RxDataPktCnt);
DEVICE_COUNTER(rx_dropped_pkts, RxDroppedPktCnt);
DEVICE_COUNTER(rx_dwords, RxDwordCnt);
DEVICE_COUNTER(rx_ebps, RxEBPCnt);
DEVICE_COUNTER(rx_flow_ctrl_errs, RxFlowCtrlErrCnt);
DEVICE_COUNTER(rx_flow_pkts, RxFlowPktCnt);
DEVICE_COUNTER(rx_icrc_errs, RxICRCErrCnt);
DEVICE_COUNTER(rx_len_errs, RxLenErrCnt);
DEVICE_COUNTER(rx_link_problems, RxLinkProblemCnt);
DEVICE_COUNTER(rx_lpcrc_errs, RxLPCRCErrCnt);
DEVICE_COUNTER(rx_max_min_len_errs, RxMaxMinLenErrCnt);
DEVICE_COUNTER(rx_p0_hdr_egr_ovfls, RxP0HdrEgrOvflCnt);
DEVICE_COUNTER(rx_p1_hdr_egr_ovfls, RxP1HdrEgrOvflCnt);
DEVICE_COUNTER(rx_p2_hdr_egr_ovfls, RxP2HdrEgrOvflCnt);
DEVICE_COUNTER(rx_p3_hdr_egr_ovfls, RxP3HdrEgrOvflCnt);
DEVICE_COUNTER(rx_p4_hdr_egr_ovfls, RxP4HdrEgrOvflCnt);
DEVICE_COUNTER(rx_p5_hdr_egr_ovfls, RxP5HdrEgrOvflCnt);
DEVICE_COUNTER(rx_p6_hdr_egr_ovfls, RxP6HdrEgrOvflCnt);
DEVICE_COUNTER(rx_p7_hdr_egr_ovfls, RxP7HdrEgrOvflCnt);
DEVICE_COUNTER(rx_p8_hdr_egr_ovfls, RxP8HdrEgrOvflCnt);
DEVICE_COUNTER(rx_pkey_mismatches, RxPKeyMismatchCnt);
DEVICE_COUNTER(rx_tid_full_errs, RxTIDFullErrCnt);
DEVICE_COUNTER(rx_tid_valid_errs, RxTIDValidErrCnt);
DEVICE_COUNTER(rx_vcrc_errs, RxVCRCErrCnt);
DEVICE_COUNTER(tx_data_pkts, TxDataPktCnt);
DEVICE_COUNTER(tx_dropped_pkts, TxDroppedPktCnt);
DEVICE_COUNTER(tx_dwords, TxDwordCnt);
DEVICE_COUNTER(tx_flow_pkts, TxFlowPktCnt);
DEVICE_COUNTER(tx_flow_stalls, TxFlowStallCnt);
DEVICE_COUNTER(tx_len_errs, TxLenErrCnt);
DEVICE_COUNTER(tx_max_min_len_errs, TxMaxMinLenErrCnt);
DEVICE_COUNTER(tx_underruns, TxUnderrunCnt);
DEVICE_COUNTER(tx_unsup_vl_errs, TxUnsupVLErrCnt);
static struct attribute *dev_counter_attributes[] = ;
static struct attribute_group dev_counter_attr_group = ;
static ssize_t store_reset(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static ssize_t store_link_state(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static ssize_t show_mtu(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t store_mtu(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static ssize_t show_enabled(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t store_enabled(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static ssize_t store_rx_pol_inv(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static ssize_t store_led_override(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static ssize_t show_logged_errs(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t show_hrtbt_enb(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t store_hrtbt_enb(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static ssize_t show_lwid_enb(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t store_lwid_enb(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static ssize_t show_lwid(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t show_spd_enb(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t store_spd_enb(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static ssize_t show_spd(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t show_rx_polinv_enb(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t store_rx_polinv_enb(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static ssize_t show_lanerev_enb(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t store_lanerev_enb(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static DRIVER_ATTR(num_units, S_IRUGO, show_num_units, NULL);
static DRIVER_ATTR(version, S_IRUGO, show_version, NULL);
static struct attribute *driver_attributes[] = ;
static struct attribute_group driver_attr_group = ;
static ssize_t store_tempsense(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static ssize_t show_tempsense(struct device *dev,
struct device_attribute *attr,
char *buf)
const struct attribute_group *ipath_driver_attr_groups[] = ;
static DEVICE_ATTR(guid, S_IWUSR | S_IRUGO, show_guid, store_guid);
static DEVICE_ATTR(lmc, S_IWUSR | S_IRUGO, show_lmc, store_lmc);
static DEVICE_ATTR(lid, S_IWUSR | S_IRUGO, show_lid, store_lid);
static DEVICE_ATTR(link_state, S_IWUSR, NULL, store_link_state);
static DEVICE_ATTR(mlid, S_IWUSR | S_IRUGO, show_mlid, store_mlid);
static DEVICE_ATTR(mtu, S_IWUSR | S_IRUGO, show_mtu, store_mtu);
static DEVICE_ATTR(enabled, S_IWUSR | S_IRUGO, show_enabled, store_enabled);
static DEVICE_ATTR(nguid, S_IRUGO, show_nguid, NULL);
static DEVICE_ATTR(nports, S_IRUGO, show_nports, NULL);
static DEVICE_ATTR(reset, S_IWUSR, NULL, store_reset);
static DEVICE_ATTR(serial, S_IRUGO, show_serial, NULL);
static DEVICE_ATTR(status, S_IRUGO, show_status, NULL);
static DEVICE_ATTR(status_str, S_IRUGO, show_status_str, NULL);
static DEVICE_ATTR(boardversion, S_IRUGO, show_boardversion, NULL);
static DEVICE_ATTR(unit, S_IRUGO, show_unit, NULL);
static DEVICE_ATTR(rx_pol_inv, S_IWUSR, NULL, store_rx_pol_inv);
static DEVICE_ATTR(led_override, S_IWUSR, NULL, store_led_override);
static DEVICE_ATTR(logged_errors, S_IRUGO, show_logged_errs, NULL);
static DEVICE_ATTR(localbus_info, S_IRUGO, show_localbus_info, NULL);
static DEVICE_ATTR(jint_max_packets, S_IWUSR | S_IRUGO,
show_jint_max_packets, store_jint_max_packets);
static DEVICE_ATTR(jint_idle_ticks, S_IWUSR | S_IRUGO,
show_jint_idle_ticks, store_jint_idle_ticks);
static DEVICE_ATTR(tempsense, S_IWUSR | S_IRUGO,
show_tempsense, store_tempsense);
static struct attribute *dev_attributes[] = ;
static struct attribute_group dev_attr_group = ;
static DEVICE_ATTR(hrtbt_enable, S_IWUSR | S_IRUGO, show_hrtbt_enb,
store_hrtbt_enb);
static DEVICE_ATTR(link_width_enable, S_IWUSR | S_IRUGO, show_lwid_enb,
store_lwid_enb);
static DEVICE_ATTR(link_width, S_IRUGO, show_lwid, NULL);
static DEVICE_ATTR(link_speed_enable, S_IWUSR | S_IRUGO, show_spd_enb,
store_spd_enb);
static DEVICE_ATTR(link_speed, S_IRUGO, show_spd, NULL);
static DEVICE_ATTR(rx_pol_inv_enable, S_IWUSR | S_IRUGO, show_rx_polinv_enb,
store_rx_polinv_enb);
static DEVICE_ATTR(rx_lane_rev_enable, S_IWUSR | S_IRUGO, show_lanerev_enb,
store_lanerev_enb);
static struct attribute *dev_ibcfg_attributes[] = ;
static struct attribute_group dev_ibcfg_attr_group = ;
int ipath_expose_reset(struct device *dev)
int ipath_device_create_group(struct device *dev, struct ipath_devdata *dd)
void ipath_device_remove_group(struct device *dev, struct ipath_devdata *dd)
