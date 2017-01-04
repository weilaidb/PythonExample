#define __UM_PROCESSOR_X86_64_H
struct arch_thread ;
static inline void rep_nop(void)
#define cpu_relax()   rep_nop()
#define INIT_ARCH_THREAD
static inline void arch_flush_thread(struct arch_thread *thread)
static inline void arch_copy_thread(struct arch_thread *from,
struct arch_thread *to)
#define current_text_addr() \
()
#define ARCH_IS_STACKGROW(address) \
(address + 128 >= UPT_SP(&current->thread.regs.regs))
#define KSTK_EIP(tsk) KSTK_REG(tsk, RIP)
#define KSTK_ESP(tsk) KSTK_REG(tsk, RSP)
