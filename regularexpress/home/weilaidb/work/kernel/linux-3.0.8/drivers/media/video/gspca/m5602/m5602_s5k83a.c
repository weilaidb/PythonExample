static int s5k83a_set_gain(struct gspca_dev *gspca_dev, __s32 val);
static int s5k83a_get_gain(struct gspca_dev *gspca_dev, __s32 *val);
static int s5k83a_set_brightness(struct gspca_dev *gspca_dev, __s32 val);
static int s5k83a_get_brightness(struct gspca_dev *gspca_dev, __s32 *val);
static int s5k83a_set_exposure(struct gspca_dev *gspca_dev, __s32 val);
static int s5k83a_get_exposure(struct gspca_dev *gspca_dev, __s32 *val);
static int s5k83a_get_vflip(struct gspca_dev *gspca_dev, __s32 *val);
static int s5k83a_set_vflip(struct gspca_dev *gspca_dev, __s32 val);
static int s5k83a_get_hflip(struct gspca_dev *gspca_dev, __s32 *val);
static int s5k83a_set_hflip(struct gspca_dev *gspca_dev, __s32 val);
static struct v4l2_pix_format s5k83a_modes[] = ;
static const struct ctrl s5k83a_ctrls[] = ;
static void s5k83a_dump_registers(struct sd *sd);
static int s5k83a_get_rotation(struct sd *sd, u8 *reg_data);
static int s5k83a_set_led_indication(struct sd *sd, u8 val);
static int s5k83a_set_flip_real(struct gspca_dev *gspca_dev,
__s32 vflip, __s32 hflip);
int s5k83a_probe(struct sd *sd)
int s5k83a_init(struct sd *sd)
static int rotation_thread_function(void *data)
int s5k83a_start(struct sd *sd)
int s5k83a_stop(struct sd *sd)
void s5k83a_disconnect(struct sd *sd)
static int s5k83a_get_gain(struct gspca_dev *gspca_dev, __s32 *val)
static int s5k83a_set_gain(struct gspca_dev *gspca_dev, __s32 val)
static int s5k83a_get_brightness(struct gspca_dev *gspca_dev, __s32 *val)
static int s5k83a_set_brightness(struct gspca_dev *gspca_dev, __s32 val)
static int s5k83a_get_exposure(struct gspca_dev *gspca_dev, __s32 *val)
static int s5k83a_set_exposure(struct gspca_dev *gspca_dev, __s32 val)
static int s5k83a_get_vflip(struct gspca_dev *gspca_dev, __s32 *val)
static int s5k83a_set_flip_real(struct gspca_dev *gspca_dev,
__s32 vflip, __s32 hflip)
static int s5k83a_set_vflip(struct gspca_dev *gspca_dev, __s32 val)
static int s5k83a_get_hflip(struct gspca_dev *gspca_dev, __s32 *val)
static int s5k83a_set_hflip(struct gspca_dev *gspca_dev, __s32 val)
static int s5k83a_set_led_indication(struct sd *sd, u8 val)
static int s5k83a_get_rotation(struct sd *sd, u8 *reg_data)
static void s5k83a_dump_registers(struct sd *sd)
