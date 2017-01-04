static void
xpc_process_connect(struct xpc_channel *ch, unsigned long *irq_flags)
static void
xpc_process_disconnect(struct xpc_channel *ch, unsigned long *irq_flags)
static void
xpc_process_openclose_chctl_flags(struct xpc_partition *part, int ch_number,
u8 chctl_flags)
static enum xp_retval
xpc_connect_channel(struct xpc_channel *ch)
void
xpc_process_sent_chctl_flags(struct xpc_partition *part)
void
xpc_partition_going_down(struct xpc_partition *part, enum xp_retval reason)
void
xpc_initiate_connect(int ch_number)
void
xpc_connected_callout(struct xpc_channel *ch)
void
xpc_initiate_disconnect(int ch_number)
void
xpc_disconnect_channel(const int line, struct xpc_channel *ch,
enum xp_retval reason, unsigned long *irq_flags)
void
xpc_disconnect_callout(struct xpc_channel *ch, enum xp_retval reason)
enum xp_retval
xpc_allocate_msg_wait(struct xpc_channel *ch)
enum xp_retval
xpc_initiate_send(short partid, int ch_number, u32 flags, void *payload,
u16 payload_size)
enum xp_retval
xpc_initiate_send_notify(short partid, int ch_number, u32 flags, void *payload,
u16 payload_size, xpc_notify_func func, void *key)
void
xpc_deliver_payload(struct xpc_channel *ch)
void
xpc_initiate_received(short partid, int ch_number, void *payload)
