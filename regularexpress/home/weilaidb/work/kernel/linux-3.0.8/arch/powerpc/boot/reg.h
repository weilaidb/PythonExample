#define _PPC_BOOT_REG_H
static inline u32 mfpvr(void)
#define __stringify_1(x)	#x
#define __stringify(x)		__stringify_1(x)
#define mfspr(rn)	()
#define mtspr(rn, v)	asm volatile("mtspr " __stringify(rn) ",%0" : : "r" (v))
register void *__stack_pointer asm("r1");
#define get_sp()	(__stack_pointer)
