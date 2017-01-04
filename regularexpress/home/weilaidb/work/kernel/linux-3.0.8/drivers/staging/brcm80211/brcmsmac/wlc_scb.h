#define _wlc_scb_h_
#define AMPDU_TX_BA_MAX_WSIZE	64
typedef struct scb_ampdu_tid_ini  scb_ampdu_tid_ini_t;
#define AMPDU_MAX_SCB_TID	NUMPRIO
typedef struct scb_ampdu  scb_ampdu_t;
#define SCB_MAGIC 	0xbeefcafe
#define INI_MAGIC 	0xabcd1234
struct scb ;
#define SCB_WMECAP		0x0040
#define SCB_HTCAP		0x10000
#define SCB_IS40		0x80000
#define SCB_STBCCAP		0x40000000
#define SCB_WME(a)		((a)->flags & SCB_WMECAP)
#define SCB_SEQNUM(scb, prio)	((scb)->seqnum[(prio)])
#define SCB_PS(a)		NULL
#define SCB_STBC_CAP(a)		((a)->flags & SCB_STBCCAP)
#define SCB_AMPDU(a)		true
