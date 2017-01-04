#define __ASM_ARCH_IO_H
#define IO_SPACE_LIMIT		0xFFFFFFFF
#define __io(a)		__typesafe_io(a)
#define __mem_pci(a)	(a)
static inline unsigned int at91_sys_read(unsigned int reg_offset)
static inline void at91_sys_write(unsigned int reg_offset, unsigned long value)
