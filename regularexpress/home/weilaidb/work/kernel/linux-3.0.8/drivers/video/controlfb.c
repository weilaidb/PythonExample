struct fb_par_control ;
#define DIRTY(z) ((x)->z != (y)->z)
#define DIRTY_CMAP(z) (memcmp(&((x)->z), &((y)->z), sizeof((y)->z)))
static inline int PAR_EQUAL(struct fb_par_control *x, struct fb_par_control *y)
static inline int VAR_MATCH(struct fb_var_screeninfo *x, struct fb_var_screeninfo *y)
struct fb_info_control ;
#define CNTRL_REG(INFO,REG) (&(((INFO)->control_regs->REG).r))
static int controlfb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info);
static int controlfb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info);
static int controlfb_blank(int blank_mode, struct fb_info *info);
static int controlfb_mmap(struct fb_info *info,
struct vm_area_struct *vma);
static int controlfb_set_par (struct fb_info *info);
static int controlfb_check_var (struct fb_var_screeninfo *var, struct fb_info *info);
static void set_control_clock(unsigned char *params);
static int init_control(struct fb_info_control *p);
static void control_set_hardware(struct fb_info_control *p,
struct fb_par_control *par);
static int control_of_init(struct device_node *dp);
static void find_vram_size(struct fb_info_control *p);
static int read_control_sense(struct fb_info_control *p);
static int calc_clock_params(unsigned long clk, unsigned char *param);
static int control_var_to_par(struct fb_var_screeninfo *var,
struct fb_par_control *par, const struct fb_info *fb_info);
static inline void control_par_to_var(struct fb_par_control *par,
struct fb_var_screeninfo *var);
static void control_init_info(struct fb_info *info, struct fb_info_control *p);
static void control_cleanup(void);
static struct fb_info_control *control_fb;
static int default_vmode __initdata = VMODE_NVRAM;
static int default_cmode __initdata = CMODE_NVRAM;
static struct fb_ops controlfb_ops = ;
MODULE_LICENSE("GPL");
int init_module(void)
void cleanup_module(void)
static int controlfb_check_var (struct fb_var_screeninfo *var, struct fb_info *info)
static int controlfb_set_par (struct fb_info *info)
static inline void set_screen_start(int xoffset, int yoffset,
struct fb_info_control *p)
static int controlfb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int controlfb_mmap(struct fb_info *info,
struct vm_area_struct *vma)
static int controlfb_blank(int blank_mode, struct fb_info *info)
static int controlfb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info)
static void set_control_clock(unsigned char *params)
static int __init init_control(struct fb_info_control *p)
#define RADACAL_WRITE(a,d) \
out_8(&p->cmap_regs->addr, (a)); \
out_8(&p->cmap_regs->dat,   (d))
static void control_set_hardware(struct fb_info_control *p, struct fb_par_control *par)
static void __init control_setup(char *options)
static int __init control_init(void)
module_init(control_init);
static void __init find_vram_size(struct fb_info_control *p)
static int __init control_of_init(struct device_node *dp)
static int read_control_sense(struct fb_info_control *p)
#define CONTROL_PIXCLOCK_BASE	256016
#define CONTROL_PIXCLOCK_MIN	5000
static int calc_clock_params(unsigned long clk, unsigned char *param)
static int control_var_to_par(struct fb_var_screeninfo *var,
struct fb_par_control *par, const struct fb_info *fb_info)
static void control_par_to_var(struct fb_par_control *par, struct fb_var_screeninfo *var)
static void __init control_init_info(struct fb_info *info, struct fb_info_control *p)
static void control_cleanup(void)
