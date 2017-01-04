#define _ASM_X86_MACH_DEFAULT_APM_H
#	define APM_DO_ZERO_SEGS \
"pushl %%ds\n\t" \
"pushl %%es\n\t" \
"xorl %%edx, %%edx\n\t" \
"mov %%dx, %%ds\n\t" \
"mov %%dx, %%es\n\t" \
"mov %%dx, %%fs\n\t" \
"mov %%dx, %%gs\n\t"
#	define APM_DO_POP_SEGS \
"popl %%es\n\t" \
"popl %%ds\n\t"
#	define APM_DO_ZERO_SEGS
#	define APM_DO_POP_SEGS
static inline void apm_bios_call_asm(u32 func, u32 ebx_in, u32 ecx_in,
u32 *eax, u32 *ebx, u32 *ecx,
u32 *edx, u32 *esi)
static inline u8 apm_bios_call_simple_asm(u32 func, u32 ebx_in,
u32 ecx_in, u32 *eax)
