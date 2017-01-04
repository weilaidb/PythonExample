#define __ASM_ARCH_HARDWARE_H
#define UNCACHEABLE_ADDR	0xfa050000
#define VIO_BASE        0xf8000000
#define VIO_SHIFT       3
#define PIO_START       0x80000000
#define io_p2v( x )             \
( (((x)&0x00ffffff) | (((x)&0x30000000)>>VIO_SHIFT)) + VIO_BASE )
#define io_v2p( x )             \
( (((x)&0x00ffffff) | (((x)&(0x30000000>>VIO_SHIFT))<<VIO_SHIFT)) + PIO_START )
#define CPU_SA1110_A0	(0)
#define CPU_SA1110_B0	(4)
#define CPU_SA1110_B1	(5)
#define CPU_SA1110_B2	(6)
#define CPU_SA1110_B4	(8)
#define CPU_SA1100_ID	(0x4401a110)
#define CPU_SA1100_MASK	(0xfffffff0)
#define CPU_SA1110_ID	(0x6901b110)
#define CPU_SA1110_MASK	(0xfffffff0)
#define CPU_REVISION	(read_cpuid_id() & 15)
#define cpu_is_sa1100()	((read_cpuid_id() & CPU_SA1100_MASK) == CPU_SA1100_ID)
#define cpu_is_sa1110()	((read_cpuid_id() & CPU_SA1110_MASK) == CPU_SA1110_ID)
# define __REG(x)	(*((volatile unsigned long *)io_p2v(x)))
# define __PREG(x)	(io_v2p((unsigned long)&(x)))
static inline unsigned long get_clock_tick_rate(void)
# define __REG(x)	io_p2v(x)
# define __PREG(x)	io_v2p(x)
#if defined(CONFIG_ARCH_SA1100) && defined(CONFIG_PCI)
#define PCIBIOS_MIN_IO		0
#define PCIBIOS_MIN_MEM		0
#define pcibios_assign_all_busses()	1
#define HAVE_ARCH_PCI_SET_DMA_MASK	1
