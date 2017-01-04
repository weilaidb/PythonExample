#define __ASM_BLACKFIN_KGDB_H__
#define BUFMAX 2048
enum regnames ;
#define NUMREGBYTES BFIN_NUM_REGS*4
static inline void arch_kgdb_breakpoint(void)
#define BREAK_INSTR_SIZE	2
# define CACHE_FLUSH_IS_SAFE	0
# define CACHE_FLUSH_IS_SAFE	1
#define GDB_ADJUSTS_BREAK_OFFSET
#define HW_INST_WATCHPOINT_NUM	6
#define HW_WATCHPOINT_NUM	8
#define TYPE_INST_WATCHPOINT	0
#define TYPE_DATA_WATCHPOINT	1
#define WPPWR		0x1
#define WPIREN01	0x2
#define WPIRINV01	0x4
#define WPIAEN0		0x8
#define WPIAEN1		0x10
#define WPICNTEN0	0x20
#define WPICNTEN1	0x40
#define EMUSW0		0x80
#define EMUSW1		0x100
#define WPIREN23	0x200
#define WPIRINV23	0x400
#define WPIAEN2		0x800
#define WPIAEN3		0x1000
#define WPICNTEN2	0x2000
#define WPICNTEN3	0x4000
#define EMUSW2		0x8000
#define EMUSW3		0x10000
#define WPIREN45	0x20000
#define WPIRINV45	0x40000
#define WPIAEN4		0x80000
#define WPIAEN5		0x100000
#define WPICNTEN4	0x200000
#define WPICNTEN5	0x400000
#define EMUSW4		0x800000
#define EMUSW5		0x1000000
#define WPAND		0x2000000
#define WPDREN01	0x1
#define WPDRINV01	0x2
#define WPDAEN0		0x4
#define WPDAEN1		0x8
#define WPDCNTEN0	0x10
#define WPDCNTEN1	0x20
#define WPDSRC0		0xc0
#define WPDACC0_OFFSET	8
#define WPDSRC1		0xc00
#define WPDACC1_OFFSET	12
#define STATIA0		0x1
#define STATIA1		0x2
#define STATIA2		0x4
#define STATIA3		0x8
#define STATIA4		0x10
#define STATIA5		0x20
#define STATDA0		0x40
#define STATDA1		0x80
