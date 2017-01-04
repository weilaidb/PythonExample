static u8 dat_init1[] = "\x00\x41\x07\x6a\x06\x61\x0d\x6a" "\x10\x10\xc1\x01";
static u8 c61[] = ;
static u8 c51[] = ;
static u8 c50[] = ;
static u8 c28[] = ;
static u8 ca8[] = ;
static u8 dat_post[] =
"\x00\x41\x07\x6a\x06\xef\x0d\x6a" "\x10\x10\xc1\x01";
static u8 dat_640[]  = "\xd0\x01\xd1\x08\xd2\xe0\xd3\x02\xd4\x10\xd5\x81";
static u8 dat_800[]  = "\xd0\x01\xd1\x10\xd2\x58\xd3\x02\xd4\x18\xd5\x21";
static u8 dat_1280[] = "\xd0\x01\xd1\x18\xd2\xc0\xd3\x02\xd4\x28\xd5\x01";
static u8 dat_1600[] = "\xd0\x01\xd1\x20\xd2\xb0\xd3\x02\xd4\x30\xd5\x41";
static struct validx tbl_init_at_startup[] = ;
static struct validx tbl_common[] = ;
static struct validx tbl_sensor_settings_common1[] = ;
static struct validx tbl_sensor_settings_common2[] = ;
static struct validx tbl_640[] = ;
static struct validx tbl_800[] = ;
static struct validx tbl_big1[] = ;
static struct validx tbl_big2[] = ;
static struct validx tbl_big3[] = ;
static struct validx tbl_post_unset_alt[] = ;
static int  ov2640_init_at_startup(struct gspca_dev *gspca_dev);
static int  ov2640_configure_alt(struct gspca_dev *gspca_dev);
static int  ov2640_init_pre_alt(struct gspca_dev *gspca_dev);
static int  ov2640_init_post_alt(struct gspca_dev *gspca_dev);
static void ov2640_post_unset_alt(struct gspca_dev *gspca_dev);
static int  ov2640_camera_settings(struct gspca_dev *gspca_dev);
void ov2640_init_settings(struct gspca_dev *gspca_dev)
static void common(struct gspca_dev *gspca_dev)
static int ov2640_init_at_startup(struct gspca_dev *gspca_dev)
static int ov2640_init_pre_alt(struct gspca_dev *gspca_dev)
static int ov2640_init_post_alt(struct gspca_dev *gspca_dev)
static int ov2640_configure_alt(struct gspca_dev *gspca_dev)
static int ov2640_camera_settings(struct gspca_dev *gspca_dev)
static void ov2640_post_unset_alt(struct gspca_dev *gspca_dev)
