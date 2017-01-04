#define __PLAT_TIME_H
void orion_time_set_base(u32 timer_base);
void orion_time_init(u32 bridge_base, u32 bridge_timer1_clr_mask,
unsigned int irq, unsigned int tclk);
