#define LMAC_H
enum p54_control_frame_types ;
#define P54_HDR_FLAG_CONTROL		BIT(15)
#define P54_HDR_FLAG_CONTROL_OPSET	(BIT(15) + BIT(0))
#define P54_HDR_FLAG_DATA_ALIGN		BIT(14)
#define P54_HDR_FLAG_DATA_OUT_PROMISC		BIT(0)
#define P54_HDR_FLAG_DATA_OUT_TIMESTAMP		BIT(1)
#define P54_HDR_FLAG_DATA_OUT_SEQNR		BIT(2)
#define P54_HDR_FLAG_DATA_OUT_BIT3		BIT(3)
#define P54_HDR_FLAG_DATA_OUT_BURST		BIT(4)
#define P54_HDR_FLAG_DATA_OUT_NOCANCEL		BIT(5)
#define P54_HDR_FLAG_DATA_OUT_CLEARTIM		BIT(6)
#define P54_HDR_FLAG_DATA_OUT_HITCHHIKE		BIT(7)
#define P54_HDR_FLAG_DATA_OUT_COMPRESS		BIT(8)
#define P54_HDR_FLAG_DATA_OUT_CONCAT		BIT(9)
#define P54_HDR_FLAG_DATA_OUT_PCS_ACCEPT	BIT(10)
#define P54_HDR_FLAG_DATA_OUT_WAITEOSP		BIT(11)
#define P54_HDR_FLAG_DATA_IN_FCS_GOOD		BIT(0)
#define P54_HDR_FLAG_DATA_IN_MATCH_MAC		BIT(1)
#define P54_HDR_FLAG_DATA_IN_MCBC		BIT(2)
#define P54_HDR_FLAG_DATA_IN_BEACON		BIT(3)
#define P54_HDR_FLAG_DATA_IN_MATCH_BSS		BIT(4)
#define P54_HDR_FLAG_DATA_IN_BCAST_BSS		BIT(5)
#define P54_HDR_FLAG_DATA_IN_DATA		BIT(6)
#define P54_HDR_FLAG_DATA_IN_TRUNCATED		BIT(7)
#define P54_HDR_FLAG_DATA_IN_BIT8		BIT(8)
#define P54_HDR_FLAG_DATA_IN_TRANSPARENT	BIT(9)
struct p54_hdr  __packed;
#define GET_REQ_ID(skb)							\
(((struct p54_hdr *) ((struct sk_buff *) skb)->data)->req_id)	\
#define FREE_AFTER_TX(skb)						\
((((struct p54_hdr *) ((struct sk_buff *) skb)->data)->		\
flags) == cpu_to_le16(P54_HDR_FLAG_CONTROL_OPSET))
#define IS_DATA_FRAME(skb)						\
(!((((struct p54_hdr *) ((struct sk_buff *) skb)->data)->	\
flags) & cpu_to_le16(P54_HDR_FLAG_CONTROL)))
#define GET_HW_QUEUE(skb)						\
(((struct p54_tx_data *)((struct p54_hdr *)			\
skb->data)->data)->hw_queue)
#define IF_ID_ISL36356A			0x0001
#define IF_ID_MVC			0x0003
#define IF_ID_DEBUG			0x0008
#define IF_ID_PRODUCT			0x0009
#define IF_ID_OEM			0x000a
#define IF_ID_PCI3877			0x000b
#define IF_ID_ISL37704C			0x000c
#define IF_ID_ISL39000			0x000f
#define IF_ID_ISL39300A			0x0010
#define IF_ID_ISL37700_UAP		0x0016
#define IF_ID_ISL39000_UAP		0x0017
#define IF_ID_LMAC			0x001a
struct exp_if  __packed;
struct dep_if  __packed;
struct p54_eeprom_lm86  __packed;
enum p54_rx_decrypt_status ;
struct p54_rx_data  __packed;
enum p54_trap_type ;
struct p54_trap  __packed;
enum p54_frame_sent_status ;
struct p54_frame_sent  __packed;
enum p54_tx_data_crypt ;
enum p54_tx_data_queue ;
#define IS_QOS_QUEUE(n)	(n >= P54_QUEUE_DATA)
struct p54_tx_data  __packed;
#define P54_TX_FRAME_LIFETIME 2000
#define P54_TX_TIMEOUT 4000
#define P54_STATISTICS_UPDATE 5000
#define P54_FILTER_TYPE_NONE		0
#define P54_FILTER_TYPE_STATION		BIT(0)
#define P54_FILTER_TYPE_IBSS		BIT(1)
#define P54_FILTER_TYPE_AP		BIT(2)
#define P54_FILTER_TYPE_TRANSPARENT	BIT(3)
#define P54_FILTER_TYPE_PROMISCUOUS	BIT(4)
#define P54_FILTER_TYPE_HIBERNATE	BIT(5)
#define P54_FILTER_TYPE_NOACK		BIT(6)
#define P54_FILTER_TYPE_RX_DISABLED	BIT(7)
struct p54_setup_mac  __packed;
#define P54_SETUP_V1_LEN 40
#define P54_SETUP_V2_LEN (sizeof(struct p54_setup_mac))
#define P54_SCAN_EXIT	BIT(0)
#define P54_SCAN_TRAP	BIT(1)
#define P54_SCAN_ACTIVE BIT(2)
#define P54_SCAN_FILTER BIT(3)
struct p54_scan_head  __packed;
struct p54_pa_curve_data_sample  __packed;
struct p54_scan_body  __packed;
struct p54_channel_output_limit_longbow  __packed;
struct p54_pa_curve_data_sample_longbow  __packed;
struct p54_scan_body_longbow  __packed;
union p54_scan_body_union  __packed;
struct p54_scan_tail_rate  __packed;
struct p54_led  __packed;
struct p54_edcf  __packed;
struct p54_statistics  __packed;
struct p54_xbow_synth  __packed;
struct p54_timer  __packed;
struct p54_keycache  __packed;
struct p54_burst  __packed;
struct p54_psm_interval  __packed;
#define P54_PSM_CAM			0
#define P54_PSM				BIT(0)
#define P54_PSM_DTIM			BIT(1)
#define P54_PSM_MCBC			BIT(2)
#define P54_PSM_CHECKSUM		BIT(3)
#define P54_PSM_SKIP_MORE_DATA		BIT(4)
#define P54_PSM_BEACON_TIMEOUT		BIT(5)
#define P54_PSM_HFOSLEEP		BIT(6)
#define P54_PSM_AUTOSWITCH_SLEEP	BIT(7)
#define P54_PSM_LPIT			BIT(8)
#define P54_PSM_BF_UCAST_SKIP		BIT(9)
#define P54_PSM_BF_MCAST_SKIP		BIT(10)
struct p54_psm  __packed;
#define MC_FILTER_ADDRESS_NUM 4
struct p54_group_address_table  __packed;
struct p54_txcancel  __packed;
struct p54_sta_unlock  __packed;
#define P54_TIM_CLEAR BIT(15)
struct p54_tim  __packed;
struct p54_cce_quiet  __packed;
struct p54_bt_balancer  __packed;
struct p54_arp_table  __packed;
int p54_set_leds(struct p54_common *priv);
int p54_init_leds(struct p54_common *priv);
void p54_unregister_leds(struct p54_common *priv);
void p54_tx_80211(struct ieee80211_hw *dev, struct sk_buff *skb);
int p54_tx_cancel(struct p54_common *priv, __le32 req_id);
void p54_tx(struct p54_common *priv, struct sk_buff *skb);
int p54_init_xbow_synth(struct p54_common *priv);
int p54_scan(struct p54_common *priv, u16 mode, u16 dwell);
int p54_sta_unlock(struct p54_common *priv, u8 *addr);
int p54_update_beacon_tim(struct p54_common *priv, u16 aid, bool set);
int p54_setup_mac(struct p54_common *priv);
int p54_set_ps(struct p54_common *priv);
int p54_fetch_statistics(struct p54_common *priv);
int p54_set_groupfilter(struct p54_common *priv);
int p54_set_edcf(struct p54_common *priv);
int p54_upload_key(struct p54_common *priv, u8 algo, int slot,
u8 idx, u8 len, u8 *addr, u8* key);
int p54_download_eeprom(struct p54_common *priv, void *buf,
u16 offset, u16 len);
struct p54_rssi_db_entry *p54_rssi_find(struct p54_common *p, const u16 freq);
u8 *p54_find_ie(struct sk_buff *skb, u8 ie);
