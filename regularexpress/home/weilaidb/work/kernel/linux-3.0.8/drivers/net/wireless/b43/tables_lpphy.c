struct b206x_init_tab_entry ;
#define B206X_FLAG_A	0x01
#define B206X_FLAG_G	0x02
static const struct b206x_init_tab_entry b2062_init_tab[] = ;
static const struct b206x_init_tab_entry b2063_init_tab[] = ;
void b2062_upload_init_table(struct b43_wldev *dev)
void b2063_upload_init_table(struct b43_wldev *dev)
u32 b43_lptab_read(struct b43_wldev *dev, u32 offset)
void b43_lptab_read_bulk(struct b43_wldev *dev, u32 offset,
unsigned int nr_elements, void *_data)
void b43_lptab_write(struct b43_wldev *dev, u32 offset, u32 value)
void b43_lptab_write_bulk(struct b43_wldev *dev, u32 offset,
unsigned int nr_elements, const void *_data)
static const u8 lpphy_min_sig_sq_table[] = ;
static const u16 lpphy_rev01_noise_scale_table[] = ;
static const u16 lpphy_rev2plus_noise_scale_table[] = ;
static const u16 lpphy_crs_gain_nft_table[] = ;
static const u16 lpphy_rev01_filter_control_table[] = ;
static const u32 lpphy_rev2plus_filter_control_table[] = ;
static const u32 lpphy_rev01_ps_control_table[] = ;
static const u32 lpphy_rev2plus_ps_control_table[] = ;
static const u8 lpphy_pll_fraction_table[] = ;
static const u16 lpphy_iqlo_cal_table[] = ;
static const u16 lpphy_rev0_ofdm_cck_gain_table[] = ;
static const u16 lpphy_rev1_ofdm_cck_gain_table[] = ;
static const u16 lpphy_gain_delta_table[] = ;
static const u32 lpphy_tx_power_control_table[] = ;
static const u32 lpphy_gain_idx_table[] = ;
static const u16 lpphy_aux_gain_idx_table[] = ;
static const u32 lpphy_gain_value_table[] = ;
static const u16 lpphy_gain_table[] = ;
static const u32 lpphy_a0_gain_idx_table[] = ;
static const u16 lpphy_a0_aux_gain_idx_table[] = ;
static const u32 lpphy_a0_gain_value_table[] = ;
static const u16 lpphy_a0_gain_table[] = ;
static const u16 lpphy_sw_control_table[] = ;
static const u8 lpphy_hf_table[] = ;
static const u32 lpphy_papd_eps_table[] = ;
static const u32 lpphy_papd_mult_table[] = ;
static struct lpphy_tx_gain_table_entry lpphy_rev0_nopa_tx_gain_table[] = ;
static struct lpphy_tx_gain_table_entry lpphy_rev0_2ghz_tx_gain_table[] = ;
static struct lpphy_tx_gain_table_entry lpphy_rev0_5ghz_tx_gain_table[] = ;
static struct lpphy_tx_gain_table_entry lpphy_rev1_nopa_tx_gain_table[] = ;
static struct lpphy_tx_gain_table_entry lpphy_rev1_2ghz_tx_gain_table[] = ;
static struct lpphy_tx_gain_table_entry lpphy_rev1_5ghz_tx_gain_table[] = ;
static struct lpphy_tx_gain_table_entry lpphy_rev2_nopa_tx_gain_table[] = ;
static struct lpphy_tx_gain_table_entry lpphy_rev2_2ghz_tx_gain_table[] = ;
static struct lpphy_tx_gain_table_entry lpphy_rev2_5ghz_tx_gain_table[] = ;
void lpphy_rev0_1_table_init(struct b43_wldev *dev)
void lpphy_rev2plus_table_init(struct b43_wldev *dev)
static void lpphy_rev0_1_write_gain_table(struct b43_wldev *dev, int offset,
struct lpphy_tx_gain_table_entry data)
static void lpphy_rev2plus_write_gain_table(struct b43_wldev *dev, int offset,
struct lpphy_tx_gain_table_entry data)
void lpphy_write_gain_table(struct b43_wldev *dev, int offset,
struct lpphy_tx_gain_table_entry data)
void lpphy_write_gain_table_bulk(struct b43_wldev *dev, int offset, int count,
struct lpphy_tx_gain_table_entry *table)
void lpphy_init_tx_gain_table(struct b43_wldev *dev)
