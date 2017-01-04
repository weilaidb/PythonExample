int stvdebug = 1;
module_param_named(debug, stvdebug, int, 0644);
struct stv0900_inode ;
static struct stv0900_inode *stv0900_first_inode;
static struct stv0900_inode *find_inode(struct i2c_adapter *i2c_adap,
u8 i2c_addr)
static void remove_inode(struct stv0900_internal *internal)
static struct stv0900_inode *append_internal(struct stv0900_internal *internal)
s32 ge2comp(s32 a, s32 width)
void stv0900_write_reg(struct stv0900_internal *intp, u16 reg_addr,
u8 reg_data)
u8 stv0900_read_reg(struct stv0900_internal *intp, u16 reg)
static void extract_mask_pos(u32 label, u8 *mask, u8 *pos)
void stv0900_write_bits(struct stv0900_internal *intp, u32 label, u8 val)
u8 stv0900_get_bits(struct stv0900_internal *intp, u32 label)
static enum fe_stv0900_error stv0900_initialize(struct stv0900_internal *intp)
static u32 stv0900_get_mclk_freq(struct stv0900_internal *intp, u32 ext_clk)
static enum fe_stv0900_error stv0900_set_mclk(struct stv0900_internal *intp, u32 mclk)
static u32 stv0900_get_err_count(struct stv0900_internal *intp, int cntr,
enum fe_stv0900_demod_num demod)
static int stv0900_i2c_gate_ctrl(struct dvb_frontend *fe, int enable)
static void stv0900_set_ts_parallel_serial(struct stv0900_internal *intp,
enum fe_stv0900_clock_type path1_ts,
enum fe_stv0900_clock_type path2_ts)
void stv0900_set_tuner(struct dvb_frontend *fe, u32 frequency,
u32 bandwidth)
void stv0900_set_bandwidth(struct dvb_frontend *fe, u32 bandwidth)
u32 stv0900_get_freq_auto(struct stv0900_internal *intp, int demod)
void stv0900_set_tuner_auto(struct stv0900_internal *intp, u32 Frequency,
u32 Bandwidth, int demod)
static s32 stv0900_get_rf_level(struct stv0900_internal *intp,
const struct stv0900_table *lookup,
enum fe_stv0900_demod_num demod)
static int stv0900_read_signal_strength(struct dvb_frontend *fe, u16 *strength)
static s32 stv0900_carr_get_quality(struct dvb_frontend *fe,
const struct stv0900_table *lookup)
static int stv0900_read_ucblocks(struct dvb_frontend *fe, u32 * ucblocks)
static int stv0900_read_snr(struct dvb_frontend *fe, u16 *snr)
static u32 stv0900_get_ber(struct stv0900_internal *intp,
enum fe_stv0900_demod_num demod)
static int stv0900_read_ber(struct dvb_frontend *fe, u32 *ber)
int stv0900_get_demod_lock(struct stv0900_internal *intp,
enum fe_stv0900_demod_num demod, s32 time_out)
void stv0900_stop_all_s2_modcod(struct stv0900_internal *intp,
enum fe_stv0900_demod_num demod)
void stv0900_activate_s2_modcod(struct stv0900_internal *intp,
enum fe_stv0900_demod_num demod)
void stv0900_activate_s2_modcod_single(struct stv0900_internal *intp,
enum fe_stv0900_demod_num demod)
static enum dvbfe_algo stv0900_frontend_algo(struct dvb_frontend *fe)
static int stb0900_set_property(struct dvb_frontend *fe,
struct dtv_property *tvp)
static int stb0900_get_property(struct dvb_frontend *fe,
struct dtv_property *tvp)
void stv0900_start_search(struct stv0900_internal *intp,
enum fe_stv0900_demod_num demod)
u8 stv0900_get_optim_carr_loop(s32 srate, enum fe_stv0900_modcode modcode,
s32 pilot, u8 chip_id)
u8 stv0900_get_optim_short_carr_loop(s32 srate,
enum fe_stv0900_modulation modulation,
u8 chip_id)
static
enum fe_stv0900_error stv0900_st_dvbs2_single(struct stv0900_internal *intp,
enum fe_stv0900_demod_mode LDPC_Mode,
enum fe_stv0900_demod_num demod)
static enum fe_stv0900_error stv0900_init_internal(struct dvb_frontend *fe,
struct stv0900_init_params *p_init)
static int stv0900_status(struct stv0900_internal *intp,
enum fe_stv0900_demod_num demod)
static enum dvbfe_search stv0900_search(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
static int stv0900_read_status(struct dvb_frontend *fe, enum fe_status *status)
static int stv0900_track(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int stv0900_stop_ts(struct dvb_frontend *fe, int stop_ts)
static int stv0900_diseqc_init(struct dvb_frontend *fe)
static int stv0900_init(struct dvb_frontend *fe)
static int stv0900_diseqc_send(struct stv0900_internal *intp , u8 *data,
u32 NbData, enum fe_stv0900_demod_num demod)
static int stv0900_send_master_cmd(struct dvb_frontend *fe,
struct dvb_diseqc_master_cmd *cmd)
static int stv0900_send_burst(struct dvb_frontend *fe, fe_sec_mini_cmd_t burst)
static int stv0900_recv_slave_reply(struct dvb_frontend *fe,
struct dvb_diseqc_slave_reply *reply)
static int stv0900_set_tone(struct dvb_frontend *fe, fe_sec_tone_mode_t toneoff)
static void stv0900_release(struct dvb_frontend *fe)
static int stv0900_sleep(struct dvb_frontend *fe)
static int stv0900_get_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static struct dvb_frontend_ops stv0900_ops = ;
struct dvb_frontend *stv0900_attach(const struct stv0900_config *config,
struct i2c_adapter *i2c,
int demod)
EXPORT_SYMBOL(stv0900_attach);
MODULE_PARM_DESC(debug, "Set debug");
MODULE_AUTHOR("Igor M. Liplianin");
MODULE_DESCRIPTION("ST STV0900 frontend");
MODULE_LICENSE("GPL");
