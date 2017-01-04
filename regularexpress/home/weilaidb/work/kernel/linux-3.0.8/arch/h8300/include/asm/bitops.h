#define _H8300_BITOPS_H
#error only <linux/bitops.h> can be included directly
static __inline__ unsigned long ffz(unsigned long word)
#define H8300_GEN_BITOP_CONST(OP,BIT)			    \
case BIT:					    \
__asm__(OP " #" #BIT ",@%0"::"r"(b_addr):"memory"); \
break;
#define H8300_GEN_BITOP(FNAME,OP)				      \
static __inline__ void FNAME(int nr, volatile unsigned long* addr)    \
#define smp_mb__before_clear_bit()	barrier()
#define smp_mb__after_clear_bit()	barrier()
H8300_GEN_BITOP(set_bit	  ,"bset")
H8300_GEN_BITOP(clear_bit ,"bclr")
H8300_GEN_BITOP(change_bit,"bnot")
#define __set_bit(nr,addr)    set_bit((nr),(addr))
#define __clear_bit(nr,addr)  clear_bit((nr),(addr))
#define __change_bit(nr,addr) change_bit((nr),(addr))
#undef H8300_GEN_BITOP
#undef H8300_GEN_BITOP_CONST
static __inline__ int test_bit(int nr, const unsigned long* addr)
#define __test_bit(nr, addr) test_bit(nr, addr)
#define H8300_GEN_TEST_BITOP_CONST_INT(OP,BIT)			     \
case BIT:						     \
__asm__("stc ccr,%w1\n\t"				     \
"orc #0x80,ccr\n\t"				     \
"bld #" #BIT ",@%4\n\t"				     \
OP " #" #BIT ",@%4\n\t"				     \
"rotxl.l %0\n\t"				     \
"ldc %w1,ccr"					     \
: "=r"(retval),"=&r"(ccrsave),"=m"(*b_addr)	     \
: "0" (retval),"r" (b_addr)			     \
: "memory");                                         \
break;
#define H8300_GEN_TEST_BITOP_CONST(OP,BIT)			     \
case BIT:						     \
__asm__("bld #" #BIT ",@%3\n\t"				     \
OP " #" #BIT ",@%3\n\t"				     \
"rotxl.l %0\n\t"				     \
: "=r"(retval),"=m"(*b_addr)			     \
: "0" (retval),"r" (b_addr)			     \
: "memory");                                         \
break;
#define H8300_GEN_TEST_BITOP(FNNAME,OP)				     \
static __inline__ int FNNAME(int nr, volatile void * addr)	     \
\
\
static __inline__ int __ ## FNNAME(int nr, volatile void * addr)     \
H8300_GEN_TEST_BITOP(test_and_set_bit,	 "bset")
H8300_GEN_TEST_BITOP(test_and_clear_bit, "bclr")
H8300_GEN_TEST_BITOP(test_and_change_bit,"bnot")
#undef H8300_GEN_TEST_BITOP_CONST
#undef H8300_GEN_TEST_BITOP_CONST_INT
#undef H8300_GEN_TEST_BITOP
static __inline__ unsigned long __ffs(unsigned long word)
