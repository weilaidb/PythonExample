#if defined CONFIG_X86_64
#elif defined CONFIG_IA64_GENERIC || defined CONFIG_IA64_SGI_UV
#if defined CONFIG_IA64_GENERIC || defined CONFIG_IA64_SGI_UV
struct uv_IO_APIC_route_entry ;
static struct xpc_heartbeat_uv *xpc_heartbeat_uv;
#define XPC_ACTIVATE_MSG_SIZE_UV	(1 * GRU_CACHE_LINE_BYTES)
#define XPC_ACTIVATE_MQ_SIZE_UV		(4 * XP_MAX_NPARTITIONS_UV * \
XPC_ACTIVATE_MSG_SIZE_UV)
#define XPC_ACTIVATE_IRQ_NAME		"xpc_activate"
#define XPC_NOTIFY_MSG_SIZE_UV		(2 * GRU_CACHE_LINE_BYTES)
#define XPC_NOTIFY_MQ_SIZE_UV		(4 * XP_MAX_NPARTITIONS_UV * \
XPC_NOTIFY_MSG_SIZE_UV)
#define XPC_NOTIFY_IRQ_NAME		"xpc_notify"
static struct xpc_gru_mq_uv *xpc_activate_mq_uv;
static struct xpc_gru_mq_uv *xpc_notify_mq_uv;
static int
xpc_setup_partitions_uv(void)
static void
xpc_teardown_partitions_uv(void)
static int
xpc_get_gru_mq_irq_uv(struct xpc_gru_mq_uv *mq, int cpu, char *irq_name)
static void
xpc_release_gru_mq_irq_uv(struct xpc_gru_mq_uv *mq)
static int
xpc_gru_mq_watchlist_alloc_uv(struct xpc_gru_mq_uv *mq)
static void
xpc_gru_mq_watchlist_free_uv(struct xpc_gru_mq_uv *mq)
static struct xpc_gru_mq_uv *
xpc_create_gru_mq_uv(unsigned int mq_size, int cpu, char *irq_name,
irq_handler_t irq_handler)
static void
xpc_destroy_gru_mq_uv(struct xpc_gru_mq_uv *mq)
static enum xp_retval
xpc_send_gru_msg(struct gru_message_queue_desc *gru_mq_desc, void *msg,
size_t msg_size)
static void
xpc_process_activate_IRQ_rcvd_uv(void)
static void
xpc_handle_activate_mq_msg_uv(struct xpc_partition *part,
struct xpc_activate_mq_msghdr_uv *msg_hdr,
int part_setup,
int *wakeup_hb_checker)
static irqreturn_t
xpc_handle_activate_IRQ_uv(int irq, void *dev_id)
static enum xp_retval
xpc_cache_remote_gru_mq_desc_uv(struct gru_message_queue_desc *gru_mq_desc,
unsigned long gru_mq_desc_gpa)
static enum xp_retval
xpc_send_activate_IRQ_uv(struct xpc_partition *part, void *msg, size_t msg_size,
int msg_type)
static void
xpc_send_activate_IRQ_part_uv(struct xpc_partition *part, void *msg,
size_t msg_size, int msg_type)
static void
xpc_send_activate_IRQ_ch_uv(struct xpc_channel *ch, unsigned long *irq_flags,
void *msg, size_t msg_size, int msg_type)
static void
xpc_send_local_activate_IRQ_uv(struct xpc_partition *part, int act_state_req)
static enum xp_retval
xpc_get_partition_rsvd_page_pa_uv(void *buf, u64 *cookie, unsigned long *rp_pa,
size_t *len)
static int
xpc_setup_rsvd_page_uv(struct xpc_rsvd_page *rp)
static void
xpc_allow_hb_uv(short partid)
static void
xpc_disallow_hb_uv(short partid)
static void
xpc_disallow_all_hbs_uv(void)
static void
xpc_increment_heartbeat_uv(void)
static void
xpc_offline_heartbeat_uv(void)
static void
xpc_online_heartbeat_uv(void)
static void
xpc_heartbeat_init_uv(void)
static void
xpc_heartbeat_exit_uv(void)
static enum xp_retval
xpc_get_remote_heartbeat_uv(struct xpc_partition *part)
static void
xpc_request_partition_activation_uv(struct xpc_rsvd_page *remote_rp,
unsigned long remote_rp_gpa, int nasid)
static void
xpc_request_partition_reactivation_uv(struct xpc_partition *part)
static void
xpc_request_partition_deactivation_uv(struct xpc_partition *part)
static void
xpc_cancel_partition_deactivation_request_uv(struct xpc_partition *part)
static void
xpc_init_fifo_uv(struct xpc_fifo_head_uv *head)
static void *
xpc_get_fifo_entry_uv(struct xpc_fifo_head_uv *head)
static void
xpc_put_fifo_entry_uv(struct xpc_fifo_head_uv *head,
struct xpc_fifo_entry_uv *last)
static int
xpc_n_of_fifo_entries_uv(struct xpc_fifo_head_uv *head)
static enum xp_retval
xpc_setup_ch_structures_uv(struct xpc_partition *part)
static void
xpc_teardown_ch_structures_uv(struct xpc_partition *part)
static enum xp_retval
xpc_make_first_contact_uv(struct xpc_partition *part)
static u64
xpc_get_chctl_all_flags_uv(struct xpc_partition *part)
static enum xp_retval
xpc_allocate_send_msg_slot_uv(struct xpc_channel *ch)
static enum xp_retval
xpc_allocate_recv_msg_slot_uv(struct xpc_channel *ch)
static enum xp_retval
xpc_setup_msg_structures_uv(struct xpc_channel *ch)
static void
xpc_teardown_msg_structures_uv(struct xpc_channel *ch)
static void
xpc_send_chctl_closerequest_uv(struct xpc_channel *ch, unsigned long *irq_flags)
static void
xpc_send_chctl_closereply_uv(struct xpc_channel *ch, unsigned long *irq_flags)
static void
xpc_send_chctl_openrequest_uv(struct xpc_channel *ch, unsigned long *irq_flags)
static void
xpc_send_chctl_openreply_uv(struct xpc_channel *ch, unsigned long *irq_flags)
static void
xpc_send_chctl_opencomplete_uv(struct xpc_channel *ch, unsigned long *irq_flags)
static void
xpc_send_chctl_local_msgrequest_uv(struct xpc_partition *part, int ch_number)
static enum xp_retval
xpc_save_remote_msgqueue_pa_uv(struct xpc_channel *ch,
unsigned long gru_mq_desc_gpa)
static void
xpc_indicate_partition_engaged_uv(struct xpc_partition *part)
static void
xpc_indicate_partition_disengaged_uv(struct xpc_partition *part)
static void
xpc_assume_partition_disengaged_uv(short partid)
static int
xpc_partition_engaged_uv(short partid)
static int
xpc_any_partition_engaged_uv(void)
static enum xp_retval
xpc_allocate_msg_slot_uv(struct xpc_channel *ch, u32 flags,
struct xpc_send_msg_slot_uv **address_of_msg_slot)
static void
xpc_free_msg_slot_uv(struct xpc_channel *ch,
struct xpc_send_msg_slot_uv *msg_slot)
static void
xpc_notify_sender_uv(struct xpc_channel *ch,
struct xpc_send_msg_slot_uv *msg_slot,
enum xp_retval reason)
static void
xpc_handle_notify_mq_ack_uv(struct xpc_channel *ch,
struct xpc_notify_mq_msg_uv *msg)
static void
xpc_handle_notify_mq_msg_uv(struct xpc_partition *part,
struct xpc_notify_mq_msg_uv *msg)
static irqreturn_t
xpc_handle_notify_IRQ_uv(int irq, void *dev_id)
static int
xpc_n_of_deliverable_payloads_uv(struct xpc_channel *ch)
static void
xpc_process_msg_chctl_flags_uv(struct xpc_partition *part, int ch_number)
static enum xp_retval
xpc_send_payload_uv(struct xpc_channel *ch, u32 flags, void *payload,
u16 payload_size, u8 notify_type, xpc_notify_func func,
void *key)
static void
xpc_notify_senders_of_disconnect_uv(struct xpc_channel *ch)
static void *
xpc_get_deliverable_payload_uv(struct xpc_channel *ch)
static void
xpc_received_payload_uv(struct xpc_channel *ch, void *payload)
static struct xpc_arch_operations xpc_arch_ops_uv = ;
int
xpc_init_uv(void)
void
xpc_exit_uv(void)
