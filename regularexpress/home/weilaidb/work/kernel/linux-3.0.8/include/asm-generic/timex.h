#define __ASM_GENERIC_TIMEX_H
typedef unsigned long cycles_t;
static inline cycles_t get_cycles(void)
#undef ARCH_HAS_READ_CURRENT_TIMER
