#define _DRIVERS_MISC_SGIXP_XPC_H
#define _XPC_VERSION(_maj, _min)	(((_maj) << 4) | ((_min) & 0xf))
#define XPC_VERSION_MAJOR(_v)		((_v) >> 4)
#define XPC_VERSION_MINOR(_v)		((_v) & 0xf)
#define XPC_HB_DEFAULT_INTERVAL		5
#define XPC_HB_CHECK_DEFAULT_INTERVAL	20
#define XPC_HB_CHECK_THREAD_NAME	"xpc_hb"
#define XPC_HB_CHECK_CPU		0
#define XPC_DISCOVERY_THREAD_NAME	"xpc_discovery"
struct xpc_rsvd_page ;
#define XPC_RP_VERSION _XPC_VERSION(3, 0)
struct xpc_vars_sn2 ;
#define XPC_V_VERSION _XPC_VERSION(3, 1)
struct xpc_vars_part_sn2 ;
#define XPC_VP_MAGIC1_SN2 0x0053524156435058L
#define XPC_VP_MAGIC2_SN2 0x0073726176435058L
#define XPC_RP_HEADER_SIZE	L1_CACHE_ALIGN(sizeof(struct xpc_rsvd_page))
#define XPC_RP_VARS_SIZE	L1_CACHE_ALIGN(sizeof(struct xpc_vars_sn2))
#define XPC_RP_PART_NASIDS(_rp) ((unsigned long *)((u8 *)(_rp) + \
XPC_RP_HEADER_SIZE))
#define XPC_RP_MACH_NASIDS(_rp) (XPC_RP_PART_NASIDS(_rp) + \
xpc_nasid_mask_nlongs)
#define XPC_RP_VARS(_rp)	((struct xpc_vars_sn2 *) \
(XPC_RP_MACH_NASIDS(_rp) + \
xpc_nasid_mask_nlongs))
struct xpc_heartbeat_uv ;
struct xpc_gru_mq_uv ;
struct xpc_activate_mq_msghdr_uv ;
#define XPC_ACTIVATE_MQ_MSG_SYNC_ACT_STATE_UV		0
#define XPC_ACTIVATE_MQ_MSG_ACTIVATE_REQ_UV		1
#define XPC_ACTIVATE_MQ_MSG_DEACTIVATE_REQ_UV		2
#define XPC_ACTIVATE_MQ_MSG_CHCTL_CLOSEREQUEST_UV	3
#define XPC_ACTIVATE_MQ_MSG_CHCTL_CLOSEREPLY_UV		4
#define XPC_ACTIVATE_MQ_MSG_CHCTL_OPENREQUEST_UV	5
#define XPC_ACTIVATE_MQ_MSG_CHCTL_OPENREPLY_UV		6
#define XPC_ACTIVATE_MQ_MSG_CHCTL_OPENCOMPLETE_UV	7
#define XPC_ACTIVATE_MQ_MSG_MARK_ENGAGED_UV		8
#define XPC_ACTIVATE_MQ_MSG_MARK_DISENGAGED_UV		9
struct xpc_activate_mq_msg_uv ;
struct xpc_activate_mq_msg_activate_req_uv ;
struct xpc_activate_mq_msg_deactivate_req_uv ;
struct xpc_activate_mq_msg_chctl_closerequest_uv ;
struct xpc_activate_mq_msg_chctl_closereply_uv ;
struct xpc_activate_mq_msg_chctl_openrequest_uv ;
struct xpc_activate_mq_msg_chctl_openreply_uv ;
struct xpc_activate_mq_msg_chctl_opencomplete_uv ;
#define XPC_PACK_ARGS(_arg1, _arg2) \
((((u64)_arg1) & 0xffffffff) | \
((((u64)_arg2) & 0xffffffff) << 32))
#define XPC_UNPACK_ARG1(_args)	(((u64)_args) & 0xffffffff)
#define XPC_UNPACK_ARG2(_args)	((((u64)_args) >> 32) & 0xffffffff)
struct xpc_gp_sn2 ;
#define XPC_GP_SIZE \
L1_CACHE_ALIGN(sizeof(struct xpc_gp_sn2) * XPC_MAX_NCHANNELS)
struct xpc_openclose_args ;
#define XPC_OPENCLOSE_ARGS_SIZE \
L1_CACHE_ALIGN(sizeof(struct xpc_openclose_args) * \
XPC_MAX_NCHANNELS)
struct xpc_fifo_entry_uv ;
struct xpc_fifo_head_uv ;
struct xpc_msg_sn2 ;
#define	XPC_M_SN2_DONE		0x01
#define	XPC_M_SN2_READY		0x02
#define	XPC_M_SN2_INTERRUPT	0x04
struct xpc_notify_mq_msghdr_uv ;
struct xpc_notify_mq_msg_uv ;
struct xpc_notify_sn2 ;
#define	XPC_N_CALL	0x01
struct xpc_send_msg_slot_uv ;
struct xpc_channel_sn2 ;
struct xpc_channel_uv ;
struct xpc_channel  ____cacheline_aligned;
#define	XPC_C_WASCONNECTED	0x00000001
#define XPC_C_ROPENCOMPLETE	0x00000002
#define XPC_C_OPENCOMPLETE	0x00000004
#define	XPC_C_ROPENREPLY	0x00000008
#define	XPC_C_OPENREPLY		0x00000010
#define	XPC_C_ROPENREQUEST	0x00000020
#define	XPC_C_OPENREQUEST	0x00000040
#define	XPC_C_SETUP		0x00000080
#define	XPC_C_CONNECTEDCALLOUT	0x00000100
#define	XPC_C_CONNECTEDCALLOUT_MADE \
0x00000200
#define	XPC_C_CONNECTED		0x00000400
#define	XPC_C_CONNECTING	0x00000800
#define	XPC_C_RCLOSEREPLY	0x00001000
#define	XPC_C_CLOSEREPLY	0x00002000
#define	XPC_C_RCLOSEREQUEST	0x00004000
#define	XPC_C_CLOSEREQUEST	0x00008000
#define	XPC_C_DISCONNECTED	0x00010000
#define	XPC_C_DISCONNECTING	0x00020000
#define	XPC_C_DISCONNECTINGCALLOUT \
0x00040000
#define	XPC_C_DISCONNECTINGCALLOUT_MADE \
0x00080000
#define	XPC_C_WDISCONNECT	0x00100000
union xpc_channel_ctl_flags ;
#define	XPC_CHCTL_CLOSEREQUEST	0x01
#define	XPC_CHCTL_CLOSEREPLY	0x02
#define	XPC_CHCTL_OPENREQUEST	0x04
#define	XPC_CHCTL_OPENREPLY	0x08
#define XPC_CHCTL_OPENCOMPLETE	0x10
#define	XPC_CHCTL_MSGREQUEST	0x20
#define XPC_OPENCLOSE_CHCTL_FLAGS \
(XPC_CHCTL_CLOSEREQUEST | XPC_CHCTL_CLOSEREPLY | \
XPC_CHCTL_OPENREQUEST | XPC_CHCTL_OPENREPLY | \
XPC_CHCTL_OPENCOMPLETE)
#define XPC_MSG_CHCTL_FLAGS	XPC_CHCTL_MSGREQUEST
static inline int
xpc_any_openclose_chctl_flags_set(union xpc_channel_ctl_flags *chctl)
static inline int
xpc_any_msg_chctl_flags_set(union xpc_channel_ctl_flags *chctl)
struct xpc_partition_sn2 ;
struct xpc_partition_uv ;
#define XPC_P_CACHED_ACTIVATE_GRU_MQ_DESC_UV	0x00000001
#define XPC_P_ENGAGED_UV			0x00000002
#define XPC_P_ASR_ACTIVATE_UV		0x01
#define XPC_P_ASR_REACTIVATE_UV		0x02
#define XPC_P_ASR_DEACTIVATE_UV		0x03
struct xpc_partition  ____cacheline_aligned;
struct xpc_arch_operations ;
#define	XPC_P_AS_INACTIVE	0x00
#define XPC_P_AS_ACTIVATION_REQ	0x01
#define XPC_P_AS_ACTIVATING	0x02
#define XPC_P_AS_ACTIVE		0x03
#define XPC_P_AS_DEACTIVATING	0x04
#define XPC_DEACTIVATE_PARTITION(_p, _reason) \
xpc_deactivate_partition(__LINE__, (_p), (_reason))
#define XPC_P_SS_UNSET		0x00
#define XPC_P_SS_SETUP		0x01
#define XPC_P_SS_WTEARDOWN	0x02
#define XPC_P_SS_TORNDOWN	0x03
#define XPC_DROPPED_NOTIFY_IRQ_WAIT_INTERVAL	(0.25 * HZ)
#define XPC_DISENGAGE_DEFAULT_TIMELIMIT		90
#define XPC_DEACTIVATE_PRINTMSG_INTERVAL	10
#define XPC_PARTID(_p)	((short)((_p) - &xpc_partitions[0]))
extern struct xpc_registration xpc_registrations[];
extern struct device *xpc_part;
extern struct device *xpc_chan;
extern struct xpc_arch_operations xpc_arch_ops;
extern int xpc_disengage_timelimit;
extern int xpc_disengage_timedout;
extern int xpc_activate_IRQ_rcvd;
extern spinlock_t xpc_activate_IRQ_rcvd_lock;
extern wait_queue_head_t xpc_activate_IRQ_wq;
extern void *xpc_kzalloc_cacheline_aligned(size_t, gfp_t, void **);
extern void xpc_activate_partition(struct xpc_partition *);
extern void xpc_activate_kthreads(struct xpc_channel *, int);
extern void xpc_create_kthreads(struct xpc_channel *, int, int);
extern void xpc_disconnect_wait(int);
extern int xpc_init_sn2(void);
extern void xpc_exit_sn2(void);
extern int xpc_init_uv(void);
extern void xpc_exit_uv(void);
extern int xpc_exiting;
extern int xpc_nasid_mask_nlongs;
extern struct xpc_rsvd_page *xpc_rsvd_page;
extern unsigned long *xpc_mach_nasids;
extern struct xpc_partition *xpc_partitions;
extern void *xpc_kmalloc_cacheline_aligned(size_t, gfp_t, void **);
extern int xpc_setup_rsvd_page(void);
extern void xpc_teardown_rsvd_page(void);
extern int xpc_identify_activate_IRQ_sender(void);
extern int xpc_partition_disengaged(struct xpc_partition *);
extern enum xp_retval xpc_mark_partition_active(struct xpc_partition *);
extern void xpc_mark_partition_inactive(struct xpc_partition *);
extern void xpc_discovery(void);
extern enum xp_retval xpc_get_remote_rp(int, unsigned long *,
struct xpc_rsvd_page *,
unsigned long *);
extern void xpc_deactivate_partition(const int, struct xpc_partition *,
enum xp_retval);
extern enum xp_retval xpc_initiate_partid_to_nasids(short, void *);
extern void xpc_initiate_connect(int);
extern void xpc_initiate_disconnect(int);
extern enum xp_retval xpc_allocate_msg_wait(struct xpc_channel *);
extern enum xp_retval xpc_initiate_send(short, int, u32, void *, u16);
extern enum xp_retval xpc_initiate_send_notify(short, int, u32, void *, u16,
xpc_notify_func, void *);
extern void xpc_initiate_received(short, int, void *);
extern void xpc_process_sent_chctl_flags(struct xpc_partition *);
extern void xpc_connected_callout(struct xpc_channel *);
extern void xpc_deliver_payload(struct xpc_channel *);
extern void xpc_disconnect_channel(const int, struct xpc_channel *,
enum xp_retval, unsigned long *);
extern void xpc_disconnect_callout(struct xpc_channel *, enum xp_retval);
extern void xpc_partition_going_down(struct xpc_partition *, enum xp_retval);
static inline void
xpc_wakeup_channel_mgr(struct xpc_partition *part)
static inline void
xpc_msgqueue_ref(struct xpc_channel *ch)
static inline void
xpc_msgqueue_deref(struct xpc_channel *ch)
#define XPC_DISCONNECT_CHANNEL(_ch, _reason, _irqflgs) \
xpc_disconnect_channel(__LINE__, _ch, _reason, _irqflgs)
static inline void
xpc_part_deref(struct xpc_partition *part)
static inline int
xpc_part_ref(struct xpc_partition *part)
#define XPC_SET_REASON(_p, _reason, _line) \
