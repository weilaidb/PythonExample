#define VK "k"
#define VK
#define VD "d"
#define VD
#define VM "m"
#define VM
#define VP "p"
#define VP
#define VR "r"
#define VR
#define VQ "q"
#define VQ
#define IPW2200_VERSION "1.2.2" VK VD VM VP VR VQ
#define DRV_DESCRIPTION	"Intel(R) PRO/Wireless 2200/2915 Network Driver"
#define DRV_COPYRIGHT	"Copyright(c) 2003-2006 Intel Corporation"
#define DRV_VERSION     IPW2200_VERSION
#define ETH_P_80211_STATS (ETH_P_80211_RAW + 1)
MODULE_DESCRIPTION(DRV_DESCRIPTION);
MODULE_VERSION(DRV_VERSION);
MODULE_AUTHOR(DRV_COPYRIGHT);
MODULE_LICENSE("GPL");
MODULE_FIRMWARE("ipw2200-ibss.fw");
MODULE_FIRMWARE("ipw2200-sniffer.fw");
MODULE_FIRMWARE("ipw2200-bss.fw");
static int cmdlog = 0;
static int debug = 0;
static int default_channel = 0;
static int network_mode = 0;
static u32 ipw_debug_level;
static int associate;
static int auto_create = 1;
static int led_support = 1;
static int disable = 0;
static int bt_coexist = 0;
static int hwcrypto = 0;
static int roaming = 1;
static const char ipw_modes[] = ;
static int antenna = CFG_SYS_ANTENNA_BOTH;
static int rtap_iface = 0;
static struct ieee80211_rate ipw2200_rates[] = ;
#define ipw2200_a_rates		(ipw2200_rates + 4)
#define ipw2200_num_a_rates	8
#define ipw2200_bg_rates	(ipw2200_rates + 0)
#define ipw2200_num_bg_rates	12
static int qos_enable = 0;
static int qos_burst_enable = 0;
static int qos_no_ack_mask = 0;
static int burst_duration_CCK = 0;
static int burst_duration_OFDM = 0;
static struct libipw_qos_parameters def_qos_parameters_OFDM = ;
static struct libipw_qos_parameters def_qos_parameters_CCK = ;
static struct libipw_qos_parameters def_parameters_OFDM = ;
static struct libipw_qos_parameters def_parameters_CCK = ;
static u8 qos_oui[QOS_OUI_LEN] = ;
static int from_priority_to_tx_queue[] = ;
static u32 ipw_qos_get_burst_duration(struct ipw_priv *priv);
static int ipw_send_qos_params_command(struct ipw_priv *priv, struct libipw_qos_parameters
*qos_param);
static int ipw_send_qos_info_command(struct ipw_priv *priv, struct libipw_qos_information_element
*qos_param);
static struct iw_statistics *ipw_get_wireless_stats(struct net_device *dev);
static void ipw_remove_current_network(struct ipw_priv *priv);
static void ipw_rx(struct ipw_priv *priv);
static int ipw_queue_tx_reclaim(struct ipw_priv *priv,
struct clx2_tx_queue *txq, int qindex);
static int ipw_queue_reset(struct ipw_priv *priv);
static int ipw_queue_tx_hcmd(struct ipw_priv *priv, int hcmd, void *buf,
int len, int sync);
static void ipw_tx_queue_free(struct ipw_priv *);
static struct ipw_rx_queue *ipw_rx_queue_alloc(struct ipw_priv *);
static void ipw_rx_queue_free(struct ipw_priv *, struct ipw_rx_queue *);
static void ipw_rx_queue_replenish(void *);
static int ipw_up(struct ipw_priv *);
static void ipw_bg_up(struct work_struct *work);
static void ipw_down(struct ipw_priv *);
static void ipw_bg_down(struct work_struct *work);
static int ipw_config(struct ipw_priv *);
static int init_supported_rates(struct ipw_priv *priv,
struct ipw_supported_rates *prates);
static void ipw_set_hwcrypto_keys(struct ipw_priv *);
static void ipw_send_wep_keys(struct ipw_priv *, int);
static int snprint_line(char *buf, size_t count,
const u8 * data, u32 len, u32 ofs)
static void printk_buf(int level, const u8 * data, u32 len)
static int snprintk_buf(u8 * output, size_t size, const u8 * data, size_t len)
static u32 _ipw_read_reg32(struct ipw_priv *priv, u32 reg);
#define ipw_read_reg32(a, b) _ipw_read_reg32(a, b)
static u8 _ipw_read_reg8(struct ipw_priv *ipw, u32 reg);
#define ipw_read_reg8(a, b) _ipw_read_reg8(a, b)
static void _ipw_write_reg8(struct ipw_priv *priv, u32 reg, u8 value);
static inline void ipw_write_reg8(struct ipw_priv *a, u32 b, u8 c)
static void _ipw_write_reg16(struct ipw_priv *priv, u32 reg, u16 value);
static inline void ipw_write_reg16(struct ipw_priv *a, u32 b, u16 c)
static void _ipw_write_reg32(struct ipw_priv *priv, u32 reg, u32 value);
static inline void ipw_write_reg32(struct ipw_priv *a, u32 b, u32 c)
static inline void _ipw_write8(struct ipw_priv *ipw, unsigned long ofs,
u8 val)
#define ipw_write8(ipw, ofs, val) do  while (0)
static inline void _ipw_write16(struct ipw_priv *ipw, unsigned long ofs,
u16 val)
#define ipw_write16(ipw, ofs, val) do  while (0)
static inline void _ipw_write32(struct ipw_priv *ipw, unsigned long ofs,
u32 val)
#define ipw_write32(ipw, ofs, val) do  while (0)
static inline u8 _ipw_read8(struct ipw_priv *ipw, unsigned long ofs)
#define ipw_read8(ipw, ofs) ()
static inline u16 _ipw_read16(struct ipw_priv *ipw, unsigned long ofs)
#define ipw_read16(ipw, ofs) ()
static inline u32 _ipw_read32(struct ipw_priv *ipw, unsigned long ofs)
#define ipw_read32(ipw, ofs) ()
static void _ipw_read_indirect(struct ipw_priv *, u32, u8 *, int);
#define ipw_read_indirect(a, b, c, d) ()
static void _ipw_write_indirect(struct ipw_priv *priv, u32 addr, u8 * data,
int num);
#define ipw_write_indirect(a, b, c, d) do  while (0)
static void _ipw_write_reg32(struct ipw_priv *priv, u32 reg, u32 value)
static void _ipw_write_reg8(struct ipw_priv *priv, u32 reg, u8 value)
static void _ipw_write_reg16(struct ipw_priv *priv, u32 reg, u16 value)
static u8 _ipw_read_reg8(struct ipw_priv *priv, u32 reg)
static u32 _ipw_read_reg32(struct ipw_priv *priv, u32 reg)
static void _ipw_read_indirect(struct ipw_priv *priv, u32 addr, u8 * buf,
int num)
static void _ipw_write_indirect(struct ipw_priv *priv, u32 addr, u8 * buf,
int num)
static void ipw_write_direct(struct ipw_priv *priv, u32 addr, void *buf,
int num)
static inline void ipw_set_bit(struct ipw_priv *priv, u32 reg, u32 mask)
static inline void ipw_clear_bit(struct ipw_priv *priv, u32 reg, u32 mask)
static inline void __ipw_enable_interrupts(struct ipw_priv *priv)
static inline void __ipw_disable_interrupts(struct ipw_priv *priv)
static inline void ipw_enable_interrupts(struct ipw_priv *priv)
static inline void ipw_disable_interrupts(struct ipw_priv *priv)
static char *ipw_error_desc(u32 val)
static void ipw_dump_error_log(struct ipw_priv *priv,
struct ipw_fw_error *error)
static inline int ipw_is_init(struct ipw_priv *priv)
static int ipw_get_ordinal(struct ipw_priv *priv, u32 ord, void *val, u32 * len)
static void ipw_init_ordinals(struct ipw_priv *priv)
static u32 ipw_register_toggle(u32 reg)
#define LD_TIME_LINK_ON msecs_to_jiffies(300)
#define LD_TIME_LINK_OFF msecs_to_jiffies(2700)
#define LD_TIME_ACT_ON msecs_to_jiffies(250)
static void ipw_led_link_on(struct ipw_priv *priv)
static void ipw_bg_led_link_on(struct work_struct *work)
static void ipw_led_link_off(struct ipw_priv *priv)
static void ipw_bg_led_link_off(struct work_struct *work)
static void __ipw_led_activity_on(struct ipw_priv *priv)
static void ipw_led_activity_off(struct ipw_priv *priv)
static void ipw_bg_led_activity_off(struct work_struct *work)
static void ipw_led_band_on(struct ipw_priv *priv)
static void ipw_led_band_off(struct ipw_priv *priv)
static void ipw_led_radio_on(struct ipw_priv *priv)
static void ipw_led_radio_off(struct ipw_priv *priv)
static void ipw_led_link_up(struct ipw_priv *priv)
static void ipw_led_link_down(struct ipw_priv *priv)
static void ipw_led_init(struct ipw_priv *priv)
static void ipw_led_shutdown(struct ipw_priv *priv)
static ssize_t show_debug_level(struct device_driver *d, char *buf)
static ssize_t store_debug_level(struct device_driver *d, const char *buf,
size_t count)
static DRIVER_ATTR(debug_level, S_IWUSR | S_IRUGO,
show_debug_level, store_debug_level);
static inline u32 ipw_get_event_log_len(struct ipw_priv *priv)
static void ipw_capture_event_log(struct ipw_priv *priv,
u32 log_len, struct ipw_event *log)
static struct ipw_fw_error *ipw_alloc_error_log(struct ipw_priv *priv)
static ssize_t show_event_log(struct device *d,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(event_log, S_IRUGO, show_event_log, NULL);
static ssize_t show_error(struct device *d,
struct device_attribute *attr, char *buf)
static ssize_t clear_error(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(error, S_IRUGO | S_IWUSR, show_error, clear_error);
static ssize_t show_cmd_log(struct device *d,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(cmd_log, S_IRUGO, show_cmd_log, NULL);
static void ipw_prom_free(struct ipw_priv *priv);
static int ipw_prom_alloc(struct ipw_priv *priv);
static ssize_t store_rtap_iface(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_rtap_iface(struct device *d,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(rtap_iface, S_IWUSR | S_IRUSR, show_rtap_iface,
store_rtap_iface);
static ssize_t store_rtap_filter(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_rtap_filter(struct device *d,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(rtap_filter, S_IWUSR | S_IRUSR, show_rtap_filter,
store_rtap_filter);
static ssize_t show_scan_age(struct device *d, struct device_attribute *attr,
char *buf)
static ssize_t store_scan_age(struct device *d, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(scan_age, S_IWUSR | S_IRUGO, show_scan_age, store_scan_age);
static ssize_t show_led(struct device *d, struct device_attribute *attr,
char *buf)
static ssize_t store_led(struct device *d, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(led, S_IWUSR | S_IRUGO, show_led, store_led);
static ssize_t show_status(struct device *d,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(status, S_IRUGO, show_status, NULL);
static ssize_t show_cfg(struct device *d, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(cfg, S_IRUGO, show_cfg, NULL);
static ssize_t show_nic_type(struct device *d,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(nic_type, S_IRUGO, show_nic_type, NULL);
static ssize_t show_ucode_version(struct device *d,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(ucode_version, S_IWUSR | S_IRUGO, show_ucode_version, NULL);
static ssize_t show_rtc(struct device *d, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(rtc, S_IWUSR | S_IRUGO, show_rtc, NULL);
static ssize_t show_eeprom_delay(struct device *d,
struct device_attribute *attr, char *buf)
static ssize_t store_eeprom_delay(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(eeprom_delay, S_IWUSR | S_IRUGO,
show_eeprom_delay, store_eeprom_delay);
static ssize_t show_command_event_reg(struct device *d,
struct device_attribute *attr, char *buf)
static ssize_t store_command_event_reg(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(command_event_reg, S_IWUSR | S_IRUGO,
show_command_event_reg, store_command_event_reg);
static ssize_t show_mem_gpio_reg(struct device *d,
struct device_attribute *attr, char *buf)
static ssize_t store_mem_gpio_reg(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(mem_gpio_reg, S_IWUSR | S_IRUGO,
show_mem_gpio_reg, store_mem_gpio_reg);
static ssize_t show_indirect_dword(struct device *d,
struct device_attribute *attr, char *buf)
static ssize_t store_indirect_dword(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(indirect_dword, S_IWUSR | S_IRUGO,
show_indirect_dword, store_indirect_dword);
static ssize_t show_indirect_byte(struct device *d,
struct device_attribute *attr, char *buf)
static ssize_t store_indirect_byte(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(indirect_byte, S_IWUSR | S_IRUGO,
show_indirect_byte, store_indirect_byte);
static ssize_t show_direct_dword(struct device *d,
struct device_attribute *attr, char *buf)
static ssize_t store_direct_dword(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(direct_dword, S_IWUSR | S_IRUGO,
show_direct_dword, store_direct_dword);
static int rf_kill_active(struct ipw_priv *priv)
static ssize_t show_rf_kill(struct device *d, struct device_attribute *attr,
char *buf)
static int ipw_radio_kill_sw(struct ipw_priv *priv, int disable_radio)
static ssize_t store_rf_kill(struct device *d, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(rf_kill, S_IWUSR | S_IRUGO, show_rf_kill, store_rf_kill);
static ssize_t show_speed_scan(struct device *d, struct device_attribute *attr,
char *buf)
static ssize_t store_speed_scan(struct device *d, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(speed_scan, S_IWUSR | S_IRUGO, show_speed_scan,
store_speed_scan);
static ssize_t show_net_stats(struct device *d, struct device_attribute *attr,
char *buf)
static ssize_t store_net_stats(struct device *d, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(net_stats, S_IWUSR | S_IRUGO,
show_net_stats, store_net_stats);
static ssize_t show_channels(struct device *d,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(channels, S_IRUSR, show_channels, NULL);
static void notify_wx_assoc_event(struct ipw_priv *priv)
static void ipw_irq_tasklet(struct ipw_priv *priv)
#define IPW_CMD(x) case IPW_CMD_ ## x : return #x
static char *get_cmd_string(u8 cmd)
#define HOST_COMPLETE_TIMEOUT HZ
static int __ipw_send_cmd(struct ipw_priv *priv, struct host_cmd *cmd)
static int ipw_send_cmd_simple(struct ipw_priv *priv, u8 command)
static int ipw_send_cmd_pdu(struct ipw_priv *priv, u8 command, u8 len,
void *data)
static int ipw_send_host_complete(struct ipw_priv *priv)
static int ipw_send_system_config(struct ipw_priv *priv)
static int ipw_send_ssid(struct ipw_priv *priv, u8 * ssid, int len)
static int ipw_send_adapter_address(struct ipw_priv *priv, u8 * mac)
static void ipw_adapter_restart(void *adapter)
static void ipw_bg_adapter_restart(struct work_struct *work)
static void ipw_abort_scan(struct ipw_priv *priv);
#define IPW_SCAN_CHECK_WATCHDOG	(5 * HZ)
static void ipw_scan_check(void *data)
static void ipw_bg_scan_check(struct work_struct *work)
static int ipw_send_scan_request_ext(struct ipw_priv *priv,
struct ipw_scan_request_ext *request)
static int ipw_send_scan_abort(struct ipw_priv *priv)
static int ipw_set_sensitivity(struct ipw_priv *priv, u16 sens)
static int ipw_send_associate(struct ipw_priv *priv,
struct ipw_associate *associate)
static int ipw_send_supported_rates(struct ipw_priv *priv,
struct ipw_supported_rates *rates)
static int ipw_set_random_seed(struct ipw_priv *priv)
static int ipw_send_card_disable(struct ipw_priv *priv, u32 phy_off)
static int ipw_send_tx_power(struct ipw_priv *priv, struct ipw_tx_power *power)
static int ipw_set_tx_power(struct ipw_priv *priv)
static int ipw_send_rts_threshold(struct ipw_priv *priv, u16 rts)
static int ipw_send_frag_threshold(struct ipw_priv *priv, u16 frag)
static int ipw_send_power_mode(struct ipw_priv *priv, u32 mode)
static int ipw_send_retry_limit(struct ipw_priv *priv, u8 slimit, u8 llimit)
static inline void eeprom_write_reg(struct ipw_priv *p, u32 data)
static void eeprom_cs(struct ipw_priv *priv)
static void eeprom_disable_cs(struct ipw_priv *priv)
static inline void eeprom_write_bit(struct ipw_priv *p, u8 bit)
static void eeprom_op(struct ipw_priv *priv, u8 op, u8 addr)
static u16 eeprom_read_u16(struct ipw_priv *priv, u8 addr)
static void eeprom_parse_mac(struct ipw_priv *priv, u8 * mac)
static void ipw_eeprom_init_sram(struct ipw_priv *priv)
static void ipw_zero_memory(struct ipw_priv *priv, u32 start, u32 count)
static inline void ipw_fw_dma_reset_command_blocks(struct ipw_priv *priv)
static int ipw_fw_dma_enable(struct ipw_priv *priv)
static void ipw_fw_dma_abort(struct ipw_priv *priv)
static int ipw_fw_dma_write_command_block(struct ipw_priv *priv, int index,
struct command_block *cb)
static int ipw_fw_dma_kick(struct ipw_priv *priv)
static void ipw_fw_dma_dump_command_block(struct ipw_priv *priv)
static int ipw_fw_dma_command_block_index(struct ipw_priv *priv)
static int ipw_fw_dma_add_command_block(struct ipw_priv *priv,
u32 src_address,
u32 dest_address,
u32 length,
int interrupt_enabled, int is_last)
static int ipw_fw_dma_add_buffer(struct ipw_priv *priv, dma_addr_t *src_address,
int nr, u32 dest_address, u32 len)
static int ipw_fw_dma_wait(struct ipw_priv *priv)
static void ipw_remove_current_network(struct ipw_priv *priv)
static inline int ipw_alive(struct ipw_priv *priv)
static int ipw_poll_bit(struct ipw_priv *priv, u32 addr, u32 mask,
int timeout)
static int ipw_stop_master(struct ipw_priv *priv)
static void ipw_arc_release(struct ipw_priv *priv)
struct fw_chunk ;
static int ipw_load_ucode(struct ipw_priv *priv, u8 * data, size_t len)
static int ipw_load_firmware(struct ipw_priv *priv, u8 * data, size_t len)
static int ipw_stop_nic(struct ipw_priv *priv)
static void ipw_start_nic(struct ipw_priv *priv)
static int ipw_init_nic(struct ipw_priv *priv)
static int ipw_reset_nic(struct ipw_priv *priv)
struct ipw_fw ;
static int ipw_get_fw(struct ipw_priv *priv,
const struct firmware **raw, const char *name)
#define IPW_RX_BUF_SIZE (3000)
static void ipw_rx_queue_reset(struct ipw_priv *priv,
struct ipw_rx_queue *rxq)
static int fw_loaded = 0;
static const struct firmware *raw = NULL;
static void free_firmware(void)
#define free_firmware() do  while (0)
static int ipw_load(struct ipw_priv *priv)
static int ipw_rx_queue_space(const struct ipw_rx_queue *q)
static inline int ipw_tx_queue_space(const struct clx2_queue *q)
static inline int ipw_queue_inc_wrap(int index, int n_bd)
static void ipw_queue_init(struct ipw_priv *priv, struct clx2_queue *q,
int count, u32 read, u32 write, u32 base, u32 size)
static int ipw_queue_tx_init(struct ipw_priv *priv,
struct clx2_tx_queue *q,
int count, u32 read, u32 write, u32 base, u32 size)
static void ipw_queue_tx_free_tfd(struct ipw_priv *priv,
struct clx2_tx_queue *txq)
static void ipw_queue_tx_free(struct ipw_priv *priv, struct clx2_tx_queue *txq)
static void ipw_tx_queue_free(struct ipw_priv *priv)
static void ipw_create_bssid(struct ipw_priv *priv, u8 * bssid)
static u8 ipw_add_station(struct ipw_priv *priv, u8 * bssid)
static u8 ipw_find_station(struct ipw_priv *priv, u8 * bssid)
static void ipw_send_disassociate(struct ipw_priv *priv, int quiet)
static int ipw_disassociate(void *data)
static void ipw_bg_disassociate(struct work_struct *work)
static void ipw_system_config(struct work_struct *work)
struct ipw_status_code ;
static const struct ipw_status_code ipw_status_codes[] = ;
static const char *ipw_get_status_code(u16 status)
static void inline average_init(struct average *avg)
#define DEPTH_RSSI 8
#define DEPTH_NOISE 16
static s16 exponential_average(s16 prev_avg, s16 val, u8 depth)
static void average_add(struct average *avg, s16 val)
static s16 average_value(struct average *avg)
static void ipw_reset_stats(struct ipw_priv *priv)
static u32 ipw_get_max_rate(struct ipw_priv *priv)
static u32 ipw_get_current_rate(struct ipw_priv *priv)
#define IPW_STATS_INTERVAL (2 * HZ)
static void ipw_gather_stats(struct ipw_priv *priv)
static void ipw_bg_gather_stats(struct work_struct *work)
static void ipw_handle_missed_beacon(struct ipw_priv *priv,
int missed_count)
static void ipw_scan_event(struct work_struct *work)
static void handle_scan_event(struct ipw_priv *priv)
static void ipw_rx_notification(struct ipw_priv *priv,
struct ipw_rx_notification *notif)
static int ipw_queue_reset(struct ipw_priv *priv)
static int ipw_queue_tx_reclaim(struct ipw_priv *priv,
struct clx2_tx_queue *txq, int qindex)
static int ipw_queue_tx_hcmd(struct ipw_priv *priv, int hcmd, void *buf,
int len, int sync)
static void ipw_rx_queue_restock(struct ipw_priv *priv)
static void ipw_rx_queue_replenish(void *data)
static void ipw_bg_rx_queue_replenish(struct work_struct *work)
static void ipw_rx_queue_free(struct ipw_priv *priv, struct ipw_rx_queue *rxq)
static struct ipw_rx_queue *ipw_rx_queue_alloc(struct ipw_priv *priv)
static int ipw_is_rate_in_mask(struct ipw_priv *priv, int ieee_mode, u8 rate)
static int ipw_compatible_rates(struct ipw_priv *priv,
const struct libipw_network *network,
struct ipw_supported_rates *rates)
static void ipw_copy_rates(struct ipw_supported_rates *dest,
const struct ipw_supported_rates *src)
static void ipw_add_cck_scan_rates(struct ipw_supported_rates *rates,
u8 modulation, u32 rate_mask)
static void ipw_add_ofdm_scan_rates(struct ipw_supported_rates *rates,
u8 modulation, u32 rate_mask)
struct ipw_network_match ;
static int ipw_find_adhoc_network(struct ipw_priv *priv,
struct ipw_network_match *match,
struct libipw_network *network,
int roaming)
static void ipw_merge_adhoc_network(struct work_struct *work)
static int ipw_best_network(struct ipw_priv *priv,
struct ipw_network_match *match,
struct libipw_network *network, int roaming)
static void ipw_adhoc_create(struct ipw_priv *priv,
struct libipw_network *network)
static void ipw_send_tgi_tx_key(struct ipw_priv *priv, int type, int index)
static void ipw_send_wep_keys(struct ipw_priv *priv, int type)
static void ipw_set_hw_decrypt_unicast(struct ipw_priv *priv, int level)
static void ipw_set_hw_decrypt_multicast(struct ipw_priv *priv, int level)
static void ipw_set_hwcrypto_keys(struct ipw_priv *priv)
static void ipw_adhoc_check(void *data)
static void ipw_bg_adhoc_check(struct work_struct *work)
static void ipw_debug_config(struct ipw_priv *priv)
static void ipw_set_fixed_rate(struct ipw_priv *priv, int mode)
static void ipw_abort_scan(struct ipw_priv *priv)
static void ipw_add_scan_channels(struct ipw_priv *priv,
struct ipw_scan_request_ext *scan,
int scan_type)
static int ipw_passive_dwell_time(struct ipw_priv *priv)
static int ipw_request_scan_helper(struct ipw_priv *priv, int type, int direct)
static void ipw_request_passive_scan(struct work_struct *work)
static void ipw_request_scan(struct work_struct *work)
static void ipw_request_direct_scan(struct work_struct *work)
static void ipw_bg_abort_scan(struct work_struct *work)
static int ipw_wpa_enable(struct ipw_priv *priv, int value)
static int ipw_wpa_set_auth_algs(struct ipw_priv *priv, int value)
static void ipw_wpa_assoc_frame(struct ipw_priv *priv, char *wpa_ie,
int wpa_ie_len)
static int ipw_set_rsn_capa(struct ipw_priv *priv,
char *capabilities, int length)
static int ipw_wx_set_genie(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_get_genie(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int wext_cipher2level(int cipher)
static int ipw_wx_set_auth(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_get_auth(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_set_encodeext(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_get_encodeext(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_set_mlme(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static u8 ipw_qos_current_mode(struct ipw_priv * priv)
static int ipw_qos_handle_probe_response(struct ipw_priv *priv,
int active_network,
struct libipw_network *network)
static int ipw_qos_activate(struct ipw_priv *priv,
struct libipw_qos_data *qos_network_data)
static int ipw_qos_set_info_element(struct ipw_priv *priv)
static int ipw_qos_association(struct ipw_priv *priv,
struct libipw_network *network)
static int ipw_qos_association_resp(struct ipw_priv *priv,
struct libipw_network *network)
static u32 ipw_qos_get_burst_duration(struct ipw_priv *priv)
static void ipw_qos_init(struct ipw_priv *priv, int enable,
int burst_enable, u32 burst_duration_CCK,
u32 burst_duration_OFDM)
static int ipw_get_tx_queue_number(struct ipw_priv *priv, u16 priority)
static int ipw_is_qos_active(struct net_device *dev,
struct sk_buff *skb)
static int ipw_qos_set_tx_queue_command(struct ipw_priv *priv,
u16 priority,
struct tfd_data *tfd)
static void ipw_bg_qos_activate(struct work_struct *work)
static int ipw_handle_probe_response(struct net_device *dev,
struct libipw_probe_response *resp,
struct libipw_network *network)
static int ipw_handle_beacon(struct net_device *dev,
struct libipw_beacon *resp,
struct libipw_network *network)
static int ipw_handle_assoc_response(struct net_device *dev,
struct libipw_assoc_response *resp,
struct libipw_network *network)
static int ipw_send_qos_params_command(struct ipw_priv *priv, struct libipw_qos_parameters
*qos_param)
static int ipw_send_qos_info_command(struct ipw_priv *priv, struct libipw_qos_information_element
*qos_param)
static int ipw_associate_network(struct ipw_priv *priv,
struct libipw_network *network,
struct ipw_supported_rates *rates, int roaming)
static void ipw_roam(void *data)
static void ipw_bg_roam(struct work_struct *work)
static int ipw_associate(void *data)
static void ipw_bg_associate(struct work_struct *work)
static void ipw_rebuild_decrypted_skb(struct ipw_priv *priv,
struct sk_buff *skb)
static void ipw_handle_data_packet(struct ipw_priv *priv,
struct ipw_rx_mem_buffer *rxb,
struct libipw_rx_stats *stats)
static void ipw_handle_data_packet_monitor(struct ipw_priv *priv,
struct ipw_rx_mem_buffer *rxb,
struct libipw_rx_stats *stats)
#define libipw_is_probe_response(fc) \
((fc & IEEE80211_FCTL_FTYPE) == IEEE80211_FTYPE_MGMT && \
(fc & IEEE80211_FCTL_STYPE) == IEEE80211_STYPE_PROBE_RESP )
#define libipw_is_management(fc) \
((fc & IEEE80211_FCTL_FTYPE) == IEEE80211_FTYPE_MGMT)
#define libipw_is_control(fc) \
((fc & IEEE80211_FCTL_FTYPE) == IEEE80211_FTYPE_CTL)
#define libipw_is_data(fc) \
((fc & IEEE80211_FCTL_FTYPE) == IEEE80211_FTYPE_DATA)
#define libipw_is_assoc_request(fc) \
((fc & IEEE80211_FCTL_STYPE) == IEEE80211_STYPE_ASSOC_REQ)
#define libipw_is_reassoc_request(fc) \
((fc & IEEE80211_FCTL_STYPE) == IEEE80211_STYPE_REASSOC_REQ)
static void ipw_handle_promiscuous_rx(struct ipw_priv *priv,
struct ipw_rx_mem_buffer *rxb,
struct libipw_rx_stats *stats)
static int is_network_packet(struct ipw_priv *priv,
struct libipw_hdr_4addr *header)
#define IPW_PACKET_RETRY_TIME HZ
static  int is_duplicate_packet(struct ipw_priv *priv,
struct libipw_hdr_4addr *header)
static void ipw_handle_mgmt_packet(struct ipw_priv *priv,
struct ipw_rx_mem_buffer *rxb,
struct libipw_rx_stats *stats)
static void ipw_rx(struct ipw_priv *priv)
#define DEFAULT_RTS_THRESHOLD     2304U
#define MIN_RTS_THRESHOLD         1U
#define MAX_RTS_THRESHOLD         2304U
#define DEFAULT_BEACON_INTERVAL   100U
#define	DEFAULT_SHORT_RETRY_LIMIT 7U
#define	DEFAULT_LONG_RETRY_LIMIT  4U
static int ipw_sw_reset(struct ipw_priv *priv, int option)
static int ipw_set_channel(struct ipw_priv *priv, u8 channel)
static int ipw_wx_set_freq(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_get_freq(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_set_mode(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_get_mode(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static const s32 timeout_duration[] = ;
static const s32 period_duration[] = ;
static int ipw_wx_get_range(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_set_wap(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_get_wap(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_set_essid(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_get_essid(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_set_nick(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_get_nick(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_set_sens(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_get_sens(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_set_rate(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_get_rate(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_set_rts(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_get_rts(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_set_txpow(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_get_txpow(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_set_frag(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_get_frag(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_set_retry(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_get_retry(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_set_scan(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_get_scan(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_set_encode(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *key)
static int ipw_wx_get_encode(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *key)
static int ipw_wx_set_power(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_get_power(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_set_powermode(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
#define MAX_WX_STRING 80
static int ipw_wx_get_powermode(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_set_wireless_mode(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_get_wireless_mode(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_set_preamble(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_get_preamble(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_set_monitor(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_reset(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ipw_wx_sw_reset(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static iw_handler ipw_wx_handlers[] = ;
enum ;
static struct iw_priv_args ipw_priv_args[] = ;
static iw_handler ipw_priv_handler[] = ;
static struct iw_handler_def ipw_wx_handler_def = ;
static struct iw_statistics *ipw_get_wireless_stats(struct net_device *dev)
static  void init_sys_config(struct ipw_sys_config *sys_config)
static int ipw_net_open(struct net_device *dev)
static int ipw_net_stop(struct net_device *dev)
static int ipw_tx_skb(struct ipw_priv *priv, struct libipw_txb *txb,
int pri)
static int ipw_net_is_queue_full(struct net_device *dev, int pri)
static void ipw_handle_promiscuous_tx(struct ipw_priv *priv,
struct libipw_txb *txb)
static netdev_tx_t ipw_net_hard_start_xmit(struct libipw_txb *txb,
struct net_device *dev, int pri)
static void ipw_net_set_multicast_list(struct net_device *dev)
static int ipw_net_set_mac_address(struct net_device *dev, void *p)
static void ipw_ethtool_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static u32 ipw_ethtool_get_link(struct net_device *dev)
static int ipw_ethtool_get_eeprom_len(struct net_device *dev)
static int ipw_ethtool_get_eeprom(struct net_device *dev,
struct ethtool_eeprom *eeprom, u8 * bytes)
static int ipw_ethtool_set_eeprom(struct net_device *dev,
struct ethtool_eeprom *eeprom, u8 * bytes)
static const struct ethtool_ops ipw_ethtool_ops = ;
static irqreturn_t ipw_isr(int irq, void *data)
static void ipw_rf_kill(void *adapter)
static void ipw_bg_rf_kill(struct work_struct *work)
static void ipw_link_up(struct ipw_priv *priv)
static void ipw_bg_link_up(struct work_struct *work)
static void ipw_link_down(struct ipw_priv *priv)
static void ipw_bg_link_down(struct work_struct *work)
static int __devinit ipw_setup_deferred_work(struct ipw_priv *priv)
static void shim__set_security(struct net_device *dev,
struct libipw_security *sec)
static int init_supported_rates(struct ipw_priv *priv,
struct ipw_supported_rates *rates)
static int ipw_config(struct ipw_priv *priv)
static const struct libipw_geo ipw_geos[] = ;
#define MAX_HW_RESTARTS 5
static int ipw_up(struct ipw_priv *priv)
static void ipw_bg_up(struct work_struct *work)
static void ipw_deinit(struct ipw_priv *priv)
static void ipw_down(struct ipw_priv *priv)
static void ipw_bg_down(struct work_struct *work)
static int ipw_net_init(struct net_device *dev)
static DEFINE_PCI_DEVICE_TABLE(card_ids) = ;
MODULE_DEVICE_TABLE(pci, card_ids);
static struct attribute *ipw_sysfs_entries[] = ;
static struct attribute_group ipw_attribute_group = ;
static int ipw_prom_open(struct net_device *dev)
static int ipw_prom_stop(struct net_device *dev)
static netdev_tx_t ipw_prom_hard_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static const struct net_device_ops ipw_prom_netdev_ops = ;
static int ipw_prom_alloc(struct ipw_priv *priv)
static void ipw_prom_free(struct ipw_priv *priv)
static const struct net_device_ops ipw_netdev_ops = ;
static int __devinit ipw_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit ipw_pci_remove(struct pci_dev *pdev)
static int ipw_pci_suspend(struct pci_dev *pdev, pm_message_t state)
static int ipw_pci_resume(struct pci_dev *pdev)
static void ipw_pci_shutdown(struct pci_dev *pdev)
static struct pci_driver ipw_driver = ;
static int __init ipw_init(void)
static void __exit ipw_exit(void)
module_param(disable, int, 0444);
MODULE_PARM_DESC(disable, "manually disable the radio (default 0 [radio on])");
module_param(associate, int, 0444);
MODULE_PARM_DESC(associate, "auto associate when scanning (default off)");
module_param(auto_create, int, 0444);
MODULE_PARM_DESC(auto_create, "auto create adhoc network (default on)");
module_param_named(led, led_support, int, 0444);
MODULE_PARM_DESC(led, "enable led control on some systems (default 1 on)");
module_param(debug, int, 0444);
MODULE_PARM_DESC(debug, "debug output mask");
module_param_named(channel, default_channel, int, 0444);
MODULE_PARM_DESC(channel, "channel to limit associate to (default 0 [ANY])");
module_param(rtap_iface, int, 0444);
MODULE_PARM_DESC(rtap_iface, "create the rtap interface (1 - create, default 0)");
module_param(qos_enable, int, 0444);
MODULE_PARM_DESC(qos_enable, "enable all QoS functionalitis");
module_param(qos_burst_enable, int, 0444);
MODULE_PARM_DESC(qos_burst_enable, "enable QoS burst mode");
module_param(qos_no_ack_mask, int, 0444);
MODULE_PARM_DESC(qos_no_ack_mask, "mask Tx_Queue to no ack");
module_param(burst_duration_CCK, int, 0444);
MODULE_PARM_DESC(burst_duration_CCK, "set CCK burst value");
module_param(burst_duration_OFDM, int, 0444);
MODULE_PARM_DESC(burst_duration_OFDM, "set OFDM burst value");
module_param_named(mode, network_mode, int, 0444);
MODULE_PARM_DESC(mode, "network mode (0=BSS,1=IBSS,2=Monitor)");
module_param_named(mode, network_mode, int, 0444);
MODULE_PARM_DESC(mode, "network mode (0=BSS,1=IBSS)");
module_param(bt_coexist, int, 0444);
MODULE_PARM_DESC(bt_coexist, "enable bluetooth coexistence (default off)");
module_param(hwcrypto, int, 0444);
MODULE_PARM_DESC(hwcrypto, "enable hardware crypto (default off)");
module_param(cmdlog, int, 0444);
MODULE_PARM_DESC(cmdlog,
"allocate a ring buffer for logging firmware commands");
module_param(roaming, int, 0444);
MODULE_PARM_DESC(roaming, "enable roaming support (default on)");
module_param(antenna, int, 0444);
MODULE_PARM_DESC(antenna, "select antenna 1=Main, 3=Aux, default 0 [both], 2=slow_diversity (choose the one with lower background noise)");
module_exit(ipw_exit);
module_init(ipw_init);
