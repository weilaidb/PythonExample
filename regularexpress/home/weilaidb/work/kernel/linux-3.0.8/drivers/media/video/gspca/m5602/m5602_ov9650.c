static int ov9650_set_exposure(struct gspca_dev *gspca_dev, __s32 val);
static int ov9650_get_exposure(struct gspca_dev *gspca_dev, __s32 *val);
static int ov9650_get_gain(struct gspca_dev *gspca_dev, __s32 *val);
static int ov9650_set_gain(struct gspca_dev *gspca_dev, __s32 val);
static int ov9650_get_red_balance(struct gspca_dev *gspca_dev, __s32 *val);
static int ov9650_set_red_balance(struct gspca_dev *gspca_dev, __s32 val);
static int ov9650_get_blue_balance(struct gspca_dev *gspca_dev, __s32 *val);
static int ov9650_set_blue_balance(struct gspca_dev *gspca_dev, __s32 val);
static int ov9650_get_hflip(struct gspca_dev *gspca_dev, __s32 *val);
static int ov9650_set_hflip(struct gspca_dev *gspca_dev, __s32 val);
static int ov9650_get_vflip(struct gspca_dev *gspca_dev, __s32 *val);
static int ov9650_set_vflip(struct gspca_dev *gspca_dev, __s32 val);
static int ov9650_get_auto_white_balance(struct gspca_dev *gspca_dev,
__s32 *val);
static int ov9650_set_auto_white_balance(struct gspca_dev *gspca_dev,
__s32 val);
static int ov9650_get_auto_gain(struct gspca_dev *gspca_dev, __s32 *val);
static int ov9650_set_auto_gain(struct gspca_dev *gspca_dev, __s32 val);
static int ov9650_get_auto_exposure(struct gspca_dev *gspca_dev, __s32 *val);
static int ov9650_set_auto_exposure(struct gspca_dev *gspca_dev, __s32 val);
static
const
struct dmi_system_id ov9650_flip_dmi_table[] = ;
static const struct ctrl ov9650_ctrls[] = ;
static struct v4l2_pix_format ov9650_modes[] = ;
static void ov9650_dump_registers(struct sd *sd);
int ov9650_probe(struct sd *sd)
int ov9650_init(struct sd *sd)
int ov9650_start(struct sd *sd)
int ov9650_stop(struct sd *sd)
void ov9650_disconnect(struct sd *sd)
static int ov9650_get_exposure(struct gspca_dev *gspca_dev, __s32 *val)
static int ov9650_set_exposure(struct gspca_dev *gspca_dev, __s32 val)
static int ov9650_get_gain(struct gspca_dev *gspca_dev, __s32 *val)
static int ov9650_set_gain(struct gspca_dev *gspca_dev, __s32 val)
static int ov9650_get_red_balance(struct gspca_dev *gspca_dev, __s32 *val)
static int ov9650_set_red_balance(struct gspca_dev *gspca_dev, __s32 val)
static int ov9650_get_blue_balance(struct gspca_dev *gspca_dev, __s32 *val)
static int ov9650_set_blue_balance(struct gspca_dev *gspca_dev, __s32 val)
static int ov9650_get_hflip(struct gspca_dev *gspca_dev, __s32 *val)
static int ov9650_set_hflip(struct gspca_dev *gspca_dev, __s32 val)
static int ov9650_get_vflip(struct gspca_dev *gspca_dev, __s32 *val)
static int ov9650_set_vflip(struct gspca_dev *gspca_dev, __s32 val)
static int ov9650_get_auto_exposure(struct gspca_dev *gspca_dev, __s32 *val)
static int ov9650_set_auto_exposure(struct gspca_dev *gspca_dev,
__s32 val)
static int ov9650_get_auto_white_balance(struct gspca_dev *gspca_dev,
__s32 *val)
static int ov9650_set_auto_white_balance(struct gspca_dev *gspca_dev,
__s32 val)
static int ov9650_get_auto_gain(struct gspca_dev *gspca_dev, __s32 *val)
static int ov9650_set_auto_gain(struct gspca_dev *gspca_dev, __s32 val)
static void ov9650_dump_registers(struct sd *sd)
