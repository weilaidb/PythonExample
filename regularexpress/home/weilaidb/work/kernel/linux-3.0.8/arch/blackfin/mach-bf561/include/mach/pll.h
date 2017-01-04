#define _MACH_PLL_H
#define SUPPLE_0_WAKEUP ((IRQ_SUPPLE_0 - (IRQ_CORETMR + 1)) % 32)
static inline void
bfin_iwr_restore(unsigned long iwr0, unsigned long iwr1, unsigned long iwr2)
#define bfin_iwr_restore bfin_iwr_restore
static inline void
bfin_iwr_save(unsigned long niwr0, unsigned long niwr1, unsigned long niwr2,
unsigned long *iwr0, unsigned long *iwr1, unsigned long *iwr2)
#define bfin_iwr_save bfin_iwr_save
static inline void
bfin_iwr_set_sup0(unsigned long *iwr0, unsigned long *iwr1, unsigned long *iwr2)
