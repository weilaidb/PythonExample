#define dbg(x...) printk(x)
#define dbg(x...)
#define KERNEL_START (KERNEL_BINARY_TEXT_START)
extern struct unwind_table_entry __start___unwind[];
extern struct unwind_table_entry __stop___unwind[];
static spinlock_t unwind_lock;
static struct unwind_table kernel_unwind_table __read_mostly;
static LIST_HEAD(unwind_tables);
static inline const struct unwind_table_entry *
find_unwind_entry_in_table(const struct unwind_table *table, unsigned long addr)
static const struct unwind_table_entry *
find_unwind_entry(unsigned long addr)
static void
unwind_table_init(struct unwind_table *table, const char *name,
unsigned long base_addr, unsigned long gp,
void *table_start, void *table_end)
static int cmp_unwind_table_entry(const void *a, const void *b)
static void
unwind_table_sort(struct unwind_table_entry *start,
struct unwind_table_entry *finish)
struct unwind_table *
unwind_table_add(const char *name, unsigned long base_addr,
unsigned long gp,
void *start, void *end)
void unwind_table_remove(struct unwind_table *table)
int unwind_init(void)
#define get_func_addr(fptr) fptr[2]
#define get_func_addr(fptr) fptr[0]
static int unwind_special(struct unwind_frame_info *info, unsigned long pc, int frame_size)
static void unwind_frame_regs(struct unwind_frame_info *info)
void unwind_frame_init(struct unwind_frame_info *info, struct task_struct *t,
struct pt_regs *regs)
void unwind_frame_init_from_blocked_task(struct unwind_frame_info *info, struct task_struct *t)
void unwind_frame_init_running(struct unwind_frame_info *info, struct pt_regs *regs)
int unwind_once(struct unwind_frame_info *next_frame)
int unwind_to_user(struct unwind_frame_info *info)
unsigned long return_address(unsigned int level)
