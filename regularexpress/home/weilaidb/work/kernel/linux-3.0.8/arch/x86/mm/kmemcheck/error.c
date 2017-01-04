enum kmemcheck_error_type ;
#define SHADOW_COPY_SIZE (1 << CONFIG_KMEMCHECK_SHADOW_COPY_SHIFT)
struct kmemcheck_error ;
static struct kmemcheck_error error_fifo[CONFIG_KMEMCHECK_QUEUE_SIZE];
static unsigned int error_count;
static unsigned int error_rd;
static unsigned int error_wr;
static unsigned int error_missed_count;
static struct kmemcheck_error *error_next_wr(void)
static struct kmemcheck_error *error_next_rd(void)
void kmemcheck_error_recall(void)
static void do_wakeup(unsigned long data)
static DECLARE_TASKLET(kmemcheck_tasklet, &do_wakeup, 0);
void kmemcheck_error_save(enum kmemcheck_shadow state,
unsigned long address, unsigned int size, struct pt_regs *regs)
void kmemcheck_error_save_bug(struct pt_regs *regs)
