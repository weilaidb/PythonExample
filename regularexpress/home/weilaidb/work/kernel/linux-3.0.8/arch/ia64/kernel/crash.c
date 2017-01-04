int kdump_status[NR_CPUS];
static atomic_t kdump_cpu_frozen;
atomic_t kdump_in_progress;
static int kdump_freeze_monarch;
static int kdump_on_init = 1;
static int kdump_on_fatal_mca = 1;
static inline Elf64_Word
*append_elf_note(Elf64_Word *buf, char *name, unsigned type, void *data,
size_t data_len)
static void
final_note(void *buf)
extern void ia64_dump_cpu_regs(void *);
static DEFINE_PER_CPU(struct elf_prstatus, elf_prstatus);
void
crash_save_this_cpu(void)
static int
kdump_wait_cpu_freeze(void)
void
machine_crash_shutdown(struct pt_regs *pt)
static void
machine_kdump_on_init(void)
void
kdump_cpu_freeze(struct unw_frame_info *info, void *arg)
static int
kdump_init_notifier(struct notifier_block *self, unsigned long val, void *data)
static ctl_table kdump_ctl_table[] = ;
static ctl_table sys_table[] = ;
static int
machine_crash_setup(void)
__initcall(machine_crash_setup);
