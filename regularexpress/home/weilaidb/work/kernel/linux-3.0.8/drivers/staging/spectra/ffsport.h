#define _FFSPORT_
#if defined __GNUC__
#define PACKED
#define PACKED_GNU __attribute__ ((packed))
#define UNALIGNED
#define VERBOSE    1
#define NAND_DBG_WARN  1
#define NAND_DBG_DEBUG 2
#define NAND_DBG_TRACE 3
extern int nand_debug_level;
#define nand_dbg_print(level, args...)			\
do  while (0)
#define nand_dbg_print(level, args...)
#define INVERTUINT16(w)   ((u16)(((u16)(w)) << 8) | \
(u16)((u16)(w) >> 8))
#define INVERTUINT32(dw)  (((u32)(dw) << 24) | \
(((u32)(dw) << 8) & 0x00ff0000) | \
(((u32)(dw) >> 8) & 0x0000ff00) | \
((u32)(dw) >> 24))
#define INVERTUINT16(w)   w
#define INVERTUINT32(dw)  dw
extern int GLOB_Calc_Used_Bits(u32 n);
extern u64 GLOB_u64_Div(u64 addr, u32 divisor);
extern u64 GLOB_u64_Remainder(u64 addr, u32 divisor_type);
extern int register_spectra_ftl(void);
