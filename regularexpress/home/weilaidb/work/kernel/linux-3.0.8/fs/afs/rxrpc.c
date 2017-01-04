static struct socket *afs_socket;
static struct workqueue_struct *afs_async_calls;
static atomic_t afs_outstanding_calls;
static atomic_t afs_outstanding_skbs;
static void afs_wake_up_call_waiter(struct afs_call *);
static int afs_wait_for_call_to_complete(struct afs_call *);
static void afs_wake_up_async_call(struct afs_call *);
static int afs_dont_wait_for_call_to_complete(struct afs_call *);
static void afs_process_async_call(struct work_struct *);
static void afs_rx_interceptor(struct sock *, unsigned long, struct sk_buff *);
static int afs_deliver_cm_op_id(struct afs_call *, struct sk_buff *, bool);
const struct afs_wait_mode afs_sync_call = ;
const struct afs_wait_mode afs_async_call = ;
static const struct afs_wait_mode afs_async_incoming_call = ;
static const struct afs_call_type afs_RXCMxxxx = ;
static void afs_collect_incoming_call(struct work_struct *);
static struct sk_buff_head afs_incoming_calls;
static DECLARE_WORK(afs_collect_incoming_call_work, afs_collect_incoming_call);
int afs_open_socket(void)
void afs_close_socket(void)
static void afs_data_delivered(struct sk_buff *skb)
static void afs_free_skb(struct sk_buff *skb)
static void afs_free_call(struct afs_call *call)
struct afs_call *afs_alloc_flat_call(const struct afs_call_type *type,
size_t request_size, size_t reply_size)
void afs_flat_call_destructor(struct afs_call *call)
static int afs_send_pages(struct afs_call *call, struct msghdr *msg,
struct kvec *iov)
int afs_make_call(struct in_addr *addr, struct afs_call *call, gfp_t gfp,
const struct afs_wait_mode *wait_mode)
static void afs_rx_interceptor(struct sock *sk, unsigned long user_call_ID,
struct sk_buff *skb)
static void afs_deliver_to_call(struct afs_call *call)
static int afs_wait_for_call_to_complete(struct afs_call *call)
static void afs_wake_up_call_waiter(struct afs_call *call)
static void afs_wake_up_async_call(struct afs_call *call)
static int afs_dont_wait_for_call_to_complete(struct afs_call *call)
static void afs_delete_async_call(struct work_struct *work)
static void afs_process_async_call(struct work_struct *work)
void afs_transfer_reply(struct afs_call *call, struct sk_buff *skb)
static void afs_collect_incoming_call(struct work_struct *work)
static int afs_deliver_cm_op_id(struct afs_call *call, struct sk_buff *skb,
bool last)
void afs_send_empty_reply(struct afs_call *call)
void afs_send_simple_reply(struct afs_call *call, const void *buf, size_t len)
int afs_extract_data(struct afs_call *call, struct sk_buff *skb,
bool last, void *buf, size_t count)
