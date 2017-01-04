#define __MATROXFB_G450_H__
void matroxfb_g450_connect(struct matrox_fb_info *minfo);
void matroxfb_g450_shutdown(struct matrox_fb_info *minfo);
static inline void matroxfb_g450_connect(struct matrox_fb_info *minfo) ;
static inline void matroxfb_g450_shutdown(struct matrox_fb_info *minfo) ;
