#define _ASM_TILE_SECTIONS_H
#define arch_is_kernel_data arch_is_kernel_data
extern char _sinitdata[], _einitdata[];
extern char __w1data_begin[], __w1data_end[];
extern char __rt_sigreturn[], __rt_sigreturn_end[];
extern char sys_cmpxchg[], __sys_cmpxchg_end[];
extern char __sys_cmpxchg_grab_lock[];
extern char __start_atomic_asm_code[], __end_atomic_asm_code[];
static inline int arch_is_kernel_data(unsigned long addr)
