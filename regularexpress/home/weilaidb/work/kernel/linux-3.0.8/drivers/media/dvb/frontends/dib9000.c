static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "turn on debugging (default: 0)");
#define dprintk(args...) do  while (0)
#define MAX_NUMBER_OF_FRONTENDS 6
struct i2c_device ;
#define DIB_LOCK struct mutex
#define DibAcquireLock(lock) do  while (0)
#define DibReleaseLock(lock) mutex_unlock(lock)
#define DibInitLock(lock) mutex_init(lock)
#define DibFreeLock(lock)
struct dib9000_state ;
static const u32 fe_info[44] = ;
enum dib9000_power_mode ;
enum dib9000_out_messages ;
enum dib9000_in_messages ;
#define FE_MM_W_CHANNEL                   0
#define FE_MM_W_FE_INFO                   1
#define FE_MM_RW_SYNC                     2
#define FE_SYNC_CHANNEL          1
#define FE_SYNC_W_GENERIC_MONIT	 2
#define FE_SYNC_COMPONENT_ACCESS 3
#define FE_MM_R_CHANNEL_SEARCH_STATE      3
#define FE_MM_R_CHANNEL_UNION_CONTEXT     4
#define FE_MM_R_FE_INFO                   5
#define FE_MM_R_FE_MONITOR                6
#define FE_MM_W_CHANNEL_HEAD              7
#define FE_MM_W_CHANNEL_UNION             8
#define FE_MM_W_CHANNEL_CONTEXT           9
#define FE_MM_R_CHANNEL_UNION            10
#define FE_MM_R_CHANNEL_CONTEXT          11
#define FE_MM_R_CHANNEL_TUNE_STATE       12
#define FE_MM_R_GENERIC_MONITORING_SIZE	 13
#define FE_MM_W_GENERIC_MONITORING	     14
#define FE_MM_R_GENERIC_MONITORING	     15
#define FE_MM_W_COMPONENT_ACCESS         16
#define FE_MM_RW_COMPONENT_ACCESS_BUFFER 17
static int dib9000_risc_apb_access_read(struct dib9000_state *state, u32 address, u16 attribute, const u8 * tx, u32 txlen, u8 * b, u32 len);
static int dib9000_risc_apb_access_write(struct dib9000_state *state, u32 address, u16 attribute, const u8 * b, u32 len);
static u16 to_fw_output_mode(u16 mode)
static u16 dib9000_read16_attr(struct dib9000_state *state, u16 reg, u8 * b, u32 len, u16 attribute)
static u16 dib9000_i2c_read16(struct i2c_device *i2c, u16 reg)
static inline u16 dib9000_read_word(struct dib9000_state *state, u16 reg)
static inline u16 dib9000_read_word_attr(struct dib9000_state *state, u16 reg, u16 attribute)
#define dib9000_read16_noinc_attr(state, reg, b, len, attribute) dib9000_read16_attr(state, reg, b, len, (attribute) | DATA_BUS_ACCESS_MODE_NO_ADDRESS_INCREMENT)
static u16 dib9000_write16_attr(struct dib9000_state *state, u16 reg, const u8 * buf, u32 len, u16 attribute)
static int dib9000_i2c_write16(struct i2c_device *i2c, u16 reg, u16 val)
static inline int dib9000_write_word(struct dib9000_state *state, u16 reg, u16 val)
static inline int dib9000_write_word_attr(struct dib9000_state *state, u16 reg, u16 val, u16 attribute)
#define dib9000_write(state, reg, buf, len) dib9000_write16_attr(state, reg, buf, len, 0)
#define dib9000_write16_noinc(state, reg, buf, len) dib9000_write16_attr(state, reg, buf, len, DATA_BUS_ACCESS_MODE_NO_ADDRESS_INCREMENT)
#define dib9000_write16_noinc_attr(state, reg, buf, len, attribute) dib9000_write16_attr(state, reg, buf, len, DATA_BUS_ACCESS_MODE_NO_ADDRESS_INCREMENT | (attribute))
#define dib9000_mbx_send(state, id, data, len) dib9000_mbx_send_attr(state, id, data, len, 0)
#define dib9000_mbx_get_message(state, id, msg, len) dib9000_mbx_get_message_attr(state, id, msg, len, 0)
#define MAC_IRQ      (1 << 1)
#define IRQ_POL_MSK  (1 << 4)
#define dib9000_risc_mem_read_chunks(state, b, len) dib9000_read16_attr(state, 1063, b, len, DATA_BUS_ACCESS_MODE_8BIT | DATA_BUS_ACCESS_MODE_NO_ADDRESS_INCREMENT)
#define dib9000_risc_mem_write_chunks(state, buf, len) dib9000_write16_attr(state, 1063, buf, len, DATA_BUS_ACCESS_MODE_8BIT | DATA_BUS_ACCESS_MODE_NO_ADDRESS_INCREMENT)
static void dib9000_risc_mem_setup_cmd(struct dib9000_state *state, u32 addr, u32 len, u8 reading)
static void dib9000_risc_mem_setup(struct dib9000_state *state, u8 cmd)
static int dib9000_risc_mem_read(struct dib9000_state *state, u8 cmd, u8 * b, u16 len)
static int dib9000_risc_mem_write(struct dib9000_state *state, u8 cmd, const u8 * b)
static int dib9000_firmware_download(struct dib9000_state *state, u8 risc_id, u16 key, const u8 * code, u32 len)
static int dib9000_mbx_host_init(struct dib9000_state *state, u8 risc_id)
#define MAX_MAILBOX_TRY 100
static int dib9000_mbx_send_attr(struct dib9000_state *state, u8 id, u16 * data, u8 len, u16 attr)
static u8 dib9000_mbx_read(struct dib9000_state *state, u16 * data, u8 risc_id, u16 attr)
static int dib9000_risc_debug_buf(struct dib9000_state *state, u16 * data, u8 size)
static int dib9000_mbx_fetch_to_cache(struct dib9000_state *state, u16 attr)
static u8 dib9000_mbx_count(struct dib9000_state *state, u8 risc_id, u16 attr)
static int dib9000_mbx_process(struct dib9000_state *state, u16 attr)
static int dib9000_mbx_get_message_attr(struct dib9000_state *state, u16 id, u16 * msg, u8 * size, u16 attr)
static int dib9000_risc_check_version(struct dib9000_state *state)
static int dib9000_fw_boot(struct dib9000_state *state, const u8 * codeA, u32 lenA, const u8 * codeB, u32 lenB)
static u16 dib9000_identify(struct i2c_device *client)
static void dib9000_set_power_mode(struct dib9000_state *state, enum dib9000_power_mode mode)
static int dib9000_fw_reset(struct dvb_frontend *fe)
static int dib9000_risc_apb_access_read(struct dib9000_state *state, u32 address, u16 attribute, const u8 * tx, u32 txlen, u8 * b, u32 len)
static int dib9000_risc_apb_access_write(struct dib9000_state *state, u32 address, u16 attribute, const u8 * b, u32 len)
static int dib9000_fw_memmbx_sync(struct dib9000_state *state, u8 i)
static int dib9000_fw_init(struct dib9000_state *state)
static void dib9000_fw_set_channel_head(struct dib9000_state *state, struct dvb_frontend_parameters *ch)
static int dib9000_fw_get_channel(struct dvb_frontend *fe, struct dvb_frontend_parameters *channel)
static int dib9000_fw_set_channel_union(struct dvb_frontend *fe, struct dvb_frontend_parameters *channel)
static int dib9000_fw_tune(struct dvb_frontend *fe, struct dvb_frontend_parameters *ch)
static int dib9000_fw_set_diversity_in(struct dvb_frontend *fe, int onoff)
static int dib9000_fw_set_output_mode(struct dvb_frontend *fe, int mode)
static int dib9000_tuner_xfer(struct i2c_adapter *i2c_adap, struct i2c_msg msg[], int num)
int dib9000_fw_set_component_bus_speed(struct dvb_frontend *fe, u16 speed)
EXPORT_SYMBOL(dib9000_fw_set_component_bus_speed);
static int dib9000_fw_component_bus_xfer(struct i2c_adapter *i2c_adap, struct i2c_msg msg[], int num)
static u32 dib9000_i2c_func(struct i2c_adapter *adapter)
static struct i2c_algorithm dib9000_tuner_algo = ;
static struct i2c_algorithm dib9000_component_bus_algo = ;
struct i2c_adapter *dib9000_get_tuner_interface(struct dvb_frontend *fe)
EXPORT_SYMBOL(dib9000_get_tuner_interface);
struct i2c_adapter *dib9000_get_component_bus_interface(struct dvb_frontend *fe)
EXPORT_SYMBOL(dib9000_get_component_bus_interface);
struct i2c_adapter *dib9000_get_i2c_master(struct dvb_frontend *fe, enum dibx000_i2c_interface intf, int gating)
EXPORT_SYMBOL(dib9000_get_i2c_master);
int dib9000_set_i2c_adapter(struct dvb_frontend *fe, struct i2c_adapter *i2c)
EXPORT_SYMBOL(dib9000_set_i2c_adapter);
static int dib9000_cfg_gpio(struct dib9000_state *st, u8 num, u8 dir, u8 val)
int dib9000_set_gpio(struct dvb_frontend *fe, u8 num, u8 dir, u8 val)
EXPORT_SYMBOL(dib9000_set_gpio);
int dib9000_fw_pid_filter_ctrl(struct dvb_frontend *fe, u8 onoff)
EXPORT_SYMBOL(dib9000_fw_pid_filter_ctrl);
int dib9000_fw_pid_filter(struct dvb_frontend *fe, u8 id, u16 pid, u8 onoff)
EXPORT_SYMBOL(dib9000_fw_pid_filter);
int dib9000_firmware_post_pll_init(struct dvb_frontend *fe)
EXPORT_SYMBOL(dib9000_firmware_post_pll_init);
static void dib9000_release(struct dvb_frontend *demod)
static int dib9000_wakeup(struct dvb_frontend *fe)
static int dib9000_sleep(struct dvb_frontend *fe)
static int dib9000_fe_get_tune_settings(struct dvb_frontend *fe, struct dvb_frontend_tune_settings *tune)
static int dib9000_get_frontend(struct dvb_frontend *fe, struct dvb_frontend_parameters *fep)
static int dib9000_set_tune_state(struct dvb_frontend *fe, enum frontend_tune_state tune_state)
static u32 dib9000_get_status(struct dvb_frontend *fe)
static int dib9000_set_channel_status(struct dvb_frontend *fe, struct dvb_frontend_parametersContext *channel_status)
static int dib9000_set_frontend(struct dvb_frontend *fe, struct dvb_frontend_parameters *fep)
static u16 dib9000_read_lock(struct dvb_frontend *fe)
static int dib9000_read_status(struct dvb_frontend *fe, fe_status_t * stat)
static int dib9000_read_ber(struct dvb_frontend *fe, u32 * ber)
static int dib9000_read_signal_strength(struct dvb_frontend *fe, u16 * strength)
static u32 dib9000_get_snr(struct dvb_frontend *fe)
static int dib9000_read_snr(struct dvb_frontend *fe, u16 * snr)
static int dib9000_read_unc_blocks(struct dvb_frontend *fe, u32 * unc)
int dib9000_i2c_enumeration(struct i2c_adapter *i2c, int no_of_demods, u8 default_addr, u8 first_addr)
EXPORT_SYMBOL(dib9000_i2c_enumeration);
int dib9000_set_slave_frontend(struct dvb_frontend *fe, struct dvb_frontend *fe_slave)
EXPORT_SYMBOL(dib9000_set_slave_frontend);
int dib9000_remove_slave_frontend(struct dvb_frontend *fe)
EXPORT_SYMBOL(dib9000_remove_slave_frontend);
struct dvb_frontend *dib9000_get_slave_frontend(struct dvb_frontend *fe, int slave_index)
EXPORT_SYMBOL(dib9000_get_slave_frontend);
static struct dvb_frontend_ops dib9000_ops;
struct dvb_frontend *dib9000_attach(struct i2c_adapter *i2c_adap, u8 i2c_addr, const struct dib9000_config *cfg)
EXPORT_SYMBOL(dib9000_attach);
static struct dvb_frontend_ops dib9000_ops = ;
MODULE_AUTHOR("Patrick Boettcher <pboettcher@dibcom.fr>");
MODULE_AUTHOR("Olivier Grenie <ogrenie@dibcom.fr>");
MODULE_DESCRIPTION("Driver for the DiBcom 9000 COFDM demodulator");
MODULE_LICENSE("GPL");
