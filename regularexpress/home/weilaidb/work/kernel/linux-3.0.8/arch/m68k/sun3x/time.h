#define SUN3X_TIME_H
extern int sun3x_hwclk(int set, struct rtc_time *t);
unsigned long sun3x_gettimeoffset (void);
void sun3x_sched_init(irq_handler_t vector);
struct mostek_dt ;
