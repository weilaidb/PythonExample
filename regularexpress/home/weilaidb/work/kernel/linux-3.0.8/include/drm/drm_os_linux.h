static inline u64 readq(void __iomem *reg)
static inline void writeq(u64 val, void __iomem *reg)
#define DRM_CURRENTPID			task_pid_nr(current)
#define DRM_SUSER(p)			capable(CAP_SYS_ADMIN)
#define DRM_UDELAY(d)			udelay(d)
#define DRM_READ8(map, offset)		readb(((void __iomem *)(map)->handle) + (offset))
#define DRM_READ16(map, offset)         readw(((void __iomem *)(map)->handle) + (offset))
#define DRM_READ32(map, offset)		readl(((void __iomem *)(map)->handle) + (offset))
#define DRM_WRITE8(map, offset, val)	writeb(val, ((void __iomem *)(map)->handle) + (offset))
#define DRM_WRITE16(map, offset, val)   writew(val, ((void __iomem *)(map)->handle) + (offset))
#define DRM_WRITE32(map, offset, val)	writel(val, ((void __iomem *)(map)->handle) + (offset))
#define DRM_READ64(map, offset)		readq(((void __iomem *)(map)->handle) + (offset))
#define DRM_WRITE64(map, offset, val)	writeq(val, ((void __iomem *)(map)->handle) + (offset))
#define DRM_READMEMORYBARRIER()		rmb()
#define DRM_WRITEMEMORYBARRIER()	wmb()
#define DRM_MEMORYBARRIER()		mb()
#define DRM_IRQ_ARGS		int irq, void *arg
#if __OS_HAS_AGP
#define DRM_AGP_MEM		struct agp_memory
#define DRM_AGP_KERN		struct agp_kern_info
struct no_agp_kern ;
#define DRM_AGP_MEM             int
#define DRM_AGP_KERN            struct no_agp_kern
#if !(__OS_HAS_MTRR)
static __inline__ int mtrr_add(unsigned long base, unsigned long size,
unsigned int type, char increment)
static __inline__ int mtrr_del(int reg, unsigned long base, unsigned long size)
#define MTRR_TYPE_WRCOMB     1
#define DRM_COPY_FROM_USER(arg1, arg2, arg3)		\
copy_from_user(arg1, arg2, arg3)
#define DRM_COPY_TO_USER(arg1, arg2, arg3)		\
copy_to_user(arg1, arg2, arg3)
#define DRM_VERIFYAREA_READ( uaddr, size )		\
(access_ok( VERIFY_READ, uaddr, size ) ? 0 : -EFAULT)
#define DRM_COPY_FROM_USER_UNCHECKED(arg1, arg2, arg3)	\
__copy_from_user(arg1, arg2, arg3)
#define DRM_COPY_TO_USER_UNCHECKED(arg1, arg2, arg3)	\
__copy_to_user(arg1, arg2, arg3)
#define DRM_GET_USER_UNCHECKED(val, uaddr)		\
__get_user(val, uaddr)
#define DRM_HZ HZ
#define DRM_WAIT_ON( ret, queue, timeout, condition )		\
do  while (0)
#define DRM_WAKEUP( queue ) wake_up( queue )
#define DRM_INIT_WAITQUEUE( queue ) init_waitqueue_head( queue )
