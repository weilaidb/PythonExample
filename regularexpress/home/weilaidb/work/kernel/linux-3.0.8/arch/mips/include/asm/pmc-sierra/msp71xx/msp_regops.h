#define __ASM_REGOPS_H__
#define R10000_LLSC_WAR 0
#if R10000_LLSC_WAR == 1
#define __beqz	"beqzl	"
#define __beqz	"beqz	"
typedef unsigned int u32;
static inline void set_value_reg32(volatile u32 *const addr,
u32 const mask,
u32 const value)
static inline void set_reg32(volatile u32 *const addr,
u32 const mask)
static inline void clear_reg32(volatile u32 *const addr,
u32 const mask)
static inline void toggle_reg32(volatile u32 *const addr,
u32 const mask)
static inline u32 read_reg32(volatile u32 *const addr,
u32 const mask)
static inline u32 blocking_read_reg32(volatile u32 *const addr)
#define custom_read_reg32(address, tmp)				\
__asm__ __volatile__(					\
"	.set	push				\n"	\
"	.set	mips3				\n"	\
"1:	ll	%0, %1	#custom_read_reg32	\n"	\
"	.set	pop				\n"	\
: "=r" (tmp), "=m" (*address)				\
: "m" (*address))
#define custom_write_reg32(address, tmp)			\
__asm__ __volatile__(					\
"	.set	push				\n"	\
"	.set	mips3				\n"	\
"	sc	%0, %1	#custom_write_reg32	\n"	\
"	"__beqz"%0, 1b				\n"	\
"	nop					\n"	\
"	.set	pop				\n"	\
: "=&r" (tmp), "=m" (*address)				\
: "0" (tmp), "m" (*address))
