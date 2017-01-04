#define _XEN_MULTICALLS_H
struct multicall_space
;
struct multicall_space __xen_mc_entry(size_t args);
DECLARE_PER_CPU(unsigned long, xen_mc_irq_flags);
static inline void xen_mc_batch(void)
static inline struct multicall_space xen_mc_entry(size_t args)
void xen_mc_flush(void);
static inline void xen_mc_issue(unsigned mode)
void xen_mc_callback(void (*fn)(void *), void *data);
struct multicall_space xen_mc_extend_args(unsigned long op, size_t arg_size);
