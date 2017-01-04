#define _ASM_X86_XCR_H
#define XCR_XFEATURE_ENABLED_MASK	0x00000000
# ifndef __ASSEMBLY__
static inline u64 xgetbv(u32 index)
static inline void xsetbv(u32 index, u64 value)
# endif
