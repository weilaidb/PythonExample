#define __ASM_ARM_IO_H
#define isa_virt_to_bus virt_to_phys
#define isa_page_to_bus page_to_phys
#define isa_bus_to_virt phys_to_virt
extern void __raw_writesb(void __iomem *addr, const void *data, int bytelen);
extern void __raw_writesw(void __iomem *addr, const void *data, int wordlen);
extern void __raw_writesl(void __iomem *addr, const void *data, int longlen);
extern void __raw_readsb(const void __iomem *addr, void *data, int bytelen);
extern void __raw_readsw(const void __iomem *addr, void *data, int wordlen);
extern void __raw_readsl(const void __iomem *addr, void *data, int longlen);
#define __raw_writeb(v,a)	(__chk_io_ptr(a), *(volatile unsigned char __force  *)(a) = (v))
#define __raw_writew(v,a)	(__chk_io_ptr(a), *(volatile unsigned short __force *)(a) = (v))
#define __raw_writel(v,a)	(__chk_io_ptr(a), *(volatile unsigned int __force   *)(a) = (v))
#define __raw_readb(a)		(__chk_io_ptr(a), *(volatile unsigned char __force  *)(a))
#define __raw_readw(a)		(__chk_io_ptr(a), *(volatile unsigned short __force *)(a))
#define __raw_readl(a)		(__chk_io_ptr(a), *(volatile unsigned int __force   *)(a))
#define MT_DEVICE		0
#define MT_DEVICE_NONSHARED	1
#define MT_DEVICE_CACHED	2
#define MT_DEVICE_WC		3
extern void __iomem *__arm_ioremap_pfn_caller(unsigned long, unsigned long,
size_t, unsigned int, void *);
extern void __iomem *__arm_ioremap_caller(unsigned long, size_t, unsigned int,
void *);
extern void __iomem *__arm_ioremap_pfn(unsigned long, unsigned long, size_t, unsigned int);
extern void __iomem *__arm_ioremap(unsigned long, size_t, unsigned int);
extern void __iounmap(volatile void __iomem *addr);
extern void __readwrite_bug(const char *fn);
static inline void __iomem *__typesafe_io(unsigned long addr)
#define __iormb()		rmb()
#define __iowmb()		wmb()
#define __iormb()		do  while (0)
#define __iowmb()		do  while (0)
#define outb(v,p)	()
#define outw(v,p)	()
#define outl(v,p)	()
#define inb(p)	()
#define inw(p)	()
#define inl(p)	()
#define outsb(p,d,l)		__raw_writesb(__io(p),d,l)
#define outsw(p,d,l)		__raw_writesw(__io(p),d,l)
#define outsl(p,d,l)		__raw_writesl(__io(p),d,l)
#define insb(p,d,l)		__raw_readsb(__io(p),d,l)
#define insw(p,d,l)		__raw_readsw(__io(p),d,l)
#define insl(p,d,l)		__raw_readsl(__io(p),d,l)
#define outb_p(val,port)	outb((val),(port))
#define outw_p(val,port)	outw((val),(port))
#define outl_p(val,port)	outl((val),(port))
#define inb_p(port)		inb((port))
#define inw_p(port)		inw((port))
#define inl_p(port)		inl((port))
#define outsb_p(port,from,len)	outsb(port,from,len)
#define outsw_p(port,from,len)	outsw(port,from,len)
#define outsl_p(port,from,len)	outsl(port,from,len)
#define insb_p(port,to,len)	insb(port,to,len)
#define insw_p(port,to,len)	insw(port,to,len)
#define insl_p(port,to,len)	insl(port,to,len)
extern void _memcpy_fromio(void *, const volatile void __iomem *, size_t);
extern void _memcpy_toio(volatile void __iomem *, const void *, size_t);
extern void _memset_io(volatile void __iomem *, int, size_t);
#define mmiowb()
#define readb_relaxed(c) ()
#define readw_relaxed(c) ()
#define readl_relaxed(c) ()
#define writeb_relaxed(v,c)	((void)__raw_writeb(v,__mem_pci(c)))
#define writew_relaxed(v,c)	((void)__raw_writew((__force u16) \
cpu_to_le16(v),__mem_pci(c)))
#define writel_relaxed(v,c)	((void)__raw_writel((__force u32) \
cpu_to_le32(v),__mem_pci(c)))
#define readb(c)		()
#define readw(c)		()
#define readl(c)		()
#define writeb(v,c)		()
#define writew(v,c)		()
#define writel(v,c)		()
#define readsb(p,d,l)		__raw_readsb(__mem_pci(p),d,l)
#define readsw(p,d,l)		__raw_readsw(__mem_pci(p),d,l)
#define readsl(p,d,l)		__raw_readsl(__mem_pci(p),d,l)
#define writesb(p,d,l)		__raw_writesb(__mem_pci(p),d,l)
#define writesw(p,d,l)		__raw_writesw(__mem_pci(p),d,l)
#define writesl(p,d,l)		__raw_writesl(__mem_pci(p),d,l)
#define memset_io(c,v,l)	_memset_io(__mem_pci(c),(v),(l))
#define memcpy_fromio(a,c,l)	_memcpy_fromio((a),__mem_pci(c),(l))
#define memcpy_toio(c,a,l)	_memcpy_toio(__mem_pci(c),(a),(l))
#elif !defined(readb)
#define readb(c)			(__readwrite_bug("readb"),0)
#define readw(c)			(__readwrite_bug("readw"),0)
#define readl(c)			(__readwrite_bug("readl"),0)
#define writeb(v,c)			__readwrite_bug("writeb")
#define writew(v,c)			__readwrite_bug("writew")
#define writel(v,c)			__readwrite_bug("writel")
#define check_signature(io,sig,len)	(0)
#define __arch_ioremap			__arm_ioremap
#define __arch_iounmap			__iounmap
#define ioremap(cookie,size)		__arch_ioremap((cookie), (size), MT_DEVICE)
#define ioremap_nocache(cookie,size)	__arch_ioremap((cookie), (size), MT_DEVICE)
#define ioremap_cached(cookie,size)	__arch_ioremap((cookie), (size), MT_DEVICE_CACHED)
#define ioremap_wc(cookie,size)		__arch_ioremap((cookie), (size), MT_DEVICE_WC)
#define iounmap				__arch_iounmap
#define ioread8(p)	()
#define ioread16(p)	()
#define ioread32(p)	()
#define iowrite8(v,p)	()
#define iowrite16(v,p)	()
#define iowrite32(v,p)	()
#define ioread8_rep(p,d,c)	__raw_readsb(p,d,c)
#define ioread16_rep(p,d,c)	__raw_readsw(p,d,c)
#define ioread32_rep(p,d,c)	__raw_readsl(p,d,c)
#define iowrite8_rep(p,s,c)	__raw_writesb(p,s,c)
#define iowrite16_rep(p,s,c)	__raw_writesw(p,s,c)
#define iowrite32_rep(p,s,c)	__raw_writesl(p,s,c)
extern void __iomem *ioport_map(unsigned long port, unsigned int nr);
extern void ioport_unmap(void __iomem *addr);
struct pci_dev;
extern void __iomem *pci_iomap(struct pci_dev *dev, int bar, unsigned long maxlen);
extern void pci_iounmap(struct pci_dev *dev, void __iomem *addr);
#define BIOVEC_MERGEABLE(vec1, vec2)	\
((bvec_to_phys((vec1)) + (vec1)->bv_len) == bvec_to_phys((vec2)))
#define ARCH_HAS_VALID_PHYS_ADDR_RANGE
extern int valid_phys_addr_range(unsigned long addr, size_t size);
extern int valid_mmap_phys_addr_range(unsigned long pfn, size_t size);
extern int devmem_is_allowed(unsigned long pfn);
#define xlate_dev_mem_ptr(p)	__va(p)
#define xlate_dev_kmem_ptr(p)	p
extern void register_isa_ports(unsigned int mmio, unsigned int io,
unsigned int io_shift);
