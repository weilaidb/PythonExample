#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
struct hv_context hv_context = ;
static int query_hypervisor_presence(void)
static int query_hypervisor_info(void)
static u64 do_hypercall(u64 control, void *input, void *output)
int hv_init(void)
void hv_cleanup(void)
u16 hv_post_message(union hv_connection_id connection_id,
enum hv_message_type message_type,
void *payload, size_t payload_size)
u16 hv_signal_event(void)
void hv_synic_init(void *irqarg)
void hv_synic_cleanup(void *arg)
