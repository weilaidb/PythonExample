#define _PPC_BOOT_PQ2_H_
int pq2_get_clocks(u32 crystal, u32 *sysfreq, u32 *corefreq,
u32 *timebase, u32 *brgfreq);
void pq2_set_clocks(u32 sysfreq, u32 corefreq, u32 timebase, u32 brgfreq);
int pq2_fixup_clocks(u32 crystal);
