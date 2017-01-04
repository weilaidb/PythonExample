#define _LINUX_AVERAGE_H
struct ewma ;
extern void ewma_init(struct ewma *avg, unsigned long factor,
unsigned long weight);
extern struct ewma *ewma_add(struct ewma *avg, unsigned long val);
static inline unsigned long ewma_read(const struct ewma *avg)
