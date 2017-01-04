#define WLC_ANTSEL_11N_0(ant)	((((ant) & ANT_SELCFG_MASK) >> 4) & 0xf)
#define WLC_ANTSEL_11N_1(ant)	(((ant) & ANT_SELCFG_MASK) & 0xf)
#define WLC_ANTIDX_11N(ant)	(((WLC_ANTSEL_11N_0(ant)) << 2) + (WLC_ANTSEL_11N_1(ant)))
#define WLC_ANT_ISAUTO_11N(ant)	(((ant) & ANT_SELCFG_AUTO) == ANT_SELCFG_AUTO)
#define WLC_ANTSEL_11N(ant)	((ant) & ANT_SELCFG_MASK)
#define ANT_SELCFG_DEF_2x2	0x01
#define ANT_SELCFG_NUM_2x3	3
#define ANT_SELCFG_DEF_2x3	0x01
#define ANT_SELCFG_NUM_2x4	4
#define ANT_SELCFG_DEF_2x4	0x02
static int wlc_antsel_cfgupd(struct antsel_info *asi, wlc_antselcfg_t *antsel);
static u8 wlc_antsel_id2antcfg(struct antsel_info *asi, u8 id);
static u16 wlc_antsel_antcfg2antsel(struct antsel_info *asi, u8 ant_cfg);
static void wlc_antsel_init_cfg(struct antsel_info *asi,
wlc_antselcfg_t *antsel,
bool auto_sel);
const u16 mimo_2x4_div_antselpat_tbl[] = ;
const u8 mimo_2x4_div_antselid_tbl[16] = ;
const u16 mimo_2x3_div_antselpat_tbl[] = ;
const u8 mimo_2x3_div_antselid_tbl[16] = ;
struct antsel_info *wlc_antsel_attach(struct wlc_info *wlc)
void wlc_antsel_detach(struct antsel_info *asi)
void wlc_antsel_init(struct antsel_info *asi)
static void
wlc_antsel_init_cfg(struct antsel_info *asi, wlc_antselcfg_t *antsel,
bool auto_sel)
void
wlc_antsel_antcfg_get(struct antsel_info *asi, bool usedef, bool sel,
u8 antselid, u8 fbantselid, u8 *antcfg,
u8 *fbantcfg)
u8 wlc_antsel_antsel2id(struct antsel_info *asi, u16 antsel)
static u8 wlc_antsel_id2antcfg(struct antsel_info *asi, u8 id)
static u16 wlc_antsel_antcfg2antsel(struct antsel_info *asi, u8 ant_cfg)
static int wlc_antsel_cfgupd(struct antsel_info *asi, wlc_antselcfg_t *antsel)
