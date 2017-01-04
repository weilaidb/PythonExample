struct remote_function_call ;
static void remote_function(void *data)
static int
task_function_call(struct task_struct *p, int (*func) (void *info), void *info)
static int cpu_function_call(int cpu, int (*func) (void *info), void *info)
#define PERF_FLAG_ALL (PERF_FLAG_FD_NO_GROUP |\
PERF_FLAG_FD_OUTPUT  |\
PERF_FLAG_PID_CGROUP)
enum event_type_t ;
struct jump_label_key perf_sched_events __read_mostly;
static DEFINE_PER_CPU(atomic_t, perf_cgroup_events);
static atomic_t nr_mmap_events __read_mostly;
static atomic_t nr_comm_events __read_mostly;
static atomic_t nr_task_events __read_mostly;
static LIST_HEAD(pmus);
static DEFINE_MUTEX(pmus_lock);
static struct srcu_struct pmus_srcu;
int sysctl_perf_event_paranoid __read_mostly = 1;
int sysctl_perf_event_mlock __read_mostly = 512 + (PAGE_SIZE / 1024);
#define DEFAULT_MAX_SAMPLE_RATE 100000
int sysctl_perf_event_sample_rate __read_mostly = DEFAULT_MAX_SAMPLE_RATE;
static int max_samples_per_tick __read_mostly =
DIV_ROUND_UP(DEFAULT_MAX_SAMPLE_RATE, HZ);
int perf_proc_update_handler(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp,
loff_t *ppos)
static atomic64_t perf_event_id;
static void cpu_ctx_sched_out(struct perf_cpu_context *cpuctx,
enum event_type_t event_type);
static void cpu_ctx_sched_in(struct perf_cpu_context *cpuctx,
enum event_type_t event_type,
struct task_struct *task);
static void update_context_time(struct perf_event_context *ctx);
static u64 perf_event_time(struct perf_event *event);
void __weak perf_event_print_debug(void)
extern __weak const char *perf_pmu_name(void)
static inline u64 perf_clock(void)
static inline struct perf_cpu_context *
__get_cpu_context(struct perf_event_context *ctx)
static inline struct perf_cgroup *
perf_cgroup_from_task(struct task_struct *task)
static inline bool
perf_cgroup_match(struct perf_event *event)
static inline void perf_get_cgroup(struct perf_event *event)
static inline void perf_put_cgroup(struct perf_event *event)
static inline void perf_detach_cgroup(struct perf_event *event)
static inline int is_cgroup_event(struct perf_event *event)
static inline u64 perf_cgroup_event_time(struct perf_event *event)
static inline void __update_cgrp_time(struct perf_cgroup *cgrp)
static inline void update_cgrp_time_from_cpuctx(struct perf_cpu_context *cpuctx)
static inline void update_cgrp_time_from_event(struct perf_event *event)
static inline void
perf_cgroup_set_timestamp(struct task_struct *task,
struct perf_event_context *ctx)
#define PERF_CGROUP_SWOUT	0x1
#define PERF_CGROUP_SWIN	0x2
void perf_cgroup_switch(struct task_struct *task, int mode)
static inline void perf_cgroup_sched_out(struct task_struct *task)
static inline void perf_cgroup_sched_in(struct task_struct *task)
static inline int perf_cgroup_connect(int fd, struct perf_event *event,
struct perf_event_attr *attr,
struct perf_event *group_leader)
static inline void
perf_cgroup_set_shadow_time(struct perf_event *event, u64 now)
static inline void
perf_cgroup_defer_enabled(struct perf_event *event)
static inline void
perf_cgroup_mark_enabled(struct perf_event *event,
struct perf_event_context *ctx)
static inline bool
perf_cgroup_match(struct perf_event *event)
static inline void perf_detach_cgroup(struct perf_event *event)
static inline int is_cgroup_event(struct perf_event *event)
static inline u64 perf_cgroup_event_cgrp_time(struct perf_event *event)
static inline void update_cgrp_time_from_event(struct perf_event *event)
static inline void update_cgrp_time_from_cpuctx(struct perf_cpu_context *cpuctx)
static inline void perf_cgroup_sched_out(struct task_struct *task)
static inline void perf_cgroup_sched_in(struct task_struct *task)
static inline int perf_cgroup_connect(pid_t pid, struct perf_event *event,
struct perf_event_attr *attr,
struct perf_event *group_leader)
static inline void
perf_cgroup_set_timestamp(struct task_struct *task,
struct perf_event_context *ctx)
void
perf_cgroup_switch(struct task_struct *task, struct task_struct *next)
static inline void
perf_cgroup_set_shadow_time(struct perf_event *event, u64 now)
static inline u64 perf_cgroup_event_time(struct perf_event *event)
static inline void
perf_cgroup_defer_enabled(struct perf_event *event)
static inline void
perf_cgroup_mark_enabled(struct perf_event *event,
struct perf_event_context *ctx)
void perf_pmu_disable(struct pmu *pmu)
void perf_pmu_enable(struct pmu *pmu)
static DEFINE_PER_CPU(struct list_head, rotation_list);
static void perf_pmu_rotate_start(struct pmu *pmu)
static void get_ctx(struct perf_event_context *ctx)
static void put_ctx(struct perf_event_context *ctx)
static void unclone_ctx(struct perf_event_context *ctx)
static u32 perf_event_pid(struct perf_event *event, struct task_struct *p)
static u32 perf_event_tid(struct perf_event *event, struct task_struct *p)
static u64 primary_event_id(struct perf_event *event)
static struct perf_event_context *
perf_lock_task_context(struct task_struct *task, int ctxn, unsigned long *flags)
static struct perf_event_context *
perf_pin_task_context(struct task_struct *task, int ctxn)
static void perf_unpin_context(struct perf_event_context *ctx)
static void update_context_time(struct perf_event_context *ctx)
static u64 perf_event_time(struct perf_event *event)
static void update_event_times(struct perf_event *event)
static void update_group_times(struct perf_event *leader)
static struct list_head *
ctx_group_list(struct perf_event *event, struct perf_event_context *ctx)
static void
list_add_event(struct perf_event *event, struct perf_event_context *ctx)
static void perf_event__read_size(struct perf_event *event)
static void perf_event__header_size(struct perf_event *event)
static void perf_event__id_header_size(struct perf_event *event)
static void perf_group_attach(struct perf_event *event)
static void
list_del_event(struct perf_event *event, struct perf_event_context *ctx)
static void perf_group_detach(struct perf_event *event)
static inline int
event_filter_match(struct perf_event *event)
static void
event_sched_out(struct perf_event *event,
struct perf_cpu_context *cpuctx,
struct perf_event_context *ctx)
static void
group_sched_out(struct perf_event *group_event,
struct perf_cpu_context *cpuctx,
struct perf_event_context *ctx)
static int __perf_remove_from_context(void *info)
static void perf_remove_from_context(struct perf_event *event)
static int __perf_event_disable(void *info)
void perf_event_disable(struct perf_event *event)
static void perf_set_shadow_time(struct perf_event *event,
struct perf_event_context *ctx,
u64 tstamp)
#define MAX_INTERRUPTS (~0ULL)
static void perf_log_throttle(struct perf_event *event, int enable);
static int
event_sched_in(struct perf_event *event,
struct perf_cpu_context *cpuctx,
struct perf_event_context *ctx)
static int
group_sched_in(struct perf_event *group_event,
struct perf_cpu_context *cpuctx,
struct perf_event_context *ctx)
static int group_can_go_on(struct perf_event *event,
struct perf_cpu_context *cpuctx,
int can_add_hw)
static void add_event_to_ctx(struct perf_event *event,
struct perf_event_context *ctx)
static void perf_event_context_sched_in(struct perf_event_context *ctx,
struct task_struct *tsk);
static int  __perf_install_in_context(void *info)
static void
perf_install_in_context(struct perf_event_context *ctx,
struct perf_event *event,
int cpu)
static void __perf_event_mark_enabled(struct perf_event *event,
struct perf_event_context *ctx)
static int __perf_event_enable(void *info)
void perf_event_enable(struct perf_event *event)
static int perf_event_refresh(struct perf_event *event, int refresh)
static void ctx_sched_out(struct perf_event_context *ctx,
struct perf_cpu_context *cpuctx,
enum event_type_t event_type)
static int context_equiv(struct perf_event_context *ctx1,
struct perf_event_context *ctx2)
static void __perf_event_sync_stat(struct perf_event *event,
struct perf_event *next_event)
#define list_next_entry(pos, member) \
list_entry(pos->member.next, typeof(*pos), member)
static void perf_event_sync_stat(struct perf_event_context *ctx,
struct perf_event_context *next_ctx)
static void perf_event_context_sched_out(struct task_struct *task, int ctxn,
struct task_struct *next)
#define for_each_task_context_nr(ctxn)					\
for ((ctxn) = 0; (ctxn) < perf_nr_task_contexts; (ctxn)++)
void __perf_event_task_sched_out(struct task_struct *task,
struct task_struct *next)
static void task_ctx_sched_out(struct perf_event_context *ctx,
enum event_type_t event_type)
static void cpu_ctx_sched_out(struct perf_cpu_context *cpuctx,
enum event_type_t event_type)
static void
ctx_pinned_sched_in(struct perf_event_context *ctx,
struct perf_cpu_context *cpuctx)
static void
ctx_flexible_sched_in(struct perf_event_context *ctx,
struct perf_cpu_context *cpuctx)
static void
ctx_sched_in(struct perf_event_context *ctx,
struct perf_cpu_context *cpuctx,
enum event_type_t event_type,
struct task_struct *task)
static void cpu_ctx_sched_in(struct perf_cpu_context *cpuctx,
enum event_type_t event_type,
struct task_struct *task)
static void task_ctx_sched_in(struct perf_event_context *ctx,
enum event_type_t event_type)
static void perf_event_context_sched_in(struct perf_event_context *ctx,
struct task_struct *task)
void __perf_event_task_sched_in(struct task_struct *task)
static u64 perf_calculate_period(struct perf_event *event, u64 nsec, u64 count)
static void perf_adjust_period(struct perf_event *event, u64 nsec, u64 count)
static void perf_ctx_adjust_freq(struct perf_event_context *ctx, u64 period)
static void rotate_ctx(struct perf_event_context *ctx)
static void perf_rotate_context(struct perf_cpu_context *cpuctx)
void perf_event_task_tick(void)
static int event_enable_on_exec(struct perf_event *event,
struct perf_event_context *ctx)
static void perf_event_enable_on_exec(struct perf_event_context *ctx)
static void __perf_event_read(void *info)
static inline u64 perf_event_count(struct perf_event *event)
static u64 perf_event_read(struct perf_event *event)
struct callchain_cpus_entries ;
static DEFINE_PER_CPU(int, callchain_recursion[PERF_NR_CONTEXTS]);
static atomic_t nr_callchain_events;
static DEFINE_MUTEX(callchain_mutex);
struct callchain_cpus_entries *callchain_cpus_entries;
__weak void perf_callchain_kernel(struct perf_callchain_entry *entry,
struct pt_regs *regs)
__weak void perf_callchain_user(struct perf_callchain_entry *entry,
struct pt_regs *regs)
static void release_callchain_buffers_rcu(struct rcu_head *head)
static void release_callchain_buffers(void)
static int alloc_callchain_buffers(void)
static int get_callchain_buffers(void)
static void put_callchain_buffers(void)
static int get_recursion_context(int *recursion)
static inline void put_recursion_context(int *recursion, int rctx)
static struct perf_callchain_entry *get_callchain_entry(int *rctx)
static void
put_callchain_entry(int rctx)
static struct perf_callchain_entry *perf_callchain(struct pt_regs *regs)
static void __perf_event_init_context(struct perf_event_context *ctx)
static struct perf_event_context *
alloc_perf_context(struct pmu *pmu, struct task_struct *task)
static struct task_struct *
find_lively_task_by_vpid(pid_t vpid)
static struct perf_event_context *
find_get_context(struct pmu *pmu, struct task_struct *task, int cpu)
static void perf_event_free_filter(struct perf_event *event);
static void free_event_rcu(struct rcu_head *head)
static void perf_buffer_put(struct perf_buffer *buffer);
static void free_event(struct perf_event *event)
int perf_event_release_kernel(struct perf_event *event)
EXPORT_SYMBOL_GPL(perf_event_release_kernel);
static int perf_release(struct inode *inode, struct file *file)
u64 perf_event_read_value(struct perf_event *event, u64 *enabled, u64 *running)
EXPORT_SYMBOL_GPL(perf_event_read_value);
static int perf_event_read_group(struct perf_event *event,
u64 read_format, char __user *buf)
static int perf_event_read_one(struct perf_event *event,
u64 read_format, char __user *buf)
static ssize_t
perf_read_hw(struct perf_event *event, char __user *buf, size_t count)
static ssize_t
perf_read(struct file *file, char __user *buf, size_t count, loff_t *ppos)
static unsigned int perf_poll(struct file *file, poll_table *wait)
static void perf_event_reset(struct perf_event *event)
static void perf_event_for_each_child(struct perf_event *event,
void (*func)(struct perf_event *))
static void perf_event_for_each(struct perf_event *event,
void (*func)(struct perf_event *))
static int perf_event_period(struct perf_event *event, u64 __user *arg)
static const struct file_operations perf_fops;
static struct perf_event *perf_fget_light(int fd, int *fput_needed)
static int perf_event_set_output(struct perf_event *event,
struct perf_event *output_event);
static int perf_event_set_filter(struct perf_event *event, void __user *arg);
static long perf_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
int perf_event_task_enable(void)
int perf_event_task_disable(void)
# define PERF_EVENT_INDEX_OFFSET 0
static int perf_event_index(struct perf_event *event)
void perf_event_update_userpage(struct perf_event *event)
static unsigned long perf_data_size(struct perf_buffer *buffer);
static void
perf_buffer_init(struct perf_buffer *buffer, long watermark, int flags)
static struct page *
perf_mmap_to_page(struct perf_buffer *buffer, unsigned long pgoff)
static void *perf_mmap_alloc_page(int cpu)
static struct perf_buffer *
perf_buffer_alloc(int nr_pages, long watermark, int cpu, int flags)
static void perf_mmap_free_page(unsigned long addr)
static void perf_buffer_free(struct perf_buffer *buffer)
static inline int page_order(struct perf_buffer *buffer)
static inline int page_order(struct perf_buffer *buffer)
static struct page *
perf_mmap_to_page(struct perf_buffer *buffer, unsigned long pgoff)
static void perf_mmap_unmark_page(void *addr)
static void perf_buffer_free_work(struct work_struct *work)
static void perf_buffer_free(struct perf_buffer *buffer)
static struct perf_buffer *
perf_buffer_alloc(int nr_pages, long watermark, int cpu, int flags)
static unsigned long perf_data_size(struct perf_buffer *buffer)
static int perf_mmap_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static void perf_buffer_free_rcu(struct rcu_head *rcu_head)
static struct perf_buffer *perf_buffer_get(struct perf_event *event)
static void perf_buffer_put(struct perf_buffer *buffer)
static void perf_mmap_open(struct vm_area_struct *vma)
static void perf_mmap_close(struct vm_area_struct *vma)
static const struct vm_operations_struct perf_mmap_vmops = ;
static int perf_mmap(struct file *file, struct vm_area_struct *vma)
static int perf_fasync(int fd, struct file *filp, int on)
static const struct file_operations perf_fops = ;
void perf_event_wakeup(struct perf_event *event)
static void perf_pending_event(struct irq_work *entry)
struct perf_guest_info_callbacks *perf_guest_cbs;
int perf_register_guest_info_callbacks(struct perf_guest_info_callbacks *cbs)
EXPORT_SYMBOL_GPL(perf_register_guest_info_callbacks);
int perf_unregister_guest_info_callbacks(struct perf_guest_info_callbacks *cbs)
EXPORT_SYMBOL_GPL(perf_unregister_guest_info_callbacks);
static bool perf_output_space(struct perf_buffer *buffer, unsigned long tail,
unsigned long offset, unsigned long head)
static void perf_output_wakeup(struct perf_output_handle *handle)
static void perf_output_get_handle(struct perf_output_handle *handle)
static void perf_output_put_handle(struct perf_output_handle *handle)
__always_inline void perf_output_copy(struct perf_output_handle *handle,
const void *buf, unsigned int len)
static void __perf_event_header__init_id(struct perf_event_header *header,
struct perf_sample_data *data,
struct perf_event *event)
static void perf_event_header__init_id(struct perf_event_header *header,
struct perf_sample_data *data,
struct perf_event *event)
static void __perf_event__output_id_sample(struct perf_output_handle *handle,
struct perf_sample_data *data)
static void perf_event__output_id_sample(struct perf_event *event,
struct perf_output_handle *handle,
struct perf_sample_data *sample)
int perf_output_begin(struct perf_output_handle *handle,
struct perf_event *event, unsigned int size,
int nmi, int sample)
void perf_output_end(struct perf_output_handle *handle)
static void perf_output_read_one(struct perf_output_handle *handle,
struct perf_event *event,
u64 enabled, u64 running)
static void perf_output_read_group(struct perf_output_handle *handle,
struct perf_event *event,
u64 enabled, u64 running)
#define PERF_FORMAT_TOTAL_TIMES (PERF_FORMAT_TOTAL_TIME_ENABLED|\
PERF_FORMAT_TOTAL_TIME_RUNNING)
static void perf_output_read(struct perf_output_handle *handle,
struct perf_event *event)
void perf_output_sample(struct perf_output_handle *handle,
struct perf_event_header *header,
struct perf_sample_data *data,
struct perf_event *event)
void perf_prepare_sample(struct perf_event_header *header,
struct perf_sample_data *data,
struct perf_event *event,
struct pt_regs *regs)
static void perf_event_output(struct perf_event *event, int nmi,
struct perf_sample_data *data,
struct pt_regs *regs)
struct perf_read_event ;
static void
perf_event_read_event(struct perf_event *event,
struct task_struct *task)
struct perf_task_event ;
static void perf_event_task_output(struct perf_event *event,
struct perf_task_event *task_event)
static int perf_event_task_match(struct perf_event *event)
static void perf_event_task_ctx(struct perf_event_context *ctx,
struct perf_task_event *task_event)
static void perf_event_task_event(struct perf_task_event *task_event)
static void perf_event_task(struct task_struct *task,
struct perf_event_context *task_ctx,
int new)
void perf_event_fork(struct task_struct *task)
struct perf_comm_event ;
static void perf_event_comm_output(struct perf_event *event,
struct perf_comm_event *comm_event)
static int perf_event_comm_match(struct perf_event *event)
static void perf_event_comm_ctx(struct perf_event_context *ctx,
struct perf_comm_event *comm_event)
static void perf_event_comm_event(struct perf_comm_event *comm_event)
void perf_event_comm(struct task_struct *task)
struct perf_mmap_event ;
static void perf_event_mmap_output(struct perf_event *event,
struct perf_mmap_event *mmap_event)
static int perf_event_mmap_match(struct perf_event *event,
struct perf_mmap_event *mmap_event,
int executable)
static void perf_event_mmap_ctx(struct perf_event_context *ctx,
struct perf_mmap_event *mmap_event,
int executable)
static void perf_event_mmap_event(struct perf_mmap_event *mmap_event)
void perf_event_mmap(struct vm_area_struct *vma)
static void perf_log_throttle(struct perf_event *event, int enable)
static int __perf_event_overflow(struct perf_event *event, int nmi,
int throttle, struct perf_sample_data *data,
struct pt_regs *regs)
int perf_event_overflow(struct perf_event *event, int nmi,
struct perf_sample_data *data,
struct pt_regs *regs)
struct swevent_htable ;
static DEFINE_PER_CPU(struct swevent_htable, swevent_htable);
static u64 perf_swevent_set_period(struct perf_event *event)
static void perf_swevent_overflow(struct perf_event *event, u64 overflow,
int nmi, struct perf_sample_data *data,
struct pt_regs *regs)
static void perf_swevent_event(struct perf_event *event, u64 nr,
int nmi, struct perf_sample_data *data,
struct pt_regs *regs)
static int perf_exclude_event(struct perf_event *event,
struct pt_regs *regs)
static int perf_swevent_match(struct perf_event *event,
enum perf_type_id type,
u32 event_id,
struct perf_sample_data *data,
struct pt_regs *regs)
static inline u64 swevent_hash(u64 type, u32 event_id)
static inline struct hlist_head *
__find_swevent_head(struct swevent_hlist *hlist, u64 type, u32 event_id)
static inline struct hlist_head *
find_swevent_head_rcu(struct swevent_htable *swhash, u64 type, u32 event_id)
static inline struct hlist_head *
find_swevent_head(struct swevent_htable *swhash, struct perf_event *event)
static void do_perf_sw_event(enum perf_type_id type, u32 event_id,
u64 nr, int nmi,
struct perf_sample_data *data,
struct pt_regs *regs)
int perf_swevent_get_recursion_context(void)
EXPORT_SYMBOL_GPL(perf_swevent_get_recursion_context);
inline void perf_swevent_put_recursion_context(int rctx)
void __perf_sw_event(u32 event_id, u64 nr, int nmi,
struct pt_regs *regs, u64 addr)
static void perf_swevent_read(struct perf_event *event)
static int perf_swevent_add(struct perf_event *event, int flags)
static void perf_swevent_del(struct perf_event *event, int flags)
static void perf_swevent_start(struct perf_event *event, int flags)
static void perf_swevent_stop(struct perf_event *event, int flags)
static inline struct swevent_hlist *
swevent_hlist_deref(struct swevent_htable *swhash)
static void swevent_hlist_release(struct swevent_htable *swhash)
static void swevent_hlist_put_cpu(struct perf_event *event, int cpu)
static void swevent_hlist_put(struct perf_event *event)
static int swevent_hlist_get_cpu(struct perf_event *event, int cpu)
static int swevent_hlist_get(struct perf_event *event)
struct jump_label_key perf_swevent_enabled[PERF_COUNT_SW_MAX];
static void sw_perf_event_destroy(struct perf_event *event)
static int perf_swevent_init(struct perf_event *event)
static struct pmu perf_swevent = ;
static int perf_tp_filter_match(struct perf_event *event,
struct perf_sample_data *data)
static int perf_tp_event_match(struct perf_event *event,
struct perf_sample_data *data,
struct pt_regs *regs)
void perf_tp_event(u64 addr, u64 count, void *record, int entry_size,
struct pt_regs *regs, struct hlist_head *head, int rctx)
EXPORT_SYMBOL_GPL(perf_tp_event);
static void tp_perf_event_destroy(struct perf_event *event)
static int perf_tp_event_init(struct perf_event *event)
static struct pmu perf_tracepoint = ;
static inline void perf_tp_register(void)
static int perf_event_set_filter(struct perf_event *event, void __user *arg)
static void perf_event_free_filter(struct perf_event *event)
static inline void perf_tp_register(void)
static int perf_event_set_filter(struct perf_event *event, void __user *arg)
static void perf_event_free_filter(struct perf_event *event)
void perf_bp_event(struct perf_event *bp, void *data)
static enum hrtimer_restart perf_swevent_hrtimer(struct hrtimer *hrtimer)
static void perf_swevent_start_hrtimer(struct perf_event *event)
static void perf_swevent_cancel_hrtimer(struct perf_event *event)
static void perf_swevent_init_hrtimer(struct perf_event *event)
static void cpu_clock_event_update(struct perf_event *event)
static void cpu_clock_event_start(struct perf_event *event, int flags)
static void cpu_clock_event_stop(struct perf_event *event, int flags)
static int cpu_clock_event_add(struct perf_event *event, int flags)
static void cpu_clock_event_del(struct perf_event *event, int flags)
static void cpu_clock_event_read(struct perf_event *event)
static int cpu_clock_event_init(struct perf_event *event)
static struct pmu perf_cpu_clock = ;
static void task_clock_event_update(struct perf_event *event, u64 now)
static void task_clock_event_start(struct perf_event *event, int flags)
static void task_clock_event_stop(struct perf_event *event, int flags)
static int task_clock_event_add(struct perf_event *event, int flags)
static void task_clock_event_del(struct perf_event *event, int flags)
static void task_clock_event_read(struct perf_event *event)
static int task_clock_event_init(struct perf_event *event)
static struct pmu perf_task_clock = ;
static void perf_pmu_nop_void(struct pmu *pmu)
static int perf_pmu_nop_int(struct pmu *pmu)
static void perf_pmu_start_txn(struct pmu *pmu)
static int perf_pmu_commit_txn(struct pmu *pmu)
static void perf_pmu_cancel_txn(struct pmu *pmu)
static void *find_pmu_context(int ctxn)
static void update_pmu_context(struct pmu *pmu, struct pmu *old_pmu)
static void free_pmu_context(struct pmu *pmu)
static struct idr pmu_idr;
static ssize_t
type_show(struct device *dev, struct device_attribute *attr, char *page)
static struct device_attribute pmu_dev_attrs[] = ;
static int pmu_bus_running;
static struct bus_type pmu_bus = ;
static void pmu_dev_release(struct device *dev)
static int pmu_dev_alloc(struct pmu *pmu)
static struct lock_class_key cpuctx_mutex;
int perf_pmu_register(struct pmu *pmu, char *name, int type)
void perf_pmu_unregister(struct pmu *pmu)
struct pmu *perf_init_event(struct perf_event *event)
static struct perf_event *
perf_event_alloc(struct perf_event_attr *attr, int cpu,
struct task_struct *task,
struct perf_event *group_leader,
struct perf_event *parent_event,
perf_overflow_handler_t overflow_handler)
static int perf_copy_attr(struct perf_event_attr __user *uattr,
struct perf_event_attr *attr)
static int
perf_event_set_output(struct perf_event *event, struct perf_event *output_event)
SYSCALL_DEFINE5(perf_event_open,
struct perf_event_attr __user *, attr_uptr,
pid_t, pid, int, cpu, int, group_fd, unsigned long, flags)
struct perf_event *
perf_event_create_kernel_counter(struct perf_event_attr *attr, int cpu,
struct task_struct *task,
perf_overflow_handler_t overflow_handler)
EXPORT_SYMBOL_GPL(perf_event_create_kernel_counter);
static void sync_child_event(struct perf_event *child_event,
struct task_struct *child)
static void
__perf_event_exit_task(struct perf_event *child_event,
struct perf_event_context *child_ctx,
struct task_struct *child)
static void perf_event_exit_task_context(struct task_struct *child, int ctxn)
void perf_event_exit_task(struct task_struct *child)
static void perf_free_event(struct perf_event *event,
struct perf_event_context *ctx)
void perf_event_free_task(struct task_struct *task)
void perf_event_delayed_put(struct task_struct *task)
static struct perf_event *
inherit_event(struct perf_event *parent_event,
struct task_struct *parent,
struct perf_event_context *parent_ctx,
struct task_struct *child,
struct perf_event *group_leader,
struct perf_event_context *child_ctx)
static int inherit_group(struct perf_event *parent_event,
struct task_struct *parent,
struct perf_event_context *parent_ctx,
struct task_struct *child,
struct perf_event_context *child_ctx)
static int
inherit_task_group(struct perf_event *event, struct task_struct *parent,
struct perf_event_context *parent_ctx,
struct task_struct *child, int ctxn,
int *inherited_all)
int perf_event_init_context(struct task_struct *child, int ctxn)
int perf_event_init_task(struct task_struct *child)
static void __init perf_event_init_all_cpus(void)
static void __cpuinit perf_event_init_cpu(int cpu)
#if defined CONFIG_HOTPLUG_CPU || defined CONFIG_KEXEC
static void perf_pmu_rotate_stop(struct pmu *pmu)
static void __perf_event_exit_context(void *__info)
static void perf_event_exit_cpu_context(int cpu)
static void perf_event_exit_cpu(int cpu)
static inline void perf_event_exit_cpu(int cpu)
static int
perf_reboot(struct notifier_block *notifier, unsigned long val, void *v)
static struct notifier_block perf_reboot_notifier = ;
static int __cpuinit
perf_cpu_notify(struct notifier_block *self, unsigned long action, void *hcpu)
void __init perf_event_init(void)
static int __init perf_event_sysfs_init(void)
device_initcall(perf_event_sysfs_init);
static struct cgroup_subsys_state *perf_cgroup_create(
struct cgroup_subsys *ss, struct cgroup *cont)
static void perf_cgroup_destroy(struct cgroup_subsys *ss,
struct cgroup *cont)
static int __perf_cgroup_move(void *info)
static void
perf_cgroup_attach_task(struct cgroup *cgrp, struct task_struct *task)
static void perf_cgroup_exit(struct cgroup_subsys *ss, struct cgroup *cgrp,
struct cgroup *old_cgrp, struct task_struct *task)
struct cgroup_subsys perf_subsys = ;
