#define __ASM_ARCH_HARDWARE_H
#define UNCACHED_PHYS_0		0xff000000
#define UNCACHED_ADDR		UNCACHED_PHYS_0
#define io_p2v(x) (0xf2000000 + ((x) & 0x01ffffff) + (((x) & 0x1c000000) >> 1))
#define io_v2p(x) (0x3c000000 + ((x) & 0x01ffffff) + (((x) & 0x0e000000) << 1))
# define __REG(x)	(*((volatile u32 *)io_p2v(x)))
# define __REG2(x,y)	\
(*(volatile u32 *)((u32)&__REG(x) + (y)))
# define __PREG(x)	(io_v2p((u32)&(x)))
# define __REG(x)	io_p2v(x)
# define __PREG(x)	io_v2p(x)
#define __cpu_is_pxa210(id)				\
()
#define __cpu_is_pxa250(id)				\
()
#define __cpu_is_pxa255(id)				\
()
#define __cpu_is_pxa25x(id)				\
()
#define __cpu_is_pxa210(id)	(0)
#define __cpu_is_pxa250(id)	(0)
#define __cpu_is_pxa255(id)	(0)
#define __cpu_is_pxa25x(id)	(0)
#define __cpu_is_pxa27x(id)				\
()
#define __cpu_is_pxa27x(id)	(0)
#define __cpu_is_pxa300(id)				\
()
#define __cpu_is_pxa300(id)	(0)
#define __cpu_is_pxa310(id)				\
()
#define __cpu_is_pxa310(id)	(0)
#define __cpu_is_pxa320(id)				\
()
#define __cpu_is_pxa320(id)	(0)
#define __cpu_is_pxa930(id)				\
()
#define __cpu_is_pxa930(id)	(0)
#define __cpu_is_pxa935(id)				\
()
#define __cpu_is_pxa935(id)	(0)
#define __cpu_is_pxa955(id)				\
()
#define __cpu_is_pxa955(id)	(0)
#define cpu_is_pxa210()					\
()
#define cpu_is_pxa250()					\
()
#define cpu_is_pxa255()                                 \
()
#define cpu_is_pxa25x()					\
()
#define cpu_is_pxa27x()					\
()
#define cpu_is_pxa300()					\
()
#define cpu_is_pxa310()					\
()
#define cpu_is_pxa320()					\
()
#define cpu_is_pxa930()					\
()
#define cpu_is_pxa935()					\
()
#define cpu_is_pxa955()					\
()
#if defined(CONFIG_PXA25x) || defined(CONFIG_PXA27x)
#define __cpu_is_pxa2xx(id)				\
()
#define __cpu_is_pxa2xx(id)	(0)
#define __cpu_is_pxa3xx(id)				\
()
#define __cpu_is_pxa3xx(id)	(0)
#if defined(CONFIG_CPU_PXA930) || defined(CONFIG_CPU_PXA935)
#define __cpu_is_pxa93x(id)				\
()
#define __cpu_is_pxa93x(id)	(0)
#define __cpu_is_pxa95x(id)				\
()
#define __cpu_is_pxa95x(id)	(0)
#define cpu_is_pxa2xx()					\
()
#define cpu_is_pxa3xx()					\
()
#define cpu_is_pxa93x()					\
()
#define cpu_is_pxa95x()					\
()
extern unsigned int get_memclk_frequency_10khz(void);
extern unsigned long get_clock_tick_rate(void);
#if defined(CONFIG_MACH_ARMCORE) && defined(CONFIG_PCI)
#define PCIBIOS_MIN_IO		0
#define PCIBIOS_MIN_MEM		0
#define pcibios_assign_all_busses()	1
#define ARCH_HAS_DMA_SET_COHERENT_MASK
