#define __ASM_ARM_ARCH_IO_H
#define IO_SPACE_LIMIT 0xffffffff
#define __PORT_PCIO(x)	((x) < (1<<28))
#define PCIO_BASE	 (S3C24XX_VA_ISA_WORD)
#define PCIO_BASE_b	 (S3C24XX_VA_ISA_BYTE)
#define PCIO_BASE_w	 (S3C24XX_VA_ISA_WORD)
#define PCIO_BASE_l	 (S3C24XX_VA_ISA_WORD)
#define DECLARE_DYN_OUT(sz,fnsuffix,instr) \
static inline void __out##fnsuffix (unsigned int val, unsigned int port) \
#define DECLARE_DYN_IN(sz,fnsuffix,instr)				\
static inline unsigned sz __in##fnsuffix (unsigned int port)		\
static inline void __iomem *__ioaddr (unsigned long port)
#define DECLARE_IO(sz,fnsuffix,instr)	\
DECLARE_DYN_IN(sz,fnsuffix,instr) \
DECLARE_DYN_OUT(sz,fnsuffix,instr)
DECLARE_IO(char,b,"b")
DECLARE_IO(short,w,"h")
DECLARE_IO(int,l,"")
#undef DECLARE_IO
#undef DECLARE_DYN_IN
#define __outbc(value,port)						\
()
#define __inbc(port)							\
()
#define __outwc(value,port)						\
()
#define __inwc(port)							\
()
#define __outlc(value,port)						\
()
#define __inlc(port)							\
()
#define __ioaddrc(port)	((__PORT_PCIO(port) ? PCIO_BASE + (port) : (void __iomem *)(port)))
#define inb(p)		(__builtin_constant_p((p)) ? __inbc(p)	   : __inb(p))
#define inw(p)		(__builtin_constant_p((p)) ? __inwc(p)	   : __inw(p))
#define inl(p)		(__builtin_constant_p((p)) ? __inlc(p)	   : __inl(p))
#define outb(v,p)	(__builtin_constant_p((p)) ? __outbc(v,p) : __outb(v,p))
#define outw(v,p)	(__builtin_constant_p((p)) ? __outwc(v,p) : __outw(v,p))
#define outl(v,p)	(__builtin_constant_p((p)) ? __outlc(v,p) : __outl(v,p))
#define __ioaddr(p)	(__builtin_constant_p((p)) ? __ioaddr(p)  : __ioaddrc(p))
#define ioaddr(port)	__ioaddr((port))
#define insb(p,d,l)	__raw_readsb(__ioaddr(p),d,l)
#define insw(p,d,l)	__raw_readsw(__ioaddr(p),d,l)
#define insl(p,d,l)	__raw_readsl(__ioaddr(p),d,l)
#define outsb(p,d,l)	__raw_writesb(__ioaddr(p),d,l)
#define outsw(p,d,l)	__raw_writesw(__ioaddr(p),d,l)
#define outsl(p,d,l)	__raw_writesl(__ioaddr(p),d,l)
#define __mem_pci(x)	(x)
