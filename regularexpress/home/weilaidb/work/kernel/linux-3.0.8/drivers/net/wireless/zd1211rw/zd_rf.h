#define _ZD_RF_H
#define UW2451_RF			0x2
#define UCHIP_RF			0x3
#define AL2230_RF			0x4
#define AL7230B_RF			0x5
#define THETA_RF			0x6
#define AL2210_RF			0x7
#define MAXIM_NEW_RF			0x8
#define UW2453_RF			0x9
#define AL2230S_RF			0xa
#define RALINK_RF			0xb
#define INTERSIL_RF			0xc
#define RF2959_RF			0xd
#define MAXIM_NEW2_RF			0xe
#define PHILIPS_RF			0xf
#define RF_CHANNEL(ch) [(ch)-1]
enum ;
struct zd_rf ;
const char *zd_rf_name(u8 type);
void zd_rf_init(struct zd_rf *rf);
void zd_rf_clear(struct zd_rf *rf);
int zd_rf_init_hw(struct zd_rf *rf, u8 type);
int zd_rf_scnprint_id(struct zd_rf *rf, char *buffer, size_t size);
int zd_rf_set_channel(struct zd_rf *rf, u8 channel);
int zd_switch_radio_on(struct zd_rf *rf);
int zd_switch_radio_off(struct zd_rf *rf);
int zd_rf_patch_6m_band_edge(struct zd_rf *rf, u8 channel);
int zd_rf_generic_patch_6m(struct zd_rf *rf, u8 channel);
static inline int zd_rf_should_update_pwr_int(struct zd_rf *rf)
static inline int zd_rf_should_patch_cck_gain(struct zd_rf *rf)
int zd_rf_patch_6m_band_edge(struct zd_rf *rf, u8 channel);
int zd_rf_generic_patch_6m(struct zd_rf *rf, u8 channel);
int zd_rf_init_rf2959(struct zd_rf *rf);
int zd_rf_init_al2230(struct zd_rf *rf);
int zd_rf_init_al7230b(struct zd_rf *rf);
int zd_rf_init_uw2453(struct zd_rf *rf);
