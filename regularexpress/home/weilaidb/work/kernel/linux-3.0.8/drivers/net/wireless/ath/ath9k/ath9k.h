#define ATH9K_H
struct ath_node;
#define	ito64(x) (sizeof(x) == 1) ?			\
(((unsigned long long int)(x)) & (0xff)) :	\
(sizeof(x) == 2) ?				\
(((unsigned long long int)(x)) & 0xffff) :	\
((sizeof(x) == 4) ?				\
(((unsigned long long int)(x)) & 0xffffffff) : \
(unsigned long long int)(x))
#define INCR(_l, _sz)   do  while (0)
#define DECR(_l,  _sz)  do  while (0)
#define A_MAX(a, b) ((a) > (b) ? (a) : (b))
#define TSF_TO_TU(_h,_l) \
((((u32)(_h)) << 22) | (((u32)(_l)) >> 10))
#define	ATH_TXQ_SETUP(sc, i)        ((sc)->tx.txqsetup & (1<<i))
struct ath_config ;
#define ATH_TXBUF_RESET(_bf) do  while (0)
#define ATH_RXBUF_RESET(_bf) do  while (0)
enum buffer_type ;
#define bf_isampdu(bf)		(bf->bf_state.bf_type & BUF_AMPDU)
#define bf_isaggr(bf)		(bf->bf_state.bf_type & BUF_AGGR)
#define bf_isxretried(bf)	(bf->bf_state.bf_type & BUF_XRETRY)
#define ATH_TXSTATUS_RING_SIZE 64
struct ath_descdma ;
int ath_descdma_setup(struct ath_softc *sc, struct ath_descdma *dd,
struct list_head *head, const char *name,
int nbuf, int ndesc, bool is_tx);
void ath_descdma_cleanup(struct ath_softc *sc, struct ath_descdma *dd,
struct list_head *head);
#define ATH_RXBUF               512
#define ATH_TXBUF               512
#define ATH_TXBUF_RESERVE       5
#define ATH_MAX_QDEPTH          (ATH_TXBUF / 4 - ATH_TXBUF_RESERVE)
#define ATH_TXMAXTRY            13
#define TID_TO_WME_AC(_tid)				\
((((_tid) == 0) || ((_tid) == 3)) ? WME_AC_BE :	\
(((_tid) == 1) || ((_tid) == 2)) ? WME_AC_BK :	\
(((_tid) == 4) || ((_tid) == 5)) ? WME_AC_VI :	\
WME_AC_VO)
#define ATH_AGGR_DELIM_SZ          4
#define ATH_AGGR_MINPLEN           256
#define ATH_AGGR_ENCRYPTDELIM      10
#define ATH_AGGR_MIN_QDEPTH        2
#define ATH_AMPDU_SUBFRAME_DEFAULT 32
#define IEEE80211_SEQ_SEQ_SHIFT    4
#define IEEE80211_SEQ_MAX          4096
#define IEEE80211_WEP_IVLEN        3
#define IEEE80211_WEP_KIDLEN       1
#define IEEE80211_WEP_CRCLEN       4
#define IEEE80211_MAX_MPDU_LEN     (3840 + FCS_LEN +		\
(IEEE80211_WEP_IVLEN +	\
IEEE80211_WEP_KIDLEN +	\
IEEE80211_WEP_CRCLEN))
#define ATH_BA_ISSET(_bm, _n)  (((_n) < (WME_BA_BMP_SIZE)) &&		\
((_bm)[(_n) >> 5] & (1 << ((_n) & 31))))
#define ATH_BA_INDEX(_st, _seq) (((_seq) - (_st)) & (IEEE80211_SEQ_MAX - 1))
#define ATH_AGGR_GET_NDELIM(_len)					\
(((_len) >= ATH_AGGR_MINPLEN) ? 0 :                             \
DIV_ROUND_UP(ATH_AGGR_MINPLEN - (_len), ATH_AGGR_DELIM_SZ))
#define BAW_WITHIN(_start, _bawsz, _seqno) \
((((_seqno) - (_start)) & 4095) < (_bawsz))
#define ATH_AN_2_TID(_an, _tidno)  (&(_an)->tid[(_tidno)])
#define ATH_TX_COMPLETE_POLL_INT	1000
enum ATH_AGGR_STATUS ;
#define ATH_TXFIFO_DEPTH 8
struct ath_txq ;
struct ath_atx_ac ;
struct ath_frame_info ;
struct ath_buf_state ;
struct ath_buf ;
struct ath_atx_tid ;
struct ath_node ;
#define AGGR_CLEANUP         BIT(1)
#define AGGR_ADDBA_COMPLETE  BIT(2)
#define AGGR_ADDBA_PROGRESS  BIT(3)
struct ath_tx_control ;
#define ATH_TX_ERROR        0x01
#define ATH_TX_XRETRY       0x02
#define ATH_TX_BAR          0x04
struct ath_tx ;
struct ath_rx_edma ;
struct ath_rx ;
int ath_startrecv(struct ath_softc *sc);
bool ath_stoprecv(struct ath_softc *sc);
void ath_flushrecv(struct ath_softc *sc);
u32 ath_calcrxfilter(struct ath_softc *sc);
int ath_rx_init(struct ath_softc *sc, int nbufs);
void ath_rx_cleanup(struct ath_softc *sc);
int ath_rx_tasklet(struct ath_softc *sc, int flush, bool hp);
struct ath_txq *ath_txq_setup(struct ath_softc *sc, int qtype, int subtype);
void ath_tx_cleanupq(struct ath_softc *sc, struct ath_txq *txq);
bool ath_drain_all_txq(struct ath_softc *sc, bool retry_tx);
void ath_draintxq(struct ath_softc *sc,
struct ath_txq *txq, bool retry_tx);
void ath_tx_node_init(struct ath_softc *sc, struct ath_node *an);
void ath_tx_node_cleanup(struct ath_softc *sc, struct ath_node *an);
void ath_txq_schedule(struct ath_softc *sc, struct ath_txq *txq);
int ath_tx_init(struct ath_softc *sc, int nbufs);
void ath_tx_cleanup(struct ath_softc *sc);
int ath_txq_update(struct ath_softc *sc, int qnum,
struct ath9k_tx_queue_info *q);
int ath_tx_start(struct ieee80211_hw *hw, struct sk_buff *skb,
struct ath_tx_control *txctl);
void ath_tx_tasklet(struct ath_softc *sc);
void ath_tx_edma_tasklet(struct ath_softc *sc);
int ath_tx_aggr_start(struct ath_softc *sc, struct ieee80211_sta *sta,
u16 tid, u16 *ssn);
void ath_tx_aggr_stop(struct ath_softc *sc, struct ieee80211_sta *sta, u16 tid);
void ath_tx_aggr_resume(struct ath_softc *sc, struct ieee80211_sta *sta, u16 tid);
void ath_tx_aggr_wakeup(struct ath_softc *sc, struct ath_node *an);
bool ath_tx_aggr_sleep(struct ath_softc *sc, struct ath_node *an);
struct ath_vif ;
#define BSTUCK_THRESH           	9
#define	ATH_BCBUF               	4
#define ATH_DEFAULT_BINTVAL     	100
#define ATH_DEFAULT_BMISS_LIMIT 	10
#define IEEE80211_MS_TO_TU(x)           (((x) * 1000) / 1024)
struct ath_beacon_config ;
struct ath_beacon ;
void ath_beacon_tasklet(unsigned long data);
void ath_beacon_config(struct ath_softc *sc, struct ieee80211_vif *vif);
int ath_beacon_alloc(struct ath_softc *sc, struct ieee80211_vif *vif);
void ath_beacon_return(struct ath_softc *sc, struct ath_vif *avp);
int ath_beaconq_config(struct ath_softc *sc);
void ath_set_beacon(struct ath_softc *sc);
void ath9k_set_beaconing_status(struct ath_softc *sc, bool status);
#define ATH_STA_SHORT_CALINTERVAL 1000
#define ATH_AP_SHORT_CALINTERVAL  100
#define ATH_ANI_POLLINTERVAL_OLD  100
#define ATH_ANI_POLLINTERVAL_NEW  1000
#define ATH_LONG_CALINTERVAL_INT  1000
#define ATH_LONG_CALINTERVAL      30000
#define ATH_RESTART_CALINTERVAL   1200000
#define ATH_PAPRD_TIMEOUT	100
void ath_hw_check(struct work_struct *work);
void ath_hw_pll_work(struct work_struct *work);
void ath_paprd_calibrate(struct work_struct *work);
void ath_ani_calibrate(unsigned long data);
struct ath_btcoex ;
int ath_init_btcoex_timer(struct ath_softc *sc);
void ath9k_btcoex_timer_resume(struct ath_softc *sc);
void ath9k_btcoex_timer_pause(struct ath_softc *sc);
#define ATH_LED_PIN_DEF 		1
#define ATH_LED_PIN_9287		8
#define ATH_LED_PIN_9300		10
#define ATH_LED_PIN_9485		6
void ath_init_leds(struct ath_softc *sc);
void ath_deinit_leds(struct ath_softc *sc);
static inline void ath_init_leds(struct ath_softc *sc)
static inline void ath_deinit_leds(struct ath_softc *sc)
#define ATH_ANT_RX_CURRENT_SHIFT 4
#define ATH_ANT_RX_MAIN_SHIFT 2
#define ATH_ANT_RX_MASK 0x3
#define ATH_ANT_DIV_COMB_SHORT_SCAN_INTR 50
#define ATH_ANT_DIV_COMB_SHORT_SCAN_PKTCOUNT 0x100
#define ATH_ANT_DIV_COMB_MAX_PKTCOUNT 0x200
#define ATH_ANT_DIV_COMB_INIT_COUNT 95
#define ATH_ANT_DIV_COMB_MAX_COUNT 100
#define ATH_ANT_DIV_COMB_ALT_ANT_RATIO 30
#define ATH_ANT_DIV_COMB_ALT_ANT_RATIO2 20
#define ATH_ANT_DIV_COMB_LNA1_LNA2_SWITCH_DELTA -1
#define ATH_ANT_DIV_COMB_LNA1_DELTA_HI -4
#define ATH_ANT_DIV_COMB_LNA1_DELTA_MID -2
#define ATH_ANT_DIV_COMB_LNA1_DELTA_LOW 2
enum ath9k_ant_div_comb_lna_conf ;
struct ath_ant_comb ;
#define DEFAULT_CACHELINE       32
#define ATH_REGCLASSIDS_MAX     10
#define ATH_CABQ_READY_TIME     80
#define ATH_MAX_SW_RETRIES      10
#define ATH_CHAN_MAX            255
#define ATH_TXPOWER_MAX         100
#define ATH_RATE_DUMMY_MARKER   0
#define SC_OP_INVALID                BIT(0)
#define SC_OP_BEACONS                BIT(1)
#define SC_OP_RXAGGR                 BIT(2)
#define SC_OP_TXAGGR                 BIT(3)
#define SC_OP_OFFCHANNEL             BIT(4)
#define SC_OP_PREAMBLE_SHORT         BIT(5)
#define SC_OP_PROTECT_ENABLE         BIT(6)
#define SC_OP_RXFLUSH                BIT(7)
#define SC_OP_LED_ASSOCIATED         BIT(8)
#define SC_OP_LED_ON                 BIT(9)
#define SC_OP_TSF_RESET              BIT(11)
#define SC_OP_BT_PRIORITY_DETECTED   BIT(12)
#define SC_OP_BT_SCAN		     BIT(13)
#define SC_OP_ANI_RUN		     BIT(14)
#define SC_OP_ENABLE_APM	     BIT(15)
#define SC_OP_PRIM_STA_VIF	     BIT(16)
#define PS_WAIT_FOR_BEACON        BIT(0)
#define PS_WAIT_FOR_CAB           BIT(1)
#define PS_WAIT_FOR_PSPOLL_DATA   BIT(2)
#define PS_WAIT_FOR_TX_ACK        BIT(3)
#define PS_BEACON_SYNC            BIT(4)
#define PS_TSFOOR_SYNC            BIT(5)
struct ath_rate_table;
struct ath9k_vif_iter_data ;
struct ath_softc ;
void ath9k_tasklet(unsigned long data);
int ath_reset(struct ath_softc *sc, bool retry_tx);
int ath_cabq_update(struct ath_softc *);
static inline void ath_read_cachesize(struct ath_common *common, int *csz)
extern struct ieee80211_ops ath9k_ops;
extern int ath9k_modparam_nohwcrypt;
extern int led_blink;
extern bool is_ath9k_unloaded;
irqreturn_t ath_isr(int irq, void *dev);
void ath9k_init_crypto(struct ath_softc *sc);
int ath9k_init_device(u16 devid, struct ath_softc *sc, u16 subsysid,
const struct ath_bus_ops *bus_ops);
void ath9k_deinit_device(struct ath_softc *sc);
void ath9k_set_hw_capab(struct ath_softc *sc, struct ieee80211_hw *hw);
int ath_set_channel(struct ath_softc *sc, struct ieee80211_hw *hw,
struct ath9k_channel *hchan);
void ath_radio_enable(struct ath_softc *sc, struct ieee80211_hw *hw);
void ath_radio_disable(struct ath_softc *sc, struct ieee80211_hw *hw);
bool ath9k_setpower(struct ath_softc *sc, enum ath9k_power_mode mode);
bool ath9k_uses_beacons(int type);
int ath_pci_init(void);
void ath_pci_exit(void);
static inline int ath_pci_init(void) ;
static inline void ath_pci_exit(void) ;
int ath_ahb_init(void);
void ath_ahb_exit(void);
static inline int ath_ahb_init(void) ;
static inline void ath_ahb_exit(void) ;
void ath9k_ps_wakeup(struct ath_softc *sc);
void ath9k_ps_restore(struct ath_softc *sc);
u8 ath_txchainmask_reduction(struct ath_softc *sc, u8 chainmask, u32 rate);
void ath_start_rfkill_poll(struct ath_softc *sc);
extern void ath9k_rfkill_poll_state(struct ieee80211_hw *hw);
void ath9k_calculate_iter_data(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ath9k_vif_iter_data *iter_data);
