#define XPC_MAX_PHYSNODES_SN2	(MAX_NUMALINK_NODES / 2)
#define XP_NASID_MASK_BYTES_SN2	((XPC_MAX_PHYSNODES_SN2 + 7) / 8)
#define XP_NASID_MASK_WORDS_SN2	((XPC_MAX_PHYSNODES_SN2 + 63) / 64)
#define XPC_NOTIFY_IRQ_AMOS_SN2		0
#define XPC_ACTIVATE_IRQ_AMOS_SN2	(XPC_NOTIFY_IRQ_AMOS_SN2 + \
XP_MAX_NPARTITIONS_SN2)
#define XPC_ENGAGED_PARTITIONS_AMO_SN2	(XPC_ACTIVATE_IRQ_AMOS_SN2 + \
XP_NASID_MASK_WORDS_SN2)
#define XPC_DEACTIVATE_REQUEST_AMO_SN2	(XPC_ENGAGED_PARTITIONS_AMO_SN2 + 1)
static void *xpc_remote_copy_buffer_base_sn2;
static char *xpc_remote_copy_buffer_sn2;
static struct xpc_vars_sn2 *xpc_vars_sn2;
static struct xpc_vars_part_sn2 *xpc_vars_part_sn2;
static int
xpc_setup_partitions_sn2(void)
static void
xpc_teardown_partitions_sn2(void)
static u64 xpc_sh1_IPI_access_sn2;
static u64 xpc_sh2_IPI_access0_sn2;
static u64 xpc_sh2_IPI_access1_sn2;
static u64 xpc_sh2_IPI_access2_sn2;
static u64 xpc_sh2_IPI_access3_sn2;
static void
xpc_allow_IPI_ops_sn2(void)
static void
xpc_disallow_IPI_ops_sn2(void)
static u64
xpc_receive_IRQ_amo_sn2(struct amo *amo)
static enum xp_retval
xpc_send_IRQ_sn2(struct amo *amo, u64 flag, int nasid, int phys_cpuid,
int vector)
static struct amo *
xpc_init_IRQ_amo_sn2(int index)
static irqreturn_t
xpc_handle_activate_IRQ_sn2(int irq, void *dev_id)
static void
xpc_send_activate_IRQ_sn2(unsigned long amos_page_pa, int from_nasid,
int to_nasid, int to_phys_cpuid)
static void
xpc_send_local_activate_IRQ_sn2(int from_nasid)
static void
xpc_check_for_sent_chctl_flags_sn2(struct xpc_partition *part)
static irqreturn_t
xpc_handle_notify_IRQ_sn2(int irq, void *dev_id)
static void
xpc_check_for_dropped_notify_IRQ_sn2(struct xpc_partition *part)
static void
xpc_send_notify_IRQ_sn2(struct xpc_channel *ch, u8 chctl_flag,
char *chctl_flag_string, unsigned long *irq_flags)
#define XPC_SEND_NOTIFY_IRQ_SN2(_ch, _ipi_f, _irq_f) \
xpc_send_notify_IRQ_sn2(_ch, _ipi_f, #_ipi_f, _irq_f)
static void
xpc_send_local_notify_IRQ_sn2(struct xpc_channel *ch, u8 chctl_flag,
char *chctl_flag_string)
#define XPC_SEND_LOCAL_NOTIFY_IRQ_SN2(_ch, _ipi_f) \
xpc_send_local_notify_IRQ_sn2(_ch, _ipi_f, #_ipi_f)
static void
xpc_send_chctl_closerequest_sn2(struct xpc_channel *ch,
unsigned long *irq_flags)
static void
xpc_send_chctl_closereply_sn2(struct xpc_channel *ch, unsigned long *irq_flags)
static void
xpc_send_chctl_openrequest_sn2(struct xpc_channel *ch, unsigned long *irq_flags)
static void
xpc_send_chctl_openreply_sn2(struct xpc_channel *ch, unsigned long *irq_flags)
static void
xpc_send_chctl_opencomplete_sn2(struct xpc_channel *ch,
unsigned long *irq_flags)
static void
xpc_send_chctl_msgrequest_sn2(struct xpc_channel *ch)
static void
xpc_send_chctl_local_msgrequest_sn2(struct xpc_channel *ch)
static enum xp_retval
xpc_save_remote_msgqueue_pa_sn2(struct xpc_channel *ch,
unsigned long msgqueue_pa)
static void
xpc_indicate_partition_engaged_sn2(struct xpc_partition *part)
static void
xpc_indicate_partition_disengaged_sn2(struct xpc_partition *part)
static void
xpc_assume_partition_disengaged_sn2(short partid)
static int
xpc_partition_engaged_sn2(short partid)
static int
xpc_any_partition_engaged_sn2(void)
static u64 xpc_prot_vec_sn2[MAX_NUMNODES];
static enum xp_retval
xpc_allow_amo_ops_sn2(struct amo *amos_page)
static void
xpc_allow_amo_ops_shub_wars_1_1_sn2(void)
static enum xp_retval
xpc_get_partition_rsvd_page_pa_sn2(void *buf, u64 *cookie, unsigned long *rp_pa,
size_t *len)
static int
xpc_setup_rsvd_page_sn2(struct xpc_rsvd_page *rp)
static int
xpc_hb_allowed_sn2(short partid, void *heartbeating_to_mask)
static void
xpc_allow_hb_sn2(short partid)
static void
xpc_disallow_hb_sn2(short partid)
static void
xpc_disallow_all_hbs_sn2(void)
static void
xpc_increment_heartbeat_sn2(void)
static void
xpc_offline_heartbeat_sn2(void)
static void
xpc_online_heartbeat_sn2(void)
static void
xpc_heartbeat_init_sn2(void)
static void
xpc_heartbeat_exit_sn2(void)
static enum xp_retval
xpc_get_remote_heartbeat_sn2(struct xpc_partition *part)
static enum xp_retval
xpc_get_remote_vars_sn2(unsigned long remote_vars_pa,
struct xpc_vars_sn2 *remote_vars)
static void
xpc_request_partition_activation_sn2(struct xpc_rsvd_page *remote_rp,
unsigned long remote_rp_pa, int nasid)
static void
xpc_request_partition_reactivation_sn2(struct xpc_partition *part)
static void
xpc_request_partition_deactivation_sn2(struct xpc_partition *part)
static void
xpc_cancel_partition_deactivation_request_sn2(struct xpc_partition *part)
static int
xpc_partition_deactivation_requested_sn2(short partid)
static void
xpc_update_partition_info_sn2(struct xpc_partition *part, u8 remote_rp_version,
unsigned long *remote_rp_ts_jiffies,
unsigned long remote_rp_pa,
unsigned long remote_vars_pa,
struct xpc_vars_sn2 *remote_vars)
static void
xpc_identify_activate_IRQ_req_sn2(int nasid)
int
xpc_identify_activate_IRQ_sender_sn2(void)
static void
xpc_process_activate_IRQ_rcvd_sn2(void)
static enum xp_retval
xpc_setup_ch_structures_sn2(struct xpc_partition *part)
static void
xpc_teardown_ch_structures_sn2(struct xpc_partition *part)
static enum xp_retval
xpc_pull_remote_cachelines_sn2(struct xpc_partition *part, void *dst,
const unsigned long src_pa, size_t cnt)
static enum xp_retval
xpc_pull_remote_vars_part_sn2(struct xpc_partition *part)
static enum xp_retval
xpc_make_first_contact_sn2(struct xpc_partition *part)
static u64
xpc_get_chctl_all_flags_sn2(struct xpc_partition *part)
static enum xp_retval
xpc_allocate_local_msgqueue_sn2(struct xpc_channel *ch)
static enum xp_retval
xpc_allocate_remote_msgqueue_sn2(struct xpc_channel *ch)
static enum xp_retval
xpc_setup_msg_structures_sn2(struct xpc_channel *ch)
static void
xpc_teardown_msg_structures_sn2(struct xpc_channel *ch)
static void
xpc_notify_senders_sn2(struct xpc_channel *ch, enum xp_retval reason, s64 put)
static void
xpc_notify_senders_of_disconnect_sn2(struct xpc_channel *ch)
static inline void
xpc_clear_local_msgqueue_flags_sn2(struct xpc_channel *ch)
static inline void
xpc_clear_remote_msgqueue_flags_sn2(struct xpc_channel *ch)
static int
xpc_n_of_deliverable_payloads_sn2(struct xpc_channel *ch)
static void
xpc_process_msg_chctl_flags_sn2(struct xpc_partition *part, int ch_number)
static struct xpc_msg_sn2 *
xpc_pull_remote_msg_sn2(struct xpc_channel *ch, s64 get)
static void *
xpc_get_deliverable_payload_sn2(struct xpc_channel *ch)
static void
xpc_send_msgs_sn2(struct xpc_channel *ch, s64 initial_put)
static enum xp_retval
xpc_allocate_msg_sn2(struct xpc_channel *ch, u32 flags,
struct xpc_msg_sn2 **address_of_msg)
static enum xp_retval
xpc_send_payload_sn2(struct xpc_channel *ch, u32 flags, void *payload,
u16 payload_size, u8 notify_type, xpc_notify_func func,
void *key)
static void
xpc_acknowledge_msgs_sn2(struct xpc_channel *ch, s64 initial_get, u8 msg_flags)
static void
xpc_received_payload_sn2(struct xpc_channel *ch, void *payload)
static struct xpc_arch_operations xpc_arch_ops_sn2 = ;
int
xpc_init_sn2(void)
void
xpc_exit_sn2(void)
