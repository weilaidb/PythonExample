#define DRIVER_VERSION "0.02"
#define DRIVER_AUTHOR "Karsten Merker <merker@linuxtag.org>"
#define DRIVER_DESCRIPTION "PMAG-AA Framebuffer Driver"
static int aafb_set_var(struct fb_var_screeninfo *var, int con,
struct fb_info *info);
#define PMAG_AA_BT455_OFFSET		0x100000
#define PMAG_AA_BT431_OFFSET		0x180000
#define PMAG_AA_ONBOARD_FBMEM_OFFSET	0x200000
struct aafb_cursor ;
#define CURSOR_TIMER_FREQ	(HZ / 50)
#define CURSOR_BLINK_RATE	(20)
#define CURSOR_DRAW_DELAY	(2)
struct aafb_info ;
static struct aafb_info my_fb_info[3];
static struct aafb_par  current_par;
static int currcon = -1;
static void aafb_set_cursor(struct aafb_info *info, int on)
static void aafbcon_cursor(struct display *disp, int mode, int x, int y)
static int aafbcon_set_font(struct display *disp, int width, int height)
static void aafb_cursor_timer_handler(unsigned long data)
static void __init aafb_cursor_init(struct aafb_info *info)
static void __exit aafb_cursor_exit(struct aafb_info *info)
static struct display_switch aafb_switch8 = ;
static void aafb_get_par(struct aafb_par *par)
static int aafb_get_fix(struct fb_fix_screeninfo *fix, int con,
struct fb_info *info)
static void aafb_set_disp(struct display *disp, int con,
struct aafb_info *info)
static int aafb_get_cmap(struct fb_cmap *cmap, int kspc, int con,
struct fb_info *info)
static int aafb_set_cmap(struct fb_cmap *cmap, int kspc, int con,
struct fb_info *info)
static int aafb_ioctl(struct fb_info *info, u32 cmd, unsigned long arg)
static int aafb_switch(int con, struct fb_info *info)
static void aafb_encode_var(struct fb_var_screeninfo *var,
struct aafb_par *par)
static int aafb_get_var(struct fb_var_screeninfo *var, int con,
struct fb_info *info)
static int aafb_set_var(struct fb_var_screeninfo *var, int con,
struct fb_info *info)
static int aafb_update_var(int con, struct fb_info *info)
static void aafb_blank(int blank, struct fb_info *info)
static struct fb_ops aafb_ops = ;
static int __init init_one(int slot)
static int __exit exit_one(int slot)
int __init pmagaafb_init(void)
static void __exit pmagaafb_exit(void)
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESCRIPTION);
MODULE_LICENSE("GPL");
module_init(pmagaafb_init);
module_exit(pmagaafb_exit);
