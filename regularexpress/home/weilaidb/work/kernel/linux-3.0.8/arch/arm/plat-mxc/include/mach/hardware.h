#define __ASM_ARCH_MXC_HARDWARE_H__
#define IOMEM(addr)	(addr)
#define IOMEM(addr)	((void __force __iomem *)(addr))
#define IMX_IO_P2V_MODULE(addr, module)					\
(((addr) - module ## _BASE_ADDR) < module ## _SIZE ?		\
(addr) - (module ## _BASE_ADDR) + (module ## _BASE_ADDR_VIRT) : 0)
#define IMX_IO_P2V(x)	(						\
0xf4000000 +					\
(((x) & 0x50000000) >> 6) +			\
(((x) & 0x0b000000) >> 4) +			\
(((x) & 0x000fffff)))
#define IMX_IO_ADDRESS(x)	IOMEM(IMX_IO_P2V(x))
# include <mach/mx2x.h>
# ifdef CONFIG_MACH_MX21
#  include <mach/mx21.h>
# endif
# ifdef CONFIG_MACH_MX27
#  include <mach/mx27.h>
# endif
# include <mach/mx1.h>
# include <mach/mx25.h>
#define imx_map_entry(soc, name, _type)
