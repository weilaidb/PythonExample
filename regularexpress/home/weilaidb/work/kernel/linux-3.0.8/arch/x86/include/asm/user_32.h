#define _ASM_X86_USER_32_H
struct user_i387_struct ;
struct user_fxsr_struct ;
struct user_regs_struct ;
struct user;
#define NBPG PAGE_SIZE
#define UPAGES 1
#define HOST_TEXT_START_ADDR (u.start_code)
#define HOST_STACK_END_ADDR (u.start_stack + u.u_ssize * NBPG)
