static ATOMIC_NOTIFIER_HEAD(dcbevent_notif_chain);
int register_dcbevent_notifier(struct notifier_block *nb)
EXPORT_SYMBOL(register_dcbevent_notifier);
int unregister_dcbevent_notifier(struct notifier_block *nb)
EXPORT_SYMBOL(unregister_dcbevent_notifier);
int call_dcbevent_notifiers(unsigned long val, void *v)
