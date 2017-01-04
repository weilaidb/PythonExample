#define GL860_DEV_H
#define MODULE_NAME "gspca_gl860"
#define DRIVER_VERSION "0.9d10"
#define ctrl_in  gl860_RTx
#define ctrl_out gl860_RTx
#define ID_MI1320   1
#define ID_OV2640   2
#define ID_OV9655   4
#define ID_MI2020   8
#define _MI1320_  (((struct sd *) gspca_dev)->sensor == ID_MI1320)
#define _MI2020_  (((struct sd *) gspca_dev)->sensor == ID_MI2020)
#define _OV2640_  (((struct sd *) gspca_dev)->sensor == ID_OV2640)
#define _OV9655_  (((struct sd *) gspca_dev)->sensor == ID_OV9655)
#define IMAGE_640   0
#define IMAGE_800   1
#define IMAGE_1280  2
#define IMAGE_1600  3
struct sd_gl860 ;
struct sd ;
struct validx ;
struct idxdata ;
int fetch_validx(struct gspca_dev *gspca_dev, struct validx *tbl, int len);
int keep_on_fetching_validx(struct gspca_dev *gspca_dev, struct validx *tbl,
int len, int n);
void fetch_idxdata(struct gspca_dev *gspca_dev, struct idxdata *tbl, int len);
int gl860_RTx(struct gspca_dev *gspca_dev,
unsigned char pref, u32 req, u16 val, u16 index,
s32 len, void *pdata);
void mi1320_init_settings(struct gspca_dev *);
void ov2640_init_settings(struct gspca_dev *);
void ov9655_init_settings(struct gspca_dev *);
void mi2020_init_settings(struct gspca_dev *);
