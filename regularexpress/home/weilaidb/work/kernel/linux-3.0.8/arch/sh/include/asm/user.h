#define __ASM_SH_USER_H
#if defined(__SH5__) || defined(CONFIG_CPU_SH5)
struct user_fpu_struct ;
struct user_fpu_struct ;
struct user ;
#define NBPG			PAGE_SIZE
#define UPAGES			1
#define HOST_TEXT_START_ADDR	(u.start_code)
#define HOST_DATA_START_ADDR	(u.start_data)
#define HOST_STACK_END_ADDR	(u.start_stack + u.u_ssize * NBPG)
