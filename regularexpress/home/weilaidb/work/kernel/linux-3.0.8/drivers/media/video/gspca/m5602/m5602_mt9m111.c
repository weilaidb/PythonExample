static int mt9m111_set_vflip(struct gspca_dev *gspca_dev, __s32 val);
static int mt9m111_get_vflip(struct gspca_dev *gspca_dev, __s32 *val);
static int mt9m111_get_hflip(struct gspca_dev *gspca_dev, __s32 *val);
static int mt9m111_set_hflip(struct gspca_dev *gspca_dev, __s32 val);
static int mt9m111_get_gain(struct gspca_dev *gspca_dev, __s32 *val);
static int mt9m111_set_gain(struct gspca_dev *gspca_dev, __s32 val);
static int mt9m111_set_auto_white_balance(struct gspca_dev *gspca_dev,
__s32 val);
static int mt9m111_get_auto_white_balance(struct gspca_dev *gspca_dev,
__s32 *val);
static int mt9m111_get_green_balance(struct gspca_dev *gspca_dev, __s32 *val);
static int mt9m111_set_green_balance(struct gspca_dev *gspca_dev, __s32 val);
static int mt9m111_get_blue_balance(struct gspca_dev *gspca_dev, __s32 *val);
static int mt9m111_set_blue_balance(struct gspca_dev *gspca_dev, __s32 val);
static int mt9m111_get_red_balance(struct gspca_dev *gspca_dev, __s32 *val);
static int mt9m111_set_red_balance(struct gspca_dev *gspca_dev, __s32 val);
static struct v4l2_pix_format mt9m111_modes[] = ;
static const struct ctrl mt9m111_ctrls[] = ;
static void mt9m111_dump_registers(struct sd *sd);
int mt9m111_probe(struct sd *sd)
int mt9m111_init(struct sd *sd)
int mt9m111_start(struct sd *sd)
void mt9m111_disconnect(struct sd *sd)
static int mt9m111_get_vflip(struct gspca_dev *gspca_dev, __s32 *val)
static int mt9m111_set_vflip(struct gspca_dev *gspca_dev, __s32 val)
static int mt9m111_get_hflip(struct gspca_dev *gspca_dev, __s32 *val)
static int mt9m111_set_hflip(struct gspca_dev *gspca_dev, __s32 val)
static int mt9m111_get_gain(struct gspca_dev *gspca_dev, __s32 *val)
static int mt9m111_set_auto_white_balance(struct gspca_dev *gspca_dev,
__s32 val)
static int mt9m111_get_auto_white_balance(struct gspca_dev *gspca_dev,
__s32 *val)
static int mt9m111_set_gain(struct gspca_dev *gspca_dev, __s32 val)
static int mt9m111_set_green_balance(struct gspca_dev *gspca_dev, __s32 val)
static int mt9m111_get_green_balance(struct gspca_dev *gspca_dev, __s32 *val)
static int mt9m111_set_blue_balance(struct gspca_dev *gspca_dev, __s32 val)
static int mt9m111_get_blue_balance(struct gspca_dev *gspca_dev, __s32 *val)
static int mt9m111_set_red_balance(struct gspca_dev *gspca_dev, __s32 val)
static int mt9m111_get_red_balance(struct gspca_dev *gspca_dev, __s32 *val)
static void mt9m111_dump_registers(struct sd *sd)
