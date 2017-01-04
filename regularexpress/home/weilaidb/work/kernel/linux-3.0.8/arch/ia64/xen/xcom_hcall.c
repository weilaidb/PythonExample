int
xencomm_hypercall_console_io(int cmd, int count, char *str)
EXPORT_SYMBOL_GPL(xencomm_hypercall_console_io);
int
xencomm_hypercall_event_channel_op(int cmd, void *op)
EXPORT_SYMBOL_GPL(xencomm_hypercall_event_channel_op);
int
xencomm_hypercall_xen_version(int cmd, void *arg)
EXPORT_SYMBOL_GPL(xencomm_hypercall_xen_version);
int
xencomm_hypercall_physdev_op(int cmd, void *op)
static int
xencommize_grant_table_op(struct xencomm_mini **xc_area,
unsigned int cmd, void *op, unsigned int count,
struct xencomm_handle **desc)
int
xencomm_hypercall_grant_table_op(unsigned int cmd, void *op,
unsigned int count)
EXPORT_SYMBOL_GPL(xencomm_hypercall_grant_table_op);
int
xencomm_hypercall_sched_op(int cmd, void *arg)
EXPORT_SYMBOL_GPL(xencomm_hypercall_sched_op);
int
xencomm_hypercall_multicall(void *call_list, int nr_calls)
EXPORT_SYMBOL_GPL(xencomm_hypercall_multicall);
int
xencomm_hypercall_callback_op(int cmd, void *arg)
static int
xencommize_memory_reservation(struct xencomm_mini *xc_area,
struct xen_memory_reservation *mop)
int
xencomm_hypercall_memory_op(unsigned int cmd, void *arg)
EXPORT_SYMBOL_GPL(xencomm_hypercall_memory_op);
int
xencomm_hypercall_suspend(unsigned long srec)
long
xencomm_hypercall_vcpu_op(int cmd, int cpu, void *arg)
long
xencomm_hypercall_opt_feature(void *arg)
