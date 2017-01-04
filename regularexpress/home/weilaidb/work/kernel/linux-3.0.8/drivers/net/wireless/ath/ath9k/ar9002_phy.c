static int ar9002_hw_set_channel(struct ath_hw *ah, struct ath9k_channel *chan)
static void ar9002_hw_spur_mitigate(struct ath_hw *ah,
struct ath9k_channel *chan)
static void ar9002_olc_init(struct ath_hw *ah)
static u32 ar9002_hw_compute_pll_control(struct ath_hw *ah,
struct ath9k_channel *chan)
static void ar9002_hw_do_getnf(struct ath_hw *ah,
int16_t nfarray[NUM_NF_READINGS])
static void ar9002_hw_set_nf_limits(struct ath_hw *ah)
static void ar9002_hw_antdiv_comb_conf_get(struct ath_hw *ah,
struct ath_hw_antcomb_conf *antconf)
static void ar9002_hw_antdiv_comb_conf_set(struct ath_hw *ah,
struct ath_hw_antcomb_conf *antconf)
void ar9002_hw_attach_phy_ops(struct ath_hw *ah)
