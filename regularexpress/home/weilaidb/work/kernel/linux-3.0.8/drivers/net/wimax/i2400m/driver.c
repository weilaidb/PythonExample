#define D_SUBMODULE driver
static char i2400m_debug_params[128];
module_param_string(debug, i2400m_debug_params, sizeof(i2400m_debug_params),
0644);
MODULE_PARM_DESC(debug,
"String of space-separated NAME:VALUE pairs, where NAMEs "
"are the different debug submodules and VALUE are the "
"initial debug value to set.");
static char i2400m_barkers_params[128];
module_param_string(barkers, i2400m_barkers_params,
sizeof(i2400m_barkers_params), 0644);
MODULE_PARM_DESC(barkers,
"String of comma-separated 32-bit values; each is "
"recognized as the value the device sends as a reboot "
"signal; values are appended to a list--setting one value "
"as zero cleans the existing list and starts a new one.");
static
int i2400m_op_msg_from_user(struct wimax_dev *wimax_dev,
const char *pipe_name,
const void *msg_buf, size_t msg_len,
const struct genl_info *genl_info)
struct i2400m_reset_ctx ;
static
int i2400m_op_reset(struct wimax_dev *wimax_dev)
static
int i2400m_check_mac_addr(struct i2400m *i2400m)
static
int __i2400m_dev_start(struct i2400m *i2400m, enum i2400m_bri flags)
static
int i2400m_dev_start(struct i2400m *i2400m, enum i2400m_bri bm_flags)
static
void __i2400m_dev_stop(struct i2400m *i2400m)
static
void i2400m_dev_stop(struct i2400m *i2400m)
static
int i2400m_pm_notifier(struct notifier_block *notifier,
unsigned long pm_event,
void *unused)
int i2400m_pre_reset(struct i2400m *i2400m)
EXPORT_SYMBOL_GPL(i2400m_pre_reset);
int i2400m_post_reset(struct i2400m *i2400m)
EXPORT_SYMBOL_GPL(i2400m_post_reset);
static
void __i2400m_dev_reset_handle(struct work_struct *ws)
int i2400m_dev_reset_handle(struct i2400m *i2400m, const char *reason)
EXPORT_SYMBOL_GPL(i2400m_dev_reset_handle);
static
void __i2400m_error_recovery(struct work_struct *ws)
void i2400m_error_recovery(struct i2400m *i2400m)
EXPORT_SYMBOL_GPL(i2400m_error_recovery);
static
int i2400m_bm_buf_alloc(struct i2400m *i2400m)
static
void i2400m_bm_buf_free(struct i2400m *i2400m)
void i2400m_init(struct i2400m *i2400m)
EXPORT_SYMBOL_GPL(i2400m_init);
int i2400m_reset(struct i2400m *i2400m, enum i2400m_reset_type rt)
EXPORT_SYMBOL_GPL(i2400m_reset);
int i2400m_setup(struct i2400m *i2400m, enum i2400m_bri bm_flags)
EXPORT_SYMBOL_GPL(i2400m_setup);
void i2400m_release(struct i2400m *i2400m)
EXPORT_SYMBOL_GPL(i2400m_release);
struct d_level D_LEVEL[] = ;
size_t D_LEVEL_SIZE = ARRAY_SIZE(D_LEVEL);
static
int __init i2400m_driver_init(void)
module_init(i2400m_driver_init);
static
void __exit i2400m_driver_exit(void)
module_exit(i2400m_driver_exit);
MODULE_AUTHOR("Intel Corporation <linux-wimax@intel.com>");
MODULE_DESCRIPTION("Intel 2400M WiMAX networking bus-generic driver");
MODULE_LICENSE("GPL");
