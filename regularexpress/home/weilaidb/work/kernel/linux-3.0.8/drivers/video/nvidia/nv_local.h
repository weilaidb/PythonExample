#define __NV_LOCAL_H__
#define NV_WR08(p,i,d)  (__raw_writeb((d), (void __iomem *)(p) + (i)))
#define NV_RD08(p,i)    (__raw_readb((void __iomem *)(p) + (i)))
#define NV_WR16(p,i,d)  (__raw_writew((d), (void __iomem *)(p) + (i)))
#define NV_RD16(p,i)    (__raw_readw((void __iomem *)(p) + (i)))
#define NV_WR32(p,i,d)  (__raw_writel((d), (void __iomem *)(p) + (i)))
#define NV_RD32(p,i)    (__raw_readl((void __iomem *)(p) + (i)))
#define VGA_WR08(p,i,d) (writeb((d), (void __iomem *)(p) + (i)))
#define VGA_RD08(p,i)   (readb((void __iomem *)(p) + (i)))
#define NVDmaNext(par, data) \
NV_WR32(&(par)->dmaBase[(par)->dmaCurrent++], 0, (data))
#define NVDmaStart(info, par, tag, size)
#if defined(__i386__)
#define _NV_FENCE() outb(0, 0x3D0);
#define _NV_FENCE() mb();
#define WRITE_PUT(par, data)
#define READ_GET(par) (NV_RD32(&(par)->FIFO[0x0011], 0) >> 2)
#define reverse_order(l)        \
do  while(0)
#define reverse_order(l) do  while(0)
