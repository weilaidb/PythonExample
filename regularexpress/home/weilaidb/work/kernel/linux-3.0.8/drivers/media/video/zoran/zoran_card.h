#define __ZORAN_CARD_H__
extern int zr36067_debug;
#define dprintk(num, format, args...) \
do  while (0)
#define BUZ_MAX 4
extern struct video_device zoran_template;
extern int zoran_check_jpg_settings(struct zoran *zr,
struct zoran_jpg_settings *settings,
int try);
extern void zoran_open_init_params(struct zoran *zr);
extern void zoran_vdev_release(struct video_device *vdev);
void zr36016_write(struct videocodec *codec, u16 reg, u32 val);
