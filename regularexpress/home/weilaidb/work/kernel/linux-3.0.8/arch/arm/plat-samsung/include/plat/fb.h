#define __PLAT_S3C_FB_H __FILE__
#define S3C_FB_MAX_WIN	(5)
struct s3c_fb_pd_win ;
struct s3c_fb_platdata ;
extern void s3c_fb_set_platdata(struct s3c_fb_platdata *pd);
extern void s3c64xx_fb_gpio_setup_24bpp(void);
extern void s5pc100_fb_gpio_setup_24bpp(void);
extern void s5pv210_fb_gpio_setup_24bpp(void);
