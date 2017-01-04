struct pv_info pv_info = ;
static void __init
ia64_native_patch_branch(unsigned long tag, unsigned long type);
struct pv_init_ops pv_init_ops =
;
#define DEFINE_VOID_FUNC1(name)					\
static void						\
ia64_native_ ## name ## _func(unsigned long arg)	\
#define DEFINE_VOID_FUNC1_VOID(name)				\
static void						\
ia64_native_ ## name ## _func(void *arg)		\
#define DEFINE_VOID_FUNC2(name)					\
static void						\
ia64_native_ ## name ## _func(unsigned long arg0,	\
unsigned long arg1)	\
#define DEFINE_FUNC0(name)			\
static unsigned long			\
ia64_native_ ## name ## _func(void)	\
#define DEFINE_FUNC1(name, type)			\
static unsigned long				\
ia64_native_ ## name ## _func(type arg)		\
\
DEFINE_VOID_FUNC1_VOID(fc);
DEFINE_VOID_FUNC1(intrin_local_irq_restore);
DEFINE_VOID_FUNC2(ptcga);
DEFINE_VOID_FUNC2(set_rr);
DEFINE_FUNC0(get_psr_i);
DEFINE_FUNC1(thash, unsigned long);
DEFINE_FUNC1(get_cpuid, int);
DEFINE_FUNC1(get_pmd, int);
DEFINE_FUNC1(get_rr, unsigned long);
static void
ia64_native_ssm_i_func(void)
static void
ia64_native_rsm_i_func(void)
static void
ia64_native_set_rr0_to_rr4_func(unsigned long val0, unsigned long val1,
unsigned long val2, unsigned long val3,
unsigned long val4)
#define CASE_GET_REG(id)				\
case _IA64_REG_ ## id:				\
res = ia64_native_getreg(_IA64_REG_ ## id);	\
break;
#define CASE_GET_AR(id) CASE_GET_REG(AR_ ## id)
#define CASE_GET_CR(id) CASE_GET_REG(CR_ ## id)
unsigned long
ia64_native_getreg_func(int regnum)
#define CASE_SET_REG(id)				\
case _IA64_REG_ ## id:				\
ia64_native_setreg(_IA64_REG_ ## id, val);	\
break;
#define CASE_SET_AR(id) CASE_SET_REG(AR_ ## id)
#define CASE_SET_CR(id) CASE_SET_REG(CR_ ## id)
void
ia64_native_setreg_func(int regnum, unsigned long val)
#define __DEFINE_FUNC(name, code)					\
extern const char ia64_native_ ## name ## _direct_start[];	\
extern const char ia64_native_ ## name ## _direct_end[];	\
asm (".align 32\n"						\
".proc ia64_native_" #name "_func\n"			\
"ia64_native_" #name "_func:\n"				\
"ia64_native_" #name "_direct_start:\n"			\
code							\
"ia64_native_" #name "_direct_end:\n"			\
"br.cond.sptk.many b6\n"					\
".endp ia64_native_" #name "_func\n")
#define DEFINE_VOID_FUNC0(name, code)				\
extern void						\
ia64_native_ ## name ## _func(void);			\
__DEFINE_FUNC(name, code)
#define DEFINE_VOID_FUNC1(name, code)				\
extern void						\
ia64_native_ ## name ## _func(unsigned long arg);	\
__DEFINE_FUNC(name, code)
#define DEFINE_VOID_FUNC1_VOID(name, code)			\
extern void						\
ia64_native_ ## name ## _func(void *arg);		\
__DEFINE_FUNC(name, code)
#define DEFINE_VOID_FUNC2(name, code)				\
extern void						\
ia64_native_ ## name ## _func(unsigned long arg0,	\
unsigned long arg1);	\
__DEFINE_FUNC(name, code)
#define DEFINE_FUNC0(name, code)		\
extern unsigned long			\
ia64_native_ ## name ## _func(void);	\
__DEFINE_FUNC(name, code)
#define DEFINE_FUNC1(name, type, code)			\
extern unsigned long				\
ia64_native_ ## name ## _func(type arg);	\
__DEFINE_FUNC(name, code)
DEFINE_VOID_FUNC1_VOID(fc,
"fc r8\n");
DEFINE_VOID_FUNC1(intrin_local_irq_restore,
";;\n"
"     cmp.ne p6, p7 = r8, r0\n"
";;\n"
"(p6) ssm psr.i\n"
"(p7) rsm psr.i\n"
";;\n"
"(p6) srlz.d\n");
DEFINE_VOID_FUNC2(ptcga,
"ptc.ga r8, r9\n");
DEFINE_VOID_FUNC2(set_rr,
"mov rr[r8] = r9\n");
DEFINE_FUNC0(get_psr_i,
"mov r2 = " __stringify(1 << IA64_PSR_I_BIT) "\n"
"mov r8 = psr\n"
";;\n"
"and r8 = r2, r8\n");
DEFINE_FUNC1(thash, unsigned long,
"thash r8 = r8\n");
DEFINE_FUNC1(get_cpuid, int,
"mov r8 = cpuid[r8]\n");
DEFINE_FUNC1(get_pmd, int,
"mov r8 = pmd[r8]\n");
DEFINE_FUNC1(get_rr, unsigned long,
"mov r8 = rr[r8]\n");
DEFINE_VOID_FUNC0(ssm_i,
"ssm psr.i\n");
DEFINE_VOID_FUNC0(rsm_i,
"rsm psr.i\n");
extern void
ia64_native_set_rr0_to_rr4_func(unsigned long val0, unsigned long val1,
unsigned long val2, unsigned long val3,
unsigned long val4);
__DEFINE_FUNC(set_rr0_to_rr4,
"mov rr[r0] = r8\n"
"movl r2 = 0x2000000000000000\n"
";;\n"
"mov rr[r2] = r9\n"
"shl r3 = r2, 1\n"
";;\n"
"add r2 = r2, r3\n"
"mov rr[r3] = r10\n"
";;\n"
"mov rr[r2] = r11\n"
"shl r3 = r3, 1\n"
";;\n"
"mov rr[r3] = r14\n");
extern unsigned long ia64_native_getreg_func(int regnum);
asm(".global ia64_native_getreg_func\n");
#define __DEFINE_GET_REG(id, reg)			\
"mov r2 = " __stringify(_IA64_REG_ ## id) "\n"	\
";;\n"						\
"cmp.eq p6, p0 = r2, r8\n"			\
";;\n"						\
"(p6) mov r8 = " #reg "\n"			\
"(p6) br.cond.sptk.many b6\n"			\
";;\n"
#define __DEFINE_GET_AR(id, reg)	__DEFINE_GET_REG(AR_ ## id, ar.reg)
#define __DEFINE_GET_CR(id, reg)	__DEFINE_GET_REG(CR_ ## id, cr.reg)
__DEFINE_FUNC(getreg,
__DEFINE_GET_REG(GP, gp)
__DEFINE_GET_REG(PSR, psr)
__DEFINE_GET_REG(TP, tp)
__DEFINE_GET_REG(SP, sp)
__DEFINE_GET_REG(AR_KR0, ar0)
__DEFINE_GET_REG(AR_KR1, ar1)
__DEFINE_GET_REG(AR_KR2, ar2)
__DEFINE_GET_REG(AR_KR3, ar3)
__DEFINE_GET_REG(AR_KR4, ar4)
__DEFINE_GET_REG(AR_KR5, ar5)
__DEFINE_GET_REG(AR_KR6, ar6)
__DEFINE_GET_REG(AR_KR7, ar7)
__DEFINE_GET_AR(RSC, rsc)
__DEFINE_GET_AR(BSP, bsp)
__DEFINE_GET_AR(BSPSTORE, bspstore)
__DEFINE_GET_AR(RNAT, rnat)
__DEFINE_GET_AR(FCR, fcr)
__DEFINE_GET_AR(EFLAG, eflag)
__DEFINE_GET_AR(CSD, csd)
__DEFINE_GET_AR(SSD, ssd)
__DEFINE_GET_REG(AR_CFLAG, ar27)
__DEFINE_GET_AR(FSR, fsr)
__DEFINE_GET_AR(FIR, fir)
__DEFINE_GET_AR(FDR, fdr)
__DEFINE_GET_AR(CCV, ccv)
__DEFINE_GET_AR(UNAT, unat)
__DEFINE_GET_AR(FPSR, fpsr)
__DEFINE_GET_AR(ITC, itc)
__DEFINE_GET_AR(PFS, pfs)
__DEFINE_GET_AR(LC, lc)
__DEFINE_GET_AR(EC, ec)
__DEFINE_GET_CR(DCR, dcr)
__DEFINE_GET_CR(ITM, itm)
__DEFINE_GET_CR(IVA, iva)
__DEFINE_GET_CR(PTA, pta)
__DEFINE_GET_CR(IPSR, ipsr)
__DEFINE_GET_CR(ISR, isr)
__DEFINE_GET_CR(IIP, iip)
__DEFINE_GET_CR(IFA, ifa)
__DEFINE_GET_CR(ITIR, itir)
__DEFINE_GET_CR(IIPA, iipa)
__DEFINE_GET_CR(IFS, ifs)
__DEFINE_GET_CR(IIM, iim)
__DEFINE_GET_CR(IHA, iha)
__DEFINE_GET_CR(LID, lid)
__DEFINE_GET_CR(IVR, ivr)
__DEFINE_GET_CR(TPR, tpr)
__DEFINE_GET_CR(EOI, eoi)
__DEFINE_GET_CR(IRR0, irr0)
__DEFINE_GET_CR(IRR1, irr1)
__DEFINE_GET_CR(IRR2, irr2)
__DEFINE_GET_CR(IRR3, irr3)
__DEFINE_GET_CR(ITV, itv)
__DEFINE_GET_CR(PMV, pmv)
__DEFINE_GET_CR(CMCV, cmcv)
__DEFINE_GET_CR(LRR0, lrr0)
__DEFINE_GET_CR(LRR1, lrr1)
"mov r8 = -1\n"
);
extern void ia64_native_setreg_func(int regnum, unsigned long val);
asm(".global ia64_native_setreg_func\n");
#define __DEFINE_SET_REG(id, reg)			\
"mov r2 = " __stringify(_IA64_REG_ ## id) "\n"	\
";;\n"						\
"cmp.eq p6, p0 = r2, r9\n"			\
";;\n"						\
"(p6) mov " #reg " = r8\n"			\
"(p6) br.cond.sptk.many b6\n"			\
";;\n"
#define __DEFINE_SET_AR(id, reg)	__DEFINE_SET_REG(AR_ ## id, ar.reg)
#define __DEFINE_SET_CR(id, reg)	__DEFINE_SET_REG(CR_ ## id, cr.reg)
__DEFINE_FUNC(setreg,
"mov r2 = " __stringify(_IA64_REG_PSR_L) "\n"
";;\n"
"cmp.eq p6, p0 = r2, r9\n"
";;\n"
"(p6) mov psr.l = r8\n"
".serialize.data\n"
"(p6) br.cond.sptk.many b6\n"
__DEFINE_SET_REG(GP, gp)
__DEFINE_SET_REG(SP, sp)
__DEFINE_SET_REG(AR_KR0, ar0)
__DEFINE_SET_REG(AR_KR1, ar1)
__DEFINE_SET_REG(AR_KR2, ar2)
__DEFINE_SET_REG(AR_KR3, ar3)
__DEFINE_SET_REG(AR_KR4, ar4)
__DEFINE_SET_REG(AR_KR5, ar5)
__DEFINE_SET_REG(AR_KR6, ar6)
__DEFINE_SET_REG(AR_KR7, ar7)
__DEFINE_SET_AR(RSC, rsc)
__DEFINE_SET_AR(BSP, bsp)
__DEFINE_SET_AR(BSPSTORE, bspstore)
__DEFINE_SET_AR(RNAT, rnat)
__DEFINE_SET_AR(FCR, fcr)
__DEFINE_SET_AR(EFLAG, eflag)
__DEFINE_SET_AR(CSD, csd)
__DEFINE_SET_AR(SSD, ssd)
__DEFINE_SET_REG(AR_CFLAG, ar27)
__DEFINE_SET_AR(FSR, fsr)
__DEFINE_SET_AR(FIR, fir)
__DEFINE_SET_AR(FDR, fdr)
__DEFINE_SET_AR(CCV, ccv)
__DEFINE_SET_AR(UNAT, unat)
__DEFINE_SET_AR(FPSR, fpsr)
__DEFINE_SET_AR(ITC, itc)
__DEFINE_SET_AR(PFS, pfs)
__DEFINE_SET_AR(LC, lc)
__DEFINE_SET_AR(EC, ec)
__DEFINE_SET_CR(DCR, dcr)
__DEFINE_SET_CR(ITM, itm)
__DEFINE_SET_CR(IVA, iva)
__DEFINE_SET_CR(PTA, pta)
__DEFINE_SET_CR(IPSR, ipsr)
__DEFINE_SET_CR(ISR, isr)
__DEFINE_SET_CR(IIP, iip)
__DEFINE_SET_CR(IFA, ifa)
__DEFINE_SET_CR(ITIR, itir)
__DEFINE_SET_CR(IIPA, iipa)
__DEFINE_SET_CR(IFS, ifs)
__DEFINE_SET_CR(IIM, iim)
__DEFINE_SET_CR(IHA, iha)
__DEFINE_SET_CR(LID, lid)
__DEFINE_SET_CR(IVR, ivr)
__DEFINE_SET_CR(TPR, tpr)
__DEFINE_SET_CR(EOI, eoi)
__DEFINE_SET_CR(IRR0, irr0)
__DEFINE_SET_CR(IRR1, irr1)
__DEFINE_SET_CR(IRR2, irr2)
__DEFINE_SET_CR(IRR3, irr3)
__DEFINE_SET_CR(ITV, itv)
__DEFINE_SET_CR(PMV, pmv)
__DEFINE_SET_CR(CMCV, cmcv)
__DEFINE_SET_CR(LRR0, lrr0)
__DEFINE_SET_CR(LRR1, lrr1)
);
struct pv_cpu_ops pv_cpu_ops = ;
EXPORT_SYMBOL(pv_cpu_ops);
void
paravirt_cpu_asm_init(const struct pv_cpu_asm_switch *cpu_asm_switch)
static unsigned int
ia64_native_iosapic_read(char __iomem *iosapic, unsigned int reg)
static void
ia64_native_iosapic_write(char __iomem *iosapic, unsigned int reg, u32 val)
struct pv_iosapic_ops pv_iosapic_ops = ;
struct pv_irq_ops pv_irq_ops = ;
static int
ia64_native_do_steal_accounting(unsigned long *new_itm)
struct pv_time_ops pv_time_ops = ;
#define IA64_NATIVE_PATCH_DEFINE_GET_REG(name, reg)	\
__DEFINE_FUNC(get_ ## name,			\
";;\n"				\
"mov r8 = " #reg "\n"		\
";;\n")
#define IA64_NATIVE_PATCH_DEFINE_SET_REG(name, reg)	\
__DEFINE_FUNC(set_ ## name,			\
";;\n"				\
"mov " #reg " = r8\n"		\
";;\n")
#define IA64_NATIVE_PATCH_DEFINE_REG(name, reg)		\
IA64_NATIVE_PATCH_DEFINE_GET_REG(name, reg);	\
IA64_NATIVE_PATCH_DEFINE_SET_REG(name, reg)	\
#define IA64_NATIVE_PATCH_DEFINE_AR(name, reg)			\
IA64_NATIVE_PATCH_DEFINE_REG(ar_ ## name, ar.reg)
#define IA64_NATIVE_PATCH_DEFINE_CR(name, reg)			\
IA64_NATIVE_PATCH_DEFINE_REG(cr_ ## name, cr.reg)
IA64_NATIVE_PATCH_DEFINE_GET_REG(psr, psr);
IA64_NATIVE_PATCH_DEFINE_GET_REG(tp, tp);
__DEFINE_FUNC(set_psr_l,
";;\n"
"mov psr.l = r8\n"
".serialize.data\n"
";;\n");
IA64_NATIVE_PATCH_DEFINE_REG(gp, gp);
IA64_NATIVE_PATCH_DEFINE_REG(sp, sp);
IA64_NATIVE_PATCH_DEFINE_REG(kr0, ar0);
IA64_NATIVE_PATCH_DEFINE_REG(kr1, ar1);
IA64_NATIVE_PATCH_DEFINE_REG(kr2, ar2);
IA64_NATIVE_PATCH_DEFINE_REG(kr3, ar3);
IA64_NATIVE_PATCH_DEFINE_REG(kr4, ar4);
IA64_NATIVE_PATCH_DEFINE_REG(kr5, ar5);
IA64_NATIVE_PATCH_DEFINE_REG(kr6, ar6);
IA64_NATIVE_PATCH_DEFINE_REG(kr7, ar7);
IA64_NATIVE_PATCH_DEFINE_AR(rsc, rsc);
IA64_NATIVE_PATCH_DEFINE_AR(bsp, bsp);
IA64_NATIVE_PATCH_DEFINE_AR(bspstore, bspstore);
IA64_NATIVE_PATCH_DEFINE_AR(rnat, rnat);
IA64_NATIVE_PATCH_DEFINE_AR(fcr, fcr);
IA64_NATIVE_PATCH_DEFINE_AR(eflag, eflag);
IA64_NATIVE_PATCH_DEFINE_AR(csd, csd);
IA64_NATIVE_PATCH_DEFINE_AR(ssd, ssd);
IA64_NATIVE_PATCH_DEFINE_REG(ar27, ar27);
IA64_NATIVE_PATCH_DEFINE_AR(fsr, fsr);
IA64_NATIVE_PATCH_DEFINE_AR(fir, fir);
IA64_NATIVE_PATCH_DEFINE_AR(fdr, fdr);
IA64_NATIVE_PATCH_DEFINE_AR(ccv, ccv);
IA64_NATIVE_PATCH_DEFINE_AR(unat, unat);
IA64_NATIVE_PATCH_DEFINE_AR(fpsr, fpsr);
IA64_NATIVE_PATCH_DEFINE_AR(itc, itc);
IA64_NATIVE_PATCH_DEFINE_AR(pfs, pfs);
IA64_NATIVE_PATCH_DEFINE_AR(lc, lc);
IA64_NATIVE_PATCH_DEFINE_AR(ec, ec);
IA64_NATIVE_PATCH_DEFINE_CR(dcr, dcr);
IA64_NATIVE_PATCH_DEFINE_CR(itm, itm);
IA64_NATIVE_PATCH_DEFINE_CR(iva, iva);
IA64_NATIVE_PATCH_DEFINE_CR(pta, pta);
IA64_NATIVE_PATCH_DEFINE_CR(ipsr, ipsr);
IA64_NATIVE_PATCH_DEFINE_CR(isr, isr);
IA64_NATIVE_PATCH_DEFINE_CR(iip, iip);
IA64_NATIVE_PATCH_DEFINE_CR(ifa, ifa);
IA64_NATIVE_PATCH_DEFINE_CR(itir, itir);
IA64_NATIVE_PATCH_DEFINE_CR(iipa, iipa);
IA64_NATIVE_PATCH_DEFINE_CR(ifs, ifs);
IA64_NATIVE_PATCH_DEFINE_CR(iim, iim);
IA64_NATIVE_PATCH_DEFINE_CR(iha, iha);
IA64_NATIVE_PATCH_DEFINE_CR(lid, lid);
IA64_NATIVE_PATCH_DEFINE_CR(ivr, ivr);
IA64_NATIVE_PATCH_DEFINE_CR(tpr, tpr);
IA64_NATIVE_PATCH_DEFINE_CR(eoi, eoi);
IA64_NATIVE_PATCH_DEFINE_CR(irr0, irr0);
IA64_NATIVE_PATCH_DEFINE_CR(irr1, irr1);
IA64_NATIVE_PATCH_DEFINE_CR(irr2, irr2);
IA64_NATIVE_PATCH_DEFINE_CR(irr3, irr3);
IA64_NATIVE_PATCH_DEFINE_CR(itv, itv);
IA64_NATIVE_PATCH_DEFINE_CR(pmv, pmv);
IA64_NATIVE_PATCH_DEFINE_CR(cmcv, cmcv);
IA64_NATIVE_PATCH_DEFINE_CR(lrr0, lrr0);
IA64_NATIVE_PATCH_DEFINE_CR(lrr1, lrr1);
static const struct paravirt_patch_bundle_elem ia64_native_patch_bundle_elems[]
__initdata_or_module =
;
unsigned long __init_or_module
ia64_native_patch_bundle(void *sbundle, void *ebundle, unsigned long type)
extern const char ia64_native_switch_to[];
extern const char ia64_native_leave_syscall[];
extern const char ia64_native_work_processed_syscall[];
extern const char ia64_native_leave_kernel[];
const struct paravirt_patch_branch_target ia64_native_branch_target[]
__initconst = ;
static void __init
ia64_native_patch_branch(unsigned long tag, unsigned long type)
