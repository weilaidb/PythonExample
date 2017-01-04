static struct pv_info xen_info __initdata = ;
#define IA64_RSC_PL_SHIFT	2
#define IA64_RSC_PL_BIT_SIZE	2
#define IA64_RSC_PL_MASK	\
(((1UL << IA64_RSC_PL_BIT_SIZE) - 1) << IA64_RSC_PL_SHIFT)
static void __init
xen_info_init(void)
static void
xen_panic_hypercall(struct unw_frame_info *info, void *arg)
static int
xen_panic_event(struct notifier_block *this, unsigned long event, void *ptr)
static struct notifier_block xen_panic_block = ;
static void xen_pm_power_off(void)
static void __init
xen_banner(void)
static int __init
xen_reserve_memory(struct rsvd_region *region)
static void __init
xen_arch_setup_early(void)
static void __init
xen_arch_setup_console(char **cmdline_p)
static int __init
xen_arch_setup_nomca(void)
static void __init
xen_post_smp_prepare_boot_cpu(void)
static unsigned long __init_or_module
xen_patch_bundle(void *sbundle, void *ebundle, unsigned long type);
static void __init
xen_patch_branch(unsigned long tag, unsigned long type);
static const struct pv_init_ops xen_init_ops __initconst = ;
extern unsigned long xen_fsyscall_table[NR_syscalls];
extern char xen_fsys_bubble_down[];
struct pv_fsys_data xen_fsys_data __initdata = ;
#define DECLARE(name)							\
extern unsigned long __xen_start_gate_##name##_patchlist[];	\
extern unsigned long __xen_end_gate_##name##_patchlist[]
DECLARE(fsyscall);
DECLARE(brl_fsys_bubble_down);
DECLARE(vtop);
DECLARE(mckinley_e9);
extern unsigned long __xen_start_gate_section[];
#define ASSIGN(name)							\
.start_##name##_patchlist =					\
(unsigned long)__xen_start_gate_##name##_patchlist,	\
.end_##name##_patchlist =					\
(unsigned long)__xen_end_gate_##name##_patchlist
static struct pv_patchdata xen_patchdata __initdata = ;
static void
xen_set_itm_with_offset(unsigned long val)
static unsigned long
xen_get_itm_with_offset(void)
static void
xen_set_itc(unsigned long val)
static unsigned long
xen_get_itc(void)
static void xen_setreg(int regnum, unsigned long val)
static unsigned long xen_getreg(int regnum)
static void
xen_ssm_i(void)
static void
xen_rsm_i(void)
static unsigned long
xen_get_psr_i(void)
static void
xen_intrin_local_irq_restore(unsigned long mask)
#define __DEFINE_FUNC(name, code)					\
extern const char xen_ ## name ## _direct_start[];		\
extern const char xen_ ## name ## _direct_end[];		\
asm (".align 32\n"						\
".proc xen_" #name "\n"					\
"xen_" #name ":\n"						\
"xen_" #name "_direct_start:\n"				\
code							\
"xen_" #name "_direct_end:\n"				\
"br.cond.sptk.many b6\n"					\
".endp xen_" #name "\n")
#define DEFINE_VOID_FUNC0(name, code)		\
extern void				\
xen_ ## name (void);			\
__DEFINE_FUNC(name, code)
#define DEFINE_VOID_FUNC1(name, code)		\
extern void				\
xen_ ## name (unsigned long arg);	\
__DEFINE_FUNC(name, code)
#define DEFINE_VOID_FUNC1_VOID(name, code)	\
extern void				\
xen_ ## name (void *arg);		\
__DEFINE_FUNC(name, code)
#define DEFINE_VOID_FUNC2(name, code)		\
extern void				\
xen_ ## name (unsigned long arg0,	\
unsigned long arg1);	\
__DEFINE_FUNC(name, code)
#define DEFINE_FUNC0(name, code)		\
extern unsigned long			\
xen_ ## name (void);			\
__DEFINE_FUNC(name, code)
#define DEFINE_FUNC1(name, type, code)		\
extern unsigned long			\
xen_ ## name (type arg);		\
__DEFINE_FUNC(name, code)
#define XEN_PSR_I_ADDR_ADDR     (XSI_BASE + XSI_PSR_I_ADDR_OFS)
DEFINE_VOID_FUNC1(set_itm_with_offset,
"mov r2 = " __stringify(XSI_BASE) " + "
__stringify(XSI_ITC_OFFSET_OFS) "\n"
";;\n"
"ld8 r3 = [r2]\n"
";;\n"
"sub r8 = r8, r3\n"
"break " __stringify(HYPERPRIVOP_SET_ITM) "\n");
DEFINE_FUNC0(get_itm_with_offset,
"mov r2 = " __stringify(XSI_BASE) " + "
__stringify(XSI_ITC_OFFSET_OFS) "\n"
";;\n"
"ld8 r3 = [r2]\n"
"mov r8 = cr.itm\n"
";;\n"
"add r8 = r8, r2\n");
DEFINE_VOID_FUNC1(set_itc,
"mov r2 = " __stringify(XSI_BASE) " + "
__stringify(XSI_ITC_LAST_OFS) "\n"
"mov r3 = ar.itc\n"
";;\n"
"sub r3 = r8, r3\n"
"st8 [r2] = r8, "
__stringify(XSI_ITC_LAST_OFS) " - "
__stringify(XSI_ITC_OFFSET_OFS) "\n"
";;\n"
"st8 [r2] = r3\n");
DEFINE_FUNC0(get_itc,
"mov r2 = " __stringify(XSI_BASE) " + "
__stringify(XSI_ITC_OFFSET_OFS) "\n"
";;\n"
"ld8 r9 = [r2], " __stringify(XSI_ITC_LAST_OFS) " - "
__stringify(XSI_ITC_OFFSET_OFS) "\n"
"888:\n"
"mov r8 = ar.itc\n"
";;\n"
"ld8 r3 = [r2]\n"
"add r8 = r8, r9\n"
";;\n"
"cmp.gtu p6, p0 = r3, r8\n"
";;\n"
"(p6) add r8 = 1, r3\n"
";;\n"
"mov ar.ccv = r8\n"
";;\n"
"cmpxchg8.acq r10 = [r2], r8, ar.ccv\n"
";;\n"
"cmp.ne p6, p0 = r10, r3\n"
"(p6) hint @pause\n"
"(p6) br.cond.spnt 888b\n");
DEFINE_VOID_FUNC1_VOID(fc,
"break " __stringify(HYPERPRIVOP_FC) "\n");
DEFINE_VOID_FUNC1(intrin_local_irq_restore,
"cmp.ne p6, p7 = r8, r0\n"
"mov r9 = " __stringify(XEN_PSR_I_ADDR_ADDR) "\n"
";;\n"
"ld8 r9 = [r9]\n"
";;\n"
"(p6)	ld1.acq r10 = [r9]\n"
";;\n"
"(p6)	cmp.ne.unc p8, p0 = r10, r0\n"
"(p7)	mov r11 = 1\n"
";;\n"
"(p7)	st1.rel [r9] = r11\n"
"(p8)	st1.rel [r9] = r0, -1\n"
";;\n"
"(p8)	ld1.acq r11 = [r9]\n"
";;\n"
"(p8)	cmp.ne.unc p9, p10 = r11, r0\n"
";;\n"
"(p10) mf\n"
"(p9)	break " __stringify(HYPERPRIVOP_SSM_I) "\n");
DEFINE_VOID_FUNC2(ptcga,
"break " __stringify(HYPERPRIVOP_PTC_GA) "\n");
DEFINE_VOID_FUNC2(set_rr,
"break " __stringify(HYPERPRIVOP_SET_RR) "\n");
DEFINE_FUNC0(get_psr_i,
"mov r9 = " __stringify(XEN_PSR_I_ADDR_ADDR) "\n"
";;\n"
"ld8 r9 = [r9]\n"
"mov r8 = 0\n"
";;\n"
"ld1.acq r9 = [r9]\n"
";;\n"
"cmp.eq.unc p6, p0 = r9, r0\n"
";;\n"
"(p6) mov r8 = " __stringify(1 << IA64_PSR_I_BIT) "\n");
DEFINE_FUNC1(thash, unsigned long,
"break " __stringify(HYPERPRIVOP_THASH) "\n");
DEFINE_FUNC1(get_cpuid, int,
"break " __stringify(HYPERPRIVOP_GET_CPUID) "\n");
DEFINE_FUNC1(get_pmd, int,
"break " __stringify(HYPERPRIVOP_GET_PMD) "\n");
DEFINE_FUNC1(get_rr, unsigned long,
"break " __stringify(HYPERPRIVOP_GET_RR) "\n");
DEFINE_VOID_FUNC0(ssm_i,
"mov r8 = " __stringify(XEN_PSR_I_ADDR_ADDR) "\n"
";;\n"
"ld8 r8 = [r8]\n"
";;\n"
"ld1.acq r9 = [r8]\n"
";;\n"
"st1.rel [r8] = r0, -1\n"
"cmp.eq.unc p0, p6 = r9, r0\n"
";;\n"
"(p6) ld1.acq r8 = [r8]\n"
";;\n"
"(p6) cmp.eq.unc p6, p7 = r8, r0\n"
";;\n"
"(p7) break " __stringify(HYPERPRIVOP_SSM_I) "\n"
";;\n");
DEFINE_VOID_FUNC0(rsm_i,
"mov r8 = " __stringify(XEN_PSR_I_ADDR_ADDR) "\n"
"mov r9 = 1\n"
";;\n"
"ld8 r8 = [r8]\n"
";;\n"
"st1.rel [r8] = r9\n");
extern void
xen_set_rr0_to_rr4(unsigned long val0, unsigned long val1,
unsigned long val2, unsigned long val3,
unsigned long val4);
__DEFINE_FUNC(set_rr0_to_rr4,
"break " __stringify(HYPERPRIVOP_SET_RR0_TO_RR4) "\n");
extern unsigned long xen_getreg(int regnum);
#define __DEFINE_GET_REG(id, privop)					\
"mov r2 = " __stringify(_IA64_REG_ ## id) "\n"			\
";;\n"								\
"cmp.eq p6, p0 = r2, r8\n"					\
";;\n"								\
"(p6) break " __stringify(HYPERPRIVOP_GET_ ## privop) "\n"	\
"(p6) br.cond.sptk.many b6\n"					\
";;\n"
__DEFINE_FUNC(getreg,
__DEFINE_GET_REG(PSR, PSR)
"mov r2 = " __stringify(_IA64_REG_AR_ITC) "\n"
";;\n"
"cmp.eq p6, p0 = r2, r8\n"
";;\n"
"(p6) br.cond.spnt xen_get_itc\n"
";;\n"
"mov r2 = " __stringify(_IA64_REG_CR_ITM) "\n"
";;\n"
"cmp.eq p6, p0 = r2, r8\n"
";;\n"
"(p6) br.cond.spnt xen_get_itm_with_offset\n"
";;\n"
__DEFINE_GET_REG(CR_IVR, IVR)
__DEFINE_GET_REG(CR_TPR, TPR)
"movl r2 = ia64_native_getreg_func\n"
";;\n"
"mov b7 = r2\n"
";;\n"
"br.cond.sptk.many b7\n");
extern void xen_setreg(int regnum, unsigned long val);
#define __DEFINE_SET_REG(id, privop)					\
"mov r2 = " __stringify(_IA64_REG_ ## id) "\n"			\
";;\n"								\
"cmp.eq p6, p0 = r2, r9\n"					\
";;\n"								\
"(p6) break " __stringify(HYPERPRIVOP_ ## privop) "\n"		\
"(p6) br.cond.sptk.many b6\n"					\
";;\n"
__DEFINE_FUNC(setreg,
"mov r17 = r9\n"
"mov r2 = " __stringify(_IA64_REG_AR_KR0) "\n"
";;\n"
"cmp.ge p6, p0 = r9, r2\n"
"sub r17 = r17, r2\n"
";;\n"
"(p6) cmp.ge.unc p7, p0 = "
__stringify(_IA64_REG_AR_KR7) " - " __stringify(_IA64_REG_AR_KR0)
", r17\n"
";;\n"
"(p7) mov r9 = r8\n"
";;\n"
"(p7) mov r8 = r17\n"
"(p7) break " __stringify(HYPERPRIVOP_SET_KR) "\n"
"mov r2 = " __stringify(_IA64_REG_CR_ITM) "\n"
";;\n"
"cmp.eq p6, p0 = r2, r8\n"
";;\n"
"(p6) br.cond.spnt xen_set_itm_with_offset\n"
"mov r2 = " __stringify(_IA64_REG_AR_ITC) "\n"
";;\n"
"cmp.eq p6, p0 = r2, r8\n"
";;\n"
"(p6) br.cond.spnt xen_set_itc\n"
__DEFINE_SET_REG(CR_TPR, SET_TPR)
__DEFINE_SET_REG(CR_EOI, EOI)
"movl r2 = ia64_native_setreg_func\n"
";;\n"
"mov b7 = r2\n"
";;\n"
"br.cond.sptk.many b7\n");
static const struct pv_cpu_ops xen_cpu_ops __initconst = ;
extern char xen_switch_to;
extern char xen_leave_syscall;
extern char xen_work_processed_syscall;
extern char xen_leave_kernel;
const struct pv_cpu_asm_switch xen_cpu_asm_switch = ;
static void
xen_pcat_compat_init(void)
static struct irq_chip*
xen_iosapic_get_irq_chip(unsigned long trigger)
static unsigned int
xen_iosapic_read(char __iomem *iosapic, unsigned int reg)
static void
xen_iosapic_write(char __iomem *iosapic, unsigned int reg, u32 val)
static struct pv_iosapic_ops xen_iosapic_ops __initdata = ;
void __init
xen_setup_pv_ops(void)
#define DEFINE_FUNC_GETREG(name, privop)				\
DEFINE_FUNC0(get_ ## name,					\
"break "__stringify(HYPERPRIVOP_GET_ ## privop) "\n")
DEFINE_FUNC_GETREG(psr, PSR);
DEFINE_FUNC_GETREG(eflag, EFLAG);
DEFINE_FUNC_GETREG(ivr, IVR);
DEFINE_FUNC_GETREG(tpr, TPR);
#define DEFINE_FUNC_SET_KR(n)						\
DEFINE_VOID_FUNC0(set_kr ## n,					\
";;\n"					\
"mov r9 = r8\n"				\
"mov r8 = " #n "\n"				\
"break " __stringify(HYPERPRIVOP_SET_KR) "\n")
DEFINE_FUNC_SET_KR(0);
DEFINE_FUNC_SET_KR(1);
DEFINE_FUNC_SET_KR(2);
DEFINE_FUNC_SET_KR(3);
DEFINE_FUNC_SET_KR(4);
DEFINE_FUNC_SET_KR(5);
DEFINE_FUNC_SET_KR(6);
DEFINE_FUNC_SET_KR(7);
#define __DEFINE_FUNC_SETREG(name, privop)				\
DEFINE_VOID_FUNC0(name,						\
"break "__stringify(HYPERPRIVOP_ ## privop) "\n")
#define DEFINE_FUNC_SETREG(name, privop)			\
__DEFINE_FUNC_SETREG(set_ ## name, SET_ ## privop)
DEFINE_FUNC_SETREG(eflag, EFLAG);
DEFINE_FUNC_SETREG(tpr, TPR);
__DEFINE_FUNC_SETREG(eoi, EOI);
extern const char xen_check_events[];
extern const char __xen_intrin_local_irq_restore_direct_start[];
extern const char __xen_intrin_local_irq_restore_direct_end[];
extern const unsigned long __xen_intrin_local_irq_restore_direct_reloc;
asm (
".align 32\n"
".proc xen_check_events\n"
"xen_check_events:\n"
"st1.rel [r9] = r0, -1\n"
";;\n"
"ld1.acq r11 = [r9]\n"
";;\n"
"cmp.ne p9, p10 = r11, r0\n"
";;\n"
"(p10) mf\n"
"(p9) break " __stringify(HYPERPRIVOP_SSM_I) "\n"
"br.cond.sptk.many b6\n"
".endp xen_check_events\n"
"\n"
".align 32\n"
".proc __xen_intrin_local_irq_restore_direct\n"
"__xen_intrin_local_irq_restore_direct:\n"
"__xen_intrin_local_irq_restore_direct_start:\n"
"1:\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"1:\n"
"__xen_intrin_local_irq_restore_direct_end:\n"
".endp __xen_intrin_local_irq_restore_direct\n"
"\n"
".align 8\n"
"__xen_intrin_local_irq_restore_direct_reloc:\n"
"data8 99b\n"
);
static struct paravirt_patch_bundle_elem xen_patch_bundle_elems[]
__initdata_or_module =
;
static unsigned long __init_or_module
xen_patch_bundle(void *sbundle, void *ebundle, unsigned long type)
const struct paravirt_patch_branch_target xen_branch_target[]
__initconst = ;
static void __init
xen_patch_branch(unsigned long tag, unsigned long type)
