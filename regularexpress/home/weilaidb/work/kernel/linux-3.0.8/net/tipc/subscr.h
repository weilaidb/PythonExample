#define _TIPC_SUBSCR_H
struct subscription;
typedef void (*tipc_subscr_event) (struct subscription *sub,
u32 found_lower, u32 found_upper,
u32 event, u32 port_ref, u32 node);
struct subscription ;
int tipc_subscr_overlap(struct subscription *sub,
u32 found_lower,
u32 found_upper);
void tipc_subscr_report_overlap(struct subscription *sub,
u32 found_lower,
u32 found_upper,
u32 event,
u32 port_ref,
u32 node,
int must_report);
int tipc_subscr_start(void);
void tipc_subscr_stop(void);
