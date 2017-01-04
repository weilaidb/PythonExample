#define _ASM_S390_TIMER_H
#define VTIMER_MAX_SLICE (0x7ffffffffffff000LL)
struct vtimer_list ;
struct vtimer_queue ;
extern void init_virt_timer(struct vtimer_list *timer);
extern void add_virt_timer(void *new);
extern void add_virt_timer_periodic(void *new);
extern int mod_virt_timer(struct vtimer_list *timer, __u64 expires);
extern int mod_virt_timer_periodic(struct vtimer_list *timer, __u64 expires);
extern int del_virt_timer(struct vtimer_list *timer);
extern void init_cpu_vtimer(void);
extern void vtime_init(void);
extern void vtime_stop_cpu(void);
extern void vtime_start_leave(void);
