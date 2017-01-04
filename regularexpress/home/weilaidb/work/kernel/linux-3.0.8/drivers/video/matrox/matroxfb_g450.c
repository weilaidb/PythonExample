struct mctl ;
#define BLMIN	0xF3
#define WLMAX	0x3FF
static const struct mctl g450_controls[] =
;
#define G450CTRLS ARRAY_SIZE(g450_controls)
static int get_ctrl_id(__u32 v4l2_id)
static inline int *get_ctrl_ptr(struct matrox_fb_info *minfo, unsigned int idx)
static void tvo_fill_defaults(struct matrox_fb_info *minfo)
static int cve2_get_reg(struct matrox_fb_info *minfo, int reg)
static void cve2_set_reg(struct matrox_fb_info *minfo, int reg, int val)
static void cve2_set_reg10(struct matrox_fb_info *minfo, int reg, int val)
static void g450_compute_bwlevel(const struct matrox_fb_info *minfo, int *bl,
int *wl)
static int g450_query_ctrl(void* md, struct v4l2_queryctrl *p)
static int g450_set_ctrl(void* md, struct v4l2_control *p)
static int g450_get_ctrl(void* md, struct v4l2_control *p)
struct output_desc ;
static void computeRegs(struct matrox_fb_info *minfo, struct mavenregs *r,
struct my_timming *mt, const struct output_desc *outd)
static void cve2_init_TVdata(int norm, struct mavenregs* data, const struct output_desc** outd)
#define LR(x) cve2_set_reg(minfo, (x), m->regs[(x)])
static void cve2_init_TV(struct matrox_fb_info *minfo,
const struct mavenregs *m)
static int matroxfb_g450_compute(void* md, struct my_timming* mt)
static int matroxfb_g450_program(void* md)
static int matroxfb_g450_verify_mode(void* md, u_int32_t arg)
static int g450_dvi_compute(void* md, struct my_timming* mt)
static struct matrox_altout matroxfb_g450_altout = ;
static struct matrox_altout matroxfb_g450_dvi = ;
void matroxfb_g450_connect(struct matrox_fb_info *minfo)
void matroxfb_g450_shutdown(struct matrox_fb_info *minfo)
EXPORT_SYMBOL(matroxfb_g450_connect);
EXPORT_SYMBOL(matroxfb_g450_shutdown);
MODULE_AUTHOR("(c) 2000-2002 Petr Vandrovec <vandrove@vc.cvut.cz>");
MODULE_DESCRIPTION("Matrox G450/G550 output driver");
MODULE_LICENSE("GPL");
