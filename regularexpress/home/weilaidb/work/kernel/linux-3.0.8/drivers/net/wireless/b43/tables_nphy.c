static const u8 b43_ntab_adjustpower0[] = ;
static const u8 b43_ntab_adjustpower1[] = ;
static const u16 b43_ntab_bdi[] = ;
static const u32 b43_ntab_channelest[] = ;
static const u8 b43_ntab_estimatepowerlt0[] = ;
static const u8 b43_ntab_estimatepowerlt1[] = ;
static const u8 b43_ntab_framelookup[] = ;
static const u32 b43_ntab_framestruct[] = ;
static const u32 b43_ntab_gainctl0[] = ;
static const u32 b43_ntab_gainctl1[] = ;
static const u32 b43_ntab_intlevel[] = ;
static const u32 b43_ntab_iqlt0[] = ;
static const u32 b43_ntab_iqlt1[] = ;
static const u16 b43_ntab_loftlt0[] = ;
static const u16 b43_ntab_loftlt1[] = ;
static const u8 b43_ntab_mcs[] = ;
static const u32 b43_ntab_noisevar10[] = ;
static const u32 b43_ntab_noisevar11[] = ;
static const u16 b43_ntab_pilot[] = ;
static const u32 b43_ntab_pilotlt[] = ;
static const u32 b43_ntab_tdi20a0[] = ;
static const u32 b43_ntab_tdi20a1[] = ;
static const u32 b43_ntab_tdi40a0[] = ;
static const u32 b43_ntab_tdi40a1[] = ;
static const u32 b43_ntab_tdtrn[] = ;
static const u32 b43_ntab_tmap[] = ;
static const u32 b43_ntab_framestruct_r3[] = ;
static const u16 b43_ntab_pilot_r3[] = ;
static const u32 b43_ntab_tmap_r3[] = ;
static const u32 b43_ntab_intlevel_r3[] = ;
static const u32 b43_ntab_tdtrn_r3[] = ;
static const u32 b43_ntab_noisevar0_r3[] = ;
static const u32 b43_ntab_noisevar1_r3[] = ;
static const u16 b43_ntab_mcs_r3[] = ;
static const u32 b43_ntab_tdi20a0_r3[] = ;
static const u32 b43_ntab_tdi20a1_r3[] = ;
static const u32 b43_ntab_tdi40a0_r3[] = ;
static const u32 b43_ntab_tdi40a1_r3[] = ;
static const u32 b43_ntab_pilotlt_r3[] = ;
static const u32 b43_ntab_channelest_r3[] = ;
static const u8 b43_ntab_framelookup_r3[] = ;
static const u8 b43_ntab_estimatepowerlt0_r3[] = ;
static const u8 b43_ntab_estimatepowerlt1_r3[] = ;
static const u8 b43_ntab_adjustpower0_r3[] = ;
static const u8 b43_ntab_adjustpower1_r3[] = ;
static const u32 b43_ntab_gainctl0_r3[] = ;
static const u32 b43_ntab_gainctl1_r3[] = ;
static const u32 b43_ntab_iqlt0_r3[] = ;
static const u32 b43_ntab_iqlt1_r3[] = ;
static const u16 b43_ntab_loftlt0_r3[] = ;
static const u16 b43_ntab_loftlt1_r3[] = ;
const u32 b43_ntab_tx_gain_rev0_1_2[] = ;
const u32 b43_ntab_tx_gain_rev3plus_2ghz[] = ;
const u32 b43_ntab_tx_gain_rev3_5ghz[] = ;
const u32 b43_ntab_tx_gain_rev4_5ghz[] = ;
const u32 b43_ntab_tx_gain_rev5plus_5ghz[] = ;
const u32 txpwrctrl_tx_gain_ipa[] = ;
const u32 txpwrctrl_tx_gain_ipa_rev5[] = ;
const u32 txpwrctrl_tx_gain_ipa_rev6[] = ;
const u32 txpwrctrl_tx_gain_ipa_5g[] = ;
const u16 tbl_iqcal_gainparams[2][9][8] = ;
const struct nphy_txiqcal_ladder ladder_lo[] = ;
const struct nphy_txiqcal_ladder ladder_iq[] = ;
const u16 loscale[] = ;
const u16 tbl_tx_iqlo_cal_loft_ladder_40[] = ;
const u16 tbl_tx_iqlo_cal_loft_ladder_20[] = ;
const u16 tbl_tx_iqlo_cal_iqimb_ladder_40[] = ;
const u16 tbl_tx_iqlo_cal_iqimb_ladder_20[] = ;
const u16 tbl_tx_iqlo_cal_startcoefs_nphyrev3[B43_NTAB_TX_IQLO_CAL_STARTCOEFS_REV3] = ;
const u16 tbl_tx_iqlo_cal_startcoefs[B43_NTAB_TX_IQLO_CAL_STARTCOEFS] = ;
const u16 tbl_tx_iqlo_cal_cmds_recal_nphyrev3[] = ;
const u16 tbl_tx_iqlo_cal_cmds_recal[] = ;
const u16 tbl_tx_iqlo_cal_cmds_fullcal[] = ;
const u16 tbl_tx_iqlo_cal_cmds_fullcal_nphyrev3[] = ;
const s16 tbl_tx_filter_coef_rev4[7][15] = ;
const struct nphy_rf_control_override_rev2 tbl_rf_control_override_rev2[] = ;
const struct nphy_rf_control_override_rev3 tbl_rf_control_override_rev3[] = ;
struct nphy_gain_ctl_workaround_entry nphy_gain_ctl_workaround[2][3] = ;
static inline void assert_ntab_array_sizes(void)
u32 b43_ntab_read(struct b43_wldev *dev, u32 offset)
void b43_ntab_read_bulk(struct b43_wldev *dev, u32 offset,
unsigned int nr_elements, void *_data)
void b43_ntab_write(struct b43_wldev *dev, u32 offset, u32 value)
void b43_ntab_write_bulk(struct b43_wldev *dev, u32 offset,
unsigned int nr_elements, const void *_data)
#define ntab_upload(dev, offset, data) do  while (0)
void b43_nphy_rev0_1_2_tables_init(struct b43_wldev *dev)
#define ntab_upload_r3(dev, offset, data) do  while (0)
void b43_nphy_rev3plus_tables_init(struct b43_wldev *dev)
struct nphy_gain_ctl_workaround_entry *b43_nphy_get_gain_ctl_workaround_ent(
struct b43_wldev *dev, bool ghz5, bool ext_lna)
