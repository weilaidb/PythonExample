extern void sn_lb_int_war_check(void);
extern irqreturn_t timer_interrupt(int irq, void *dev_id, struct pt_regs *regs);
#define SN_LB_INT_WAR_INTERVAL 100
void sn_timer_interrupt(int irq, void *dev_id)
