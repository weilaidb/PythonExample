void matroxfb_DAC_out(const struct matrox_fb_info *minfo, int reg, int val)
int matroxfb_DAC_in(const struct matrox_fb_info *minfo, int reg)
void matroxfb_var2my(struct fb_var_screeninfo* var, struct my_timming* mt)
int matroxfb_PLL_calcclock(const struct matrox_pll_features* pll, unsigned int freq, unsigned int fmax,
unsigned int* in, unsigned int* feed, unsigned int* post)
int matroxfb_vgaHWinit(struct matrox_fb_info *minfo, struct my_timming *m)
;
void matroxfb_vgaHWrestore(struct matrox_fb_info *minfo)
static void get_pins(unsigned char __iomem* pins, struct matrox_bios* bd)
static void get_bios_version(unsigned char __iomem * vbios, struct matrox_bios* bd)
static void get_bios_output(unsigned char __iomem* vbios, struct matrox_bios* bd)
static void get_bios_tvout(unsigned char __iomem* vbios, struct matrox_bios* bd)
static void parse_bios(unsigned char __iomem* vbios, struct matrox_bios* bd)
static int parse_pins1(struct matrox_fb_info *minfo,
const struct matrox_bios *bd)
static void default_pins1(struct matrox_fb_info *minfo)
static int parse_pins2(struct matrox_fb_info *minfo,
const struct matrox_bios *bd)
static void default_pins2(struct matrox_fb_info *minfo)
static int parse_pins3(struct matrox_fb_info *minfo,
const struct matrox_bios *bd)
static void default_pins3(struct matrox_fb_info *minfo)
static int parse_pins4(struct matrox_fb_info *minfo,
const struct matrox_bios *bd)
static void default_pins4(struct matrox_fb_info *minfo)
static int parse_pins5(struct matrox_fb_info *minfo,
const struct matrox_bios *bd)
static void default_pins5(struct matrox_fb_info *minfo)
static int matroxfb_set_limits(struct matrox_fb_info *minfo,
const struct matrox_bios *bd)
void matroxfb_read_pins(struct matrox_fb_info *minfo)
EXPORT_SYMBOL(matroxfb_DAC_in);
EXPORT_SYMBOL(matroxfb_DAC_out);
EXPORT_SYMBOL(matroxfb_var2my);
EXPORT_SYMBOL(matroxfb_PLL_calcclock);
EXPORT_SYMBOL(matroxfb_vgaHWinit);
EXPORT_SYMBOL(matroxfb_vgaHWrestore);
EXPORT_SYMBOL(matroxfb_read_pins);
MODULE_AUTHOR("(c) 1999-2002 Petr Vandrovec <vandrove@vc.cvut.cz>");
MODULE_DESCRIPTION("Miscellaneous support for Matrox video cards");
MODULE_LICENSE("GPL");
