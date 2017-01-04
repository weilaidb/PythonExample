#define _SPARC_TSUNAMI_H
#define TSUNAMI_SW        0x00800000
#define TSUNAMI_AV        0x00400000
#define TSUNAMI_DV        0x00200000
#define TSUNAMI_MV        0x00100000
#define TSUNAMI_PC        0x00020000
#define TSUNAMI_ITD       0x00010000
#define TSUNAMI_ALC       0x00008000
#define TSUNAMI_PE        0x00001000
#define TSUNAMI_RCMASK    0x00000C00
#define TSUNAMI_IENAB     0x00000200
#define TSUNAMI_DENAB     0x00000100
#define TSUNAMI_NF        0x00000002
#define TSUNAMI_ME        0x00000001
static inline void tsunami_flush_icache(void)
static inline void tsunami_flush_dcache(void)
