static int default_vmode = VMODE_CHOOSE;
static int default_cmode = CMODE_8;
static int default_vmode = VMODE_NVRAM;
static int default_cmode = CMODE_NVRAM;
struct fb_par_valkyrie ;
struct fb_info_valkyrie ;
int valkyriefb_init(void);
int valkyriefb_setup(char*);
static int valkyriefb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info);
static int valkyriefb_set_par(struct fb_info *info);
static int valkyriefb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info);
static int valkyriefb_blank(int blank_mode, struct fb_info *info);
static int read_valkyrie_sense(struct fb_info_valkyrie *p);
static void set_valkyrie_clock(unsigned char *params);
static int valkyrie_var_to_par(struct fb_var_screeninfo *var,
struct fb_par_valkyrie *par, const struct fb_info *fb_info);
static int valkyrie_init_info(struct fb_info *info, struct fb_info_valkyrie *p);
static void valkyrie_par_to_fix(struct fb_par_valkyrie *par, struct fb_fix_screeninfo *fix);
static void valkyrie_init_fix(struct fb_fix_screeninfo *fix, struct fb_info_valkyrie *p);
static struct fb_ops valkyriefb_ops = ;
static int valkyriefb_set_par(struct fb_info *info)
static inline int valkyrie_par_to_var(struct fb_par_valkyrie *par,
struct fb_var_screeninfo *var)
static int
valkyriefb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int valkyriefb_blank(int blank_mode, struct fb_info *info)
static int valkyriefb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info)
static inline int valkyrie_vram_reqd(int video_mode, int color_mode)
static void set_valkyrie_clock(unsigned char *params)
static void __init valkyrie_choose_mode(struct fb_info_valkyrie *p)
int __init valkyriefb_init(void)
static int read_valkyrie_sense(struct fb_info_valkyrie *p)
static int valkyrie_var_to_par(struct fb_var_screeninfo *var,
struct fb_par_valkyrie *par, const struct fb_info *fb_info)
static void valkyrie_init_fix(struct fb_fix_screeninfo *fix, struct fb_info_valkyrie *p)
static void valkyrie_par_to_fix(struct fb_par_valkyrie *par,
struct fb_fix_screeninfo *fix)
static int __init valkyrie_init_info(struct fb_info *info,
struct fb_info_valkyrie *p)
int __init valkyriefb_setup(char *options)
module_init(valkyriefb_init);
MODULE_LICENSE("GPL");
