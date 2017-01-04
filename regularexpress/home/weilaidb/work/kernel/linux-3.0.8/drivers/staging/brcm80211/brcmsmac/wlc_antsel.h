#define _wlc_antsel_h_
extern struct antsel_info *wlc_antsel_attach(struct wlc_info *wlc);
extern void wlc_antsel_detach(struct antsel_info *asi);
extern void wlc_antsel_init(struct antsel_info *asi);
extern void wlc_antsel_antcfg_get(struct antsel_info *asi, bool usedef,
bool sel,
u8 id, u8 fbid, u8 *antcfg,
u8 *fbantcfg);
extern u8 wlc_antsel_antsel2id(struct antsel_info *asi, u16 antsel);
