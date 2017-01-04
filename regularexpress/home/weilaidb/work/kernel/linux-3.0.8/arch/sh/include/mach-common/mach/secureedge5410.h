#define _ASM_SH_IO_SNAPGEAR_H
#define __IO_PREFIX	snapgear
#define SECUREEDGE_IOPORT_ADDR ((volatile short *) 0xb0000000)
extern unsigned short secureedge5410_ioport;
#define SECUREEDGE_WRITE_IOPORT(val, mask) (*SECUREEDGE_IOPORT_ADDR = \
(secureedge5410_ioport = \
((secureedge5410_ioport & ~(mask)) | ((val) & (mask)))))
#define SECUREEDGE_READ_IOPORT() \
((*SECUREEDGE_IOPORT_ADDR&0x0817) | (secureedge5410_ioport&~0x0817))
