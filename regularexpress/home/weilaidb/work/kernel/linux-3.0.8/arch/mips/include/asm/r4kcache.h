#define _ASM_R4KCACHE_H
#define INDEX_BASE	CKSEG0
#define cache_op(op,addr)						\
__asm__ __volatile__(						\
"	.set	push					\n"	\
"	.set	noreorder				\n"	\
"	.set	mips3\n\t				\n"	\
"	cache	%0, %1					\n"	\
"	.set	pop					\n"	\
:								\
: "i" (op), "R" (*(unsigned char *)(addr)))
#define PROTECT_CACHE_FLUSHES 1
extern int mt_protiflush;
extern int mt_protdflush;
extern void mt_cflush_lockdown(void);
extern void mt_cflush_release(void);
#define BEGIN_MT_IPROT \
unsigned long flags = 0;			\
unsigned long mtflags = 0;			\
if(mt_protiflush)
#define END_MT_IPROT \
if(mt_protiflush)
#define BEGIN_MT_DPROT \
unsigned long flags = 0;			\
unsigned long mtflags = 0;			\
if(mt_protdflush)
#define END_MT_DPROT \
if(mt_protdflush)
#define BEGIN_MT_IPROT
#define BEGIN_MT_DPROT
#define END_MT_IPROT
#define END_MT_DPROT
#define __iflush_prologue						\
unsigned long redundance;					\
extern int mt_n_iflushes;					\
BEGIN_MT_IPROT							\
for (redundance = 0; redundance < mt_n_iflushes; redundance++)
#define __dflush_prologue						\
unsigned long redundance;					\
extern int mt_n_dflushes;					\
BEGIN_MT_DPROT							\
for (redundance = 0; redundance < mt_n_dflushes; redundance++)
#define __inv_dflush_prologue __dflush_prologue
#define __inv_dflush_epilogue __dflush_epilogue
#define __sflush_prologue
#define __inv_sflush_prologue __sflush_prologue
#define __inv_sflush_epilogue __sflush_epilogue
#define __iflush_prologue
#define __dflush_prologue
#define __inv_dflush_prologue
#define __sflush_prologue
#define __inv_sflush_prologue
static inline void flush_icache_line_indexed(unsigned long addr)
static inline void flush_dcache_line_indexed(unsigned long addr)
static inline void flush_scache_line_indexed(unsigned long addr)
static inline void flush_icache_line(unsigned long addr)
static inline void flush_dcache_line(unsigned long addr)
static inline void invalidate_dcache_line(unsigned long addr)
static inline void invalidate_scache_line(unsigned long addr)
static inline void flush_scache_line(unsigned long addr)
#define protected_cache_op(op,addr)				\
__asm__ __volatile__(					\
"	.set	push			\n"		\
"	.set	noreorder		\n"		\
"	.set	mips3			\n"		\
"1:	cache	%0, (%1)		\n"		\
"2:	.set	pop			\n"		\
"	.section __ex_table,\"a\"	\n"		\
"	"STR(PTR)" 1b, 2b		\n"		\
"	.previous"					\
:							\
: "i" (op), "r" (addr))
static inline void protected_flush_icache_line(unsigned long addr)
static inline void protected_writeback_dcache_line(unsigned long addr)
static inline void protected_writeback_scache_line(unsigned long addr)
static inline void invalidate_tcache_page(unsigned long addr)
#define cache16_unroll32(base,op)					\
__asm__ __volatile__(						\
"	.set push					\n"	\
"	.set noreorder					\n"	\
"	.set mips3					\n"	\
"	cache %1, 0x000(%0); cache %1, 0x010(%0)	\n"	\
"	cache %1, 0x020(%0); cache %1, 0x030(%0)	\n"	\
"	cache %1, 0x040(%0); cache %1, 0x050(%0)	\n"	\
"	cache %1, 0x060(%0); cache %1, 0x070(%0)	\n"	\
"	cache %1, 0x080(%0); cache %1, 0x090(%0)	\n"	\
"	cache %1, 0x0a0(%0); cache %1, 0x0b0(%0)	\n"	\
"	cache %1, 0x0c0(%0); cache %1, 0x0d0(%0)	\n"	\
"	cache %1, 0x0e0(%0); cache %1, 0x0f0(%0)	\n"	\
"	cache %1, 0x100(%0); cache %1, 0x110(%0)	\n"	\
"	cache %1, 0x120(%0); cache %1, 0x130(%0)	\n"	\
"	cache %1, 0x140(%0); cache %1, 0x150(%0)	\n"	\
"	cache %1, 0x160(%0); cache %1, 0x170(%0)	\n"	\
"	cache %1, 0x180(%0); cache %1, 0x190(%0)	\n"	\
"	cache %1, 0x1a0(%0); cache %1, 0x1b0(%0)	\n"	\
"	cache %1, 0x1c0(%0); cache %1, 0x1d0(%0)	\n"	\
"	cache %1, 0x1e0(%0); cache %1, 0x1f0(%0)	\n"	\
"	.set pop					\n"	\
:							\
: "r" (base),						\
"i" (op));
#define cache32_unroll32(base,op)					\
__asm__ __volatile__(						\
"	.set push					\n"	\
"	.set noreorder					\n"	\
"	.set mips3					\n"	\
"	cache %1, 0x000(%0); cache %1, 0x020(%0)	\n"	\
"	cache %1, 0x040(%0); cache %1, 0x060(%0)	\n"	\
"	cache %1, 0x080(%0); cache %1, 0x0a0(%0)	\n"	\
"	cache %1, 0x0c0(%0); cache %1, 0x0e0(%0)	\n"	\
"	cache %1, 0x100(%0); cache %1, 0x120(%0)	\n"	\
"	cache %1, 0x140(%0); cache %1, 0x160(%0)	\n"	\
"	cache %1, 0x180(%0); cache %1, 0x1a0(%0)	\n"	\
"	cache %1, 0x1c0(%0); cache %1, 0x1e0(%0)	\n"	\
"	cache %1, 0x200(%0); cache %1, 0x220(%0)	\n"	\
"	cache %1, 0x240(%0); cache %1, 0x260(%0)	\n"	\
"	cache %1, 0x280(%0); cache %1, 0x2a0(%0)	\n"	\
"	cache %1, 0x2c0(%0); cache %1, 0x2e0(%0)	\n"	\
"	cache %1, 0x300(%0); cache %1, 0x320(%0)	\n"	\
"	cache %1, 0x340(%0); cache %1, 0x360(%0)	\n"	\
"	cache %1, 0x380(%0); cache %1, 0x3a0(%0)	\n"	\
"	cache %1, 0x3c0(%0); cache %1, 0x3e0(%0)	\n"	\
"	.set pop					\n"	\
:							\
: "r" (base),						\
"i" (op));
#define cache64_unroll32(base,op)					\
__asm__ __volatile__(						\
"	.set push					\n"	\
"	.set noreorder					\n"	\
"	.set mips3					\n"	\
"	cache %1, 0x000(%0); cache %1, 0x040(%0)	\n"	\
"	cache %1, 0x080(%0); cache %1, 0x0c0(%0)	\n"	\
"	cache %1, 0x100(%0); cache %1, 0x140(%0)	\n"	\
"	cache %1, 0x180(%0); cache %1, 0x1c0(%0)	\n"	\
"	cache %1, 0x200(%0); cache %1, 0x240(%0)	\n"	\
"	cache %1, 0x280(%0); cache %1, 0x2c0(%0)	\n"	\
"	cache %1, 0x300(%0); cache %1, 0x340(%0)	\n"	\
"	cache %1, 0x380(%0); cache %1, 0x3c0(%0)	\n"	\
"	cache %1, 0x400(%0); cache %1, 0x440(%0)	\n"	\
"	cache %1, 0x480(%0); cache %1, 0x4c0(%0)	\n"	\
"	cache %1, 0x500(%0); cache %1, 0x540(%0)	\n"	\
"	cache %1, 0x580(%0); cache %1, 0x5c0(%0)	\n"	\
"	cache %1, 0x600(%0); cache %1, 0x640(%0)	\n"	\
"	cache %1, 0x680(%0); cache %1, 0x6c0(%0)	\n"	\
"	cache %1, 0x700(%0); cache %1, 0x740(%0)	\n"	\
"	cache %1, 0x780(%0); cache %1, 0x7c0(%0)	\n"	\
"	.set pop					\n"	\
:							\
: "r" (base),						\
"i" (op));
#define cache128_unroll32(base,op)					\
__asm__ __volatile__(						\
"	.set push					\n"	\
"	.set noreorder					\n"	\
"	.set mips3					\n"	\
"	cache %1, 0x000(%0); cache %1, 0x080(%0)	\n"	\
"	cache %1, 0x100(%0); cache %1, 0x180(%0)	\n"	\
"	cache %1, 0x200(%0); cache %1, 0x280(%0)	\n"	\
"	cache %1, 0x300(%0); cache %1, 0x380(%0)	\n"	\
"	cache %1, 0x400(%0); cache %1, 0x480(%0)	\n"	\
"	cache %1, 0x500(%0); cache %1, 0x580(%0)	\n"	\
"	cache %1, 0x600(%0); cache %1, 0x680(%0)	\n"	\
"	cache %1, 0x700(%0); cache %1, 0x780(%0)	\n"	\
"	cache %1, 0x800(%0); cache %1, 0x880(%0)	\n"	\
"	cache %1, 0x900(%0); cache %1, 0x980(%0)	\n"	\
"	cache %1, 0xa00(%0); cache %1, 0xa80(%0)	\n"	\
"	cache %1, 0xb00(%0); cache %1, 0xb80(%0)	\n"	\
"	cache %1, 0xc00(%0); cache %1, 0xc80(%0)	\n"	\
"	cache %1, 0xd00(%0); cache %1, 0xd80(%0)	\n"	\
"	cache %1, 0xe00(%0); cache %1, 0xe80(%0)	\n"	\
"	cache %1, 0xf00(%0); cache %1, 0xf80(%0)	\n"	\
"	.set pop					\n"	\
:							\
: "r" (base),						\
"i" (op));
#define __BUILD_BLAST_CACHE(pfx, desc, indexop, hitop, lsize) \
static inline void blast_##pfx##cache##lsize(void)			\
\
\
static inline void blast_##pfx##cache##lsize##_page(unsigned long page)	\
\
\
static inline void blast_##pfx##cache##lsize##_page_indexed(unsigned long page) \
__BUILD_BLAST_CACHE(d, dcache, Index_Writeback_Inv_D, Hit_Writeback_Inv_D, 16)
__BUILD_BLAST_CACHE(i, icache, Index_Invalidate_I, Hit_Invalidate_I, 16)
__BUILD_BLAST_CACHE(s, scache, Index_Writeback_Inv_SD, Hit_Writeback_Inv_SD, 16)
__BUILD_BLAST_CACHE(d, dcache, Index_Writeback_Inv_D, Hit_Writeback_Inv_D, 32)
__BUILD_BLAST_CACHE(i, icache, Index_Invalidate_I, Hit_Invalidate_I, 32)
__BUILD_BLAST_CACHE(s, scache, Index_Writeback_Inv_SD, Hit_Writeback_Inv_SD, 32)
__BUILD_BLAST_CACHE(d, dcache, Index_Writeback_Inv_D, Hit_Writeback_Inv_D, 64)
__BUILD_BLAST_CACHE(i, icache, Index_Invalidate_I, Hit_Invalidate_I, 64)
__BUILD_BLAST_CACHE(s, scache, Index_Writeback_Inv_SD, Hit_Writeback_Inv_SD, 64)
__BUILD_BLAST_CACHE(s, scache, Index_Writeback_Inv_SD, Hit_Writeback_Inv_SD, 128)
__BUILD_BLAST_CACHE(inv_d, dcache, Index_Writeback_Inv_D, Hit_Invalidate_D, 16)
__BUILD_BLAST_CACHE(inv_d, dcache, Index_Writeback_Inv_D, Hit_Invalidate_D, 32)
__BUILD_BLAST_CACHE(inv_s, scache, Index_Writeback_Inv_SD, Hit_Invalidate_SD, 16)
__BUILD_BLAST_CACHE(inv_s, scache, Index_Writeback_Inv_SD, Hit_Invalidate_SD, 32)
__BUILD_BLAST_CACHE(inv_s, scache, Index_Writeback_Inv_SD, Hit_Invalidate_SD, 64)
__BUILD_BLAST_CACHE(inv_s, scache, Index_Writeback_Inv_SD, Hit_Invalidate_SD, 128)
#define __BUILD_BLAST_CACHE_RANGE(pfx, desc, hitop, prot) \
static inline void prot##blast_##pfx##cache##_range(unsigned long start, \
unsigned long end)	\
__BUILD_BLAST_CACHE_RANGE(d, dcache, Hit_Writeback_Inv_D, protected_)
__BUILD_BLAST_CACHE_RANGE(s, scache, Hit_Writeback_Inv_SD, protected_)
__BUILD_BLAST_CACHE_RANGE(i, icache, Hit_Invalidate_I, protected_)
__BUILD_BLAST_CACHE_RANGE(d, dcache, Hit_Writeback_Inv_D, )
__BUILD_BLAST_CACHE_RANGE(s, scache, Hit_Writeback_Inv_SD, )
__BUILD_BLAST_CACHE_RANGE(inv_d, dcache, Hit_Invalidate_D, )
__BUILD_BLAST_CACHE_RANGE(inv_s, scache, Hit_Invalidate_SD, )
