#define _ASM_IA64_INTRINSICS_H
# include <asm/intel_intrin.h>
# include <asm/gcc_intrin.h>
#define ia64_native_get_psr_i()	(ia64_native_getreg(_IA64_REG_PSR) & IA64_PSR_I)
#define ia64_native_set_rr0_to_rr4(val0, val1, val2, val3, val4)	\
do  while (0)
extern unsigned long __bad_size_for_ia64_fetch_and_add (void);
extern unsigned long __bad_increment_for_ia64_fetch_and_add (void);
#define IA64_FETCHADD(tmp,v,n,sz,sem)						\
()
#define ia64_fetchadd(i,v,sem)								\
()
#define ia64_fetch_and_add(i,v)	(ia64_fetchadd(i, v, rel) + (i))
extern void ia64_xchg_called_with_bad_pointer (void);
#define __xchg(x,ptr,size)						\
()
#define xchg(ptr,x)							     \
((__typeof__(*(ptr))) __xchg ((unsigned long) (x), (ptr), sizeof(*(ptr))))
#define __HAVE_ARCH_CMPXCHG 1
extern long ia64_cmpxchg_called_with_bad_pointer (void);
#define ia64_cmpxchg(sem,ptr,old,new,size)						\
()
#define cmpxchg_acq(ptr, o, n)	\
ia64_cmpxchg(acq, (ptr), (o), (n), sizeof(*(ptr)))
#define cmpxchg_rel(ptr, o, n)	\
ia64_cmpxchg(rel, (ptr), (o), (n), sizeof(*(ptr)))
#define cmpxchg(ptr, o, n)	cmpxchg_acq((ptr), (o), (n))
#define cmpxchg64(ptr, o, n)	cmpxchg_acq((ptr), (o), (n))
#define cmpxchg_local		cmpxchg
#define cmpxchg64_local		cmpxchg64
# define CMPXCHG_BUGCHECK_DECL	int _cmpxchg_bugcheck_count = 128;
# define CMPXCHG_BUGCHECK(v)							\
do  while (0)
# define CMPXCHG_BUGCHECK_DECL
# define CMPXCHG_BUGCHECK(v)
#if defined(CONFIG_PARAVIRT) && defined(__KERNEL__)
# define IA64_INTRINSIC_API(name)	paravirt_ ## name
# define IA64_INTRINSIC_API(name)	pv_cpu_ops.name
#define IA64_INTRINSIC_MACRO(name)	paravirt_ ## name
#define IA64_INTRINSIC_API(name)	ia64_native_ ## name
#define IA64_INTRINSIC_MACRO(name)	ia64_native_ ## name
#define ia64_fc				IA64_INTRINSIC_API(fc)
#define ia64_thash			IA64_INTRINSIC_API(thash)
#define ia64_get_cpuid			IA64_INTRINSIC_API(get_cpuid)
#define ia64_get_pmd			IA64_INTRINSIC_API(get_pmd)
#define ia64_ssm			IA64_INTRINSIC_MACRO(ssm)
#define ia64_rsm			IA64_INTRINSIC_MACRO(rsm)
#define ia64_getreg			IA64_INTRINSIC_MACRO(getreg)
#define ia64_setreg			IA64_INTRINSIC_API(setreg)
#define ia64_set_rr			IA64_INTRINSIC_API(set_rr)
#define ia64_get_rr			IA64_INTRINSIC_API(get_rr)
#define ia64_ptcga			IA64_INTRINSIC_API(ptcga)
#define ia64_get_psr_i			IA64_INTRINSIC_API(get_psr_i)
#define ia64_intrin_local_irq_restore	\
IA64_INTRINSIC_API(intrin_local_irq_restore)
#define ia64_set_rr0_to_rr4		IA64_INTRINSIC_API(set_rr0_to_rr4)
