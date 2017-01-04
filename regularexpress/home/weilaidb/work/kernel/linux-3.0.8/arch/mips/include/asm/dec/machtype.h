#define __ASM_DEC_MACHTYPE_H
#define TURBOCHANNEL	(mips_machtype == MACH_DS5000_200 || \
mips_machtype == MACH_DS5000_1XX || \
mips_machtype == MACH_DS5000_XX  || \
mips_machtype == MACH_DS5000_2X0 || \
mips_machtype == MACH_DS5900)
#define IOASIC		(mips_machtype == MACH_DS5000_1XX || \
mips_machtype == MACH_DS5000_XX  || \
mips_machtype == MACH_DS5000_2X0 || \
mips_machtype == MACH_DS5900)
