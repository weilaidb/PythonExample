#define AMPDU_MAX_MPDU		32
#define AMPDU_NUM_MPDU_LEGACY	16
#define AMPDU_TX_BA_MAX_WSIZE	64
#define AMPDU_TX_BA_DEF_WSIZE	64
#define AMPDU_RX_BA_DEF_WSIZE   64
#define AMPDU_RX_BA_MAX_WSIZE   64
#define	AMPDU_MAX_DUR		5
#define AMPDU_DEF_RETRY_LIMIT	5
#define AMPDU_DEF_RR_RETRY_LIMIT	2
#define AMPDU_DEF_TXPKT_WEIGHT	2
#define AMPDU_DEF_FFPLD_RSVD	2048
#define AMPDU_INI_FREE		10
#define	AMPDU_SCB_MAX_RELEASE	20
#define NUM_FFPLD_FIFO 4
#define FFPLD_TX_MAX_UNFL   200
#define FFPLD_MPDU_SIZE 1800
#define FFPLD_MAX_MCS 23
#define FFPLD_PLD_INCR 1000
#define FFPLD_MAX_AMPDU_CNT 5000
#define TX_SEQ_TO_INDEX(seq) ((seq) % AMPDU_TX_BA_MAX_WSIZE)
#define AMPDU_MAX_MPDU_OVERHEAD (FCS_LEN + DOT11_ICV_AES_LEN +\
AMPDU_DELIMITER_LEN + 3\
+ DOT11_A4_HDR_LEN + DOT11_QOS_LEN + DOT11_IV_MAX_LEN)
typedef struct wlc_fifo_info  wlc_fifo_info_t;
struct ampdu_info ;
struct cb_del_ampdu_pars ;
#define AMPDU_CLEANUPFLAG_RX   (0x1)
#define AMPDU_CLEANUPFLAG_TX   (0x2)
#define SCB_AMPDU_CUBBY(ampdu, scb) (&(scb->scb_ampdu))
#define SCB_AMPDU_INI(scb_ampdu, tid) (&(scb_ampdu->ini[tid]))
static void wlc_ffpld_init(struct ampdu_info *ampdu);
static int wlc_ffpld_check_txfunfl(struct wlc_info *wlc, int f);
static void wlc_ffpld_calc_mcs2ampdu_table(struct ampdu_info *ampdu, int f);
static scb_ampdu_tid_ini_t *wlc_ampdu_init_tid_ini(struct ampdu_info *ampdu,
scb_ampdu_t *scb_ampdu,
u8 tid, bool override);
static void ampdu_update_max_txlen(struct ampdu_info *ampdu, u8 dur);
static void scb_ampdu_update_config(struct ampdu_info *ampdu, struct scb *scb);
static void scb_ampdu_update_config_all(struct ampdu_info *ampdu);
#define wlc_ampdu_txflowcontrol(a, b, c)	do  while (0)
static void wlc_ampdu_dotxstatus_complete(struct ampdu_info *ampdu,
struct scb *scb,
struct sk_buff *p, tx_status_t *txs,
u32 frmtxstatus, u32 frmtxstatus2);
static bool wlc_ampdu_cap(struct ampdu_info *ampdu);
static int wlc_ampdu_set(struct ampdu_info *ampdu, bool on);
struct ampdu_info *wlc_ampdu_attach(struct wlc_info *wlc)
void wlc_ampdu_detach(struct ampdu_info *ampdu)
static void scb_ampdu_update_config(struct ampdu_info *ampdu, struct scb *scb)
static void scb_ampdu_update_config_all(struct ampdu_info *ampdu)
static void wlc_ffpld_init(struct ampdu_info *ampdu)
static int wlc_ffpld_check_txfunfl(struct wlc_info *wlc, int fid)
static void wlc_ffpld_calc_mcs2ampdu_table(struct ampdu_info *ampdu, int f)
static void
wlc_ampdu_agg(struct ampdu_info *ampdu, struct scb *scb, struct sk_buff *p,
uint prec)
int
wlc_sendampdu(struct ampdu_info *ampdu, struct wlc_txq_info *qi,
struct sk_buff **pdu, int prec)
void
wlc_ampdu_dotxstatus(struct ampdu_info *ampdu, struct scb *scb,
struct sk_buff *p, tx_status_t *txs)
static void
rate_status(struct wlc_info *wlc, struct ieee80211_tx_info *tx_info,
tx_status_t *txs, u8 mcs)
#define SHORTNAME "AMPDU status"
static void
wlc_ampdu_dotxstatus_complete(struct ampdu_info *ampdu, struct scb *scb,
struct sk_buff *p, tx_status_t *txs,
u32 s1, u32 s2)
static scb_ampdu_tid_ini_t *wlc_ampdu_init_tid_ini(struct ampdu_info *ampdu,
scb_ampdu_t *scb_ampdu,
u8 tid, bool override)
static int wlc_ampdu_set(struct ampdu_info *ampdu, bool on)
static bool wlc_ampdu_cap(struct ampdu_info *ampdu)
static void ampdu_update_max_txlen(struct ampdu_info *ampdu, u8 dur)
void wlc_ampdu_macaddr_upd(struct wlc_info *wlc)
bool wlc_aggregatable(struct wlc_info *wlc, u8 tid)
void wlc_ampdu_shm_upd(struct ampdu_info *ampdu)
static bool cb_del_ampdu_pkt(struct sk_buff *mpdu, void *arg_a)
static void dma_cb_fn_ampdu(void *txi, void *arg_a)
void wlc_ampdu_flush(struct wlc_info *wlc,
struct ieee80211_sta *sta, u16 tid)
