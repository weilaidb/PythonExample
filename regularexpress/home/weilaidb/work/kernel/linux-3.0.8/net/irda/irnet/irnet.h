#define IRNET_H
#define DISCOVERY_NOMASK
#define ADVERTISE_HINT
#define ALLOW_SIMULT_CONNECT
#define DISCOVERY_EVENTS
#define INITIAL_DISCOVERY
#undef STREAM_COMPAT
#undef CONNECT_INDIC_KICK
#undef FAIL_SEND_DISCONNECT
#undef PASS_CONNECT_PACKETS
#undef MISSING_PPP_API
#define BLOCK_WHEN_CONNECT
#define CONNECT_IN_SEND
#undef FLUSH_TO_PPP
#undef SECURE_DEVIRNET
#define DEBUG_CTRL_TRACE	0
#define DEBUG_CTRL_INFO		0
#define DEBUG_CTRL_ERROR	1
#define DEBUG_FS_TRACE		0
#define DEBUG_FS_INFO		0
#define DEBUG_FS_ERROR		1
#define DEBUG_PPP_TRACE		0
#define DEBUG_PPP_INFO		0
#define DEBUG_PPP_ERROR		1
#define DEBUG_MODULE_TRACE	0
#define DEBUG_MODULE_ERROR	1
#define DEBUG_IRDA_SR_TRACE	0
#define DEBUG_IRDA_SR_INFO	0
#define DEBUG_IRDA_SR_ERROR	1
#define DEBUG_IRDA_SOCK_TRACE	0
#define DEBUG_IRDA_SOCK_INFO	0
#define DEBUG_IRDA_SOCK_ERROR	1
#define DEBUG_IRDA_SERV_TRACE	0
#define DEBUG_IRDA_SERV_INFO	0
#define DEBUG_IRDA_SERV_ERROR	1
#define DEBUG_IRDA_TCB_TRACE	0
#define DEBUG_IRDA_CB_INFO	0
#define DEBUG_IRDA_CB_ERROR	1
#define DEBUG_IRDA_OCB_TRACE	0
#define DEBUG_IRDA_OCB_INFO	0
#define DEBUG_IRDA_OCB_ERROR	1
#define DEBUG_ASSERT		0
#define DERROR(dbg, format, args...) \
#define DEBUG(dbg, format, args...) \
#define DENTER(dbg, format, args...) \
#define DPASS(dbg, format, args...) \
#define DEXIT(dbg, format, args...) \
#define DRETURN(ret, dbg, args...) \
#define DABORT(cond, ret, dbg, args...) \
#define DASSERT(cond, ret, dbg, args...) \
#define IRNET_MAGIC	0xB00754
#define IRNET_MAX_EVENTS	8
typedef struct irnet_socket
irnet_socket;
typedef enum irnet_event
irnet_event;
typedef struct irnet_log
irnet_log;
typedef struct irnet_ctrl_channel
irnet_ctrl_channel;
extern int
irda_irnet_create(irnet_socket *);
extern int
irda_irnet_connect(irnet_socket *);
extern void
irda_irnet_destroy(irnet_socket *);
extern int
irda_irnet_init(void);
extern void
irda_irnet_cleanup(void);
extern struct irnet_ctrl_channel	irnet_events;
