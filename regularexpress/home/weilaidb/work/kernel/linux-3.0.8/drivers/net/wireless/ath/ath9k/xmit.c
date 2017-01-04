#define BITS_PER_BYTE           8
#define OFDM_PLCP_BITS          22
#define HT_RC_2_STREAMS(_rc)    ((((_rc) & 0x78) >> 3) + 1)
#define L_STF                   8
#define L_LTF                   8
#define L_SIG                   4
#define HT_SIG                  8
#define HT_STF                  4
#define HT_LTF(_ns)             (4 * (_ns))
#define SYMBOL_TIME(_ns)        ((_ns) << 2)
#define SYMBOL_TIME_HALFGI(_ns) (((_ns) * 18 + 4) / 5)
#define NUM_SYMBOLS_PER_USEC(_usec) (_usec >> 2)
#define NUM_SYMBOLS_PER_USEC_HALFGI(_usec) (((_usec*5)-4)/18)
static u16 bits_per_symbol[][2] = ;
#define IS_HT_RATE(_rate)     ((_rate) & 0x80)
static void ath_tx_send_normal(struct ath_softc *sc, struct ath_txq *txq,
struct ath_atx_tid *tid,
struct list_head *bf_head);
static void ath_tx_complete_buf(struct ath_softc *sc, struct ath_buf *bf,
struct ath_txq *txq, struct list_head *bf_q,
struct ath_tx_status *ts, int txok, int sendbar);
static void ath_tx_txqaddbuf(struct ath_softc *sc, struct ath_txq *txq,
struct list_head *head);
static void ath_buf_set_rate(struct ath_softc *sc, struct ath_buf *bf, int len);
static void ath_tx_rc_status(struct ath_softc *sc, struct ath_buf *bf,
struct ath_tx_status *ts, int nframes, int nbad,
int txok, bool update_rc);
static void ath_tx_update_baw(struct ath_softc *sc, struct ath_atx_tid *tid,
int seqno);
enum ;
static int ath_max_4ms_framelen[4][32] = ;
static void ath_tx_queue_tid(struct ath_txq *txq, struct ath_atx_tid *tid)
static void ath_tx_resume_tid(struct ath_softc *sc, struct ath_atx_tid *tid)
static struct ath_frame_info *get_frame_info(struct sk_buff *skb)
static void ath_tx_flush_tid(struct ath_softc *sc, struct ath_atx_tid *tid)
static void ath_tx_update_baw(struct ath_softc *sc, struct ath_atx_tid *tid,
int seqno)
static void ath_tx_addto_baw(struct ath_softc *sc, struct ath_atx_tid *tid,
u16 seqno)
static void ath_tid_drain(struct ath_softc *sc, struct ath_txq *txq,
struct ath_atx_tid *tid)
static void ath_tx_set_retry(struct ath_softc *sc, struct ath_txq *txq,
struct sk_buff *skb)
static struct ath_buf *ath_tx_get_buffer(struct ath_softc *sc)
static void ath_tx_return_buffer(struct ath_softc *sc, struct ath_buf *bf)
static struct ath_buf* ath_clone_txbuf(struct ath_softc *sc, struct ath_buf *bf)
static void ath_tx_count_frames(struct ath_softc *sc, struct ath_buf *bf,
struct ath_tx_status *ts, int txok,
int *nframes, int *nbad)
static void ath_tx_complete_aggr(struct ath_softc *sc, struct ath_txq *txq,
struct ath_buf *bf, struct list_head *bf_q,
struct ath_tx_status *ts, int txok, bool retry)
static u32 ath_lookup_rate(struct ath_softc *sc, struct ath_buf *bf,
struct ath_atx_tid *tid)
static int ath_compute_num_delims(struct ath_softc *sc, struct ath_atx_tid *tid,
struct ath_buf *bf, u16 frmlen)
static enum ATH_AGGR_STATUS ath_tx_form_aggr(struct ath_softc *sc,
struct ath_txq *txq,
struct ath_atx_tid *tid,
struct list_head *bf_q,
int *aggr_len)
static void ath_tx_sched_aggr(struct ath_softc *sc, struct ath_txq *txq,
struct ath_atx_tid *tid)
int ath_tx_aggr_start(struct ath_softc *sc, struct ieee80211_sta *sta,
u16 tid, u16 *ssn)
void ath_tx_aggr_stop(struct ath_softc *sc, struct ieee80211_sta *sta, u16 tid)
bool ath_tx_aggr_sleep(struct ath_softc *sc, struct ath_node *an)
void ath_tx_aggr_wakeup(struct ath_softc *sc, struct ath_node *an)
void ath_tx_aggr_resume(struct ath_softc *sc, struct ieee80211_sta *sta, u16 tid)
static void ath_txq_drain_pending_buffers(struct ath_softc *sc,
struct ath_txq *txq)
struct ath_txq *ath_txq_setup(struct ath_softc *sc, int qtype, int subtype)
int ath_txq_update(struct ath_softc *sc, int qnum,
struct ath9k_tx_queue_info *qinfo)
int ath_cabq_update(struct ath_softc *sc)
static bool bf_is_ampdu_not_probing(struct ath_buf *bf)
void ath_draintxq(struct ath_softc *sc, struct ath_txq *txq, bool retry_tx)
bool ath_drain_all_txq(struct ath_softc *sc, bool retry_tx)
void ath_tx_cleanupq(struct ath_softc *sc, struct ath_txq *txq)
void ath_txq_schedule(struct ath_softc *sc, struct ath_txq *txq)
static void ath_tx_txqaddbuf(struct ath_softc *sc, struct ath_txq *txq,
struct list_head *head)
static void ath_tx_send_ampdu(struct ath_softc *sc, struct ath_atx_tid *tid,
struct ath_buf *bf, struct ath_tx_control *txctl)
static void ath_tx_send_normal(struct ath_softc *sc, struct ath_txq *txq,
struct ath_atx_tid *tid,
struct list_head *bf_head)
static enum ath9k_pkt_type get_hw_packet_type(struct sk_buff *skb)
static void setup_frame_info(struct ieee80211_hw *hw, struct sk_buff *skb,
int framelen)
static int setup_tx_flags(struct sk_buff *skb)
static u32 ath_pkt_duration(struct ath_softc *sc, u8 rix, int pktlen,
int width, int half_gi, bool shortPreamble)
u8 ath_txchainmask_reduction(struct ath_softc *sc, u8 chainmask, u32 rate)
static void ath_buf_set_rate(struct ath_softc *sc, struct ath_buf *bf, int len)
static struct ath_buf *ath_tx_setup_buffer(struct ieee80211_hw *hw,
struct ath_txq *txq,
struct sk_buff *skb)
static void ath_tx_start_dma(struct ath_softc *sc, struct ath_buf *bf,
struct ath_tx_control *txctl)
int ath_tx_start(struct ieee80211_hw *hw, struct sk_buff *skb,
struct ath_tx_control *txctl)
static void ath_tx_complete(struct ath_softc *sc, struct sk_buff *skb,
int tx_flags, int ftype, struct ath_txq *txq)
static void ath_tx_complete_buf(struct ath_softc *sc, struct ath_buf *bf,
struct ath_txq *txq, struct list_head *bf_q,
struct ath_tx_status *ts, int txok, int sendbar)
static void ath_tx_rc_status(struct ath_softc *sc, struct ath_buf *bf,
struct ath_tx_status *ts, int nframes, int nbad,
int txok, bool update_rc)
static void ath_tx_processq(struct ath_softc *sc, struct ath_txq *txq)
static void ath_tx_complete_poll_work(struct work_struct *work)
void ath_tx_tasklet(struct ath_softc *sc)
void ath_tx_edma_tasklet(struct ath_softc *sc)
static int ath_txstatus_setup(struct ath_softc *sc, int size)
static int ath_tx_edma_init(struct ath_softc *sc)
static void ath_tx_edma_cleanup(struct ath_softc *sc)
int ath_tx_init(struct ath_softc *sc, int nbufs)
void ath_tx_cleanup(struct ath_softc *sc)
void ath_tx_node_init(struct ath_softc *sc, struct ath_node *an)
void ath_tx_node_cleanup(struct ath_softc *sc, struct ath_node *an)
