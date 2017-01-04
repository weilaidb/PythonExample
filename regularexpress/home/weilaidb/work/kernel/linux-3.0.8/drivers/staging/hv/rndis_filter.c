enum rndis_device_state ;
struct rndis_device ;
struct rndis_request ;
static void rndis_filter_send_completion(void *ctx);
static void rndis_filter_send_request_completion(void *ctx);
static struct rndis_device *get_rndis_device(void)
static struct rndis_request *get_rndis_request(struct rndis_device *dev,
u32 msg_type,
u32 msg_len)
static void put_rndis_request(struct rndis_device *dev,
struct rndis_request *req)
static void dump_rndis_message(struct rndis_message *rndis_msg)
static int rndis_filter_send_request(struct rndis_device *dev,
struct rndis_request *req)
static void rndis_filter_receive_response(struct rndis_device *dev,
struct rndis_message *resp)
static void rndis_filter_receive_indicate_status(struct rndis_device *dev,
struct rndis_message *resp)
static void rndis_filter_receive_data(struct rndis_device *dev,
struct rndis_message *msg,
struct hv_netvsc_packet *pkt)
int rndis_filter_receive(struct hv_device *dev,
struct hv_netvsc_packet	*pkt)
static int rndis_filter_query_device(struct rndis_device *dev, u32 oid,
void *result, u32 *result_size)
static int rndis_filter_query_device_mac(struct rndis_device *dev)
static int rndis_filter_query_device_link_status(struct rndis_device *dev)
static int rndis_filter_set_packet_filter(struct rndis_device *dev,
u32 new_filter)
static int rndis_filter_init_device(struct rndis_device *dev)
static void rndis_filter_halt_device(struct rndis_device *dev)
static int rndis_filter_open_device(struct rndis_device *dev)
static int rndis_filter_close_device(struct rndis_device *dev)
int rndis_filte_device_add(struct hv_device *dev,
void *additional_info)
int rndis_filter_device_remove(struct hv_device *dev)
int rndis_filter_open(struct hv_device *dev)
int rndis_filter_close(struct hv_device *dev)
int rndis_filter_send(struct hv_device *dev,
struct hv_netvsc_packet *pkt)
static void rndis_filter_send_completion(void *ctx)
static void rndis_filter_send_request_completion(void *ctx)
