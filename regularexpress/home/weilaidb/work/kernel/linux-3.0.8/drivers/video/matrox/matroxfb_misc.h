#define __MATROXFB_MISC_H__
int matroxfb_PLL_calcclock(const struct matrox_pll_features* pll, unsigned int freq, unsigned int fmax,
unsigned int* in, unsigned int* feed, unsigned int* post);
static inline int PLL_calcclock(const struct matrox_fb_info *minfo,
unsigned int freq, unsigned int fmax,
unsigned int *in, unsigned int *feed,
unsigned int *post)
int matroxfb_vgaHWinit(struct matrox_fb_info *minfo, struct my_timming* m);
void matroxfb_vgaHWrestore(struct matrox_fb_info *minfo);
void matroxfb_read_pins(struct matrox_fb_info *minfo);
