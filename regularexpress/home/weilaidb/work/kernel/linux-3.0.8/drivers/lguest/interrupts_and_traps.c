static unsigned int syscall_vector = SYSCALL_VECTOR;
module_param(syscall_vector, uint, 0444);
static unsigned long idt_address(u32 lo, u32 hi)
static int idt_type(u32 lo, u32 hi)
static bool idt_present(u32 lo, u32 hi)
static void push_guest_stack(struct lg_cpu *cpu, unsigned long *gstack, u32 val)
static void set_guest_interrupt(struct lg_cpu *cpu, u32 lo, u32 hi,
bool has_err)
unsigned int interrupt_pending(struct lg_cpu *cpu, bool *more)
void try_deliver_interrupt(struct lg_cpu *cpu, unsigned int irq, bool more)
void set_interrupt(struct lg_cpu *cpu, unsigned int irq)
static bool could_be_syscall(unsigned int num)
bool check_syscall_vector(struct lguest *lg)
int init_interrupts(void)
void free_interrupts(void)
static bool has_err(unsigned int trap)
bool deliver_trap(struct lg_cpu *cpu, unsigned int num)
static bool direct_trap(unsigned int num)
void pin_stack_pages(struct lg_cpu *cpu)
void guest_set_stack(struct lg_cpu *cpu, u32 seg, u32 esp, unsigned int pages)
static void set_trap(struct lg_cpu *cpu, struct desc_struct *trap,
unsigned int num, u32 lo, u32 hi)
void load_guest_idt_entry(struct lg_cpu *cpu, unsigned int num, u32 lo, u32 hi)
static void default_idt_entry(struct desc_struct *idt,
int trap,
const unsigned long handler,
const struct desc_struct *base)
void setup_default_idt_entries(struct lguest_ro_state *state,
const unsigned long *def)
void copy_traps(const struct lg_cpu *cpu, struct desc_struct *idt,
const unsigned long *def)
void guest_set_clockevent(struct lg_cpu *cpu, unsigned long delta)
static enum hrtimer_restart clockdev_fn(struct hrtimer *timer)
void init_clockdev(struct lg_cpu *cpu)
