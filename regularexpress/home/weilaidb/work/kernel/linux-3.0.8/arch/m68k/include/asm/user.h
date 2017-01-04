#define _M68K_USER_H
struct user_m68kfp_struct ;
struct user_regs_struct ;
struct user;
#define NBPG 4096
#define UPAGES 1
#define HOST_TEXT_START_ADDR (u.start_code)
#define HOST_STACK_END_ADDR (u.start_stack + u.u_ssize * NBPG)
