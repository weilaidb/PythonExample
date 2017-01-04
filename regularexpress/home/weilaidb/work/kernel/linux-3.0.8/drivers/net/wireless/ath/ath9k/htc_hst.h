#define HTC_HST_H
struct ath9k_htc_priv;
struct htc_target;
struct ath9k_htc_tx_ctl;
enum ath9k_hif_transports ;
struct ath9k_htc_hif ;
enum htc_endpoint_id ;
#define HTC_FLAGS_RECV_TRAILER (1 << 1)
struct htc_frame_hdr  __packed;
struct htc_ready_msg  __packed;
struct htc_config_pipe_msg  __packed;
struct htc_ep_callbacks ;
struct htc_endpoint ;
#define HTC_MAX_CONTROL_MESSAGE_LENGTH 255
#define HTC_CONTROL_BUFFER_SIZE	\
(HTC_MAX_CONTROL_MESSAGE_LENGTH + sizeof(struct htc_frame_hdr))
#define HTC_OP_START_WAIT           BIT(0)
#define HTC_OP_CONFIG_PIPE_CREDITS  BIT(1)
struct htc_target ;
enum htc_msg_id ;
struct htc_service_connreq ;
enum htc_service_group_ids;
#define MAKE_SERVICE_ID(group, index)		\
(int)(((int)group << 8) | (int)(index))
#define HTC_CTRL_RSVD_SVC MAKE_SERVICE_ID(RSVD_SERVICE_GROUP, 1)
#define HTC_LOOPBACK_RSVD_SVC MAKE_SERVICE_ID(RSVD_SERVICE_GROUP, 2)
#define WMI_CONTROL_SVC   MAKE_SERVICE_ID(WMI_SERVICE_GROUP, 0)
#define WMI_BEACON_SVC	  MAKE_SERVICE_ID(WMI_SERVICE_GROUP, 1)
#define WMI_CAB_SVC	  MAKE_SERVICE_ID(WMI_SERVICE_GROUP, 2)
#define WMI_UAPSD_SVC	  MAKE_SERVICE_ID(WMI_SERVICE_GROUP, 3)
#define WMI_MGMT_SVC	  MAKE_SERVICE_ID(WMI_SERVICE_GROUP, 4)
#define WMI_DATA_VO_SVC   MAKE_SERVICE_ID(WMI_SERVICE_GROUP, 5)
#define WMI_DATA_VI_SVC   MAKE_SERVICE_ID(WMI_SERVICE_GROUP, 6)
#define WMI_DATA_BE_SVC   MAKE_SERVICE_ID(WMI_SERVICE_GROUP, 7)
#define WMI_DATA_BK_SVC   MAKE_SERVICE_ID(WMI_SERVICE_GROUP, 8)
struct htc_conn_svc_msg  __packed;
#define HTC_SERVICE_SUCCESS      0
#define HTC_SERVICE_NOT_FOUND    1
#define HTC_SERVICE_FAILED       2
#define HTC_SERVICE_NO_RESOURCES 3
#define HTC_SERVICE_NO_MORE_EP   4
struct htc_conn_svc_rspmsg  __packed;
struct htc_comp_msg  __packed;
int htc_init(struct htc_target *target);
int htc_connect_service(struct htc_target *target,
struct htc_service_connreq *service_connreq,
enum htc_endpoint_id *conn_rsp_eid);
int htc_send(struct htc_target *target, struct sk_buff *skb);
int htc_send_epid(struct htc_target *target, struct sk_buff *skb,
enum htc_endpoint_id epid);
void htc_stop(struct htc_target *target);
void htc_start(struct htc_target *target);
void htc_sta_drain(struct htc_target *target, u8 idx);
void ath9k_htc_rx_msg(struct htc_target *htc_handle,
struct sk_buff *skb, u32 len, u8 pipe_id);
void ath9k_htc_txcompletion_cb(struct htc_target *htc_handle,
struct sk_buff *skb, bool txok);
struct htc_target *ath9k_htc_hw_alloc(void *hif_handle,
struct ath9k_htc_hif *hif,
struct device *dev);
void ath9k_htc_hw_free(struct htc_target *htc);
int ath9k_htc_hw_init(struct htc_target *target,
struct device *dev, u16 devid, char *product,
u32 drv_info);
void ath9k_htc_hw_deinit(struct htc_target *target, bool hot_unplug);
