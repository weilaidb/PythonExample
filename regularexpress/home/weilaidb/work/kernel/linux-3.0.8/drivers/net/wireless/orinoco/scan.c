#define ZERO_DBM_OFFSET 0x95
#define MAX_SIGNAL_LEVEL 0x8A
#define MIN_SIGNAL_LEVEL 0x2F
#define SIGNAL_TO_DBM(x)					\
(clamp_t(s32, (x), MIN_SIGNAL_LEVEL, MAX_SIGNAL_LEVEL)	\
- ZERO_DBM_OFFSET)
#define SIGNAL_TO_MBM(x) (SIGNAL_TO_DBM(x) * 100)
static int symbol_build_supp_rates(u8 *buf, const __le16 *rates)
static int prism_build_supp_rates(u8 *buf, const u8 *rates)
static void orinoco_add_hostscan_result(struct orinoco_private *priv,
const union hermes_scan_info *bss)
void orinoco_add_extscan_result(struct orinoco_private *priv,
struct agere_ext_scan_info *bss,
size_t len)
void orinoco_add_hostscan_results(struct orinoco_private *priv,
unsigned char *buf,
size_t len)
void orinoco_scan_done(struct orinoco_private *priv, bool abort)
