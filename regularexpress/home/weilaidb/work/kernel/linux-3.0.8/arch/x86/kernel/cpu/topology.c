#define SMT_LEVEL	0
#define INVALID_TYPE	0
#define SMT_TYPE	1
#define CORE_TYPE	2
#define LEAFB_SUBTYPE(ecx)		(((ecx) >> 8) & 0xff)
#define BITS_SHIFT_NEXT_LEVEL(eax)	((eax) & 0x1f)
#define LEVEL_MAX_SIBLINGS(ebx)		((ebx) & 0xffff)
void __cpuinit detect_extended_topology(struct cpuinfo_x86 *c)
