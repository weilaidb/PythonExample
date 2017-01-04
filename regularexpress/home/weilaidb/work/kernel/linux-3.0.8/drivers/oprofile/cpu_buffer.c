#define OP_BUFFER_FLAGS	0
static struct ring_buffer *op_ring_buffer;
DEFINE_PER_CPU(struct oprofile_cpu_buffer, op_cpu_buffer);
static void wq_sync_buffer(struct work_struct *work);
#define DEFAULT_TIMER_EXPIRE (HZ / 10)
static int work_enabled;
unsigned long oprofile_get_cpu_buffer_size(void)
void oprofile_cpu_buffer_inc_smpl_lost(void)
void free_cpu_buffers(void)
#define RB_EVENT_HDR_SIZE 4
int alloc_cpu_buffers(void)
void start_cpu_work(void)
void end_cpu_work(void)
void flush_cpu_work(void)
struct op_sample
*op_cpu_buffer_write_reserve(struct op_entry *entry, unsigned long size)
int op_cpu_buffer_write_commit(struct op_entry *entry)
struct op_sample *op_cpu_buffer_read_entry(struct op_entry *entry, int cpu)
unsigned long op_cpu_buffer_entries(int cpu)
static int
op_add_code(struct oprofile_cpu_buffer *cpu_buf, unsigned long backtrace,
int is_kernel, struct task_struct *task)
static inline int
op_add_sample(struct oprofile_cpu_buffer *cpu_buf,
unsigned long pc, unsigned long event)
static int
log_sample(struct oprofile_cpu_buffer *cpu_buf, unsigned long pc,
unsigned long backtrace, int is_kernel, unsigned long event,
struct task_struct *task)
static inline void oprofile_begin_trace(struct oprofile_cpu_buffer *cpu_buf)
static inline void oprofile_end_trace(struct oprofile_cpu_buffer *cpu_buf)
static inline void
__oprofile_add_ext_sample(unsigned long pc, struct pt_regs * const regs,
unsigned long event, int is_kernel,
struct task_struct *task)
void oprofile_add_ext_hw_sample(unsigned long pc, struct pt_regs * const regs,
unsigned long event, int is_kernel,
struct task_struct *task)
void oprofile_add_ext_sample(unsigned long pc, struct pt_regs * const regs,
unsigned long event, int is_kernel)
void oprofile_add_sample(struct pt_regs * const regs, unsigned long event)
void
oprofile_write_reserve(struct op_entry *entry, struct pt_regs * const regs,
unsigned long pc, int code, int size)
int oprofile_add_data(struct op_entry *entry, unsigned long val)
int oprofile_add_data64(struct op_entry *entry, u64 val)
int oprofile_write_commit(struct op_entry *entry)
void oprofile_add_pc(unsigned long pc, int is_kernel, unsigned long event)
void oprofile_add_trace(unsigned long pc)
static void wq_sync_buffer(struct work_struct *work)
