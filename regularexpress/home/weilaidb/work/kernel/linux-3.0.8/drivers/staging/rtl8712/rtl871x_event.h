#define _RTL871x_EVENT_H_
struct survey_event	;
struct surveydone_event ;
struct joinbss_event ;
struct stassoc_event ;
struct stadel_event ;
struct addba_event ;
#define GEN_EVT_CODE(event)	event ## _EVT_
struct fwevent ;
#define C2HEVENT_SZ			32
struct event_node ;
struct c2hevent_queue ;
#define NETWORK_QUEUE_SZ	4
struct network_queue ;
struct ADDBA_Req_Report_parm ;
