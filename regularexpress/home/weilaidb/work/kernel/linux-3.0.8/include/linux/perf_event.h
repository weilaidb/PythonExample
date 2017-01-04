#define _LINUX_PERF_EVENT_H
enum perf_type_id ;
enum perf_hw_id ;
enum perf_hw_cache_id ;
enum perf_hw_cache_op_id ;
enum perf_hw_cache_op_result_id ;
enum perf_sw_ids ;
enum perf_event_sample_format ;
enum perf_event_read_format ;
#define PERF_ATTR_SIZE_VER0	64
struct perf_event_attr ;
#define PERF_EVENT_IOC_ENABLE		_IO ('$', 0)
#define PERF_EVENT_IOC_DISABLE		_IO ('$', 1)
#define PERF_EVENT_IOC_REFRESH		_IO ('$', 2)
#define PERF_EVENT_IOC_RESET		_IO ('$', 3)
#define PERF_EVENT_IOC_PERIOD		_IOW('$', 4, __u64)
#define PERF_EVENT_IOC_SET_OUTPUT	_IO ('$', 5)
#define PERF_EVENT_IOC_SET_FILTER	_IOW('$', 6, char *)
enum perf_event_ioc_flags ;
struct perf_event_mmap_page ;
#define PERF_RECORD_MISC_CPUMODE_MASK		(7 << 0)
#define PERF_RECORD_MISC_CPUMODE_UNKNOWN	(0 << 0)
#define PERF_RECORD_MISC_KERNEL			(1 << 0)
#define PERF_RECORD_MISC_USER			(2 << 0)
#define PERF_RECORD_MISC_HYPERVISOR		(3 << 0)
#define PERF_RECORD_MISC_GUEST_KERNEL		(4 << 0)
#define PERF_RECORD_MISC_GUEST_USER		(5 << 0)
#define PERF_RECORD_MISC_EXACT_IP		(1 << 14)
#define PERF_RECORD_MISC_EXT_RESERVED		(1 << 15)
struct perf_event_header ;
enum perf_event_type ;
enum perf_callchain_context ;
#define PERF_FLAG_FD_NO_GROUP		(1U << 0)
#define PERF_FLAG_FD_OUTPUT		(1U << 1)
#define PERF_FLAG_PID_CGROUP		(1U << 2)
# include <linux/cgroup.h>
# include <asm/perf_event.h>
# include <asm/local64.h>
struct perf_guest_info_callbacks ;
#define PERF_MAX_STACK_DEPTH		255
struct perf_callchain_entry ;
struct perf_raw_record ;
struct perf_branch_entry ;
struct perf_branch_stack ;
struct task_struct;
struct hw_perf_event ;
#define PERF_HES_STOPPED	0x01
#define PERF_HES_UPTODATE	0x02
#define PERF_HES_ARCH		0x04
struct perf_event;
#define PERF_EVENT_TXN 0x1
struct pmu ;
enum perf_event_active_state ;
struct file;
#define PERF_BUFFER_WRITABLE		0x01
struct perf_buffer ;
struct perf_sample_data;
typedef void (*perf_overflow_handler_t)(struct perf_event *, int,
struct perf_sample_data *,
struct pt_regs *regs);
enum perf_group_flag ;
#define SWEVENT_HLIST_BITS		8
#define SWEVENT_HLIST_SIZE		(1 << SWEVENT_HLIST_BITS)
struct swevent_hlist ;
#define PERF_ATTACH_CONTEXT	0x01
#define PERF_ATTACH_GROUP	0x02
#define PERF_ATTACH_TASK	0x04
struct perf_cgroup_info ;
struct perf_cgroup ;
struct perf_event ;
enum perf_event_context_type ;
struct perf_event_context ;
#define PERF_NR_CONTEXTS	4
struct perf_cpu_context ;
struct perf_output_handle ;
extern int perf_pmu_register(struct pmu *pmu, char *name, int type);
extern void perf_pmu_unregister(struct pmu *pmu);
extern int perf_num_counters(void);
extern const char *perf_pmu_name(void);
extern void __perf_event_task_sched_in(struct task_struct *task);
extern void __perf_event_task_sched_out(struct task_struct *task, struct task_struct *next);
extern int perf_event_init_task(struct task_struct *child);
extern void perf_event_exit_task(struct task_struct *child);
extern void perf_event_free_task(struct task_struct *task);
extern void perf_event_delayed_put(struct task_struct *task);
extern void perf_event_print_debug(void);
extern void perf_pmu_disable(struct pmu *pmu);
extern void perf_pmu_enable(struct pmu *pmu);
extern int perf_event_task_disable(void);
extern int perf_event_task_enable(void);
extern void perf_event_update_userpage(struct perf_event *event);
extern int perf_event_release_kernel(struct perf_event *event);
extern struct perf_event *
perf_event_create_kernel_counter(struct perf_event_attr *attr,
int cpu,
struct task_struct *task,
perf_overflow_handler_t callback);
extern u64 perf_event_read_value(struct perf_event *event,
u64 *enabled, u64 *running);
struct perf_sample_data ;
static inline void perf_sample_data_init(struct perf_sample_data *data, u64 addr)
extern void perf_output_sample(struct perf_output_handle *handle,
struct perf_event_header *header,
struct perf_sample_data *data,
struct perf_event *event);
extern void perf_prepare_sample(struct perf_event_header *header,
struct perf_sample_data *data,
struct perf_event *event,
struct pt_regs *regs);
extern int perf_event_overflow(struct perf_event *event, int nmi,
struct perf_sample_data *data,
struct pt_regs *regs);
static inline bool is_sampling_event(struct perf_event *event)
static inline int is_software_event(struct perf_event *event)
extern struct jump_label_key perf_swevent_enabled[PERF_COUNT_SW_MAX];
extern void __perf_sw_event(u32, u64, int, struct pt_regs *, u64);
static inline void perf_arch_fetch_caller_regs(struct pt_regs *regs, unsigned long ip)
static inline void perf_fetch_caller_regs(struct pt_regs *regs)
static __always_inline void
perf_sw_event(u32 event_id, u64 nr, int nmi, struct pt_regs *regs, u64 addr)
extern struct jump_label_key perf_sched_events;
static inline void perf_event_task_sched_in(struct task_struct *task)
static inline void perf_event_task_sched_out(struct task_struct *task, struct task_struct *next)
extern void perf_event_mmap(struct vm_area_struct *vma);
extern struct perf_guest_info_callbacks *perf_guest_cbs;
extern int perf_register_guest_info_callbacks(struct perf_guest_info_callbacks *callbacks);
extern int perf_unregister_guest_info_callbacks(struct perf_guest_info_callbacks *callbacks);
extern void perf_event_comm(struct task_struct *tsk);
extern void perf_event_fork(struct task_struct *tsk);
DECLARE_PER_CPU(struct perf_callchain_entry, perf_callchain_entry);
extern void perf_callchain_user(struct perf_callchain_entry *entry, struct pt_regs *regs);
extern void perf_callchain_kernel(struct perf_callchain_entry *entry, struct pt_regs *regs);
static inline void perf_callchain_store(struct perf_callchain_entry *entry, u64 ip)
extern int sysctl_perf_event_paranoid;
extern int sysctl_perf_event_mlock;
extern int sysctl_perf_event_sample_rate;
extern int perf_proc_update_handler(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp,
loff_t *ppos);
static inline bool perf_paranoid_tracepoint_raw(void)
static inline bool perf_paranoid_cpu(void)
static inline bool perf_paranoid_kernel(void)
extern void perf_event_init(void);
extern void perf_tp_event(u64 addr, u64 count, void *record,
int entry_size, struct pt_regs *regs,
struct hlist_head *head, int rctx);
extern void perf_bp_event(struct perf_event *event, void *data);
# define perf_misc_flags(regs) \
(user_mode(regs) ? PERF_RECORD_MISC_USER : PERF_RECORD_MISC_KERNEL)
# define perf_instruction_pointer(regs)	instruction_pointer(regs)
extern int perf_output_begin(struct perf_output_handle *handle,
struct perf_event *event, unsigned int size,
int nmi, int sample);
extern void perf_output_end(struct perf_output_handle *handle);
extern void perf_output_copy(struct perf_output_handle *handle,
const void *buf, unsigned int len);
extern int perf_swevent_get_recursion_context(void);
extern void perf_swevent_put_recursion_context(int rctx);
extern void perf_event_enable(struct perf_event *event);
extern void perf_event_disable(struct perf_event *event);
extern void perf_event_task_tick(void);
static inline void
perf_event_task_sched_in(struct task_struct *task)
static inline void
perf_event_task_sched_out(struct task_struct *task,
struct task_struct *next)
static inline int perf_event_init_task(struct task_struct *child)
static inline void perf_event_exit_task(struct task_struct *child)
static inline void perf_event_free_task(struct task_struct *task)
static inline void perf_event_delayed_put(struct task_struct *task)
static inline void perf_event_print_debug(void)
static inline int perf_event_task_disable(void)
static inline int perf_event_task_enable(void)
static inline void
perf_sw_event(u32 event_id, u64 nr, int nmi,
struct pt_regs *regs, u64 addr)
static inline void
perf_bp_event(struct perf_event *event, void *data)
static inline int perf_register_guest_info_callbacks
(struct perf_guest_info_callbacks *callbacks)
static inline int perf_unregister_guest_info_callbacks
(struct perf_guest_info_callbacks *callbacks)
static inline void perf_event_mmap(struct vm_area_struct *vma)
static inline void perf_event_comm(struct task_struct *tsk)
static inline void perf_event_fork(struct task_struct *tsk)
static inline void perf_event_init(void)
static inline int  perf_swevent_get_recursion_context(void)
static inline void perf_swevent_put_recursion_context(int rctx)
static inline void perf_event_enable(struct perf_event *event)
static inline void perf_event_disable(struct perf_event *event)
static inline void perf_event_task_tick(void)
#define perf_output_put(handle, x) perf_output_copy((handle), &(x), sizeof(x))
#define perf_cpu_notifier(fn)						\
do  while (0)
