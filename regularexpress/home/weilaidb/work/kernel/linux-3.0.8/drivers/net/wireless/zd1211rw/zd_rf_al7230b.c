static const u32 chan_rv[][2] = ;
static const u32 std_rv[] = ;
static const u32 rv_init1[] = ;
static const u32 rv_init2[] = ;
static const struct zd_ioreq16 ioreqs_sw[] = ;
static int zd1211b_al7230b_finalize(struct zd_chip *chip)
static int zd1211_al7230b_init_hw(struct zd_rf *rf)
static int zd1211b_al7230b_init_hw(struct zd_rf *rf)
static int zd1211_al7230b_set_channel(struct zd_rf *rf, u8 channel)
static int zd1211b_al7230b_set_channel(struct zd_rf *rf, u8 channel)
static int zd1211_al7230b_switch_radio_on(struct zd_rf *rf)
static int zd1211b_al7230b_switch_radio_on(struct zd_rf *rf)
static int al7230b_switch_radio_off(struct zd_rf *rf)
static int zd1211b_al7230b_patch_6m(struct zd_rf *rf, u8 channel)
int zd_rf_init_al7230b(struct zd_rf *rf)
