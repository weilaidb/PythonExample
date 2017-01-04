#define __ASM_M32R_FLAT_H
#define	flat_argvp_envp_on_stack()		0
#define	flat_old_ram_flag(flags)		(flags)
#define	flat_set_persistent(relval, p)		0
#define	flat_reloc_valid(reloc, size)		\
(((reloc) - textlen_for_m32r_lo16_data) <= (size))
#define flat_get_addr_from_rp(rp, relval, flags, persistent) \
m32r_flat_get_addr_from_rp(rp, relval, (text_len) )
#define flat_put_addr_at_rp(rp, addr, relval) \
m32r_flat_put_addr_at_rp(rp, addr, relval)
static inline unsigned long
flat_get_relocate_addr (unsigned long relval)
#define	flat_m32r_get_reloc_type(relval)	((relval) >> 24)
#define M32R_SETH_OPCODE	0xd0c00000
#define FLAT_M32R_32		0x00
#define FLAT_M32R_24		0x01
#define FLAT_M32R_16		0x02
#define FLAT_M32R_LO16		0x03
#define FLAT_M32R_LO16_DATA	0x04
#define FLAT_M32R_HI16_ULO	0x10
#define FLAT_M32R_HI16_SLO	0x20
static unsigned long textlen_for_m32r_lo16_data = 0;
static inline unsigned long m32r_flat_get_addr_from_rp (unsigned long *rp,
unsigned long relval,
unsigned long textlen)
static inline void m32r_flat_put_addr_at_rp (unsigned long *rp,
unsigned long addr,
unsigned long relval)
