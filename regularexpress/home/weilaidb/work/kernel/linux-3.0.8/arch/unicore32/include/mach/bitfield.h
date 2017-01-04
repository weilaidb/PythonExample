#define __MACH_PUV3_BITFIELD_H__
#define UData(Data)	((unsigned long) (Data))
#define UData(Data)	(Data)
#define FIELD(val, vmask, vshift)	(((val) & ((UData(1) << (vmask)) - 1)) << (vshift))
#define FMASK(vmask, vshift)		(((UData(1) << (vmask)) - 1) << (vshift))
