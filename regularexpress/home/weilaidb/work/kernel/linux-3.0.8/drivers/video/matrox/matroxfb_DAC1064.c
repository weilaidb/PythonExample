#define outDAC1064 matroxfb_DAC_out
#define inDAC1064 matroxfb_DAC_in
#define DAC1064_OPT_SCLK_PCI	0x00
#define DAC1064_OPT_SCLK_PLL	0x01
#define DAC1064_OPT_SCLK_EXT	0x02
#define DAC1064_OPT_SCLK_MASK	0x03
#define DAC1064_OPT_GDIV1	0x04
#define DAC1064_OPT_GDIV3	0x00
#define DAC1064_OPT_MDIV1	0x08
#define DAC1064_OPT_MDIV2	0x00
#define DAC1064_OPT_RESERVED	0x10
static void DAC1064_calcclock(const struct matrox_fb_info *minfo,
unsigned int freq, unsigned int fmax,
unsigned int *in, unsigned int *feed,
unsigned int *post)
static const unsigned char MGA1064_DAC_regs[] = ;
static const unsigned char MGA1064_DAC[] = ;
static void DAC1064_setpclk(struct matrox_fb_info *minfo, unsigned long fout)
static void DAC1064_setmclk(struct matrox_fb_info *minfo, int oscinfo,
unsigned long fmem)
static void g450_set_plls(struct matrox_fb_info *minfo)
void DAC1064_global_init(struct matrox_fb_info *minfo)
void DAC1064_global_restore(struct matrox_fb_info *minfo)
static int DAC1064_init_1(struct matrox_fb_info *minfo, struct my_timming *m)
static int DAC1064_init_2(struct matrox_fb_info *minfo, struct my_timming *m)
static void DAC1064_restore_1(struct matrox_fb_info *minfo)
;
static void DAC1064_restore_2(struct matrox_fb_info *minfo)
static int m1064_compute(void* out, struct my_timming* m)
static struct matrox_altout m1064 = ;
static int g450_compute(void* out, struct my_timming* m)
static struct matrox_altout g450out = ;
static int MGA1064_init(struct matrox_fb_info *minfo, struct my_timming *m)
static int MGAG100_init(struct matrox_fb_info *minfo, struct my_timming *m)
static void MGA1064_ramdac_init(struct matrox_fb_info *minfo)
static int x7AF4 = 0x10;
static void MGAG100_progPixClock(const struct matrox_fb_info *minfo, int flags,
int m, int n, int p)
static void MGAG100_setPixClock(const struct matrox_fb_info *minfo, int flags,
int freq)
static int MGA1064_preinit(struct matrox_fb_info *minfo)
static void MGA1064_reset(struct matrox_fb_info *minfo)
static void g450_mclk_init(struct matrox_fb_info *minfo)
static void g450_memory_init(struct matrox_fb_info *minfo)
static void g450_preinit(struct matrox_fb_info *minfo)
static int MGAG100_preinit(struct matrox_fb_info *minfo)
static void MGAG100_reset(struct matrox_fb_info *minfo)
static void MGA1064_restore(struct matrox_fb_info *minfo)
static void MGAG100_restore(struct matrox_fb_info *minfo)
struct matrox_switch matrox_mystique = ;
EXPORT_SYMBOL(matrox_mystique);
struct matrox_switch matrox_G100 = ;
EXPORT_SYMBOL(matrox_G100);
EXPORT_SYMBOL(DAC1064_global_init);
EXPORT_SYMBOL(DAC1064_global_restore);
MODULE_LICENSE("GPL");
