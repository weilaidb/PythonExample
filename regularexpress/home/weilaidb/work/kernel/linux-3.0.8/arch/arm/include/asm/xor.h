#define __XOR(a1, a2) a1 ^= a2
#define GET_BLOCK_2(dst) \
__asm__("ldmia	%0, " \
: "=r" (dst), "=r" (a1), "=r" (a2) \
: "0" (dst))
#define GET_BLOCK_4(dst) \
__asm__("ldmia	%0, " \
: "=r" (dst), "=r" (a1), "=r" (a2), "=r" (a3), "=r" (a4) \
: "0" (dst))
#define XOR_BLOCK_2(src) \
__asm__("ldmia	%0!, " \
: "=r" (src), "=r" (b1), "=r" (b2) \
: "0" (src)); \
__XOR(a1, b1); __XOR(a2, b2);
#define XOR_BLOCK_4(src) \
__asm__("ldmia	%0!, " \
: "=r" (src), "=r" (b1), "=r" (b2), "=r" (b3), "=r" (b4) \
: "0" (src)); \
__XOR(a1, b1); __XOR(a2, b2); __XOR(a3, b3); __XOR(a4, b4)
#define PUT_BLOCK_2(dst) \
__asm__ __volatile__("stmia	%0!, " \
: "=r" (dst) \
: "0" (dst), "r" (a1), "r" (a2))
#define PUT_BLOCK_4(dst) \
__asm__ __volatile__("stmia	%0!, " \
: "=r" (dst) \
: "0" (dst), "r" (a1), "r" (a2), "r" (a3), "r" (a4))
static void
xor_arm4regs_2(unsigned long bytes, unsigned long *p1, unsigned long *p2)
static void
xor_arm4regs_3(unsigned long bytes, unsigned long *p1, unsigned long *p2,
unsigned long *p3)
static void
xor_arm4regs_4(unsigned long bytes, unsigned long *p1, unsigned long *p2,
unsigned long *p3, unsigned long *p4)
static void
xor_arm4regs_5(unsigned long bytes, unsigned long *p1, unsigned long *p2,
unsigned long *p3, unsigned long *p4, unsigned long *p5)
static struct xor_block_template xor_block_arm4regs = ;
#undef XOR_TRY_TEMPLATES
#define XOR_TRY_TEMPLATES			\
do  while (0)
