#define	_HWM_
#define DRV_BUF_FLUSH(desc,flag)
#define DDI_DMA_SYNC_FORCPU
#define DDI_DMA_SYNC_FORDEV
#define	RX_ENABLE_PASS_SMT	21
#define	RX_DISABLE_PASS_SMT	22
#define	RX_ENABLE_PASS_NSA	23
#define	RX_DISABLE_PASS_NSA	24
#define	RX_ENABLE_PASS_DB	25
#define	RX_DISABLE_PASS_DB	26
#define	RX_DISABLE_PASS_ALL	27
#define	RX_DISABLE_LLC_PROMISC	28
#define	RX_ENABLE_LLC_PROMISC	29
#define DMA_RD		1
#define DMA_WR		2
#define SMT_BUF		0x80
#define EN_IRQ_EOF	0x02
#define	LOC_TX		0x04
#define LAST_FRAG	0x08
#define	FIRST_FRAG	0x10
#define	LAN_TX		0x20
#define RING_DOWN	0x40
#define OUT_OF_TXD	0x80
#define NULL 		0
#define HWM_REVERSE(x)	(x)
#define	HWM_REVERSE(x)		((((x)<<24L)&0xff000000L)	+	\
(((x)<< 8L)&0x00ff0000L)	+	\
(((x)>> 8L)&0x0000ff00L)	+	\
(((x)>>24L)&0x000000ffL))
#define C_INDIC		(1L<<25)
#define A_INDIC		(1L<<26)
#define	RD_FS_LOCAL	0x80
#define	DEBUG_SMTF	1
#define	DEBUG_SMT	2
#define	DEBUG_ECM	3
#define	DEBUG_RMT	4
#define	DEBUG_CFM	5
#define	DEBUG_PCM	6
#define	DEBUG_SBA	7
#define	DEBUG_ESS	8
#define	DB_HWM_RX	10
#define	DB_HWM_TX	11
#define DB_HWM_GEN	12
struct s_mbuf_pool  ;
struct hwm_r  ;
struct hw_modul  ;
struct os_debug  ;
#define	DB_P	smc->debug
#define DB_P	debug
#define DB_RX(a,b,c,lev) if (DB_P.d_os.hwm_rx >= (lev))	printf(a,b,c)
#define DB_TX(a,b,c,lev) if (DB_P.d_os.hwm_tx >= (lev))	printf(a,b,c)
#define DB_GEN(a,b,c,lev) if (DB_P.d_os.hwm_gen >= (lev)) printf(a,b,c)
#define DB_RX(a,b,c,lev)
#define DB_TX(a,b,c,lev)
#define DB_GEN(a,b,c,lev)
#define	SK_BREAK()
#define	HWM_GET_TX_PHYS(txd)		(u_long)AIX_REVERSE((txd)->txd_tbadr)
#define	HWM_GET_TX_LEN(txd)	((int)AIX_REVERSE((txd)->txd_tbctrl)& RD_LENGTH)
#define	HWM_GET_TX_USED(smc,queue)	(int) (smc)->hw.fp.tx_q[queue].tx_used
#define	HWM_GET_CURR_TXD(smc,queue)	(struct s_smt_fp_txd volatile *)\
(smc)->hw.fp.tx_q[queue].tx_curr_put
#define	HWM_GET_RX_FRAG_LEN(rxd)	((int)AIX_REVERSE((rxd)->rxd_rbctrl)& \
RD_LENGTH)
#define	HWM_GET_RX_PHYS(rxd)	(u_long)AIX_REVERSE((rxd)->rxd_rbadr)
#define	HWM_GET_RX_USED(smc)	((int)(smc)->hw.fp.rx_q[QUEUE_R1].rx_used)
#define	HWM_GET_RX_FREE(smc)	((int)(smc)->hw.fp.rx_q[QUEUE_R1].rx_free-1)
#define	HWM_GET_CURR_RXD(smc)	(struct s_smt_fp_rxd volatile *)\
(smc)->hw.fp.rx_q[QUEUE_R1].rx_curr_put
#define	HWM_RX_CHECK(smc,low_water)
#define	HWM_RX_CHECK(smc,low_water)		mac_drv_fill_rxd(smc)
#define	HWM_EBASE	500
#define	HWM_E0001	HWM_EBASE + 1
#define	HWM_E0001_MSG	"HWM: Wrong size of s_rxd_os struct"
#define	HWM_E0002	HWM_EBASE + 2
#define	HWM_E0002_MSG	"HWM: Wrong size of s_txd_os struct"
#define	HWM_E0003	HWM_EBASE + 3
#define	HWM_E0003_MSG	"HWM: smt_free_mbuf() called with NULL pointer"
#define	HWM_E0004	HWM_EBASE + 4
#define	HWM_E0004_MSG	"HWM: Parity error rx queue 1"
#define	HWM_E0005	HWM_EBASE + 5
#define	HWM_E0005_MSG	"HWM: Encoding error rx queue 1"
#define	HWM_E0006	HWM_EBASE + 6
#define	HWM_E0006_MSG	"HWM: Encoding error async tx queue"
#define	HWM_E0007	HWM_EBASE + 7
#define	HWM_E0007_MSG	"HWM: Encoding error sync tx queue"
#define	HWM_E0008	HWM_EBASE + 8
#define	HWM_E0008_MSG	""
#define	HWM_E0009	HWM_EBASE + 9
#define	HWM_E0009_MSG	"HWM: Out of RxD condition detected"
#define	HWM_E0010	HWM_EBASE + 10
#define	HWM_E0010_MSG	"HWM: A protocol layer has tried to send a frame with an invalid frame control"
#define HWM_E0011	HWM_EBASE + 11
#define HWM_E0011_MSG	"HWM: mac_drv_clear_tx_queue was called although the hardware wasn't stopped"
#define HWM_E0012	HWM_EBASE + 12
#define HWM_E0012_MSG	"HWM: mac_drv_clear_rx_queue was called although the hardware wasn't stopped"
#define HWM_E0013	HWM_EBASE + 13
#define HWM_E0013_MSG	"HWM: mac_drv_repair_descr was called although the hardware wasn't stopped"
