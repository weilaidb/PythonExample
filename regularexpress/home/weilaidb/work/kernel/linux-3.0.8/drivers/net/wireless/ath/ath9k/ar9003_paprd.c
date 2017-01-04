void ar9003_paprd_enable(struct ath_hw *ah, bool val)
EXPORT_SYMBOL(ar9003_paprd_enable);
static int ar9003_get_training_power_2g(struct ath_hw *ah)
static int ar9003_get_training_power_5g(struct ath_hw *ah)
static int ar9003_paprd_setup_single_table(struct ath_hw *ah)
static void ar9003_paprd_get_gain_table(struct ath_hw *ah)
static unsigned int ar9003_get_desired_gain(struct ath_hw *ah, int chain,
int target_power)
static void ar9003_tx_force_gain(struct ath_hw *ah, unsigned int gain_index)
static inline int find_expn(int num)
static inline int find_proper_scale(int expn, int N)
#define NUM_BIN 23
static bool create_pa_curve(u32 *data_L, u32 *data_U, u32 *pa_table, u16 *gain)
void ar9003_paprd_populate_single_table(struct ath_hw *ah,
struct ath9k_hw_cal_data *caldata,
int chain)
EXPORT_SYMBOL(ar9003_paprd_populate_single_table);
int ar9003_paprd_setup_gain_table(struct ath_hw *ah, int chain)
EXPORT_SYMBOL(ar9003_paprd_setup_gain_table);
int ar9003_paprd_create_curve(struct ath_hw *ah,
struct ath9k_hw_cal_data *caldata, int chain)
EXPORT_SYMBOL(ar9003_paprd_create_curve);
int ar9003_paprd_init_table(struct ath_hw *ah)
EXPORT_SYMBOL(ar9003_paprd_init_table);
bool ar9003_paprd_is_done(struct ath_hw *ah)
EXPORT_SYMBOL(ar9003_paprd_is_done);
