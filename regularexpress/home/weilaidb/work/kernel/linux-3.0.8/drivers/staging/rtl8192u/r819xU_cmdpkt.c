#define		CMPK_DEBOUNCE_CNT			1
#define		CMPK_PRINT(Address)\
\
rt_status
SendTxCommandPacket(
struct net_device *dev,
void* 			pData,
u32				DataLen
)
extern	rt_status	cmpk_message_handle_tx(
struct net_device *dev,
u8*	codevirtualaddress,
u32	packettype,
u32	buffer_len)
static	void
cmpk_count_txstatistic(
struct net_device *dev,
cmpk_txfb_t	*pstx_fb)
static	void
cmpk_handle_tx_feedback(
struct net_device *dev,
u8	*	pmsg)
void
cmdpkt_beacontimerinterrupt_819xusb(
struct net_device *dev
)
static	void
cmpk_handle_interrupt_status(
struct net_device *dev,
u8*	pmsg)
static	void
cmpk_handle_query_config_rx(
struct net_device *dev,
u8*	   pmsg)
static	void	cmpk_count_tx_status(	struct net_device *dev,
cmpk_tx_status_t 	*pstx_status)
static	void
cmpk_handle_tx_status(
struct net_device *dev,
u8*	   pmsg)
static	void
cmpk_handle_tx_rate_history(
struct net_device *dev,
u8*	   pmsg)
extern	u32
cmpk_message_handle_rx(
struct net_device *dev,
struct ieee80211_rx_stats *pstats)
