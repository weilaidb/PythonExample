#define _ASM_DIV64
extern void ____unhandled_size_in_do_div___(void);
#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
# define CLOBBER_MDR_CC		"mdr", "cc"
# define CLOBBER_MDR_CC		"cc"
#define do_div(n, base)							\
()
static inline __attribute__((const))
unsigned __muldiv64u(unsigned val, unsigned mult, unsigned div)
static inline __attribute__((const))
signed __muldiv64s(signed val, signed mult, signed div)
