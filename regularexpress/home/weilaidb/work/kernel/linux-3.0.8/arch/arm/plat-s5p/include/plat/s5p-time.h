#define __ASM_PLAT_S5P_TIME_H __FILE__
enum s5p_timer_mode ;
struct s5p_timer_source ;
#define S5PTIMER_MIN_RANGE	4
#define TCNT_MAX		0xffffffff
#define NON_PERIODIC		0
#define PERIODIC		1
extern void __init s5p_set_timer_source(enum s5p_timer_mode event,
enum s5p_timer_mode source);
extern	struct sys_timer s5p_timer;
