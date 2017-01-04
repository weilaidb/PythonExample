#define MGATVO_B	1
#define MGATVO_C	2
static const struct maven_gamma  maven_gamma[] = ;
struct mctl ;
#define BLMIN	0x0FF
#define WLMAX	0x3FF
static const struct mctl maven_controls[] =
;
#define MAVCTRLS ARRAY_SIZE(maven_controls)
static int get_ctrl_id(__u32 v4l2_id)
struct maven_data ;
static int* get_ctrl_ptr(struct maven_data* md, int idx)
static int maven_get_reg(struct i2c_client* c, char reg)
static int maven_set_reg(struct i2c_client* c, int reg, int val)
static int maven_set_reg_pair(struct i2c_client* c, int reg, int val)
static const struct matrox_pll_features maven_pll = ;
struct matrox_pll_features2 ;
struct matrox_pll_ctl ;
static const struct matrox_pll_features2 maven1000_pll = ;
static const struct matrox_pll_ctl maven_PAL = ;
static const struct matrox_pll_ctl maven_NTSC = ;
static int matroxfb_PLL_mavenclock(const struct matrox_pll_features2* pll,
const struct matrox_pll_ctl* ctl,
unsigned int htotal, unsigned int vtotal,
unsigned int* in, unsigned int* feed, unsigned int* post,
unsigned int* h2)
static int matroxfb_mavenclock(const struct matrox_pll_ctl *ctl,
unsigned int htotal, unsigned int vtotal,
unsigned int* in, unsigned int* feed, unsigned int* post,
unsigned int* htotal2)
static void DAC1064_calcclock(unsigned int freq, unsigned int fmax,
unsigned int* in, unsigned int* feed, unsigned int* post)
static unsigned char maven_compute_deflicker (const struct maven_data* md)
static void maven_compute_bwlevel (const struct maven_data* md,
int *bl, int *wl)
static const struct maven_gamma* maven_compute_gamma (const struct maven_data* md)
static void maven_init_TVdata(const struct maven_data* md, struct mavenregs* data)
#define LR(x) maven_set_reg(c, (x), m->regs[(x)])
#define LRP(x) maven_set_reg_pair(c, (x), m->regs[(x)] | (m->regs[(x)+1] << 8))
static void maven_init_TV(struct i2c_client* c, const struct mavenregs* m)
static int maven_find_exact_clocks(unsigned int ht, unsigned int vt,
struct mavenregs* m)
static inline int maven_compute_timming(struct maven_data* md,
struct my_timming* mt,
struct mavenregs* m)
static int maven_program_timming(struct maven_data* md,
const struct mavenregs* m)
static inline int maven_resync(struct maven_data* md)
static int maven_get_queryctrl (struct maven_data* md,
struct v4l2_queryctrl *p)
static int maven_set_control (struct maven_data* md,
struct v4l2_control *p)
static int maven_get_control (struct maven_data* md,
struct v4l2_control *p)
static int maven_out_compute(void* md, struct my_timming* mt)
static int maven_out_program(void* md)
static int maven_out_start(void* md)
static int maven_out_verify_mode(void* md, u_int32_t arg)
static int maven_out_get_queryctrl(void* md, struct v4l2_queryctrl* p)
static int maven_out_get_ctrl(void* md, struct v4l2_control* p)
static int maven_out_set_ctrl(void* md, struct v4l2_control* p)
static struct matrox_altout maven_altout = ;
static int maven_init_client(struct i2c_client* clnt)
static int maven_shutdown_client(struct i2c_client* clnt)
static int maven_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int maven_remove(struct i2c_client *client)
static const struct i2c_device_id maven_id[] = ;
MODULE_DEVICE_TABLE(i2c, maven_id);
static struct i2c_driver maven_driver=;
static int __init matroxfb_maven_init(void)
static void __exit matroxfb_maven_exit(void)
MODULE_AUTHOR("(c) 1999-2002 Petr Vandrovec <vandrove@vc.cvut.cz>");
MODULE_DESCRIPTION("Matrox G200/G400 Matrox MGA-TVO driver");
MODULE_LICENSE("GPL");
module_init(matroxfb_maven_init);
module_exit(matroxfb_maven_exit);
