#define _PPC_KERNEL_MPC8xx_H
int mpc8xx_pic_init(void);
unsigned int mpc8xx_get_irq(void);
static inline uint mk_int_int_mask(uint mask)
