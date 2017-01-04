#define _ASM_CRIS_ARCH_SYSTEM_H
static inline unsigned long rdvr(void)
#define cris_machine_name "crisv32"
static inline unsigned long rdusp(void)
static inline unsigned long rdsp(void)
#define wrusp(usp) __asm__ __volatile__ ("move %0, $usp" : : "rm" (usp))
#define nop() __asm__ __volatile__ ("nop");
#define xchg(ptr,x) \
((__typeof__(*(ptr)))__xchg((unsigned long) (x),(ptr),sizeof(*(ptr))))
#define tas(ptr) (xchg((ptr),1))
struct __xchg_dummy ;
#define __xg(x) ((struct __xchg_dummy *)(x))
