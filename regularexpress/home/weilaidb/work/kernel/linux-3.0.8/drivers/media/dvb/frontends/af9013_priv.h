#define _AF9013_PRIV_
#define LOG_PREFIX "af9013"
extern int af9013_debug;
#define dprintk(var, level, args...) \
do  while (0)
#define debug_dump(b, l, func)
#define deb_info(args...) dprintk(af9013_debug, 0x01, args)
#undef err
#define err(f, arg...)  printk(KERN_ERR     LOG_PREFIX": " f "\n" , ## arg)
#undef info
#define info(f, arg...) printk(KERN_INFO    LOG_PREFIX": " f "\n" , ## arg)
#undef warn
#define warn(f, arg...) printk(KERN_WARNING LOG_PREFIX": " f "\n" , ## arg)
#define AF9013_DEFAULT_FIRMWARE     "dvb-fe-af9013.fw"
struct regdesc ;
struct snr_table ;
struct coeff ;
static struct coeff coeff_table[] = ;
static struct snr_table qpsk_snr_table[] = ;
static struct snr_table qam16_snr_table[] = ;
static struct snr_table qam64_snr_table[] = ;
static struct regdesc ofsm_init[] = ;
static struct regdesc tuner_init_env77h11d5[] = ;
static struct regdesc tuner_init_mt2060[] = ;
static struct regdesc tuner_init_mt2060_2[] = ;
static struct regdesc tuner_init_mxl5003d[] = ;
static struct regdesc tuner_init_mxl5005[] = ;
static struct regdesc tuner_init_qt1010[] = ;
static struct regdesc tuner_init_mc44s803[] = ;
static struct regdesc tuner_init_unknown[] = ;
static struct regdesc tuner_init_tda18271[] = ;
