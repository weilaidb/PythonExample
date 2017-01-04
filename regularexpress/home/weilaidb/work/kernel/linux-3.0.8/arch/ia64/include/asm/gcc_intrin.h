#define _ASM_IA64_GCC_INTRIN_H
#define ASM_SUPPORTED
#define ia64_barrier()	asm volatile ("":::"memory")
#define ia64_stop()	asm volatile (";;"::)
#define ia64_invala_gr(regnum)	asm volatile ("invala.e r%0" :: "i"(regnum))
#define ia64_invala_fr(regnum)	asm volatile ("invala.e f%0" :: "i"(regnum))
#define ia64_flushrs() asm volatile ("flushrs;;":::"memory")
#define ia64_loadrs() asm volatile ("loadrs;;":::"memory")
extern void ia64_bad_param_for_setreg (void);
extern void ia64_bad_param_for_getreg (void);
register unsigned long ia64_r13 asm ("r13") __used;
#define ia64_native_setreg(regnum, val)						\
()
#define ia64_native_getreg(regnum)						\
()
#define ia64_hint_pause 0
#define ia64_hint(mode)						\
()
#define ia64_mux1_brcst 0
#define ia64_mux1_mix   8
#define ia64_mux1_shuf  9
#define ia64_mux1_alt  10
#define ia64_mux1_rev  11
#define ia64_mux1(x, mode)							\
()
#if __GNUC__ >= 4 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
# define ia64_popcnt(x)		__builtin_popcountl(x)
# define ia64_popcnt(x)						\
()
#define ia64_getf_exp(x)					\
()
#define ia64_shrp(a, b, count)								\
()
#define ia64_ldfs(regnum, x)					\
()
#define ia64_ldfd(regnum, x)					\
()
#define ia64_ldfe(regnum, x)					\
()
#define ia64_ldf8(regnum, x)					\
()
#define ia64_ldf_fill(regnum, x)				\
()
#define ia64_st4_rel_nta(m, val)					\
()
#define ia64_stfs(x, regnum)						\
()
#define ia64_stfd(x, regnum)						\
()
#define ia64_stfe(x, regnum)						\
()
#define ia64_stf8(x, regnum)						\
()
#define ia64_stf_spill(x, regnum)						\
()
#define ia64_fetchadd4_acq(p, inc)						\
()
#define ia64_fetchadd4_rel(p, inc)						\
()
#define ia64_fetchadd8_acq(p, inc)						\
()
#define ia64_fetchadd8_rel(p, inc)						\
()
#define ia64_xchg1(ptr,x)							\
()
#define ia64_xchg2(ptr,x)						\
()
#define ia64_xchg4(ptr,x)						\
()
#define ia64_xchg8(ptr,x)						\
()
#define ia64_cmpxchg1_acq(ptr, new, old)						\
()
#define ia64_cmpxchg1_rel(ptr, new, old)						\
()
#define ia64_cmpxchg2_acq(ptr, new, old)						\
()
#define ia64_cmpxchg2_rel(ptr, new, old)						\
()
#define ia64_cmpxchg4_acq(ptr, new, old)						\
()
#define ia64_cmpxchg4_rel(ptr, new, old)						\
()
#define ia64_cmpxchg8_acq(ptr, new, old)						\
()
#define ia64_cmpxchg8_rel(ptr, new, old)						\
()
#define ia64_mf()	asm volatile ("mf" ::: "memory")
#define ia64_mfa()	asm volatile ("mf.a" ::: "memory")
#define ia64_invala() asm volatile ("invala" ::: "memory")
#define ia64_native_thash(addr)							\
()
#define ia64_srlz_i()	asm volatile (";; srlz.i ;;" ::: "memory")
#define ia64_srlz_d()	asm volatile (";; srlz.d" ::: "memory");
# define ia64_dv_serialize_data()		asm volatile (".serialize.data");
# define ia64_dv_serialize_instruction()	asm volatile (".serialize.instruction");
# define ia64_dv_serialize_data()
# define ia64_dv_serialize_instruction()
#define ia64_nop(x)	asm volatile ("nop %0"::"i"(x));
#define ia64_itci(addr)	asm volatile ("itc.i %0;;" :: "r"(addr) : "memory")
#define ia64_itcd(addr)	asm volatile ("itc.d %0;;" :: "r"(addr) : "memory")
#define ia64_itri(trnum, addr) asm volatile ("itr.i itr[%0]=%1"				\
:: "r"(trnum), "r"(addr) : "memory")
#define ia64_itrd(trnum, addr) asm volatile ("itr.d dtr[%0]=%1"				\
:: "r"(trnum), "r"(addr) : "memory")
#define ia64_tpa(addr)								\
()
#define __ia64_set_dbr(index, val)						\
asm volatile ("mov dbr[%0]=%1" :: "r"(index), "r"(val) : "memory")
#define ia64_set_ibr(index, val)						\
asm volatile ("mov ibr[%0]=%1" :: "r"(index), "r"(val) : "memory")
#define ia64_set_pkr(index, val)						\
asm volatile ("mov pkr[%0]=%1" :: "r"(index), "r"(val) : "memory")
#define ia64_set_pmc(index, val)						\
asm volatile ("mov pmc[%0]=%1" :: "r"(index), "r"(val) : "memory")
#define ia64_set_pmd(index, val)						\
asm volatile ("mov pmd[%0]=%1" :: "r"(index), "r"(val) : "memory")
#define ia64_native_set_rr(index, val)							\
asm volatile ("mov rr[%0]=%1" :: "r"(index), "r"(val) : "memory");
#define ia64_native_get_cpuid(index)							\
()
#define __ia64_get_dbr(index)							\
()
#define ia64_get_ibr(index)							\
()
#define ia64_get_pkr(index)							\
()
#define ia64_get_pmc(index)							\
()
#define ia64_native_get_pmd(index)						\
()
#define ia64_native_get_rr(index)						\
()
#define ia64_native_fc(addr)	asm volatile ("fc %0" :: "r"(addr) : "memory")
#define ia64_sync_i()	asm volatile (";; sync.i" ::: "memory")
#define ia64_native_ssm(mask)	asm volatile ("ssm %0":: "i"((mask)) : "memory")
#define ia64_native_rsm(mask)	asm volatile ("rsm %0":: "i"((mask)) : "memory")
#define ia64_sum(mask)	asm volatile ("sum %0":: "i"((mask)) : "memory")
#define ia64_rum(mask)	asm volatile ("rum %0":: "i"((mask)) : "memory")
#define ia64_ptce(addr)	asm volatile ("ptc.e %0" :: "r"(addr))
#define ia64_native_ptcga(addr, size)						\
do  while (0)
#define ia64_ptcl(addr, size)							\
do  while (0)
#define ia64_ptri(addr, size)						\
asm volatile ("ptr.i %0,%1" :: "r"(addr), "r"(size) : "memory")
#define ia64_ptrd(addr, size)						\
asm volatile ("ptr.d %0,%1" :: "r"(addr), "r"(size) : "memory")
#define ia64_ttag(addr)							\
()
#define ia64_lfhint_none   0
#define ia64_lfhint_nt1    1
#define ia64_lfhint_nt2    2
#define ia64_lfhint_nta    3
#define ia64_lfetch(lfhint, y)					\
()
#define ia64_lfetch_excl(lfhint, y)					\
()
#define ia64_lfetch_fault(lfhint, y)					\
()
#define ia64_lfetch_fault_excl(lfhint, y)				\
()
#define ia64_native_intrin_local_irq_restore(x)			\
do  while (0)
