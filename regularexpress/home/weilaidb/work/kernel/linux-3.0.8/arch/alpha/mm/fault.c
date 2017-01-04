#define __EXTERN_INLINE inline
#undef  __EXTERN_INLINE
extern void die_if_kernel(char *,struct pt_regs *,long, unsigned long *);
unsigned long last_asn = ASN_FIRST_VERSION;
void
__load_new_mm_context(struct mm_struct *next_mm)
#define dpf_reg(r)							\
(((unsigned long *)regs)[(r) <= 8 ? (r) : (r) <= 15 ? (r)-16 :	\
(r) <= 18 ? (r)+8 : (r)-10])
asmlinkage void
do_page_fault(unsigned long address, unsigned long mmcsr,
long cause, struct pt_regs *regs)
