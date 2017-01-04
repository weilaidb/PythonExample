#define __ASM_CRIS_ARCH_PROCESSOR_H
#define current_text_addr() ()
#define wp_works_ok 1
struct thread_struct ;
#define TASK_SIZE       (0x50000000UL)
#define TASK_SIZE       (0xA0000000UL)
#define INIT_THREAD
#define KSTK_EIP(tsk)	\
()
#define start_thread(regs, ip, usp) do  while(0)
#define arch_fixup(regs) \
regs->frametype = CRIS_FRAME_NORMAL;
