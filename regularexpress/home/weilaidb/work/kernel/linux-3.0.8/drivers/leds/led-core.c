DECLARE_RWSEM(leds_list_lock);
EXPORT_SYMBOL_GPL(leds_list_lock);
LIST_HEAD(leds_list);
EXPORT_SYMBOL_GPL(leds_list);
