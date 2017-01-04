#define __OMAPFB_H
#define OMAPFB_EVENT_READY	1
#define OMAPFB_EVENT_DISABLED	2
#define OMAP_LCDC_INV_VSYNC             0x0001
#define OMAP_LCDC_INV_HSYNC             0x0002
#define OMAP_LCDC_INV_PIX_CLOCK         0x0004
#define OMAP_LCDC_INV_OUTPUT_EN         0x0008
#define OMAP_LCDC_HSVS_RISING_EDGE      0x0010
#define OMAP_LCDC_HSVS_OPPOSITE         0x0020
#define OMAP_LCDC_SIGNAL_MASK		0x003f
#define OMAP_LCDC_PANEL_TFT		0x0100
#define OMAPFB_PLANE_XRES_MIN		8
#define OMAPFB_PLANE_YRES_MIN		8
struct omapfb_device;
struct lcd_panel ;
struct extif_timings ;
struct lcd_ctrl_extif ;
struct omapfb_notifier_block ;
typedef int (*omapfb_notifier_callback_t)(struct notifier_block *,
unsigned long event,
void *fbi);
struct lcd_ctrl ;
enum omapfb_state ;
struct omapfb_plane_struct ;
struct omapfb_device ;
extern struct lcd_ctrl omap1_lcd_ctrl;
extern struct lcd_ctrl omap2_disp_ctrl;
extern void omapfb_register_panel(struct lcd_panel *panel);
extern void omapfb_write_first_pixel(struct omapfb_device *fbdev, u16 pixval);
extern void omapfb_notify_clients(struct omapfb_device *fbdev,
unsigned long event);
extern int  omapfb_register_client(struct omapfb_notifier_block *nb,
omapfb_notifier_callback_t callback,
void *callback_data);
extern int  omapfb_unregister_client(struct omapfb_notifier_block *nb);
extern int  omapfb_update_window_async(struct fb_info *fbi,
struct omapfb_update_window *win,
void (*callback)(void *),
void *callback_data);
