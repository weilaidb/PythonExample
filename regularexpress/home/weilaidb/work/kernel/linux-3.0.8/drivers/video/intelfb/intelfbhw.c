struct pll_min_max ;
#define PLLS_I8xx 0
#define PLLS_I9xx 1
#define PLLS_MAX 2
static struct pll_min_max plls[PLLS_MAX] = ;
int intelfbhw_get_chipset(struct pci_dev *pdev, struct intelfb_info *dinfo)
int intelfbhw_get_memory(struct pci_dev *pdev, int *aperture_size,
int *stolen_size)
int intelfbhw_check_non_crt(struct intelfb_info *dinfo)
const char * intelfbhw_dvo_to_string(int dvo)
int intelfbhw_validate_mode(struct intelfb_info *dinfo,
struct fb_var_screeninfo *var)
int intelfbhw_pan_display(struct fb_var_screeninfo *var, struct fb_info *info)
void intelfbhw_do_blank(int blank, struct fb_info *info)
int intelfbhw_active_pipe(const struct intelfb_hwstate *hw)
void intelfbhw_setcolreg(struct intelfb_info *dinfo, unsigned regno,
unsigned red, unsigned green, unsigned blue,
unsigned transp)
int intelfbhw_read_hw_state(struct intelfb_info *dinfo,
struct intelfb_hwstate *hw, int flag)
static int calc_vclock3(int index, int m, int n, int p)
static int calc_vclock(int index, int m1, int m2, int n, int p1, int p2,
int lvds)
#if REGDUMP
static void intelfbhw_get_p1p2(struct intelfb_info *dinfo, int dpll,
int *o_p1, int *o_p2)
void intelfbhw_print_hw_state(struct intelfb_info *dinfo,
struct intelfb_hwstate *hw)
static int splitm(int index, unsigned int m, unsigned int *retm1,
unsigned int *retm2)
static int splitp(int index, unsigned int p, unsigned int *retp1,
unsigned int *retp2)
static int calc_pll_params(int index, int clock, u32 *retm1, u32 *retm2,
u32 *retn, u32 *retp1, u32 *retp2, u32 *retclock)
static __inline__ int check_overflow(u32 value, u32 limit,
const char *description)
int intelfbhw_mode_to_hw(struct intelfb_info *dinfo,
struct intelfb_hwstate *hw,
struct fb_var_screeninfo *var)
int intelfbhw_program_mode(struct intelfb_info *dinfo,
const struct intelfb_hwstate *hw, int blank)
static void refresh_ring(struct intelfb_info *dinfo);
static void reset_state(struct intelfb_info *dinfo);
static void do_flush(struct intelfb_info *dinfo);
static  u32 get_ring_space(struct intelfb_info *dinfo)
static int wait_ring(struct intelfb_info *dinfo, int n)
static void do_flush(struct intelfb_info *dinfo)
void intelfbhw_do_sync(struct intelfb_info *dinfo)
static void refresh_ring(struct intelfb_info *dinfo)
static void reset_state(struct intelfb_info *dinfo)
void intelfbhw_2d_stop(struct intelfb_info *dinfo)
void intelfbhw_2d_start(struct intelfb_info *dinfo)
void intelfbhw_do_fillrect(struct intelfb_info *dinfo, u32 x, u32 y, u32 w,
u32 h, u32 color, u32 pitch, u32 bpp, u32 rop)
void
intelfbhw_do_bitblt(struct intelfb_info *dinfo, u32 curx, u32 cury,
u32 dstx, u32 dsty, u32 w, u32 h, u32 pitch, u32 bpp)
int intelfbhw_do_drawglyph(struct intelfb_info *dinfo, u32 fg, u32 bg, u32 w,
u32 h, const u8* cdat, u32 x, u32 y, u32 pitch,
u32 bpp)
void intelfbhw_cursor_init(struct intelfb_info *dinfo)
void intelfbhw_cursor_hide(struct intelfb_info *dinfo)
void intelfbhw_cursor_show(struct intelfb_info *dinfo)
void intelfbhw_cursor_setpos(struct intelfb_info *dinfo, int x, int y)
void intelfbhw_cursor_setcolor(struct intelfb_info *dinfo, u32 bg, u32 fg)
void intelfbhw_cursor_load(struct intelfb_info *dinfo, int width, int height,
u8 *data)
void intelfbhw_cursor_reset(struct intelfb_info *dinfo)
static irqreturn_t intelfbhw_irq(int irq, void *dev_id)
int intelfbhw_enable_irq(struct intelfb_info *dinfo)
void intelfbhw_disable_irq(struct intelfb_info *dinfo)
int intelfbhw_wait_for_vsync(struct intelfb_info *dinfo, u32 pipe)
