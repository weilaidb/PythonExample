static int s5k4aa_get_exposure(struct gspca_dev *gspca_dev, __s32 *val);
static int s5k4aa_set_exposure(struct gspca_dev *gspca_dev, __s32 val);
static int s5k4aa_get_vflip(struct gspca_dev *gspca_dev, __s32 *val);
static int s5k4aa_set_vflip(struct gspca_dev *gspca_dev, __s32 val);
static int s5k4aa_get_hflip(struct gspca_dev *gspca_dev, __s32 *val);
static int s5k4aa_set_hflip(struct gspca_dev *gspca_dev, __s32 val);
static int s5k4aa_get_gain(struct gspca_dev *gspca_dev, __s32 *val);
static int s5k4aa_set_gain(struct gspca_dev *gspca_dev, __s32 val);
static int s5k4aa_get_noise(struct gspca_dev *gspca_dev, __s32 *val);
static int s5k4aa_set_noise(struct gspca_dev *gspca_dev, __s32 val);
static int s5k4aa_get_brightness(struct gspca_dev *gspca_dev, __s32 *val);
static int s5k4aa_set_brightness(struct gspca_dev *gspca_dev, __s32 val);
static
const
struct dmi_system_id s5k4aa_vflip_dmi_table[] = ;
static struct v4l2_pix_format s5k4aa_modes[] = ;
static const struct ctrl s5k4aa_ctrls[] = ;
static void s5k4aa_dump_registers(struct sd *sd);
int s5k4aa_probe(struct sd *sd)
int s5k4aa_start(struct sd *sd)
int s5k4aa_init(struct sd *sd)
static int s5k4aa_get_exposure(struct gspca_dev *gspca_dev, __s32 *val)
static int s5k4aa_set_exposure(struct gspca_dev *gspca_dev, __s32 val)
static int s5k4aa_get_vflip(struct gspca_dev *gspca_dev, __s32 *val)
static int s5k4aa_set_vflip(struct gspca_dev *gspca_dev, __s32 val)
static int s5k4aa_get_hflip(struct gspca_dev *gspca_dev, __s32 *val)
static int s5k4aa_set_hflip(struct gspca_dev *gspca_dev, __s32 val)
static int s5k4aa_get_gain(struct gspca_dev *gspca_dev, __s32 *val)
static int s5k4aa_set_gain(struct gspca_dev *gspca_dev, __s32 val)
static int s5k4aa_get_brightness(struct gspca_dev *gspca_dev, __s32 *val)
static int s5k4aa_set_brightness(struct gspca_dev *gspca_dev, __s32 val)
static int s5k4aa_get_noise(struct gspca_dev *gspca_dev, __s32 *val)
static int s5k4aa_set_noise(struct gspca_dev *gspca_dev, __s32 val)
void s5k4aa_disconnect(struct sd *sd)
static void s5k4aa_dump_registers(struct sd *sd)
