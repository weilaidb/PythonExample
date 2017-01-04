#define _ASM_X86_TRAMPOLINE_H
extern const unsigned char x86_trampoline_start [];
extern const unsigned char x86_trampoline_end   [];
extern unsigned char *x86_trampoline_base;
extern unsigned long init_rsp;
extern unsigned long initial_code;
extern unsigned long initial_gs;
extern void __init setup_trampolines(void);
extern const unsigned char trampoline_data[];
extern const unsigned char trampoline_status[];
#define TRAMPOLINE_SYM(x)						\
((void *)(x86_trampoline_base +					\
((const unsigned char *)(x) - x86_trampoline_start)))
static inline unsigned long trampoline_address(void)
