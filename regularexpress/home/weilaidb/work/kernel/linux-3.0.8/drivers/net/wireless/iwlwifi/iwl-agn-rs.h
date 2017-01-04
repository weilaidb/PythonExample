#define __iwl_agn_rs_h__
struct iwl_rate_info ;
enum ;
enum ;
enum ;
#define	IWL_RATE_6M_MASK   (1 << IWL_RATE_6M_INDEX)
#define	IWL_RATE_9M_MASK   (1 << IWL_RATE_9M_INDEX)
#define	IWL_RATE_12M_MASK  (1 << IWL_RATE_12M_INDEX)
#define	IWL_RATE_18M_MASK  (1 << IWL_RATE_18M_INDEX)
#define	IWL_RATE_24M_MASK  (1 << IWL_RATE_24M_INDEX)
#define	IWL_RATE_36M_MASK  (1 << IWL_RATE_36M_INDEX)
#define	IWL_RATE_48M_MASK  (1 << IWL_RATE_48M_INDEX)
#define	IWL_RATE_54M_MASK  (1 << IWL_RATE_54M_INDEX)
#define IWL_RATE_60M_MASK  (1 << IWL_RATE_60M_INDEX)
#define	IWL_RATE_1M_MASK   (1 << IWL_RATE_1M_INDEX)
#define	IWL_RATE_2M_MASK   (1 << IWL_RATE_2M_INDEX)
#define	IWL_RATE_5M_MASK   (1 << IWL_RATE_5M_INDEX)
#define	IWL_RATE_11M_MASK  (1 << IWL_RATE_11M_INDEX)
enum ;
enum ;
enum ;
#define IWL_CCK_BASIC_RATES_MASK    \
(IWL_RATE_1M_MASK          | \
IWL_RATE_2M_MASK)
#define IWL_CCK_RATES_MASK          \
(IWL_CCK_BASIC_RATES_MASK  | \
IWL_RATE_5M_MASK          | \
IWL_RATE_11M_MASK)
#define IWL_OFDM_BASIC_RATES_MASK   \
(IWL_RATE_6M_MASK         | \
IWL_RATE_12M_MASK         | \
IWL_RATE_24M_MASK)
#define IWL_OFDM_RATES_MASK         \
(IWL_OFDM_BASIC_RATES_MASK | \
IWL_RATE_9M_MASK          | \
IWL_RATE_18M_MASK         | \
IWL_RATE_36M_MASK         | \
IWL_RATE_48M_MASK         | \
IWL_RATE_54M_MASK)
#define IWL_BASIC_RATES_MASK         \
(IWL_OFDM_BASIC_RATES_MASK | \
IWL_CCK_BASIC_RATES_MASK)
#define IWL_RATES_MASK ((1 << IWL_RATE_COUNT) - 1)
#define IWL_INVALID_VALUE    -1
#define IWL_MIN_RSSI_VAL                 -100
#define IWL_MAX_RSSI_VAL                    0
#define IWL_LEGACY_FAILURE_LIMIT	160
#define IWL_LEGACY_SUCCESS_LIMIT	480
#define IWL_LEGACY_TABLE_COUNT		160
#define IWL_NONE_LEGACY_FAILURE_LIMIT	400
#define IWL_NONE_LEGACY_SUCCESS_LIMIT	4500
#define IWL_NONE_LEGACY_TABLE_COUNT	1500
#define IWL_RS_GOOD_RATIO		12800
#define IWL_RATE_SCALE_SWITCH		10880
#define IWL_RATE_HIGH_TH		10880
#define IWL_RATE_INCREASE_TH		6400
#define IWL_RATE_DECREASE_TH		1920
#define IWL_LEGACY_SWITCH_ANTENNA1      0
#define IWL_LEGACY_SWITCH_ANTENNA2      1
#define IWL_LEGACY_SWITCH_SISO          2
#define IWL_LEGACY_SWITCH_MIMO2_AB      3
#define IWL_LEGACY_SWITCH_MIMO2_AC      4
#define IWL_LEGACY_SWITCH_MIMO2_BC      5
#define IWL_LEGACY_SWITCH_MIMO3_ABC     6
#define IWL_SISO_SWITCH_ANTENNA1        0
#define IWL_SISO_SWITCH_ANTENNA2        1
#define IWL_SISO_SWITCH_MIMO2_AB        2
#define IWL_SISO_SWITCH_MIMO2_AC        3
#define IWL_SISO_SWITCH_MIMO2_BC        4
#define IWL_SISO_SWITCH_GI              5
#define IWL_SISO_SWITCH_MIMO3_ABC       6
#define IWL_MIMO2_SWITCH_ANTENNA1       0
#define IWL_MIMO2_SWITCH_ANTENNA2       1
#define IWL_MIMO2_SWITCH_SISO_A         2
#define IWL_MIMO2_SWITCH_SISO_B         3
#define IWL_MIMO2_SWITCH_SISO_C         4
#define IWL_MIMO2_SWITCH_GI             5
#define IWL_MIMO2_SWITCH_MIMO3_ABC      6
#define IWL_MIMO3_SWITCH_ANTENNA1       0
#define IWL_MIMO3_SWITCH_ANTENNA2       1
#define IWL_MIMO3_SWITCH_SISO_A         2
#define IWL_MIMO3_SWITCH_SISO_B         3
#define IWL_MIMO3_SWITCH_SISO_C         4
#define IWL_MIMO3_SWITCH_MIMO2_AB       5
#define IWL_MIMO3_SWITCH_MIMO2_AC       6
#define IWL_MIMO3_SWITCH_MIMO2_BC       7
#define IWL_MIMO3_SWITCH_GI             8
#define IWL_MAX_11N_MIMO3_SEARCH IWL_MIMO3_SWITCH_GI
#define IWL_MAX_SEARCH IWL_MIMO2_SWITCH_MIMO3_ABC
#define IWL_ACTION_LIMIT		3
#define LQ_SIZE		2
#define IWL_AGG_TPT_THREHOLD	0
#define IWL_AGG_LOAD_THRESHOLD	10
#define IWL_AGG_ALL_TID		0xff
#define TID_QUEUE_CELL_SPACING	50
#define TID_QUEUE_MAX_SIZE	20
#define TID_ROUND_VALUE		5
#define TID_MAX_LOAD_COUNT	8
#define TID_MAX_TIME_DIFF ((TID_QUEUE_MAX_SIZE - 1) * TID_QUEUE_CELL_SPACING)
#define TIME_WRAP_AROUND(x, y) (((y) > (x)) ? (y) - (x) : (0-(x)) + (y))
extern const struct iwl_rate_info iwl_rates[IWL_RATE_COUNT];
enum iwl_table_type ;
#define is_legacy(tbl) (((tbl) == LQ_G) || ((tbl) == LQ_A))
#define is_siso(tbl) ((tbl) == LQ_SISO)
#define is_mimo2(tbl) ((tbl) == LQ_MIMO2)
#define is_mimo3(tbl) ((tbl) == LQ_MIMO3)
#define is_mimo(tbl) (is_mimo2(tbl) || is_mimo3(tbl))
#define is_Ht(tbl) (is_siso(tbl) || is_mimo(tbl))
#define is_a_band(tbl) ((tbl) == LQ_A)
#define is_g_and(tbl) ((tbl) == LQ_G)
#define	ANT_NONE	0x0
#define	ANT_A		BIT(0)
#define	ANT_B		BIT(1)
#define	ANT_AB		(ANT_A | ANT_B)
#define ANT_C		BIT(2)
#define	ANT_AC		(ANT_A | ANT_C)
#define ANT_BC		(ANT_B | ANT_C)
#define ANT_ABC		(ANT_AB | ANT_C)
#define IWL_MAX_MCS_DISPLAY_SIZE	12
struct iwl_rate_mcs_info ;
struct iwl_rate_scale_data ;
struct iwl_scale_tbl_info ;
struct iwl_traffic_load ;
struct iwl_lq_sta ;
static inline u8 num_of_ant(u8 mask)
static inline u8 first_antenna(u8 mask)
extern void iwl_rs_rate_init(struct iwl_priv *priv,
struct ieee80211_sta *sta, u8 sta_id);
extern int iwlagn_rate_control_register(void);
extern void iwlagn_rate_control_unregister(void);
