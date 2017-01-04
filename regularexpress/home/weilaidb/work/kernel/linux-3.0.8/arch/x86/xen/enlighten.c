EXPORT_SYMBOL_GPL(hypercall_page);
DEFINE_PER_CPU(struct vcpu_info *, xen_vcpu);
DEFINE_PER_CPU(struct vcpu_info, xen_vcpu_info);
enum xen_domain_type xen_domain_type = XEN_NATIVE;
EXPORT_SYMBOL_GPL(xen_domain_type);
unsigned long *machine_to_phys_mapping = (void *)MACH2PHYS_VIRT_START;
EXPORT_SYMBOL(machine_to_phys_mapping);
unsigned long  machine_to_phys_nr;
EXPORT_SYMBOL(machine_to_phys_nr);
struct start_info *xen_start_info;
EXPORT_SYMBOL_GPL(xen_start_info);
struct shared_info xen_dummy_shared_info;
void *xen_initial_gdt;
RESERVE_BRK(shared_info_page_brk, PAGE_SIZE);
__read_mostly int xen_have_vector_callback;
EXPORT_SYMBOL_GPL(xen_have_vector_callback);
struct shared_info *HYPERVISOR_shared_info = (void *)&xen_dummy_shared_info;
static int have_vcpu_info_placement = 1;
static void clamp_max_cpus(void)
static void xen_vcpu_setup(int cpu)
void xen_vcpu_restore(void)
static void __init xen_banner(void)
static __read_mostly unsigned int cpuid_leaf1_edx_mask = ~0;
static __read_mostly unsigned int cpuid_leaf1_ecx_mask = ~0;
static void xen_cpuid(unsigned int *ax, unsigned int *bx,
unsigned int *cx, unsigned int *dx)
static void __init xen_init_cpuid_mask(void)
static void xen_set_debugreg(int reg, unsigned long val)
static unsigned long xen_get_debugreg(int reg)
static void xen_end_context_switch(struct task_struct *next)
static unsigned long xen_store_tr(void)
static void set_aliased_prot(void *v, pgprot_t prot)
static void xen_alloc_ldt(struct desc_struct *ldt, unsigned entries)
static void xen_free_ldt(struct desc_struct *ldt, unsigned entries)
static void xen_set_ldt(const void *addr, unsigned entries)
static void xen_load_gdt(const struct desc_ptr *dtr)
static void __init xen_load_gdt_boot(const struct desc_ptr *dtr)
static void load_TLS_descriptor(struct thread_struct *t,
unsigned int cpu, unsigned int i)
static void xen_load_tls(struct thread_struct *t, unsigned int cpu)
static void xen_load_gs_index(unsigned int idx)
static void xen_write_ldt_entry(struct desc_struct *dt, int entrynum,
const void *ptr)
static int cvt_gate_to_trap(int vector, const gate_desc *val,
struct trap_info *info)
static DEFINE_PER_CPU(struct desc_ptr, idt_desc);
static void xen_write_idt_entry(gate_desc *dt, int entrynum, const gate_desc *g)
static void xen_convert_trap_info(const struct desc_ptr *desc,
struct trap_info *traps)
void xen_copy_trap_info(struct trap_info *traps)
static void xen_load_idt(const struct desc_ptr *desc)
static void xen_write_gdt_entry(struct desc_struct *dt, int entry,
const void *desc, int type)
static void __init xen_write_gdt_entry_boot(struct desc_struct *dt, int entry,
const void *desc, int type)
static void xen_load_sp0(struct tss_struct *tss,
struct thread_struct *thread)
static void xen_set_iopl_mask(unsigned mask)
static void xen_io_delay(void)
static u32 xen_apic_read(u32 reg)
static void xen_apic_write(u32 reg, u32 val)
static u64 xen_apic_icr_read(void)
static void xen_apic_icr_write(u32 low, u32 id)
static void xen_apic_wait_icr_idle(void)
static u32 xen_safe_apic_wait_icr_idle(void)
static void set_xen_basic_apic_ops(void)
static void xen_clts(void)
static DEFINE_PER_CPU(unsigned long, xen_cr0_value);
static unsigned long xen_read_cr0(void)
static void xen_write_cr0(unsigned long cr0)
static void xen_write_cr4(unsigned long cr4)
static int xen_write_msr_safe(unsigned int msr, unsigned low, unsigned high)
void xen_setup_shared_info(void)
void xen_setup_vcpu_info_placement(void)
static unsigned xen_patch(u8 type, u16 clobbers, void *insnbuf,
unsigned long addr, unsigned len)
static const struct pv_info xen_info __initconst = ;
static const struct pv_init_ops xen_init_ops __initconst = ;
static const struct pv_cpu_ops xen_cpu_ops __initconst = ;
static const struct pv_apic_ops xen_apic_ops __initconst = ;
static void xen_reboot(int reason)
static void xen_restart(char *msg)
static void xen_emergency_restart(void)
static void xen_machine_halt(void)
static void xen_machine_power_off(void)
static void xen_crash_shutdown(struct pt_regs *regs)
static int
xen_panic_event(struct notifier_block *this, unsigned long event, void *ptr)
static struct notifier_block xen_panic_block = ;
int xen_panic_handler_init(void)
static const struct machine_ops xen_machine_ops __initconst = ;
static void __init xen_setup_stackprotector(void)
asmlinkage void __init xen_start_kernel(void)
static int init_hvm_pv_info(int *major, int *minor)
void __ref xen_hvm_init_shared_info(void)
static int __cpuinit xen_hvm_cpu_notify(struct notifier_block *self,
unsigned long action, void *hcpu)
static struct notifier_block xen_hvm_cpu_notifier __cpuinitdata = ;
static void __init xen_hvm_guest_init(void)
static bool __init xen_hvm_platform(void)
bool xen_hvm_need_lapic(void)
EXPORT_SYMBOL_GPL(xen_hvm_need_lapic);
const struct hypervisor_x86 x86_hyper_xen_hvm __refconst = ;
EXPORT_SYMBOL(x86_hyper_xen_hvm);
