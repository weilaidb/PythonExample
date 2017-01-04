#define _LINUX_KMSG_DUMP_H
enum kmsg_dump_reason ;
struct kmsg_dumper ;
void kmsg_dump(enum kmsg_dump_reason reason);
int kmsg_dump_register(struct kmsg_dumper *dumper);
int kmsg_dump_unregister(struct kmsg_dumper *dumper);
static inline void kmsg_dump(enum kmsg_dump_reason reason)
static inline int kmsg_dump_register(struct kmsg_dumper *dumper)
static inline int kmsg_dump_unregister(struct kmsg_dumper *dumper)
