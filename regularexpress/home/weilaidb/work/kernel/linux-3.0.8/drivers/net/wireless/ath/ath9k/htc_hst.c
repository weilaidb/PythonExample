static int htc_issue_send(struct htc_target *target, struct sk_buff* skb,
u16 len, u8 flags, u8 epid)
static struct htc_endpoint *get_next_avail_ep(struct htc_endpoint *endpoint)
static u8 service_to_ulpipe(u16 service_id)
static u8 service_to_dlpipe(u16 service_id)
static void htc_process_target_rdy(struct htc_target *target,
void *buf)
static void htc_process_conn_rsp(struct htc_target *target,
struct htc_frame_hdr *htc_hdr)
static int htc_config_pipe_credits(struct htc_target *target)
static int htc_setup_complete(struct htc_target *target)
int htc_init(struct htc_target *target)
int htc_connect_service(struct htc_target *target,
struct htc_service_connreq *service_connreq,
enum htc_endpoint_id *conn_rsp_epid)
int htc_send(struct htc_target *target, struct sk_buff *skb)
int htc_send_epid(struct htc_target *target, struct sk_buff *skb,
enum htc_endpoint_id epid)
void htc_stop(struct htc_target *target)
void htc_start(struct htc_target *target)
void htc_sta_drain(struct htc_target *target, u8 idx)
void ath9k_htc_txcompletion_cb(struct htc_target *htc_handle,
struct sk_buff *skb, bool txok)
void ath9k_htc_rx_msg(struct htc_target *htc_handle,
struct sk_buff *skb, u32 len, u8 pipe_id)
struct htc_target *ath9k_htc_hw_alloc(void *hif_handle,
struct ath9k_htc_hif *hif,
struct device *dev)
void ath9k_htc_hw_free(struct htc_target *htc)
int ath9k_htc_hw_init(struct htc_target *target,
struct device *dev, u16 devid,
char *product, u32 drv_info)
void ath9k_htc_hw_deinit(struct htc_target *target, bool hot_unplug)
