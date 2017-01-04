#define _MACH_COMMON_PLL_H
static inline void
bfin_iwr_restore(unsigned long iwr0, unsigned long iwr1, unsigned long iwr2)
static inline void
bfin_iwr_save(unsigned long niwr0, unsigned long niwr1, unsigned long niwr2,
unsigned long *iwr0, unsigned long *iwr1, unsigned long *iwr2)
static inline void _bfin_write_pll_relock(u32 addr, unsigned int val)
static inline void bfin_write_PLL_CTL(unsigned int val)
static inline void bfin_write_VR_CTL(unsigned int val)
