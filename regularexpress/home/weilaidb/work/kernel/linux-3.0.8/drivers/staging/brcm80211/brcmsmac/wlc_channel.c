#define	VALID_CHANNEL20_DB(wlc, val) wlc_valid_channel20_db((wlc)->cmi, val)
#define	VALID_CHANNEL20_IN_BAND(wlc, bandunit, val) \
wlc_valid_channel20_in_band((wlc)->cmi, bandunit, val)
#define	VALID_CHANNEL20(wlc, val) wlc_valid_channel20((wlc)->cmi, val)
typedef struct wlc_cm_band  wlc_cm_band_t;
struct wlc_cm_info ;
static int wlc_channels_init(wlc_cm_info_t *wlc_cm,
const country_info_t *country);
static void wlc_set_country_common(wlc_cm_info_t *wlc_cm,
const char *country_abbrev,
const char *ccode, uint regrev,
const country_info_t *country);
static int wlc_set_countrycode(wlc_cm_info_t *wlc_cm, const char *ccode);
static int wlc_set_countrycode_rev(wlc_cm_info_t *wlc_cm,
const char *country_abbrev,
const char *ccode, int regrev);
static int wlc_country_aggregate_map(wlc_cm_info_t *wlc_cm, const char *ccode,
char *mapped_ccode, uint *mapped_regrev);
static const country_info_t *wlc_country_lookup_direct(const char *ccode,
uint regrev);
static const country_info_t *wlc_countrycode_map(wlc_cm_info_t *wlc_cm,
const char *ccode,
char *mapped_ccode,
uint *mapped_regrev);
static void wlc_channels_commit(wlc_cm_info_t *wlc_cm);
static void wlc_quiet_channels_reset(wlc_cm_info_t *wlc_cm);
static bool wlc_quiet_chanspec(wlc_cm_info_t *wlc_cm, chanspec_t chspec);
static bool wlc_valid_channel20_db(wlc_cm_info_t *wlc_cm, uint val);
static bool wlc_valid_channel20_in_band(wlc_cm_info_t *wlc_cm, uint bandunit,
uint val);
static bool wlc_valid_channel20(wlc_cm_info_t *wlc_cm, uint val);
static const country_info_t *wlc_country_lookup(struct wlc_info *wlc,
const char *ccode);
static void wlc_locale_get_channels(const locale_info_t *locale,
chanvec_t *valid_channels);
static const locale_info_t *wlc_get_locale_2g(u8 locale_idx);
static const locale_info_t *wlc_get_locale_5g(u8 locale_idx);
static bool wlc_japan(struct wlc_info *wlc);
static bool wlc_japan_ccode(const char *ccode);
static void wlc_channel_min_txpower_limits_with_local_constraint(wlc_cm_info_t *
wlc_cm,
struct
txpwr_limits
*txpwr,
u8
local_constraint_qdbm);
static void wlc_locale_add_channels(chanvec_t *target,
const chanvec_t *channels);
static const locale_mimo_info_t *wlc_get_mimo_2g(u8 locale_idx);
static const locale_mimo_info_t *wlc_get_mimo_5g(u8 locale_idx);
#undef QDB
#define QDB(n) ((n) * WLC_TXPWR_DB_FACTOR)
static const chanvec_t chanvec_none = ;
const chanvec_t chanvec_all_2G = ;
const chanvec_t chanvec_all_5G = ;
#define radar_set_none chanvec_none
static const chanvec_t radar_set1 = ;
#define restricted_set_none chanvec_none
static const chanvec_t restricted_set_japan_legacy = ;
static const chanvec_t restricted_set_2g_short = ;
static const chanvec_t restricted_chan_165 = ;
static const chanvec_t restricted_low_hi = ;
static const chanvec_t restricted_set_12_13_14 = ;
#define  LOCALE_CHAN_01_11	 (1<<0)
#define  LOCALE_CHAN_12_13	 (1<<1)
#define  LOCALE_CHAN_14		 (1<<2)
#define  LOCALE_SET_5G_LOW_JP1   (1<<3)
#define  LOCALE_SET_5G_LOW_JP2   (1<<4)
#define  LOCALE_SET_5G_LOW1      (1<<5)
#define  LOCALE_SET_5G_LOW2      (1<<6)
#define  LOCALE_SET_5G_LOW3      (1<<7)
#define  LOCALE_SET_5G_MID1      (1<<8)
#define  LOCALE_SET_5G_MID2	 (1<<9)
#define  LOCALE_SET_5G_MID3      (1<<10)
#define  LOCALE_SET_5G_HIGH1     (1<<11)
#define  LOCALE_SET_5G_HIGH2     (1<<12)
#define  LOCALE_SET_5G_HIGH3     (1<<13)
#define  LOCALE_CHAN_52_140_ALL  (1<<14)
#define  LOCALE_SET_5G_HIGH4     (1<<15)
#define  LOCALE_CHAN_36_64       (LOCALE_SET_5G_LOW1 | LOCALE_SET_5G_LOW2 | LOCALE_SET_5G_LOW3)
#define  LOCALE_CHAN_52_64       (LOCALE_SET_5G_LOW2 | LOCALE_SET_5G_LOW3)
#define  LOCALE_CHAN_100_124	 (LOCALE_SET_5G_MID1 | LOCALE_SET_5G_MID2)
#define  LOCALE_CHAN_100_140     \
(LOCALE_SET_5G_MID1 | LOCALE_SET_5G_MID2 | LOCALE_SET_5G_MID3 | LOCALE_SET_5G_HIGH1)
#define  LOCALE_CHAN_149_165     (LOCALE_SET_5G_HIGH2 | LOCALE_SET_5G_HIGH3)
#define  LOCALE_CHAN_184_216     LOCALE_SET_5G_HIGH4
#define  LOCALE_CHAN_01_14	(LOCALE_CHAN_01_11 | LOCALE_CHAN_12_13 | LOCALE_CHAN_14)
#define  LOCALE_RADAR_SET_NONE		  0
#define  LOCALE_RADAR_SET_1		  1
#define  LOCALE_RESTRICTED_NONE		  0
#define  LOCALE_RESTRICTED_SET_2G_SHORT   1
#define  LOCALE_RESTRICTED_CHAN_165       2
#define  LOCALE_CHAN_ALL_5G		  3
#define  LOCALE_RESTRICTED_JAPAN_LEGACY   4
#define  LOCALE_RESTRICTED_11D_2G	  5
#define  LOCALE_RESTRICTED_11D_5G	  6
#define  LOCALE_RESTRICTED_LOW_HI	  7
#define  LOCALE_RESTRICTED_12_13_14	  8
static const chanvec_t *g_table_radar_set[] = ;
static const chanvec_t *g_table_restricted_chan[] = ;
static const chanvec_t locale_2g_01_11 = ;
static const chanvec_t locale_2g_12_13 = ;
static const chanvec_t locale_2g_14 = ;
static const chanvec_t locale_5g_LOW_JP1 = ;
static const chanvec_t locale_5g_LOW_JP2 = ;
static const chanvec_t locale_5g_LOW1 = ;
static const chanvec_t locale_5g_LOW2 = ;
static const chanvec_t locale_5g_LOW3 = ;
static const chanvec_t locale_5g_MID1 = ;
static const chanvec_t locale_5g_MID2 = ;
static const chanvec_t locale_5g_MID3 = ;
static const chanvec_t locale_5g_HIGH1 = ;
static const chanvec_t locale_5g_HIGH2 = ;
static const chanvec_t locale_5g_HIGH3 = ;
static const chanvec_t locale_5g_52_140_ALL = ;
static const chanvec_t locale_5g_HIGH4 = ;
static const chanvec_t *g_table_locale_base[] = ;
static void wlc_locale_add_channels(chanvec_t *target,
const chanvec_t *channels)
static void wlc_locale_get_channels(const locale_info_t *locale,
chanvec_t *channels)
static const locale_info_t locale_i = ;
static const locale_info_t locale_11 = ;
#define LOCALE_2G_IDX_i			0
static const locale_info_t *g_locale_2g_table[] = ;
#define LOCALE_5G_IDX_11	0
static const locale_info_t *g_locale_5g_table[] = ;
static const locale_mimo_info_t locale_bn = ;
#define LOCALE_MIMO_IDX_bn			0
static const locale_mimo_info_t *g_mimo_2g_table[] = ;
static const locale_mimo_info_t locale_11n = ;
#define LOCALE_MIMO_IDX_11n			0
static const locale_mimo_info_t *g_mimo_5g_table[] = ;
#undef LC
#define LC(id)	LOCALE_MIMO_IDX_ ## id
#undef LC_2G
#define LC_2G(id)	LOCALE_2G_IDX_ ## id
#undef LC_5G
#define LC_5G(id)	LOCALE_5G_IDX_ ## id
#define LOCALES(band2, band5, mimo2, mimo5)
static const struct  cntry_locales[] = ;
struct chan20_info ;
struct chan20_info chan20_info[] = ;
static const locale_info_t *wlc_get_locale_2g(u8 locale_idx)
static const locale_info_t *wlc_get_locale_5g(u8 locale_idx)
static const locale_mimo_info_t *wlc_get_mimo_2g(u8 locale_idx)
static const locale_mimo_info_t *wlc_get_mimo_5g(u8 locale_idx)
wlc_cm_info_t *wlc_channel_mgr_attach(struct wlc_info *wlc)
void wlc_channel_mgr_detach(wlc_cm_info_t *wlc_cm)
u8 wlc_channel_locale_flags_in_band(wlc_cm_info_t *wlc_cm, uint bandunit)
static int wlc_set_countrycode(wlc_cm_info_t *wlc_cm, const char *ccode)
static int
wlc_set_countrycode_rev(wlc_cm_info_t *wlc_cm,
const char *country_abbrev,
const char *ccode, int regrev)
static void
wlc_set_country_common(wlc_cm_info_t *wlc_cm,
const char *country_abbrev,
const char *ccode, uint regrev,
const country_info_t *country)
static const country_info_t *wlc_country_lookup(struct wlc_info *wlc,
const char *ccode)
static const country_info_t *wlc_countrycode_map(wlc_cm_info_t *wlc_cm,
const char *ccode,
char *mapped_ccode,
uint *mapped_regrev)
static int
wlc_country_aggregate_map(wlc_cm_info_t *wlc_cm, const char *ccode,
char *mapped_ccode, uint *mapped_regrev)
static const country_info_t *wlc_country_lookup_direct(const char *ccode,
uint regrev)
static int
wlc_channels_init(wlc_cm_info_t *wlc_cm, const country_info_t *country)
static void wlc_channels_commit(wlc_cm_info_t *wlc_cm)
static void wlc_quiet_channels_reset(wlc_cm_info_t *wlc_cm)
static bool wlc_quiet_chanspec(wlc_cm_info_t *wlc_cm, chanspec_t chspec)
static bool wlc_valid_channel20_db(wlc_cm_info_t *wlc_cm, uint val)
static bool
wlc_valid_channel20_in_band(wlc_cm_info_t *wlc_cm, uint bandunit, uint val)
static bool wlc_valid_channel20(wlc_cm_info_t *wlc_cm, uint val)
static void
wlc_channel_min_txpower_limits_with_local_constraint(wlc_cm_info_t *wlc_cm,
struct txpwr_limits *txpwr,
u8
local_constraint_qdbm)
void
wlc_channel_set_chanspec(wlc_cm_info_t *wlc_cm, chanspec_t chanspec,
u8 local_constraint_qdbm)
static void wlc_phy_txpower_limits_dump(txpwr_limits_t *txpwr)
void
wlc_channel_reg_limits(wlc_cm_info_t *wlc_cm, chanspec_t chanspec,
txpwr_limits_t *txpwr)
static bool wlc_japan(struct wlc_info *wlc)
static bool wlc_japan_ccode(const char *ccode)
static bool
wlc_valid_chanspec_ext(wlc_cm_info_t *wlc_cm, chanspec_t chspec, bool dualband)
bool wlc_valid_chanspec_db(wlc_cm_info_t *wlc_cm, chanspec_t chspec)
