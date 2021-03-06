#define __BLACKFIN_FLAT_H__
#define	flat_argvp_envp_on_stack()		0
#define	flat_old_ram_flag(flags)		(flags)
extern unsigned long bfin_get_addr_from_rp (unsigned long *ptr,
unsigned long relval,
unsigned long flags,
unsigned long *persistent);
extern void bfin_put_addr_at_rp(unsigned long *ptr, unsigned long addr,
unsigned long relval);
#define	flat_reloc_valid(reloc, size)	((reloc) <= (size))
#define	flat_get_addr_from_rp(rp, relval, flags, persistent)	\
bfin_get_addr_from_rp(rp, relval, flags, persistent)
#define	flat_put_addr_at_rp(rp, val, relval)	\
bfin_put_addr_at_rp(rp, val, relval)
static inline unsigned long
flat_get_relocate_addr (unsigned long relval)
static inline int flat_set_persistent(unsigned long relval,
unsigned long *persistent)
static inline int flat_addr_absolute(unsigned long relval)
