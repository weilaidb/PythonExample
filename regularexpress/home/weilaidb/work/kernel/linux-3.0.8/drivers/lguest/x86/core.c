static int cpu_had_pge;
static struct  lguest_entry;
static unsigned long switcher_offset(void)
static struct lguest_pages *lguest_pages(unsigned int cpu)
static DEFINE_PER_CPU(struct lg_cpu *, lg_last_cpu);
static void copy_in_guest_info(struct lg_cpu *cpu, struct lguest_pages *pages)
static void run_guest_once(struct lg_cpu *cpu, struct lguest_pages *pages)
void lguest_arch_run_guest(struct lg_cpu *cpu)
static int emulate_insn(struct lg_cpu *cpu)
static void rewrite_hypercall(struct lg_cpu *cpu)
static bool is_hypercall(struct lg_cpu *cpu)
void lguest_arch_handle_trap(struct lg_cpu *cpu)
static void adjust_pge(void *on)
void __init lguest_arch_host_init(void)
;
void __exit lguest_arch_host_fini(void)
int lguest_arch_do_hcall(struct lg_cpu *cpu, struct hcall_args *args)
int lguest_arch_init_hypercalls(struct lg_cpu *cpu)
void lguest_arch_setup_regs(struct lg_cpu *cpu, unsigned long start)
