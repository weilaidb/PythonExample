#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define NUM_PAGES_SPANNED(addr, len) \
((PAGE_ALIGN(addr + len) >> PAGE_SHIFT) - (addr >> PAGE_SHIFT))
static int create_gpadl_header(
void *kbuffer,
u32 size,
struct vmbus_channel_msginfo **msginfo,
u32 *messagecount);
static void dump_vmbus_channel(struct vmbus_channel *channel);
static void vmbus_setevent(struct vmbus_channel *channel);
static void vmbus_setevent(struct vmbus_channel *channel)
void vmbus_get_debug_info(struct vmbus_channel *channel,
struct vmbus_channel_debug_info *debuginfo)
int vmbus_open(struct vmbus_channel *newchannel, u32 send_ringbuffer_size,
u32 recv_ringbuffer_size, void *userdata, u32 userdatalen,
void (*onchannelcallback)(void *context), void *context)
EXPORT_SYMBOL_GPL(vmbus_open);
static void dump_gpadl_body(struct vmbus_channel_gpadl_body *gpadl, u32 len)
static void dump_gpadl_header(struct vmbus_channel_gpadl_header *gpadl)
static int create_gpadl_header(void *kbuffer, u32 size,
struct vmbus_channel_msginfo **msginfo,
u32 *messagecount)
int vmbus_establish_gpadl(struct vmbus_channel *channel, void *kbuffer,
u32 size, u32 *gpadl_handle)
EXPORT_SYMBOL_GPL(vmbus_establish_gpadl);
int vmbus_teardown_gpadl(struct vmbus_channel *channel, u32 gpadl_handle)
EXPORT_SYMBOL_GPL(vmbus_teardown_gpadl);
void vmbus_close(struct vmbus_channel *channel)
EXPORT_SYMBOL_GPL(vmbus_close);
int vmbus_sendpacket(struct vmbus_channel *channel, const void *buffer,
u32 bufferlen, u64 requestid,
enum vmbus_packet_type type, u32 flags)
EXPORT_SYMBOL(vmbus_sendpacket);
int vmbus_sendpacket_pagebuffer(struct vmbus_channel *channel,
struct hv_page_buffer pagebuffers[],
u32 pagecount, void *buffer, u32 bufferlen,
u64 requestid)
EXPORT_SYMBOL_GPL(vmbus_sendpacket_pagebuffer);
int vmbus_sendpacket_multipagebuffer(struct vmbus_channel *channel,
struct hv_multipage_buffer *multi_pagebuffer,
void *buffer, u32 bufferlen, u64 requestid)
EXPORT_SYMBOL_GPL(vmbus_sendpacket_multipagebuffer);
int vmbus_recvpacket(struct vmbus_channel *channel, void *buffer,
u32 bufferlen, u32 *buffer_actual_len, u64 *requestid)
EXPORT_SYMBOL(vmbus_recvpacket);
int vmbus_recvpacket_raw(struct vmbus_channel *channel, void *buffer,
u32 bufferlen, u32 *buffer_actual_len,
u64 *requestid)
EXPORT_SYMBOL_GPL(vmbus_recvpacket_raw);
void vmbus_onchannel_event(struct vmbus_channel *channel)
void vmbus_ontimer(unsigned long data)
static void dump_vmbus_channel(struct vmbus_channel *channel)
