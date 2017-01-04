static ATOMIC_NOTIFIER_HEAD(netevent_notif_chain);
int register_netevent_notifier(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(register_netevent_notifier);
int unregister_netevent_notifier(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(unregister_netevent_notifier);
int call_netevent_notifiers(unsigned long val, void *v)
EXPORT_SYMBOL_GPL(call_netevent_notifiers);
