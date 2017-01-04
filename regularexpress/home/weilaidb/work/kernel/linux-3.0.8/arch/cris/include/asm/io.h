#define _ASM_CRIS_IO_H
struct cris_io_operations
;
extern struct cris_io_operations *cris_iops;
#define cris_iops ((struct cris_io_operations*)NULL)
static inline unsigned long virt_to_phys(volatile void * address)
static inline void * phys_to_virt(unsigned long address)
extern void __iomem * __ioremap(unsigned long offset, unsigned long size, unsigned long flags);
extern void __iomem * __ioremap_prot(unsigned long phys_addr, unsigned long size, pgprot_t prot);
static inline void __iomem * ioremap (unsigned long offset, unsigned long size)
extern void iounmap(volatile void * __iomem addr);
extern void __iomem * ioremap_nocache(unsigned long offset, unsigned long size);
#define virt_to_bus virt_to_phys
#define bus_to_virt phys_to_virt
#define PCI_SPACE(x) ((((unsigned)(x)) & 0x10000000) == 0x10000000)
#define PCI_SPACE(x) 0
static inline unsigned char readb(const volatile void __iomem *addr)
static inline unsigned short readw(const volatile void __iomem *addr)
static inline unsigned int readl(const volatile void __iomem *addr)
#define readb_relaxed(addr) readb(addr)
#define readw_relaxed(addr) readw(addr)
#define readl_relaxed(addr) readl(addr)
#define __raw_readb readb
#define __raw_readw readw
#define __raw_readl readl
static inline void writeb(unsigned char b, volatile void __iomem *addr)
static inline void writew(unsigned short b, volatile void __iomem *addr)
static inline void writel(unsigned int b, volatile void __iomem *addr)
#define __raw_writeb writeb
#define __raw_writew writew
#define __raw_writel writel
#define mmiowb()
#define memset_io(a,b,c)	memset((void *)(a),(b),(c))
#define memcpy_fromio(a,b,c)	memcpy((a),(void *)(b),(c))
#define memcpy_toio(a,b,c)	memcpy((void *)(a),(b),(c))
#define IO_SPACE_LIMIT 0xffff
#define inb(port) (cris_iops ? cris_iops->read_io(port,NULL,1,1) : 0)
#define inw(port) (cris_iops ? cris_iops->read_io(port,NULL,2,1) : 0)
#define inl(port) (cris_iops ? cris_iops->read_io(port,NULL,4,1) : 0)
#define insb(port,addr,count) (cris_iops ? cris_iops->read_io(port,addr,1,count) : 0)
#define insw(port,addr,count) (cris_iops ? cris_iops->read_io(port,addr,2,count) : 0)
#define insl(port,addr,count) (cris_iops ? cris_iops->read_io(port,addr,4,count) : 0)
#define outb(data,port) if (cris_iops) cris_iops->write_io(port,(void*)(unsigned)data,1,1)
#define outw(data,port) if (cris_iops) cris_iops->write_io(port,(void*)(unsigned)data,2,1)
#define outl(data,port) if (cris_iops) cris_iops->write_io(port,(void*)(unsigned)data,4,1)
#define outsb(port,addr,count) if(cris_iops) cris_iops->write_io(port,(void*)addr,1,count)
#define outsw(port,addr,count) if(cris_iops) cris_iops->write_io(port,(void*)addr,2,count)
#define outsl(port,addr,count) if(cris_iops) cris_iops->write_io(port,(void*)addr,3,count)
#define xlate_dev_mem_ptr(p)	__va(p)
#define xlate_dev_kmem_ptr(p)	p
