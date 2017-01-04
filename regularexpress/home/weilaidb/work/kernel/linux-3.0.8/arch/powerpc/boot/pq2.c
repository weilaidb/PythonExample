#define PQ2_SCCR (0x10c80/4)
#define PQ2_SCMR (0x10c88/4)
static int pq2_corecnf_map[] = ;
int pq2_get_clocks(u32 crystal, u32 *sysfreq, u32 *corefreq,
u32 *timebase, u32 *brgfreq)
void pq2_set_clocks(u32 sysfreq, u32 corefreq, u32 timebase, u32 brgfreq)
int pq2_fixup_clocks(u32 crystal)
