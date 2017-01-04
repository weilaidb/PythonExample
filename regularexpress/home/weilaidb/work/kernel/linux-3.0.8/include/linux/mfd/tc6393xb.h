#define MFD_TC6393XB_H
struct tc6393xb_platform_data ;
extern int tc6393xb_lcd_mode(struct platform_device *fb,
const struct fb_videomode *mode);
extern int tc6393xb_lcd_set_power(struct platform_device *fb, bool on);
#define	IRQ_TC6393_NAND		0
#define	IRQ_TC6393_MMC		1
#define	IRQ_TC6393_OHCI		2
#define	IRQ_TC6393_FB		4
#define	TC6393XB_NR_IRQS	8
