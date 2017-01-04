static int ov7660_get_gain(struct gspca_dev *gspca_dev, __s32 *val);
static int ov7660_set_gain(struct gspca_dev *gspca_dev, __s32 val);
static int ov7660_get_auto_white_balance(struct gspca_dev *gspca_dev,
__s32 *val);
static int ov7660_set_auto_white_balance(struct gspca_dev *gspca_dev,
__s32 val);
static int ov7660_get_auto_gain(struct gspca_dev *gspca_dev, __s32 *val);
static int ov7660_set_auto_gain(struct gspca_dev *gspca_dev, __s32 val);
static int ov7660_get_auto_exposure(struct gspca_dev *gspca_dev, __s32 *val);
static int ov7660_set_auto_exposure(struct gspca_dev *gspca_dev, __s32 val);
static int ov7660_get_hflip(struct gspca_dev *gspca_dev, __s32 *val);
static int ov7660_set_hflip(struct gspca_dev *gspca_dev, __s32 val);
static int ov7660_get_vflip(struct gspca_dev *gspca_dev, __s32 *val);
static int ov7660_set_vflip(struct gspca_dev *gspca_dev, __s32 val);
static const struct ctrl ov7660_ctrls[] = ;
static struct v4l2_pix_format ov7660_modes[] = ;
static void ov7660_dump_registers(struct sd *sd);
int ov7660_probe(struct sd *sd)
int ov7660_init(struct sd *sd)
int ov7660_start(struct sd *sd)
int ov7660_stop(struct sd *sd)
void ov7660_disconnect(struct sd *sd)
static int ov7660_get_gain(struct gspca_dev *gspca_dev, __s32 *val)
static int ov7660_set_gain(struct gspca_dev *gspca_dev, __s32 val)
static int ov7660_get_auto_white_balance(struct gspca_dev *gspca_dev,
__s32 *val)
static int ov7660_set_auto_white_balance(struct gspca_dev *gspca_dev,
__s32 val)
static int ov7660_get_auto_gain(struct gspca_dev *gspca_dev, __s32 *val)
static int ov7660_set_auto_gain(struct gspca_dev *gspca_dev, __s32 val)
static int ov7660_get_auto_exposure(struct gspca_dev *gspca_dev, __s32 *val)
static int ov7660_set_auto_exposure(struct gspca_dev *gspca_dev,
__s32 val)
static int ov7660_get_hflip(struct gspca_dev *gspca_dev, __s32 *val)
static int ov7660_set_hflip(struct gspca_dev *gspca_dev, __s32 val)
static int ov7660_get_vflip(struct gspca_dev *gspca_dev, __s32 *val)
static int ov7660_set_vflip(struct gspca_dev *gspca_dev, __s32 val)
static void ov7660_dump_registers(struct sd *sd)
