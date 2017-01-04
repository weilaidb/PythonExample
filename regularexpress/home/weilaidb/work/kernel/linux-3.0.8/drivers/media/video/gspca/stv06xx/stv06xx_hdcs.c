static const struct ctrl hdcs1x00_ctrl[] = ;
static struct v4l2_pix_format hdcs1x00_mode[] = ;
static const struct ctrl hdcs1020_ctrl[] = ;
static struct v4l2_pix_format hdcs1020_mode[] = ;
enum hdcs_power_state ;
struct hdcs ;
static int hdcs_reg_write_seq(struct sd *sd, u8 reg, u8 *vals, u8 len)
static int hdcs_set_state(struct sd *sd, enum hdcs_power_state state)
static int hdcs_reset(struct sd *sd)
static int hdcs_get_exposure(struct gspca_dev *gspca_dev, __s32 *val)
static int hdcs_set_exposure(struct gspca_dev *gspca_dev, __s32 val)
static int hdcs_set_gains(struct sd *sd, u8 g)
static int hdcs_get_gain(struct gspca_dev *gspca_dev, __s32 *val)
static int hdcs_set_gain(struct gspca_dev *gspca_dev, __s32 val)
static int hdcs_set_size(struct sd *sd,
unsigned int width, unsigned int height)
static int hdcs_probe_1x00(struct sd *sd)
static int hdcs_probe_1020(struct sd *sd)
static int hdcs_start(struct sd *sd)
static int hdcs_stop(struct sd *sd)
static void hdcs_disconnect(struct sd *sd)
static int hdcs_init(struct sd *sd)
static int hdcs_dump(struct sd *sd)
