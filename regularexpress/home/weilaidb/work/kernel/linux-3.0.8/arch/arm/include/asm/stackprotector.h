#define _ASM_STACKPROTECTOR_H 1
extern unsigned long __stack_chk_guard;
static __always_inline void boot_init_stack_canary(void)
