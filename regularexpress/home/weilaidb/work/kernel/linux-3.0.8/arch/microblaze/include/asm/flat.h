#define _ASM_MICROBLAZE_FLAT_H
#define	flat_argvp_envp_on_stack()	0
#define	flat_old_ram_flag(flags)	(flags)
#define	flat_reloc_valid(reloc, size)	((reloc) <= (size))
#define	flat_set_persistent(relval, p)		0
static inline unsigned long
flat_get_addr_from_rp(unsigned long *rp, unsigned long relval,
unsigned long flags, unsigned long *persistent)
static inline void
flat_put_addr_at_rp(unsigned long *rp, unsigned long addr, unsigned long relval)
#define	flat_get_relocate_addr(rel)	(rel & 0x7fffffff)
