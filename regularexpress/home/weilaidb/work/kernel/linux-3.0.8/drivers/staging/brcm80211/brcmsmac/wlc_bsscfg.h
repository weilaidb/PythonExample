#define _WLC_BSSCFG_H_
#define BSSCFG_AP(cfg)		(0)
#define BSSCFG_STA(cfg)		(1)
#define BSSCFG_IBSS(cfg)	(!(cfg)->BSS)
#define NTXRATE			64
#define MAXMACLIST		64
#define BCN_TEMPLATE_COUNT 	2
#define FOREACH_AS_STA(wlc, idx, cfg) \
for (idx = 0; (int) idx < WLC_MAXBSSCFG; idx++) \
if ((cfg = (wlc)->bsscfg[idx]) && BSSCFG_STA(cfg) && cfg->associated)
#define FOREACH_BSS(wlc, idx, cfg) \
for (idx = 0; (int) idx < WLC_MAXBSSCFG; idx++) \
if ((cfg = (wlc)->bsscfg[idx]))
struct wlc_bsscfg ;
#define WLC_BSSCFG_11N_DISABLE	0x1000
#define WLC_BSSCFG_HW_BCN	0x20
#define HWBCN_ENAB(cfg)		(((cfg)->flags & WLC_BSSCFG_HW_BCN) != 0)
#define HWPRB_ENAB(cfg)		(((cfg)->flags & WLC_BSSCFG_HW_PRB) != 0)
#define BSS_N_ENAB(wlc, cfg) \
(N_ENAB((wlc)->pub) && !((cfg)->flags & WLC_BSSCFG_11N_DISABLE))
#define MBSS_BCN_ENAB(cfg)       0
#define MBSS_PRB_ENAB(cfg)       0
#define SOFTBCN_ENAB(pub)    (0)
#define SOFTPRB_ENAB(pub)    (0)
#define wlc_bsscfg_tx_check(a) do  while (0);
