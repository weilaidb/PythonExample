#define __UM_PROCESSOR_I386_H
extern int host_has_cmov;
struct uml_tls_struct ;
struct arch_thread ;
#define INIT_ARCH_THREAD
static inline void arch_flush_thread(struct arch_thread *thread)
static inline void arch_copy_thread(struct arch_thread *from,
struct arch_thread *to)
static inline void rep_nop(void)
#define cpu_relax()	rep_nop()
#define current_text_addr() \
()
#define ARCH_IS_STACKGROW(address) \
(address + 32 >= UPT_SP(&current->thread.regs.regs))
#define KSTK_EIP(tsk) KSTK_REG(tsk, EIP)
#define KSTK_ESP(tsk) KSTK_REG(tsk, UESP)
#define KSTK_EBP(tsk) KSTK_REG(tsk, EBP)
