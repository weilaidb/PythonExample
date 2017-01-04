static int po1030_get_exposure(struct gspca_dev *gspca_dev, __s32 *val);
static int po1030_set_exposure(struct gspca_dev *gspca_dev, __s32 val);
static int po1030_get_gain(struct gspca_dev *gspca_dev, __s32 *val);
static int po1030_set_gain(struct gspca_dev *gspca_dev, __s32 val);
static int po1030_get_red_balance(struct gspca_dev *gspca_dev, __s32 *val);
static int po1030_set_red_balance(struct gspca_dev *gspca_dev, __s32 val);
static int po1030_get_blue_balance(struct gspca_dev *gspca_dev, __s32 *val);
static int po1030_set_blue_balance(struct gspca_dev *gspca_dev, __s32 val);
static int po1030_get_green_balance(struct gspca_dev *gspca_dev, __s32 *val);
static int po1030_set_green_balance(struct gspca_dev *gspca_dev, __s32 val);
static int po1030_get_hflip(struct gspca_dev *gspca_dev, __s32 *val);
static int po1030_set_hflip(struct gspca_dev *gspca_dev, __s32 val);
static int po1030_get_vflip(struct gspca_dev *gspca_dev, __s32 *val);
static int po1030_set_vflip(struct gspca_dev *gspca_dev, __s32 val);
static int po1030_set_auto_white_balance(struct gspca_dev *gspca_dev,
__s32 val);
static int po1030_get_auto_white_balance(struct gspca_dev *gspca_dev,
__s32 *val);
static int po1030_set_auto_exposure(struct gspca_dev *gspca_dev,
__s32 val);
static int po1030_get_auto_exposure(struct gspca_dev *gspca_dev,
__s32 *val);
static struct v4l2_pix_format po1030_modes[] = ;
static const struct ctrl po1030_ctrls[] = ;
static void po1030_dump_registers(struct sd *sd);
int po1030_probe(struct sd *sd)
int po1030_init(struct sd *sd)
int po1030_start(struct sd *sd)
static int po1030_get_exposure(struct gspca_dev *gspca_dev, __s32 *val)
static int po1030_set_exposure(struct gspca_dev *gspca_dev, __s32 val)
static int po1030_get_gain(struct gspca_dev *gspca_dev, __s32 *val)
static int po1030_set_gain(struct gspca_dev *gspca_dev, __s32 val)
static int po1030_get_hflip(struct gspca_dev *gspca_dev, __s32 *val)
static int po1030_set_hflip(struct gspca_dev *gspca_dev, __s32 val)
static int po1030_get_vflip(struct gspca_dev *gspca_dev, __s32 *val)
static int po1030_set_vflip(struct gspca_dev *gspca_dev, __s32 val)
static int po1030_get_red_balance(struct gspca_dev *gspca_dev, __s32 *val)
static int po1030_set_red_balance(struct gspca_dev *gspca_dev, __s32 val)
static int po1030_get_blue_balance(struct gspca_dev *gspca_dev, __s32 *val)
static int po1030_set_blue_balance(struct gspca_dev *gspca_dev, __s32 val)
static int po1030_get_green_balance(struct gspca_dev *gspca_dev, __s32 *val)
static int po1030_set_green_balance(struct gspca_dev *gspca_dev, __s32 val)
static int po1030_get_auto_white_balance(struct gspca_dev *gspca_dev,
__s32 *val)
static int po1030_set_auto_white_balance(struct gspca_dev *gspca_dev,
__s32 val)
static int po1030_get_auto_exposure(struct gspca_dev *gspca_dev,
__s32 *val)
static int po1030_set_auto_exposure(struct gspca_dev *gspca_dev,
__s32 val)
void po1030_disconnect(struct sd *sd)
static void po1030_dump_registers(struct sd *sd)
