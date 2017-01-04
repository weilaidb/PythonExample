#define _BLACKFIN_H_
static inline void SSYNC(void)
static inline void CSYNC(void)
#define LO(con32) ((con32) & 0xFFFF)
#define lo(con32) ((con32) & 0xFFFF)
#define HI(con32) (((con32) >> 16) & 0xFFFF)
#define hi(con32) (((con32) >> 16) & 0xFFFF)
#define ssync(x) SSYNC(x)
#define csync(x) CSYNC(x)
#if ANOMALY_05000312
#define SSYNC(scratch) cli scratch; nop; nop; SSYNC; sti scratch;
#define CSYNC(scratch) cli scratch; nop; nop; CSYNC; sti scratch;
#elif ANOMALY_05000244
#define SSYNC(scratch) nop; nop; nop; SSYNC;
#define CSYNC(scratch) nop; nop; nop; CSYNC;
#define SSYNC(scratch) SSYNC;
#define CSYNC(scratch) CSYNC;
