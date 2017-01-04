#define _ARM_USER_H
struct user_fp ;
struct user;
#define NBPG PAGE_SIZE
#define UPAGES 1
#define HOST_TEXT_START_ADDR (u.start_code)
#define HOST_STACK_END_ADDR (u.start_stack + u.u_ssize * NBPG)
struct user_vfp ;
struct user_vfp_exc ;
