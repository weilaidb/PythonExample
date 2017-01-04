static void ar9003_hw_rx_enable(struct ath_hw *hw)
static u16 ar9003_calc_ptr_chksum(struct ar9003_txc *ads)
static void ar9003_hw_set_desc_link(void *ds, u32 ds_link)
static void ar9003_hw_get_desc_link(void *ds, u32 **ds_link)
static bool ar9003_hw_get_isr(struct ath_hw *ah, enum ath9k_int *masked)
static void ar9003_hw_fill_txdesc(struct ath_hw *ah, void *ds, u32 seglen,
bool is_firstseg, bool is_lastseg,
const void *ds0, dma_addr_t buf_addr,
unsigned int qcu)
static int ar9003_hw_proc_txdesc(struct ath_hw *ah, void *ds,
struct ath_tx_status *ts)
static void ar9003_hw_set11n_txdesc(struct ath_hw *ah, void *ds,
u32 pktlen, enum ath9k_pkt_type type, u32 txpower,
u32 keyIx, enum ath9k_key_type keyType, u32 flags)
static void ar9003_hw_set_clrdmask(struct ath_hw *ah, void *ds, bool val)
static void ar9003_hw_set11n_ratescenario(struct ath_hw *ah, void *ds,
void *lastds,
u32 durUpdateEn, u32 rtsctsRate,
u32 rtsctsDuration,
struct ath9k_11n_rate_series series[],
u32 nseries, u32 flags)
static void ar9003_hw_set11n_aggr_first(struct ath_hw *ah, void *ds,
u32 aggrLen)
static void ar9003_hw_set11n_aggr_middle(struct ath_hw *ah, void *ds,
u32 numDelims)
static void ar9003_hw_set11n_aggr_last(struct ath_hw *ah, void *ds)
static void ar9003_hw_clr11n_aggr(struct ath_hw *ah, void *ds)
void ar9003_hw_set_paprd_txdesc(struct ath_hw *ah, void *ds, u8 chains)
EXPORT_SYMBOL(ar9003_hw_set_paprd_txdesc);
void ar9003_hw_attach_mac_ops(struct ath_hw *hw)
void ath9k_hw_set_rx_bufsize(struct ath_hw *ah, u16 buf_size)
EXPORT_SYMBOL(ath9k_hw_set_rx_bufsize);
void ath9k_hw_addrxbuf_edma(struct ath_hw *ah, u32 rxdp,
enum ath9k_rx_qtype qtype)
EXPORT_SYMBOL(ath9k_hw_addrxbuf_edma);
int ath9k_hw_process_rxdesc_edma(struct ath_hw *ah, struct ath_rx_status *rxs,
void *buf_addr)
EXPORT_SYMBOL(ath9k_hw_process_rxdesc_edma);
void ath9k_hw_reset_txstatus_ring(struct ath_hw *ah)
void ath9k_hw_setup_statusring(struct ath_hw *ah, void *ts_start,
u32 ts_paddr_start,
u8 size)
EXPORT_SYMBOL(ath9k_hw_setup_statusring);
