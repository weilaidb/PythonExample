#define IS_AL2230S(chip) ((chip)->al2230s_bit || (chip)->rf.type == AL2230S_RF)
static const u32 zd1211_al2230_table[][3] = ;
static const u32 zd1211b_al2230_table[][3] = ;
static const struct zd_ioreq16 zd1211b_ioreqs_shared_1[] = ;
static const struct zd_ioreq16 ioreqs_init_al2230s[] = ;
static int zd1211b_al2230_finalize_rf(struct zd_chip *chip)
static int zd1211_al2230_init_hw(struct zd_rf *rf)
static int zd1211b_al2230_init_hw(struct zd_rf *rf)
static int zd1211_al2230_set_channel(struct zd_rf *rf, u8 channel)
static int zd1211b_al2230_set_channel(struct zd_rf *rf, u8 channel)
static int zd1211_al2230_switch_radio_on(struct zd_rf *rf)
static int zd1211b_al2230_switch_radio_on(struct zd_rf *rf)
static int al2230_switch_radio_off(struct zd_rf *rf)
int zd_rf_init_al2230(struct zd_rf *rf)
