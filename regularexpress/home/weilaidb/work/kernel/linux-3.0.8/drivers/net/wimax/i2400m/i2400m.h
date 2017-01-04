#define __I2400M_H__
enum ;
enum ;
enum ;
struct i2400m_poke_table;
#define I2400M_FW_POKE(a, d)
enum i2400m_reset_type ;
struct i2400m_reset_ctx;
struct i2400m_roq;
struct i2400m_barker_db;
struct i2400m ;
static inline
struct i2400m *wimax_dev_to_i2400m(struct wimax_dev *wimax_dev)
static inline
struct i2400m *net_dev_to_i2400m(struct net_device *net_dev)
enum i2400m_bm_cmd_flags ;
enum i2400m_bri ;
extern void i2400m_bm_cmd_prepare(struct i2400m_bootrom_header *);
extern int i2400m_dev_bootstrap(struct i2400m *, enum i2400m_bri);
extern int i2400m_read_mac_addr(struct i2400m *);
extern int i2400m_bootrom_init(struct i2400m *, enum i2400m_bri);
extern int i2400m_is_boot_barker(struct i2400m *, const void *, size_t);
static inline
int i2400m_is_d2h_barker(const void *buf)
extern void i2400m_unknown_barker(struct i2400m *, const void *, size_t);
static inline
__le32 i2400m_brh_command(enum i2400m_brh_opcode opcode, unsigned use_checksum,
unsigned direct_access)
static inline
void i2400m_brh_set_opcode(struct i2400m_bootrom_header *hdr,
enum i2400m_brh_opcode opcode)
static inline
unsigned i2400m_brh_get_opcode(const struct i2400m_bootrom_header *hdr)
static inline
unsigned i2400m_brh_get_response(const struct i2400m_bootrom_header *hdr)
static inline
unsigned i2400m_brh_get_use_checksum(const struct i2400m_bootrom_header *hdr)
static inline
unsigned i2400m_brh_get_response_required(
const struct i2400m_bootrom_header *hdr)
static inline
unsigned i2400m_brh_get_direct_access(const struct i2400m_bootrom_header *hdr)
static inline
unsigned i2400m_brh_get_signature(const struct i2400m_bootrom_header *hdr)
extern void i2400m_init(struct i2400m *);
extern int i2400m_reset(struct i2400m *, enum i2400m_reset_type);
extern void i2400m_netdev_setup(struct net_device *net_dev);
extern int i2400m_sysfs_setup(struct device_driver *);
extern void i2400m_sysfs_release(struct device_driver *);
extern int i2400m_tx_setup(struct i2400m *);
extern void i2400m_wake_tx_work(struct work_struct *);
extern void i2400m_tx_release(struct i2400m *);
extern int i2400m_rx_setup(struct i2400m *);
extern void i2400m_rx_release(struct i2400m *);
extern void i2400m_fw_cache(struct i2400m *);
extern void i2400m_fw_uncache(struct i2400m *);
extern void i2400m_net_rx(struct i2400m *, struct sk_buff *, unsigned,
const void *, int);
extern void i2400m_net_erx(struct i2400m *, struct sk_buff *,
enum i2400m_cs);
extern void i2400m_net_wake_stop(struct i2400m *);
enum i2400m_pt;
extern int i2400m_tx(struct i2400m *, const void *, size_t, enum i2400m_pt);
extern int i2400m_debugfs_add(struct i2400m *);
extern void i2400m_debugfs_rm(struct i2400m *);
static inline int i2400m_debugfs_add(struct i2400m *i2400m)
static inline void i2400m_debugfs_rm(struct i2400m *i2400m)
extern int i2400m_dev_initialize(struct i2400m *);
extern void i2400m_dev_shutdown(struct i2400m *);
extern struct attribute_group i2400m_dev_attr_group;
static inline
size_t i2400m_pld_size(const struct i2400m_pld *pld)
static inline
enum i2400m_pt i2400m_pld_type(const struct i2400m_pld *pld)
static inline
void i2400m_pld_set(struct i2400m_pld *pld, size_t size,
enum i2400m_pt type)
static inline
struct i2400m *i2400m_get(struct i2400m *i2400m)
static inline
void i2400m_put(struct i2400m *i2400m)
extern int i2400m_dev_reset_handle(struct i2400m *, const char *);
extern int i2400m_pre_reset(struct i2400m *);
extern int i2400m_post_reset(struct i2400m *);
extern void i2400m_error_recovery(struct i2400m *);
extern int i2400m_setup(struct i2400m *, enum i2400m_bri bm_flags);
extern void i2400m_release(struct i2400m *);
extern int i2400m_rx(struct i2400m *, struct sk_buff *);
extern struct i2400m_msg_hdr *i2400m_tx_msg_get(struct i2400m *, size_t *);
extern void i2400m_tx_msg_sent(struct i2400m *);
static inline
struct device *i2400m_dev(struct i2400m *i2400m)
extern int i2400m_msg_check_status(const struct i2400m_l3l4_hdr *,
char *, size_t);
extern int i2400m_msg_size_check(struct i2400m *,
const struct i2400m_l3l4_hdr *, size_t);
extern struct sk_buff *i2400m_msg_to_dev(struct i2400m *, const void *, size_t);
extern void i2400m_msg_to_dev_cancel_wait(struct i2400m *, int);
extern void i2400m_report_hook(struct i2400m *,
const struct i2400m_l3l4_hdr *, size_t);
extern void i2400m_report_hook_work(struct work_struct *);
extern int i2400m_cmd_enter_powersave(struct i2400m *);
extern int i2400m_cmd_exit_idle(struct i2400m *);
extern struct sk_buff *i2400m_get_device_info(struct i2400m *);
extern int i2400m_firmware_check(struct i2400m *);
extern int i2400m_set_idle_timeout(struct i2400m *, unsigned);
static inline
struct usb_endpoint_descriptor *usb_get_epd(struct usb_interface *iface, int ep)
extern int i2400m_op_rfkill_sw_toggle(struct wimax_dev *,
enum wimax_rf_state);
extern void i2400m_report_tlv_rf_switches_status(
struct i2400m *, const struct i2400m_tlv_rf_switches_status *);
static inline
unsigned i2400m_le_v1_3(struct i2400m *i2400m)
static inline
unsigned i2400m_ge_v1_4(struct i2400m *i2400m)
static inline
void __i2400m_msleep(unsigned ms)
extern int i2400m_barker_db_init(const char *);
extern void i2400m_barker_db_exit(void);
