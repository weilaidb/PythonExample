#define UNSET (-1U)
#define PREFIX (t->i2c->driver->driver.name)
static unsigned int addr;
static unsigned int no_autodetect;
static unsigned int show_i2c;
module_param(addr, int, 0444);
module_param(no_autodetect, int, 0444);
module_param(show_i2c, int, 0444);
static int tuner_debug;
static unsigned int tv_range[2] = ;
static unsigned int radio_range[2] = ;
static char pal[] = "--";
static char secam[] = "--";
static char ntsc[] = "-";
module_param_named(debug, tuner_debug, int, 0644);
module_param_array(tv_range, int, NULL, 0644);
module_param_array(radio_range, int, NULL, 0644);
module_param_string(pal, pal, sizeof(pal), 0644);
module_param_string(secam, secam, sizeof(secam), 0644);
module_param_string(ntsc, ntsc, sizeof(ntsc), 0644);
static LIST_HEAD(tuner_list);
static const struct v4l2_subdev_ops tuner_ops;
#define tuner_warn(fmt, arg...) do  while (0)
#define tuner_info(fmt, arg...) do  while (0)
#define tuner_err(fmt, arg...) do  while (0)
#define tuner_dbg(fmt, arg...) do  while (0)
struct tuner ;
static void set_tv_freq(struct i2c_client *c, unsigned int freq);
static void set_radio_freq(struct i2c_client *c, unsigned int freq);
#define tuner_symbol_probe(FUNCTION, ARGS...) ()
static void tuner_detach(struct dvb_frontend *fe)
#define tuner_symbol_probe(FUNCTION, ARGS...) ()
static void tuner_detach(struct dvb_frontend *fe)
static inline struct tuner *to_tuner(struct v4l2_subdev *sd)
static void fe_set_params(struct dvb_frontend *fe,
struct analog_parameters *params)
static void fe_standby(struct dvb_frontend *fe)
static int fe_has_signal(struct dvb_frontend *fe)
static int fe_set_config(struct dvb_frontend *fe, void *priv_cfg)
static void tuner_status(struct dvb_frontend *fe);
static struct analog_demod_ops tuner_analog_ops = ;
static void set_type(struct i2c_client *c, unsigned int type,
unsigned int new_mode_mask, unsigned int new_config,
int (*tuner_callback) (void *dev, int component, int cmd, int arg))
static int tuner_s_type_addr(struct v4l2_subdev *sd,
struct tuner_setup *tun_setup)
static int tuner_s_config(struct v4l2_subdev *sd,
const struct v4l2_priv_tun_config *cfg)
static void tuner_lookup(struct i2c_adapter *adap,
struct tuner **radio, struct tuner **tv)
static int tuner_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int tuner_remove(struct i2c_client *client)
static inline int check_mode(struct tuner *t, enum v4l2_tuner_type mode)
static int set_mode(struct tuner *t, enum v4l2_tuner_type mode)
static void set_freq(struct tuner *t, unsigned int freq)
static void set_tv_freq(struct i2c_client *c, unsigned int freq)
static v4l2_std_id tuner_fixup_std(struct tuner *t, v4l2_std_id std)
static void set_radio_freq(struct i2c_client *c, unsigned int freq)
static void tuner_status(struct dvb_frontend *fe)
static int tuner_s_radio(struct v4l2_subdev *sd)
static int tuner_s_power(struct v4l2_subdev *sd, int on)
static int tuner_s_std(struct v4l2_subdev *sd, v4l2_std_id std)
static int tuner_s_frequency(struct v4l2_subdev *sd, struct v4l2_frequency *f)
static int tuner_g_frequency(struct v4l2_subdev *sd, struct v4l2_frequency *f)
static int tuner_g_tuner(struct v4l2_subdev *sd, struct v4l2_tuner *vt)
static int tuner_s_tuner(struct v4l2_subdev *sd, struct v4l2_tuner *vt)
static int tuner_log_status(struct v4l2_subdev *sd)
static int tuner_suspend(struct i2c_client *c, pm_message_t state)
static int tuner_resume(struct i2c_client *c)
static int tuner_command(struct i2c_client *client, unsigned cmd, void *arg)
static const struct v4l2_subdev_core_ops tuner_core_ops = ;
static const struct v4l2_subdev_tuner_ops tuner_tuner_ops = ;
static const struct v4l2_subdev_ops tuner_ops = ;
static const struct i2c_device_id tuner_id[] = ;
MODULE_DEVICE_TABLE(i2c, tuner_id);
static struct i2c_driver tuner_driver = ;
static __init int init_tuner(void)
static __exit void exit_tuner(void)
module_init(init_tuner);
module_exit(exit_tuner);
MODULE_DESCRIPTION("device driver for various TV and TV+FM radio tuners");
MODULE_AUTHOR("Ralph Metzler, Gerd Knorr, Gunther Mayer");
MODULE_LICENSE("GPL");
