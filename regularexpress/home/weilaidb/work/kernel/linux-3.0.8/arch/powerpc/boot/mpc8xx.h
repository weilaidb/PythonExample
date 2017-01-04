#define _PPC_BOOT_MPC8xx_H_
void mpc8xx_set_clocks(u32 sysclk);
u32 mpc885_get_clock(u32 crystal);
int mpc885_fixup_clocks(u32 crystal);
