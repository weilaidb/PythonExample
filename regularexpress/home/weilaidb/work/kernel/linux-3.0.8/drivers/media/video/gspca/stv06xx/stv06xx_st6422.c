enum e_ctrl ;
struct st6422_settings ;
static struct v4l2_pix_format st6422_mode[] = ;
static void st6422_set_brightness(struct gspca_dev *gspca_dev);
static void st6422_set_contrast(struct gspca_dev *gspca_dev);
static void st6422_set_gain(struct gspca_dev *gspca_dev);
static void st6422_set_exposure(struct gspca_dev *gspca_dev);
static const struct ctrl st6422_ctrl[NCTRLS] = ;
static int st6422_probe(struct sd *sd)
static int st6422_init(struct sd *sd)
static void st6422_disconnect(struct sd *sd)
static int setbrightness(struct sd *sd)
static int setcontrast(struct sd *sd)
static int setgain(struct sd *sd)
static int setexposure(struct sd *sd)
static int st6422_start(struct sd *sd)
static int st6422_stop(struct sd *sd)
static void st6422_set_brightness(struct gspca_dev *gspca_dev)
static void st6422_set_contrast(struct gspca_dev *gspca_dev)
static void st6422_set_gain(struct gspca_dev *gspca_dev)
static void st6422_set_exposure(struct gspca_dev *gspca_dev)
