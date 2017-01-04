#define ZCD_FORCE_MODEM			0x01
#define ZCD_ALLOW_MS 			0x02
static unsigned int option_zero_cd = ZCD_FORCE_MODEM;
module_param(option_zero_cd, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(option_zero_cd, "ZeroCD mode (1=Force Modem (default),"
" 2=Allow CD-Rom");
#define RESPONSE_LEN 1024
static int option_rezero(struct us_data *us)
static int option_inquiry(struct us_data *us)
int option_ms_init(struct us_data *us)
