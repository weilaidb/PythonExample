#define AR_BufLen           0x00000fff
static void ar9002_hw_rx_enable(struct ath_hw *ah)
static void ar9002_hw_set_desc_link(void *ds, u32 ds_link)
static void ar9002_hw_get_desc_link(void *ds, u32 **ds_link)
static bool ar9002_hw_get_isr(struct ath_hw *ah, enum ath9k_int *masked)
static void ar9002_hw_fill_txdesc(struct ath_hw *ah, void *ds, u32 seglen,
bool is_firstseg, bool is_lastseg,
const void *ds0, dma_addr_t buf_addr,
unsigned int qcu)
static int ar9002_hw_proc_txdesc(struct ath_hw *ah, void *ds,
struct ath_tx_status *ts)
static void ar9002_hw_set11n_txdesc(struct ath_hw *ah, void *ds,
u32 pktLen, enum ath9k_pkt_type type,
u32 txPower, u32 keyIx,
enum ath9k_key_type keyType, u32 flags)
static void ar9002_hw_set_clrdmask(struct ath_hw *ah, void *ds, bool val)
static void ar9002_hw_set11n_ratescenario(struct ath_hw *ah, void *ds,
void *lastds,
u32 durUpdateEn, u32 rtsctsRate,
u32 rtsctsDuration,
struct ath9k_11n_rate_series series[],
u32 nseries, u32 flags)
static void ar9002_hw_set11n_aggr_first(struct ath_hw *ah, void *ds,
u32 aggrLen)
static void ar9002_hw_set11n_aggr_middle(struct ath_hw *ah, void *ds,
u32 numDelims)
static void ar9002_hw_set11n_aggr_last(struct ath_hw *ah, void *ds)
static void ar9002_hw_clr11n_aggr(struct ath_hw *ah, void *ds)
void ath9k_hw_setuprxdesc(struct ath_hw *ah, struct ath_desc *ds,
u32 size, u32 flags)
EXPORT_SYMBOL(ath9k_hw_setuprxdesc);
void ar9002_hw_attach_mac_ops(struct ath_hw *ah)
