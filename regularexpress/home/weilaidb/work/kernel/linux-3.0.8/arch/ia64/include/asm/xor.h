extern void xor_ia64_2(unsigned long, unsigned long *, unsigned long *);
extern void xor_ia64_3(unsigned long, unsigned long *, unsigned long *,
unsigned long *);
extern void xor_ia64_4(unsigned long, unsigned long *, unsigned long *,
unsigned long *, unsigned long *);
extern void xor_ia64_5(unsigned long, unsigned long *, unsigned long *,
unsigned long *, unsigned long *, unsigned long *);
static struct xor_block_template xor_block_ia64 = ;
#define XOR_TRY_TEMPLATES	xor_speed(&xor_block_ia64)
