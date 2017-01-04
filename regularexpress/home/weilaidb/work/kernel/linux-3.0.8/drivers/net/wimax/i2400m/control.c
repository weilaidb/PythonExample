#define D_SUBMODULE control
static int i2400m_idle_mode_disabled;
module_param_named(idle_mode_disabled, i2400m_idle_mode_disabled, int, 0644);
MODULE_PARM_DESC(idle_mode_disabled,
"If true, the device will not enable idle mode negotiation "
"with the base station (when connected) to save power.");
static int i2400m_power_save_disabled;
module_param_named(power_save_disabled, i2400m_power_save_disabled, int, 0644);
MODULE_PARM_DESC(power_save_disabled,
"If true, the driver will not tell the device to enter "
"power saving mode when it reports it is ready for it. "
"False by default (so the device is told to do power "
"saving).");
static int i2400m_passive_mode;
module_param_named(passive_mode, i2400m_passive_mode, int, 0644);
MODULE_PARM_DESC(passive_mode,
"If true, the driver will not do any device setup "
"and leave it up to user space, who must be properly "
"setup.");
static
ssize_t i2400m_tlv_match(const struct i2400m_tlv_hdr *tlv,
enum i2400m_tlv tlv_type, ssize_t tlv_size)
static
const struct i2400m_tlv_hdr *i2400m_tlv_buffer_walk(
struct i2400m *i2400m,
const void *tlv_buf, size_t buf_size,
const struct i2400m_tlv_hdr *tlv_pos)
static
const struct i2400m_tlv_hdr *i2400m_tlv_find(
struct i2400m *i2400m,
const struct i2400m_tlv_hdr *tlv_hdr, size_t size,
enum i2400m_tlv tlv_type, ssize_t tlv_size)
static const struct
ms_to_errno[I2400M_MS_MAX] = ;
int i2400m_msg_check_status(const struct i2400m_l3l4_hdr *l3l4_hdr,
char *strbuf, size_t strbuf_size)
static
void i2400m_report_tlv_system_state(struct i2400m *i2400m,
const struct i2400m_tlv_system_state *ss)
static
void i2400m_report_tlv_media_status(struct i2400m *i2400m,
const struct i2400m_tlv_media_status *ms)
static
void i2400m_report_state_parse_tlv(struct i2400m *i2400m,
const struct i2400m_tlv_hdr *tlv,
const char *tag)
static
void i2400m_report_state_hook(struct i2400m *i2400m,
const struct i2400m_l3l4_hdr *l3l4_hdr,
size_t size, const char *tag)
void i2400m_report_hook(struct i2400m *i2400m,
const struct i2400m_l3l4_hdr *l3l4_hdr, size_t size)
static void i2400m_msg_ack_hook(struct i2400m *i2400m,
const struct i2400m_l3l4_hdr *l3l4_hdr,
size_t size)
int i2400m_msg_size_check(struct i2400m *i2400m,
const struct i2400m_l3l4_hdr *l3l4_hdr,
size_t msg_size)
void i2400m_msg_to_dev_cancel_wait(struct i2400m *i2400m, int code)
struct sk_buff *i2400m_msg_to_dev(struct i2400m *i2400m,
const void *buf, size_t buf_len)
enum ;
struct i2400m_cmd_enter_power_save  __packed;
int i2400m_cmd_enter_powersave(struct i2400m *i2400m)
EXPORT_SYMBOL_GPL(i2400m_cmd_enter_powersave);
enum ;
struct sk_buff *i2400m_get_device_info(struct i2400m *i2400m)
enum ;
int i2400m_firmware_check(struct i2400m *i2400m)
int i2400m_cmd_exit_idle(struct i2400m *i2400m)
static int i2400m_cmd_get_state(struct i2400m *i2400m)
static int i2400m_set_init_config(struct i2400m *i2400m,
const struct i2400m_tlv_hdr **arg,
size_t args)
int i2400m_set_idle_timeout(struct i2400m *i2400m, unsigned msecs)
int i2400m_dev_initialize(struct i2400m *i2400m)
void i2400m_dev_shutdown(struct i2400m *i2400m)
