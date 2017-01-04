#define _LINUX_ASM_VGA_H_
#define VT_BUF_HAVE_RW
#define VT_BUF_HAVE_MEMSETW
#define VT_BUF_HAVE_MEMCPYW
static inline void scr_writew(u16 val, volatile u16 *addr)
static inline u16 scr_readw(volatile const u16 *addr)
static inline void scr_memsetw(u16 *s, u16 c, unsigned int count)
extern void scr_memcpyw(u16 *d, const u16 *s, unsigned int count);
#define vga_readb(a)	readb((u8 __iomem *)(a))
#define vga_writeb(v,a)	writeb(v, (u8 __iomem *)(a))
extern struct pci_controller *pci_vga_hose;
# define __is_port_vga(a)       \
(((a) >= 0x3b0) && ((a) < 0x3e0) && \
((a) != 0x3b3) && ((a) != 0x3d3))
# define __is_mem_vga(a) \
(((a) >= 0xa0000) && ((a) <= 0xc0000))
# define FIXUP_IOADDR_VGA(a) do  while(0)
# define FIXUP_MEMADDR_VGA(a) do  while(0)
# define pci_vga_hose 0
# define __is_port_vga(a) 0
# define __is_mem_vga(a) 0
# define FIXUP_IOADDR_VGA(a)
# define FIXUP_MEMADDR_VGA(a)
#define VGA_MAP_MEM(x,s)	((unsigned long) ioremap(x, s))
