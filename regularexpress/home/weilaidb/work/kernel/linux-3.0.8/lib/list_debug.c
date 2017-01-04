void __list_add(struct list_head *new,
struct list_head *prev,
struct list_head *next)
EXPORT_SYMBOL(__list_add);
void __list_del_entry(struct list_head *entry)
EXPORT_SYMBOL(__list_del_entry);
void list_del(struct list_head *entry)
EXPORT_SYMBOL(list_del);
