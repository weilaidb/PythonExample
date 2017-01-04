#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
struct vmbus_connection vmbus_connection = ;
int vmbus_connect(void)
int vmbus_disconnect(void)
struct vmbus_channel *relid2channel(u32 relid)
static void process_chn_event(u32 relid)
void vmbus_on_event(unsigned long data)
int vmbus_post_msg(void *buffer, size_t buflen)
int vmbus_set_event(u32 child_relid)
