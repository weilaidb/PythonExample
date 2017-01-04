#define _ASM_X86_INAT_H
#define INAT_OPCODE_TABLE_SIZE 256
#define INAT_GROUP_TABLE_SIZE 8
#define INAT_PFX_OPNDSZ	1
#define INAT_PFX_REPE	2
#define INAT_PFX_REPNE	3
#define INAT_PFX_LOCK	4
#define INAT_PFX_CS	5
#define INAT_PFX_DS	6
#define INAT_PFX_ES	7
#define INAT_PFX_FS	8
#define INAT_PFX_GS	9
#define INAT_PFX_SS	10
#define INAT_PFX_ADDRSZ	11
#define INAT_PFX_REX	12
#define INAT_PFX_VEX2	13
#define INAT_PFX_VEX3	14
#define INAT_LSTPFX_MAX	3
#define INAT_LGCPFX_MAX	11
#define INAT_IMM_BYTE		1
#define INAT_IMM_WORD		2
#define INAT_IMM_DWORD		3
#define INAT_IMM_QWORD		4
#define INAT_IMM_PTR		5
#define INAT_IMM_VWORD32	6
#define INAT_IMM_VWORD		7
#define INAT_PFX_OFFS	0
#define INAT_PFX_BITS	4
#define INAT_PFX_MAX    ((1 << INAT_PFX_BITS) - 1)
#define INAT_PFX_MASK	(INAT_PFX_MAX << INAT_PFX_OFFS)
#define INAT_ESC_OFFS	(INAT_PFX_OFFS + INAT_PFX_BITS)
#define INAT_ESC_BITS	2
#define INAT_ESC_MAX	((1 << INAT_ESC_BITS) - 1)
#define INAT_ESC_MASK	(INAT_ESC_MAX << INAT_ESC_OFFS)
#define INAT_GRP_OFFS	(INAT_ESC_OFFS + INAT_ESC_BITS)
#define INAT_GRP_BITS	5
#define INAT_GRP_MAX	((1 << INAT_GRP_BITS) - 1)
#define INAT_GRP_MASK	(INAT_GRP_MAX << INAT_GRP_OFFS)
#define INAT_IMM_OFFS	(INAT_GRP_OFFS + INAT_GRP_BITS)
#define INAT_IMM_BITS	3
#define INAT_IMM_MASK	(((1 << INAT_IMM_BITS) - 1) << INAT_IMM_OFFS)
#define INAT_FLAG_OFFS	(INAT_IMM_OFFS + INAT_IMM_BITS)
#define INAT_MODRM	(1 << (INAT_FLAG_OFFS))
#define INAT_FORCE64	(1 << (INAT_FLAG_OFFS + 1))
#define INAT_SCNDIMM	(1 << (INAT_FLAG_OFFS + 2))
#define INAT_MOFFSET	(1 << (INAT_FLAG_OFFS + 3))
#define INAT_VARIANT	(1 << (INAT_FLAG_OFFS + 4))
#define INAT_VEXOK	(1 << (INAT_FLAG_OFFS + 5))
#define INAT_VEXONLY	(1 << (INAT_FLAG_OFFS + 6))
#define INAT_MAKE_PREFIX(pfx)	(pfx << INAT_PFX_OFFS)
#define INAT_MAKE_ESCAPE(esc)	(esc << INAT_ESC_OFFS)
#define INAT_MAKE_GROUP(grp)	((grp << INAT_GRP_OFFS) | INAT_MODRM)
#define INAT_MAKE_IMM(imm)	(imm << INAT_IMM_OFFS)
extern insn_attr_t inat_get_opcode_attribute(insn_byte_t opcode);
extern insn_attr_t inat_get_escape_attribute(insn_byte_t opcode,
insn_byte_t last_pfx,
insn_attr_t esc_attr);
extern insn_attr_t inat_get_group_attribute(insn_byte_t modrm,
insn_byte_t last_pfx,
insn_attr_t esc_attr);
extern insn_attr_t inat_get_avx_attribute(insn_byte_t opcode,
insn_byte_t vex_m,
insn_byte_t vex_pp);
static inline int inat_is_legacy_prefix(insn_attr_t attr)
static inline int inat_is_address_size_prefix(insn_attr_t attr)
static inline int inat_is_operand_size_prefix(insn_attr_t attr)
static inline int inat_is_rex_prefix(insn_attr_t attr)
static inline int inat_last_prefix_id(insn_attr_t attr)
static inline int inat_is_vex_prefix(insn_attr_t attr)
static inline int inat_is_vex3_prefix(insn_attr_t attr)
static inline int inat_is_escape(insn_attr_t attr)
static inline int inat_escape_id(insn_attr_t attr)
static inline int inat_is_group(insn_attr_t attr)
static inline int inat_group_id(insn_attr_t attr)
static inline int inat_group_common_attribute(insn_attr_t attr)
static inline int inat_has_immediate(insn_attr_t attr)
static inline int inat_immediate_size(insn_attr_t attr)
static inline int inat_has_modrm(insn_attr_t attr)
static inline int inat_is_force64(insn_attr_t attr)
static inline int inat_has_second_immediate(insn_attr_t attr)
static inline int inat_has_moffset(insn_attr_t attr)
static inline int inat_has_variant(insn_attr_t attr)
static inline int inat_accept_vex(insn_attr_t attr)
static inline int inat_must_vex(insn_attr_t attr)
