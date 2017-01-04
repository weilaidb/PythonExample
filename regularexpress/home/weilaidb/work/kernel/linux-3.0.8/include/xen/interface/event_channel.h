#define __XEN_PUBLIC_EVENT_CHANNEL_H__
typedef uint32_t evtchn_port_t;
DEFINE_GUEST_HANDLE(evtchn_port_t);
#define EVTCHNOP_alloc_unbound	  6
struct evtchn_alloc_unbound ;
#define EVTCHNOP_bind_interdomain 0
struct evtchn_bind_interdomain ;
#define EVTCHNOP_bind_virq	  1
struct evtchn_bind_virq ;
#define EVTCHNOP_bind_pirq	  2
struct evtchn_bind_pirq ;
#define EVTCHNOP_bind_ipi	  7
struct evtchn_bind_ipi ;
#define EVTCHNOP_close		  3
struct evtchn_close ;
#define EVTCHNOP_send		  4
struct evtchn_send ;
#define EVTCHNOP_status		  5
struct evtchn_status ;
#define EVTCHNOP_bind_vcpu	  8
struct evtchn_bind_vcpu ;
#define EVTCHNOP_unmask		  9
struct evtchn_unmask ;
struct evtchn_op ;
DEFINE_GUEST_HANDLE_STRUCT(evtchn_op);
