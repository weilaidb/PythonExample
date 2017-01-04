#define DEFAULT_RSSI		-128
#define AVG_SAMPLES	8
#define AVG_FACTOR	1000
#define MOVING_AVERAGE(__avg, __val) \
()
static int rt2x00link_antenna_get_link_rssi(struct rt2x00_dev *rt2x00dev)
static int rt2x00link_antenna_get_rssi_history(struct rt2x00_dev *rt2x00dev)
static void rt2x00link_antenna_update_rssi_history(struct rt2x00_dev *rt2x00dev,
int rssi)
static void rt2x00link_antenna_reset(struct rt2x00_dev *rt2x00dev)
static void rt2x00lib_antenna_diversity_sample(struct rt2x00_dev *rt2x00dev)
static void rt2x00lib_antenna_diversity_eval(struct rt2x00_dev *rt2x00dev)
static bool rt2x00lib_antenna_diversity(struct rt2x00_dev *rt2x00dev)
void rt2x00link_update_stats(struct rt2x00_dev *rt2x00dev,
struct sk_buff *skb,
struct rxdone_entry_desc *rxdesc)
void rt2x00link_start_tuner(struct rt2x00_dev *rt2x00dev)
void rt2x00link_stop_tuner(struct rt2x00_dev *rt2x00dev)
void rt2x00link_reset_tuner(struct rt2x00_dev *rt2x00dev, bool antenna)
static void rt2x00link_reset_qual(struct rt2x00_dev *rt2x00dev)
static void rt2x00link_tuner(struct work_struct *work)
void rt2x00link_start_watchdog(struct rt2x00_dev *rt2x00dev)
void rt2x00link_stop_watchdog(struct rt2x00_dev *rt2x00dev)
static void rt2x00link_watchdog(struct work_struct *work)
void rt2x00link_start_agc(struct rt2x00_dev *rt2x00dev)
void rt2x00link_stop_agc(struct rt2x00_dev *rt2x00dev)
static void rt2x00link_agc(struct work_struct *work)
void rt2x00link_register(struct rt2x00_dev *rt2x00dev)
