static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "enable verbose debug messages");
static int no_poweroff;
module_param(no_poweroff, int, 0644);
MODULE_PARM_DESC(no_poweroff, "0 (default) powers device off when not used.\n"
"1 keep device energized and with tuner ready all the times.\n"
"  Faster, but consumes more power and keeps the device hotter\n");
static char audio_std[8];
module_param_string(audio_std, audio_std, sizeof(audio_std), 0);
MODULE_PARM_DESC(audio_std,
"Audio standard. XC3028 audio decoder explicitly "
"needs to know what audio\n"
"standard is needed for some video standards with audio A2 or NICAM.\n"
"The valid values are:\n"
"A2\n"
"A2/A\n"
"A2/B\n"
"NICAM\n"
"NICAM/A\n"
"NICAM/B\n");
static char firmware_name[30];
module_param_string(firmware_name, firmware_name, sizeof(firmware_name), 0);
MODULE_PARM_DESC(firmware_name, "Firmware file name. Allows overriding the "
"default firmware name\n");
static LIST_HEAD(hybrid_tuner_instance_list);
static DEFINE_MUTEX(xc2028_list_mutex);
struct firmware_description ;
struct firmware_properties ;
struct xc2028_data ;
#define i2c_send(priv, buf, size) ()
#define i2c_rcv(priv, buf, size) ()
#define i2c_send_recv(priv, obuf, osize, ibuf, isize) ()
#define send_seq(priv, data...)	()
static int xc2028_get_reg(struct xc2028_data *priv, u16 reg, u16 *val)
#define dump_firm_type(t) 	dump_firm_type_and_int_freq(t, 0)
static void dump_firm_type_and_int_freq(unsigned int type, u16 int_freq)
static  v4l2_std_id parse_audio_std_option(void)
static void free_firmware(struct xc2028_data *priv)
static int load_all_firmwares(struct dvb_frontend *fe)
static int seek_firmware(struct dvb_frontend *fe, unsigned int type,
v4l2_std_id *id)
static inline int do_tuner_callback(struct dvb_frontend *fe, int cmd, int arg)
static int load_firmware(struct dvb_frontend *fe, unsigned int type,
v4l2_std_id *id)
static int load_scode(struct dvb_frontend *fe, unsigned int type,
v4l2_std_id *id, __u16 int_freq, int scode)
static int check_firmware(struct dvb_frontend *fe, unsigned int type,
v4l2_std_id std, __u16 int_freq)
static int xc2028_signal(struct dvb_frontend *fe, u16 *strength)
#define DIV 15625
static int generic_set_freq(struct dvb_frontend *fe, u32 freq,
enum v4l2_tuner_type new_type,
unsigned int type,
v4l2_std_id std,
u16 int_freq)
static int xc2028_set_analog_freq(struct dvb_frontend *fe,
struct analog_parameters *p)
static int xc2028_set_params(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int xc2028_sleep(struct dvb_frontend *fe)
static int xc2028_dvb_release(struct dvb_frontend *fe)
static int xc2028_get_frequency(struct dvb_frontend *fe, u32 *frequency)
static int xc2028_set_config(struct dvb_frontend *fe, void *priv_cfg)
static const struct dvb_tuner_ops xc2028_dvb_tuner_ops = ;
struct dvb_frontend *xc2028_attach(struct dvb_frontend *fe,
struct xc2028_config *cfg)
EXPORT_SYMBOL(xc2028_attach);
MODULE_DESCRIPTION("Xceive xc2028/xc3028 tuner driver");
MODULE_AUTHOR("Michel Ludwig <michel.ludwig@gmail.com>");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@infradead.org>");
MODULE_LICENSE("GPL");
