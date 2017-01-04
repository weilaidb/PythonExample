#define FW_CDEV_KERNEL_VERSION			4
#define FW_CDEV_VERSION_EVENT_REQUEST2		4
#define FW_CDEV_VERSION_ALLOCATE_REGION_END	4
struct client ;
static inline void client_get(struct client *client)
static void client_release(struct kref *kref)
static void client_put(struct client *client)
struct client_resource;
typedef void (*client_resource_release_fn_t)(struct client *,
struct client_resource *);
struct client_resource ;
struct address_handler_resource ;
struct outbound_transaction_resource ;
struct inbound_transaction_resource ;
struct descriptor_resource ;
struct iso_resource ;
static void release_iso_resource(struct client *, struct client_resource *);
static void schedule_iso_resource(struct iso_resource *r, unsigned long delay)
static void schedule_if_iso_resource(struct client_resource *resource)
struct event ;
struct bus_reset_event ;
struct outbound_transaction_event ;
struct inbound_transaction_event ;
struct iso_interrupt_event ;
struct iso_interrupt_mc_event ;
struct iso_resource_event ;
struct outbound_phy_packet_event ;
struct inbound_phy_packet_event ;
static inline void __user *u64_to_uptr(__u64 value)
static inline __u64 uptr_to_u64(void __user *ptr)
static int fw_device_op_open(struct inode *inode, struct file *file)
static void queue_event(struct client *client, struct event *event,
void *data0, size_t size0, void *data1, size_t size1)
static int dequeue_event(struct client *client,
char __user *buffer, size_t count)
static ssize_t fw_device_op_read(struct file *file, char __user *buffer,
size_t count, loff_t *offset)
static void fill_bus_reset_event(struct fw_cdev_event_bus_reset *event,
struct client *client)
static void for_each_client(struct fw_device *device,
void (*callback)(struct client *client))
static int schedule_reallocations(int id, void *p, void *data)
static void queue_bus_reset_event(struct client *client)
void fw_device_cdev_update(struct fw_device *device)
static void wake_up_client(struct client *client)
void fw_device_cdev_remove(struct fw_device *device)
union ioctl_arg ;
static int ioctl_get_info(struct client *client, union ioctl_arg *arg)
static int add_client_resource(struct client *client,
struct client_resource *resource, gfp_t gfp_mask)
static int release_client_resource(struct client *client, u32 handle,
client_resource_release_fn_t release,
struct client_resource **return_resource)
static void release_transaction(struct client *client,
struct client_resource *resource)
static void complete_transaction(struct fw_card *card, int rcode,
void *payload, size_t length, void *data)
static int init_request(struct client *client,
struct fw_cdev_send_request *request,
int destination_id, int speed)
static int ioctl_send_request(struct client *client, union ioctl_arg *arg)
static inline bool is_fcp_request(struct fw_request *request)
static void release_request(struct client *client,
struct client_resource *resource)
static void handle_request(struct fw_card *card, struct fw_request *request,
int tcode, int destination, int source,
int generation, unsigned long long offset,
void *payload, size_t length, void *callback_data)
static void release_address_handler(struct client *client,
struct client_resource *resource)
static int ioctl_allocate(struct client *client, union ioctl_arg *arg)
static int ioctl_deallocate(struct client *client, union ioctl_arg *arg)
static int ioctl_send_response(struct client *client, union ioctl_arg *arg)
static int ioctl_initiate_bus_reset(struct client *client, union ioctl_arg *arg)
static void release_descriptor(struct client *client,
struct client_resource *resource)
static int ioctl_add_descriptor(struct client *client, union ioctl_arg *arg)
static int ioctl_remove_descriptor(struct client *client, union ioctl_arg *arg)
static void iso_callback(struct fw_iso_context *context, u32 cycle,
size_t header_length, void *header, void *data)
static void iso_mc_callback(struct fw_iso_context *context,
dma_addr_t completed, void *data)
static int ioctl_create_iso_context(struct client *client, union ioctl_arg *arg)
static int ioctl_set_iso_channels(struct client *client, union ioctl_arg *arg)
#define GET_PAYLOAD_LENGTH(v)	((v) & 0xffff)
#define GET_INTERRUPT(v)	(((v) >> 16) & 0x01)
#define GET_SKIP(v)		(((v) >> 17) & 0x01)
#define GET_TAG(v)		(((v) >> 18) & 0x03)
#define GET_SY(v)		(((v) >> 20) & 0x0f)
#define GET_HEADER_LENGTH(v)	(((v) >> 24) & 0xff)
static int ioctl_queue_iso(struct client *client, union ioctl_arg *arg)
static int ioctl_start_iso(struct client *client, union ioctl_arg *arg)
static int ioctl_stop_iso(struct client *client, union ioctl_arg *arg)
static int ioctl_get_cycle_timer2(struct client *client, union ioctl_arg *arg)
static int ioctl_get_cycle_timer(struct client *client, union ioctl_arg *arg)
static void iso_resource_work(struct work_struct *work)
static void release_iso_resource(struct client *client,
struct client_resource *resource)
static int init_iso_resource(struct client *client,
struct fw_cdev_allocate_iso_resource *request, int todo)
static int ioctl_allocate_iso_resource(struct client *client,
union ioctl_arg *arg)
static int ioctl_deallocate_iso_resource(struct client *client,
union ioctl_arg *arg)
static int ioctl_allocate_iso_resource_once(struct client *client,
union ioctl_arg *arg)
static int ioctl_deallocate_iso_resource_once(struct client *client,
union ioctl_arg *arg)
static int ioctl_get_speed(struct client *client, union ioctl_arg *arg)
static int ioctl_send_broadcast_request(struct client *client,
union ioctl_arg *arg)
static int ioctl_send_stream_packet(struct client *client, union ioctl_arg *arg)
static void outbound_phy_packet_callback(struct fw_packet *packet,
struct fw_card *card, int status)
static int ioctl_send_phy_packet(struct client *client, union ioctl_arg *arg)
static int ioctl_receive_phy_packets(struct client *client, union ioctl_arg *arg)
void fw_cdev_handle_phy_packet(struct fw_card *card, struct fw_packet *p)
static int (* const ioctl_handlers[])(struct client *, union ioctl_arg *) = ;
static int dispatch_ioctl(struct client *client,
unsigned int cmd, void __user *arg)
static long fw_device_op_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static long fw_device_op_compat_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static int fw_device_op_mmap(struct file *file, struct vm_area_struct *vma)
static int is_outbound_transaction_resource(int id, void *p, void *data)
static int has_outbound_transactions(struct client *client)
static int shutdown_resource(int id, void *p, void *data)
static int fw_device_op_release(struct inode *inode, struct file *file)
static unsigned int fw_device_op_poll(struct file *file, poll_table * pt)
const struct file_operations fw_device_ops = ;
