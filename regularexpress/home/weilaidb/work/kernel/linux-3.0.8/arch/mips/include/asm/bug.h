#define __ASM_BUG_H
static inline void __noreturn BUG(void)
#define HAVE_ARCH_BUG
#if (_MIPS_ISA > _MIPS_ISA_MIPS1)
static inline void  __BUG_ON(unsigned long condition)
#define BUG_ON(C) __BUG_ON((unsigned long)(C))
#define HAVE_ARCH_BUG_ON
