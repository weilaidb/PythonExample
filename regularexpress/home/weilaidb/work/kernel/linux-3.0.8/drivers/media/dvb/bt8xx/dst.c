static unsigned int verbose = 1;
module_param(verbose, int, 0644);
MODULE_PARM_DESC(verbose, "verbose startup messages, default is 1 (yes)");
static unsigned int dst_addons;
module_param(dst_addons, int, 0644);
MODULE_PARM_DESC(dst_addons, "CA daughterboard, default is 0 (No addons)");
static unsigned int dst_algo;
module_param(dst_algo, int, 0644);
MODULE_PARM_DESC(dst_algo, "tuning algo: default is 0=(SW), 1=(HW)");
#define HAS_LOCK		1
#define ATTEMPT_TUNE		2
#define HAS_POWER		4
#define DST_ERROR		0
#define DST_NOTICE		1
#define DST_INFO		2
#define DST_DEBUG		3
#define dprintk(x, y, z, format, arg...) do  while(0)
static int dst_command(struct dst_state *state, u8 *data, u8 len);
static void dst_packsize(struct dst_state *state, int psize)
static int dst_gpio_outb(struct dst_state *state, u32 mask, u32 enbb,
u32 outhigh, int delay)
static int dst_gpio_inb(struct dst_state *state, u8 *result)
int rdc_reset_state(struct dst_state *state)
EXPORT_SYMBOL(rdc_reset_state);
static int rdc_8820_reset(struct dst_state *state)
static int dst_pio_enable(struct dst_state *state)
int dst_pio_disable(struct dst_state *state)
EXPORT_SYMBOL(dst_pio_disable);
int dst_wait_dst_ready(struct dst_state *state, u8 delay_mode)
EXPORT_SYMBOL(dst_wait_dst_ready);
int dst_error_recovery(struct dst_state *state)
EXPORT_SYMBOL(dst_error_recovery);
int dst_error_bailout(struct dst_state *state)
EXPORT_SYMBOL(dst_error_bailout);
int dst_comm_init(struct dst_state *state)
EXPORT_SYMBOL(dst_comm_init);
int write_dst(struct dst_state *state, u8 *data, u8 len)
EXPORT_SYMBOL(write_dst);
int read_dst(struct dst_state *state, u8 *ret, u8 len)
EXPORT_SYMBOL(read_dst);
static int dst_set_polarization(struct dst_state *state)
static int dst_set_freq(struct dst_state *state, u32 freq)
static int dst_set_bandwidth(struct dst_state *state, fe_bandwidth_t bandwidth)
static int dst_set_inversion(struct dst_state *state, fe_spectral_inversion_t inversion)
static int dst_set_fec(struct dst_state *state, fe_code_rate_t fec)
static fe_code_rate_t dst_get_fec(struct dst_state *state)
static int dst_set_symbolrate(struct dst_state *state, u32 srate)
static int dst_set_modulation(struct dst_state *state, fe_modulation_t modulation)
static fe_modulation_t dst_get_modulation(struct dst_state *state)
u8 dst_check_sum(u8 *buf, u32 len)
EXPORT_SYMBOL(dst_check_sum);
static void dst_type_flags_print(struct dst_state *state)
static int dst_type_print(struct dst_state *state, u8 type)
static struct tuner_types tuner_list[] = ;
static struct dst_types dst_tlist[] = ;
static int dst_get_mac(struct dst_state *state)
static int dst_fw_ver(struct dst_state *state)
static int dst_card_type(struct dst_state *state)
static int dst_get_vendor(struct dst_state *state)
static void debug_dst_buffer(struct dst_state *state)
static int dst_check_stv0299(struct dst_state *state)
static int dst_check_mb86a15(struct dst_state *state)
static int dst_get_tuner_info(struct dst_state *state)
static int dst_get_device_id(struct dst_state *state)
static int dst_probe(struct dst_state *state)
static int dst_command(struct dst_state *state, u8 *data, u8 len)
static int dst_get_signal(struct dst_state *state)
static int dst_tone_power_cmd(struct dst_state *state)
static int dst_get_tuna(struct dst_state *state)
static int dst_set_voltage(struct dvb_frontend *fe, fe_sec_voltage_t voltage);
static int dst_write_tuna(struct dvb_frontend *fe)
static int dst_set_diseqc(struct dvb_frontend *fe, struct dvb_diseqc_master_cmd *cmd)
static int dst_set_voltage(struct dvb_frontend *fe, fe_sec_voltage_t voltage)
static int dst_set_tone(struct dvb_frontend *fe, fe_sec_tone_mode_t tone)
static int dst_send_burst(struct dvb_frontend *fe, fe_sec_mini_cmd_t minicmd)
static int dst_init(struct dvb_frontend *fe)
static int dst_read_status(struct dvb_frontend *fe, fe_status_t *status)
static int dst_read_signal_strength(struct dvb_frontend *fe, u16 *strength)
static int dst_read_snr(struct dvb_frontend *fe, u16 *snr)
static int dst_set_frontend(struct dvb_frontend *fe, struct dvb_frontend_parameters *p)
static int dst_tune_frontend(struct dvb_frontend* fe,
struct dvb_frontend_parameters* p,
unsigned int mode_flags,
unsigned int *delay,
fe_status_t *status)
static int dst_get_tuning_algo(struct dvb_frontend *fe)
static int dst_get_frontend(struct dvb_frontend *fe, struct dvb_frontend_parameters *p)
static void dst_release(struct dvb_frontend *fe)
static struct dvb_frontend_ops dst_dvbt_ops;
static struct dvb_frontend_ops dst_dvbs_ops;
static struct dvb_frontend_ops dst_dvbc_ops;
static struct dvb_frontend_ops dst_atsc_ops;
struct dst_state *dst_attach(struct dst_state *state, struct dvb_adapter *dvb_adapter)
EXPORT_SYMBOL(dst_attach);
static struct dvb_frontend_ops dst_dvbt_ops = ;
static struct dvb_frontend_ops dst_dvbs_ops = ;
static struct dvb_frontend_ops dst_dvbc_ops = ;
static struct dvb_frontend_ops dst_atsc_ops = ;
MODULE_DESCRIPTION("DST DVB-S/T/C/ATSC Combo Frontend driver");
MODULE_AUTHOR("Jamie Honan, Manu Abraham");
MODULE_LICENSE("GPL");
