#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static const char *driver_name = "netvsc";
static const struct hv_guid netvsc_device_type = ;
static struct netvsc_device *alloc_net_device(struct hv_device *device)
static void free_net_device(struct netvsc_device *device)
static struct netvsc_device *get_outbound_net_device(struct hv_device *device)
static struct netvsc_device *get_inbound_net_device(struct hv_device *device)
static void put_net_device(struct hv_device *device)
static struct netvsc_device *release_outbound_net_device(
struct hv_device *device)
static struct netvsc_device *release_inbound_net_device(
struct hv_device *device)
static int netvsc_destroy_recv_buf(struct netvsc_device *net_device)
static int netvsc_init_recv_buf(struct hv_device *device)
static int netvsc_destroy_send_buf(struct netvsc_device *net_device)
static int netvsc_init_send_buf(struct hv_device *device)
static int netvsc_connect_vsp(struct hv_device *device)
static void netvsc_disconnect_vsp(struct netvsc_device *net_device)
int netvsc_device_remove(struct hv_device *device)
static void netvsc_send_completion(struct hv_device *device,
struct vmpacket_descriptor *packet)
int netvsc_send(struct hv_device *device,
struct hv_netvsc_packet *packet)
static void netvsc_send_recv_completion(struct hv_device *device,
u64 transaction_id)
static void netvsc_receive_completion(void *context)
static void netvsc_receive(struct hv_device *device,
struct vmpacket_descriptor *packet)
static void netvsc_channel_cb(void *context)
int netvsc_device_add(struct hv_device *device, void *additional_info)
int netvsc_initialize(struct hv_driver *drv)
