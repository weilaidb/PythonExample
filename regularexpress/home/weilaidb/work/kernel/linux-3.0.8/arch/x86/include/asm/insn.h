#define _ASM_X86_INSN_H
struct insn_field ;
struct insn ;
#define MAX_INSN_SIZE	16
#define X86_MODRM_MOD(modrm) (((modrm) & 0xc0) >> 6)
#define X86_MODRM_REG(modrm) (((modrm) & 0x38) >> 3)
#define X86_MODRM_RM(modrm) ((modrm) & 0x07)
#define X86_SIB_SCALE(sib) (((sib) & 0xc0) >> 6)
#define X86_SIB_INDEX(sib) (((sib) & 0x38) >> 3)
#define X86_SIB_BASE(sib) ((sib) & 0x07)
#define X86_REX_W(rex) ((rex) & 8)
#define X86_REX_R(rex) ((rex) & 4)
#define X86_REX_X(rex) ((rex) & 2)
#define X86_REX_B(rex) ((rex) & 1)
#define X86_VEX_W(vex)	((vex) & 0x80)
#define X86_VEX_R(vex)	((vex) & 0x80)
#define X86_VEX_X(vex)	((vex) & 0x40)
#define X86_VEX_B(vex)	((vex) & 0x20)
#define X86_VEX_L(vex)	((vex) & 0x04)
#define X86_VEX3_M(vex)	((vex) & 0x1f)
#define X86_VEX2_M	1
#define X86_VEX_V(vex)	(((vex) & 0x78) >> 3)
#define X86_VEX_P(vex)	((vex) & 0x03)
#define X86_VEX_M_MAX	0x1f
static inline insn_byte_t insn_last_prefix(struct insn *insn)
extern void insn_init(struct insn *insn, const void *kaddr, int x86_64);
extern void insn_get_prefixes(struct insn *insn);
extern void insn_get_opcode(struct insn *insn);
extern void insn_get_modrm(struct insn *insn);
extern void insn_get_sib(struct insn *insn);
extern void insn_get_displacement(struct insn *insn);
extern void insn_get_immediate(struct insn *insn);
extern void insn_get_length(struct insn *insn);
static inline void insn_get_attribute(struct insn *insn)
extern int insn_rip_relative(struct insn *insn);
static inline void kernel_insn_init(struct insn *insn, const void *kaddr)
static inline int insn_is_avx(struct insn *insn)
static inline insn_byte_t insn_vex_m_bits(struct insn *insn)
static inline insn_byte_t insn_vex_p_bits(struct insn *insn)
static inline int insn_offset_rex_prefix(struct insn *insn)
static inline int insn_offset_vex_prefix(struct insn *insn)
static inline int insn_offset_opcode(struct insn *insn)
static inline int insn_offset_modrm(struct insn *insn)
static inline int insn_offset_sib(struct insn *insn)
static inline int insn_offset_displacement(struct insn *insn)
static inline int insn_offset_immediate(struct insn *insn)
