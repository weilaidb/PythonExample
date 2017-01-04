#define _NET_EVENT_H
struct dst_entry;
struct netevent_redirect ;
enum netevent_notif_type ;
extern int register_netevent_notifier(struct notifier_block *nb);
extern int unregister_netevent_notifier(struct notifier_block *nb);
extern int call_netevent_notifiers(unsigned long val, void *v);
