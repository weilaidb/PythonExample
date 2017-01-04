static BLOCKING_NOTIFIER_HEAD(fb_notifier_list);
int fb_register_client(struct notifier_block *nb)
EXPORT_SYMBOL(fb_register_client);
int fb_unregister_client(struct notifier_block *nb)
EXPORT_SYMBOL(fb_unregister_client);
int fb_notifier_call_chain(unsigned long val, void *v)
EXPORT_SYMBOL_GPL(fb_notifier_call_chain);
