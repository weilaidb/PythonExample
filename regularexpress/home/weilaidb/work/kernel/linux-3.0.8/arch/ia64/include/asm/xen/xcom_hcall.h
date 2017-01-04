#define _ASM_IA64_XEN_XCOM_HCALL_H
extern int xencomm_hypercall_console_io(int cmd, int count, char *str);
extern int xencomm_hypercall_event_channel_op(int cmd, void *op);
extern int xencomm_hypercall_xen_version(int cmd, void *arg);
extern int xencomm_hypercall_physdev_op(int cmd, void *op);
extern int xencomm_hypercall_grant_table_op(unsigned int cmd, void *op,
unsigned int count);
extern int xencomm_hypercall_sched_op(int cmd, void *arg);
extern int xencomm_hypercall_multicall(void *call_list, int nr_calls);
extern int xencomm_hypercall_callback_op(int cmd, void *arg);
extern int xencomm_hypercall_memory_op(unsigned int cmd, void *arg);
extern int xencomm_hypercall_suspend(unsigned long srec);
extern long xencomm_hypercall_vcpu_op(int cmd, int cpu, void *arg);
extern long xencomm_hypercall_opt_feature(void *arg);
