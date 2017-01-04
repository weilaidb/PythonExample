int tda18271_debug;
module_param_named(debug, tda18271_debug, int, 0644);
MODULE_PARM_DESC(debug, "set debug level "
"(info=1, map=2, reg=4, adv=8, cal=16 (or-able))");
static int tda18271_cal_on_startup = -1;
module_param_named(cal, tda18271_cal_on_startup, int, 0644);
MODULE_PARM_DESC(cal, "perform RF tracking filter calibration on startup");
static DEFINE_MUTEX(tda18271_list_mutex);
static LIST_HEAD(hybrid_tuner_instance_list);
static int tda18271_toggle_output(struct dvb_frontend *fe, int standby)
static inline int charge_pump_source(struct dvb_frontend *fe, int force)
static inline void tda18271_set_if_notch(struct dvb_frontend *fe)
static int tda18271_channel_configuration(struct dvb_frontend *fe,
struct tda18271_std_map_item *map,
u32 freq, u32 bw)
static int tda18271_read_thermometer(struct dvb_frontend *fe)
static int tda18271c2_rf_tracking_filters_correction(struct dvb_frontend *fe,
u32 freq)
static int tda18271_por(struct dvb_frontend *fe)
static int tda18271_calibrate_rf(struct dvb_frontend *fe, u32 freq)
static int tda18271_powerscan(struct dvb_frontend *fe,
u32 *freq_in, u32 *freq_out)
static int tda18271_powerscan_init(struct dvb_frontend *fe)
static int tda18271_rf_tracking_filters_init(struct dvb_frontend *fe, u32 freq)
static int tda18271_calc_rf_filter_curve(struct dvb_frontend *fe)
static int tda18271c2_rf_cal_init(struct dvb_frontend *fe)
static int tda18271c1_rf_tracking_filter_calibration(struct dvb_frontend *fe,
u32 freq, u32 bw)
static int tda18271_ir_cal_init(struct dvb_frontend *fe)
static int tda18271_init(struct dvb_frontend *fe)
static int tda18271_sleep(struct dvb_frontend *fe)
static int tda18271_agc(struct dvb_frontend *fe)
static int tda18271_tune(struct dvb_frontend *fe,
struct tda18271_std_map_item *map, u32 freq, u32 bw)
static int tda18271_set_params(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
static int tda18271_set_analog_params(struct dvb_frontend *fe,
struct analog_parameters *params)
static int tda18271_release(struct dvb_frontend *fe)
static int tda18271_get_frequency(struct dvb_frontend *fe, u32 *frequency)
static int tda18271_get_bandwidth(struct dvb_frontend *fe, u32 *bandwidth)
#define tda18271_update_std(std_cfg, name) do  while (0)
#define tda18271_dump_std_item(std_cfg, name) do  while (0)
static int tda18271_dump_std_map(struct dvb_frontend *fe)
static int tda18271_update_std_map(struct dvb_frontend *fe,
struct tda18271_std_map *map)
static int tda18271_get_id(struct dvb_frontend *fe)
static int tda18271_setup_configuration(struct dvb_frontend *fe,
struct tda18271_config *cfg)
static inline int tda18271_need_cal_on_startup(struct tda18271_config *cfg)
static int tda18271_set_config(struct dvb_frontend *fe, void *priv_cfg)
static struct dvb_tuner_ops tda18271_tuner_ops = ;
struct dvb_frontend *tda18271_attach(struct dvb_frontend *fe, u8 addr,
struct i2c_adapter *i2c,
struct tda18271_config *cfg)
EXPORT_SYMBOL_GPL(tda18271_attach);
MODULE_DESCRIPTION("NXP TDA18271HD analog / digital tuner driver");
MODULE_AUTHOR("Michael Krufky <mkrufky@linuxtv.org>");
MODULE_LICENSE("GPL");
MODULE_VERSION("0.4");
