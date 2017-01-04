#define _LINUX_LINUX_LOGO_H
#define LINUX_LOGO_MONO		1
#define LINUX_LOGO_VGA16	2
#define LINUX_LOGO_CLUT224	3
#define LINUX_LOGO_GRAY256	4
struct linux_logo ;
extern const struct linux_logo logo_linux_mono;
extern const struct linux_logo logo_linux_vga16;
extern const struct linux_logo logo_linux_clut224;
extern const struct linux_logo logo_blackfin_vga16;
extern const struct linux_logo logo_blackfin_clut224;
extern const struct linux_logo logo_dec_clut224;
extern const struct linux_logo logo_mac_clut224;
extern const struct linux_logo logo_parisc_clut224;
extern const struct linux_logo logo_sgi_clut224;
extern const struct linux_logo logo_sun_clut224;
extern const struct linux_logo logo_superh_mono;
extern const struct linux_logo logo_superh_vga16;
extern const struct linux_logo logo_superh_clut224;
extern const struct linux_logo logo_m32r_clut224;
extern const struct linux_logo logo_spe_clut224;
extern const struct linux_logo *fb_find_logo(int depth);
extern void fb_append_extra_logo(const struct linux_logo *logo,
unsigned int n);
static inline void fb_append_extra_logo(const struct linux_logo *logo,
unsigned int n)
