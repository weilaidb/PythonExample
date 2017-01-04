#define OPROFILE_CPU_BUFFER_H
struct task_struct;
int alloc_cpu_buffers(void);
void free_cpu_buffers(void);
void start_cpu_work(void);
void end_cpu_work(void);
void flush_cpu_work(void);
struct op_sample ;
struct op_entry;
struct oprofile_cpu_buffer ;
DECLARE_PER_CPU(struct oprofile_cpu_buffer, op_cpu_buffer);
static inline void op_cpu_buffer_reset(int cpu)
struct op_sample
*op_cpu_buffer_write_reserve(struct op_entry *entry, unsigned long size);
int op_cpu_buffer_write_commit(struct op_entry *entry);
struct op_sample *op_cpu_buffer_read_entry(struct op_entry *entry, int cpu);
unsigned long op_cpu_buffer_entries(int cpu);
static inline
int op_cpu_buffer_add_data(struct op_entry *entry, unsigned long val)
static inline
int op_cpu_buffer_get_size(struct op_entry *entry)
static inline
int op_cpu_buffer_get_data(struct op_entry *entry, unsigned long *val)
#define KERNEL_CTX_SWITCH	(1UL << 0)
#define IS_KERNEL		(1UL << 1)
#define TRACE_BEGIN		(1UL << 2)
#define USER_CTX_SWITCH		(1UL << 3)
