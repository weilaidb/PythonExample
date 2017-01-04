#define _WLC_CHANNEL_H_
#define WLC_TXPWR_DB_FACTOR 4
struct wlc_info;
#define BAND_5G_PWR_LVLS	5
#define CHANNEL_POWER_IDX_2G_CCK(c) (((c) < 2) ? 0 : (((c) < 11) ? 1 : 2))
#define CHANNEL_POWER_IDX_2G_OFDM(c) (((c) < 2) ? 3 : (((c) < 11) ? 4 : 5))
#define CHANNEL_POWER_IDX_5G(c) \
(((c) < 52) ? 0 : (((c) < 62) ? 1 : (((c) < 100) ? 2 : (((c) < 149) ? 3 : 4))))
#define WLC_MAXPWR_TBL_SIZE		6
#define WLC_MAXPWR_MIMO_TBL_SIZE	14
typedef struct  locale_info_t;
#define WLC_PEAK_CONDUCTED	0x00
#define WLC_EIRP		0x01
#define WLC_DFS_TPC		0x02
#define WLC_NO_OFDM		0x04
#define WLC_NO_40MHZ		0x08
#define WLC_NO_MIMO		0x10
#define WLC_RADAR_TYPE_EU       0x20
#define WLC_DFS_FCC             WLC_DFS_TPC
#define WLC_DFS_EU              (WLC_DFS_TPC | WLC_RADAR_TYPE_EU)
#define ISDFS_EU(fl)		(((fl) & WLC_DFS_EU) == WLC_DFS_EU)
typedef struct  locale_mimo_info_t;
extern const chanvec_t chanvec_all_2G;
extern const chanvec_t chanvec_all_5G;
struct country_info ;
typedef struct country_info country_info_t;
typedef struct wlc_cm_info wlc_cm_info_t;
extern wlc_cm_info_t *wlc_channel_mgr_attach(struct wlc_info *wlc);
extern void wlc_channel_mgr_detach(wlc_cm_info_t *wlc_cm);
extern u8 wlc_channel_locale_flags_in_band(wlc_cm_info_t *wlc_cm,
uint bandunit);
extern bool wlc_valid_chanspec_db(wlc_cm_info_t *wlc_cm, chanspec_t chspec);
extern void wlc_channel_reg_limits(wlc_cm_info_t *wlc_cm,
chanspec_t chanspec,
struct txpwr_limits *txpwr);
extern void wlc_channel_set_chanspec(wlc_cm_info_t *wlc_cm,
chanspec_t chanspec,
u8 local_constraint_qdbm);
