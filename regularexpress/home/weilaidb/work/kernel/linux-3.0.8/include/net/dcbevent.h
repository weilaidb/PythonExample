#define _DCB_EVENT_H
enum dcbevent_notif_type ;
extern int register_dcbevent_notifier(struct notifier_block *nb);
extern int unregister_dcbevent_notifier(struct notifier_block *nb);
extern int call_dcbevent_notifiers(unsigned long val, void *v);
