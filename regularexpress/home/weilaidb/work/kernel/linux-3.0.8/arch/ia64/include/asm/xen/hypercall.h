#define _ASM_IA64_XEN_HYPERCALL_H
struct xencomm_handle;
extern unsigned long __hypercall(unsigned long a1, unsigned long a2,
unsigned long a3, unsigned long a4,
unsigned long a5, unsigned long cmd);
#define _hypercall0(type, name)					\
()
#define _hypercall1(type, name, a1)				\
()
#define _hypercall2(type, name, a1, a2)				\
()
#define _hypercall3(type, name, a1, a2, a3)			\
()
#define _hypercall4(type, name, a1, a2, a3, a4)			\
()
#define _hypercall5(type, name, a1, a2, a3, a4, a5)		\
()
static inline int
xencomm_arch_hypercall_sched_op(int cmd, struct xencomm_handle *arg)
static inline long
HYPERVISOR_set_timer_op(u64 timeout)
static inline int
xencomm_arch_hypercall_multicall(struct xencomm_handle *call_list,
int nr_calls)
static inline int
xencomm_arch_hypercall_memory_op(unsigned int cmd, struct xencomm_handle *arg)
static inline int
xencomm_arch_hypercall_event_channel_op(int cmd, struct xencomm_handle *arg)
static inline int
xencomm_arch_hypercall_xen_version(int cmd, struct xencomm_handle *arg)
static inline int
xencomm_arch_hypercall_console_io(int cmd, int count,
struct xencomm_handle *str)
static inline int
xencomm_arch_hypercall_physdev_op(int cmd, struct xencomm_handle *arg)
static inline int
xencomm_arch_hypercall_grant_table_op(unsigned int cmd,
struct xencomm_handle *uop,
unsigned int count)
int HYPERVISOR_grant_table_op(unsigned int cmd, void *uop, unsigned int count);
extern int xencomm_arch_hypercall_suspend(struct xencomm_handle *arg);
static inline int
xencomm_arch_hypercall_callback_op(int cmd, struct xencomm_handle *arg)
static inline long
xencomm_arch_hypercall_vcpu_op(int cmd, int cpu, void *arg)
static inline int
HYPERVISOR_physdev_op(int cmd, void *arg)
static inline long
xencomm_arch_hypercall_opt_feature(struct xencomm_handle *arg)
#define HYPERVISOR_update_va_mapping(va, new_val, flags) (0)
#define HYPERVISOR_sched_op xencomm_hypercall_sched_op
#define HYPERVISOR_event_channel_op xencomm_hypercall_event_channel_op
#define HYPERVISOR_callback_op xencomm_hypercall_callback_op
#define HYPERVISOR_multicall xencomm_hypercall_multicall
#define HYPERVISOR_xen_version xencomm_hypercall_xen_version
#define HYPERVISOR_console_io xencomm_hypercall_console_io
#define HYPERVISOR_memory_op xencomm_hypercall_memory_op
#define HYPERVISOR_suspend xencomm_hypercall_suspend
#define HYPERVISOR_vcpu_op xencomm_hypercall_vcpu_op
#define HYPERVISOR_opt_feature xencomm_hypercall_opt_feature
#define HYPERVISOR_mmu_update(req, count, success_count, domid) ()
static inline int
HYPERVISOR_shutdown(
unsigned int reason)
#define MULTI_UVMFLAGS_INDEX 0
static inline void
MULTI_update_va_mapping(
struct multicall_entry *mcl, unsigned long va,
pte_t new_val, unsigned long flags)
static inline void
MULTI_grant_table_op(struct multicall_entry *mcl, unsigned int cmd,
void *uop, unsigned int count)
static inline void
MULTI_mmu_update(struct multicall_entry *mcl, struct mmu_update *req,
int count, int *success_count, domid_t domid)
