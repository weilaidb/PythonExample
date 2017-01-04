#define __AGGR_RX_INTERNAL_H__
#define AGGR_WIN_IDX(x, y)          ((x) % (y))
#define AGGR_INCR_IDX(x, y)         AGGR_WIN_IDX(((x)+1), (y))
#define AGGR_DCRM_IDX(x, y)         AGGR_WIN_IDX(((x)-1), (y))
#define IEEE80211_MAX_SEQ_NO        0xFFF
#define IEEE80211_NEXT_SEQ_NO(x)    (((x) + 1) & IEEE80211_MAX_SEQ_NO)
#define NUM_OF_TIDS         8
#define AGGR_SZ_DEFAULT     8
#define AGGR_WIN_SZ_MIN     2
#define AGGR_WIN_SZ_MAX     8
#define TID_WINDOW_SZ(_x)   ((_x) << 1)
#define AGGR_NUM_OF_FREE_NETBUFS    16
#define AGGR_GET_RXTID_STATS(_p, _x)    (&(_p->stat[(_x)]))
#define AGGR_GET_RXTID(_p, _x)    (&(_p->RxTid[(_x)]))
#define HOLD_Q_SZ(_x)   (TID_WINDOW_SZ((_x))*sizeof(struct osbuf_hold_q))
#define AGGR_RX_TIMEOUT     400
typedef enum DELIVERY_ORDER;
struct osbuf_hold_q ;
struct rxtid ;
struct rxtid_stats ;
struct aggr_info ;
