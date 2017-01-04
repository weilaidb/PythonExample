#define _SPARC_VIKING_H
#define VIKING_MMUENABLE    0x00000001
#define VIKING_NOFAULT      0x00000002
#define VIKING_PSO          0x00000080
#define VIKING_DCENABLE     0x00000100
#define VIKING_ICENABLE     0x00000200
#define VIKING_SBENABLE     0x00000400
#define VIKING_MMODE        0x00000800
#define VIKING_PCENABLE     0x00001000
#define VIKING_BMODE        0x00002000
#define VIKING_SPENABLE     0x00004000
#define VIKING_ACENABLE     0x00008000
#define VIKING_TCENABLE     0x00010000
#define VIKING_DPENABLE     0x00040000
#define VIKING_ACTION_MIX   0x00001000
#define VIKING_PTAG_VALID   0x01000000
#define VIKING_PTAG_DIRTY   0x00010000
#define VIKING_PTAG_SHARED  0x00000100
static inline void viking_flush_icache(void)
static inline void viking_flush_dcache(void)
static inline void viking_unlock_icache(void)
static inline void viking_unlock_dcache(void)
static inline void viking_set_bpreg(unsigned long regval)
static inline unsigned long viking_get_bpreg(void)
static inline void viking_get_dcache_ptag(int set, int block,
unsigned long *data)
static inline void viking_mxcc_turn_off_parity(unsigned long *mregp,
unsigned long *mxcc_cregp)
static inline unsigned long viking_hwprobe(unsigned long vaddr)
