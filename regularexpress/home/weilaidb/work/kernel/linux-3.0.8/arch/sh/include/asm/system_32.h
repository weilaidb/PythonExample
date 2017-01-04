#define __ASM_SH_SYSTEM_32_H
#define is_dsp_enabled(tsk)						\
(!!(tsk->thread.dsp_status.status & SR_DSP))
#define __restore_dsp(tsk)						\
do  while (0)
#define __save_dsp(tsk)							\
do  while (0)
#define is_dsp_enabled(tsk)	(0)
#define __save_dsp(tsk)		do  while (0)
#define __restore_dsp(tsk)	do  while (0)
#if defined(CONFIG_CPU_SH4A)
#define __icbi(addr)	__asm__ __volatile__ ( "icbi @%0\n\t" : : "r" (addr))
#define __icbi(addr)	mb()
#define __ocbp(addr)	__asm__ __volatile__ ( "ocbp @%0\n\t" : : "r" (addr))
#define __ocbi(addr)	__asm__ __volatile__ ( "ocbi @%0\n\t" : : "r" (addr))
#define __ocbwb(addr)	__asm__ __volatile__ ( "ocbwb @%0\n\t" : : "r" (addr))
struct task_struct *__switch_to(struct task_struct *prev,
struct task_struct *next);
#define switch_to(prev, next, last)				\
do  while (0)
#define finish_arch_switch(prev)				\
do  while (0)
#define lookup_exception_vector()	\
()
#define lookup_exception_vector()	\
()
static inline reg_size_t register_align(void *val)
int handle_unaligned_access(insn_size_t instruction, struct pt_regs *regs,
struct mem_access *ma, int, unsigned long address);
static inline void trigger_address_error(void)
asmlinkage void do_address_error(struct pt_regs *regs,
unsigned long writeaccess,
unsigned long address);
asmlinkage void do_divide_error(unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7,
struct pt_regs __regs);
asmlinkage void do_reserved_inst(unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7,
struct pt_regs __regs);
asmlinkage void do_illegal_slot_inst(unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7,
struct pt_regs __regs);
asmlinkage void do_exception_error(unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7,
struct pt_regs __regs);
static inline void set_bl_bit(void)
static inline void clear_bl_bit(void)
