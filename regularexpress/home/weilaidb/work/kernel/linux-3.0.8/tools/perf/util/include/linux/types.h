#define _PERF_LINUX_TYPES_H_
#define DECLARE_BITMAP(name,bits) \
unsigned long name[BITS_TO_LONGS(bits)]
struct list_head ;
struct hlist_head ;
struct hlist_node ;
