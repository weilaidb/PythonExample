#define _ASM_GENERIC_DIV64_H
#if BITS_PER_LONG == 64
# define do_div(n,base) ()
#elif BITS_PER_LONG == 32
extern uint32_t __div64_32(uint64_t *dividend, uint32_t divisor);
# define do_div(n,base) ()
# error do_div() does not yet support the C64
