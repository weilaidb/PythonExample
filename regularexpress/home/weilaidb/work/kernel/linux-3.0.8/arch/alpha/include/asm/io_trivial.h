#if IO_CONCAT(__IO_PREFIX,trivial_io_bw)
__EXTERN_INLINE unsigned int
IO_CONCAT(__IO_PREFIX,ioread8)(void __iomem *a)
__EXTERN_INLINE unsigned int
IO_CONCAT(__IO_PREFIX,ioread16)(void __iomem *a)
__EXTERN_INLINE void
IO_CONCAT(__IO_PREFIX,iowrite8)(u8 b, void __iomem *a)
__EXTERN_INLINE void
IO_CONCAT(__IO_PREFIX,iowrite16)(u16 b, void __iomem *a)
#if IO_CONCAT(__IO_PREFIX,trivial_io_lq)
__EXTERN_INLINE unsigned int
IO_CONCAT(__IO_PREFIX,ioread32)(void __iomem *a)
__EXTERN_INLINE void
IO_CONCAT(__IO_PREFIX,iowrite32)(u32 b, void __iomem *a)
#if IO_CONCAT(__IO_PREFIX,trivial_rw_bw) == 1
__EXTERN_INLINE u8
IO_CONCAT(__IO_PREFIX,readb)(const volatile void __iomem *a)
__EXTERN_INLINE u16
IO_CONCAT(__IO_PREFIX,readw)(const volatile void __iomem *a)
__EXTERN_INLINE void
IO_CONCAT(__IO_PREFIX,writeb)(u8 b, volatile void __iomem *a)
__EXTERN_INLINE void
IO_CONCAT(__IO_PREFIX,writew)(u16 b, volatile void __iomem *a)
#elif IO_CONCAT(__IO_PREFIX,trivial_rw_bw) == 2
__EXTERN_INLINE u8
IO_CONCAT(__IO_PREFIX,readb)(const volatile void __iomem *a)
__EXTERN_INLINE u16
IO_CONCAT(__IO_PREFIX,readw)(const volatile void __iomem *a)
__EXTERN_INLINE void
IO_CONCAT(__IO_PREFIX,writeb)(u8 b, volatile void __iomem *a)
__EXTERN_INLINE void
IO_CONCAT(__IO_PREFIX,writew)(u16 b, volatile void __iomem *a)
#if IO_CONCAT(__IO_PREFIX,trivial_rw_lq) == 1
__EXTERN_INLINE u32
IO_CONCAT(__IO_PREFIX,readl)(const volatile void __iomem *a)
__EXTERN_INLINE u64
IO_CONCAT(__IO_PREFIX,readq)(const volatile void __iomem *a)
__EXTERN_INLINE void
IO_CONCAT(__IO_PREFIX,writel)(u32 b, volatile void __iomem *a)
__EXTERN_INLINE void
IO_CONCAT(__IO_PREFIX,writeq)(u64 b, volatile void __iomem *a)
#if IO_CONCAT(__IO_PREFIX,trivial_iounmap)
__EXTERN_INLINE void IO_CONCAT(__IO_PREFIX,iounmap)(volatile void __iomem *a)
