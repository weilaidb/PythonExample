#define _SPARC_TURBOSPARC_H
#define TURBOSPARC_MMUENABLE    0x00000001
#define TURBOSPARC_NOFAULT      0x00000002
#define TURBOSPARC_ICSNOOP	0x00000004
#define TURBOSPARC_PSO          0x00000080
#define TURBOSPARC_DCENABLE     0x00000100
#define TURBOSPARC_ICENABLE     0x00000200
#define TURBOSPARC_BMODE        0x00004000
#define TURBOSPARC_PARITYODD	0x00020000
#define TURBOSPARC_PCENABLE	0x00040000
#define TURBOSPARC_SCENABLE 0x00000008
#define TURBOSPARC_uS2	    0x00000010
#define TURBOSPARC_WTENABLE 0x00000020
#define TURBOSPARC_SNENABLE 0x40000000
static inline void turbosparc_inv_insn_tag(unsigned long addr)
static inline void turbosparc_inv_data_tag(unsigned long addr)
static inline void turbosparc_flush_icache(void)
static inline void turbosparc_flush_dcache(void)
static inline void turbosparc_idflash_clear(void)
static inline void turbosparc_set_ccreg(unsigned long regval)
static inline unsigned long turbosparc_get_ccreg(void)
