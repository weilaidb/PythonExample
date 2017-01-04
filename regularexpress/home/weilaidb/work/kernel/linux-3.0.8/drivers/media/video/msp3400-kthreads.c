static struct  msp_stdlist[] = ;
static struct msp3400c_init_data_dem  msp3400c_init_data[] = ;
struct msp3400c_carrier_detect ;
static struct msp3400c_carrier_detect msp3400c_carrier_detect_main[] = ;
static struct msp3400c_carrier_detect msp3400c_carrier_detect_55[] = ;
static struct msp3400c_carrier_detect msp3400c_carrier_detect_65[] = ;
const char *msp_standard_std_name(int std)
static void msp_set_source(struct i2c_client *client, u16 src)
void msp3400c_set_carrier(struct i2c_client *client, int cdo1, int cdo2)
void msp3400c_set_mode(struct i2c_client *client, int mode)
static void msp3400c_set_audmode(struct i2c_client *client)
static void msp3400c_print_mode(struct i2c_client *client)
static int msp3400c_detect_stereo(struct i2c_client *client)
static void watch_stereo(struct i2c_client *client)
int msp3400c_thread(void *data)
int msp3410d_thread(void *data)
static int msp34xxg_modus(struct i2c_client *client)
static void msp34xxg_set_source(struct i2c_client *client, u16 reg, int in)
static void msp34xxg_set_sources(struct i2c_client *client)
static void msp34xxg_reset(struct i2c_client *client)
int msp34xxg_thread(void *data)
static int msp34xxg_detect_stereo(struct i2c_client *client)
static void msp34xxg_set_audmode(struct i2c_client *client)
void msp_set_audmode(struct i2c_client *client)
int msp_detect_stereo(struct i2c_client *client)
