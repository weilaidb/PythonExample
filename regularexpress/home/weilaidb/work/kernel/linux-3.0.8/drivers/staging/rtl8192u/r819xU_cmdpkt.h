#define R819XUSB_CMDPKT_H
#define		CMPK_RX_TX_FB_SIZE					sizeof(cmpk_txfb_t)
#define		CMPK_TX_SET_CONFIG_SIZE				sizeof(cmpk_set_cfg_t)
#define		CMPK_BOTH_QUERY_CONFIG_SIZE			sizeof(cmpk_set_cfg_t)
#define		CMPK_RX_TX_STS_SIZE					sizeof(cmpk_tx_status_t)
#define		CMPK_RX_DBG_MSG_SIZE			sizeof(cmpk_rx_dbginfo_t)
#define		CMPK_TX_RAHIS_SIZE			sizeof(cmpk_tx_rahis_t)
#define ISR_TxBcnOk					BIT27
#define ISR_TxBcnErr				BIT26
#define ISR_BcnTimerIntr			BIT13
typedef struct tag_cmd_pkt_tx_feedback
cmpk_txfb_t;
typedef struct tag_cmd_pkt_interrupt_status
cmpk_intr_sta_t;
typedef struct tag_cmd_pkt_set_configuration
cmpk_set_cfg_t;
#define		cmpk_query_cfg_t	cmpk_set_cfg_t
typedef struct tag_tx_stats_feedback
__attribute__((packed)) cmpk_tx_status_t;
typedef struct tag_rx_debug_message_feedback
cmpk_rx_dbginfo_t;
typedef struct tag_tx_rate_history
__attribute__((packed)) cmpk_tx_rahis_t;
typedef enum tag_command_packet_directories
cmpk_element_e;
typedef enum _rt_statusrt_status,*prt_status;
extern rt_status cmpk_message_handle_tx(struct net_device *dev, u8* codevirtualaddress, u32 packettype, u32 buffer_len);
extern  u32 cmpk_message_handle_rx(struct net_device *dev, struct ieee80211_rx_stats * pstats);
extern rt_status SendTxCommandPacket( struct net_device *dev, void* pData, u32 DataLen);
