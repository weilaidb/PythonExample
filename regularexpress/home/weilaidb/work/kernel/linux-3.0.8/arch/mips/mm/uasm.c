enum fields ;
#define OP_MASK		0x3f
#define OP_SH		26
#define RS_MASK		0x1f
#define RS_SH		21
#define RT_MASK		0x1f
#define RT_SH		16
#define RD_MASK		0x1f
#define RD_SH		11
#define RE_MASK		0x1f
#define RE_SH		6
#define IMM_MASK	0xffff
#define IMM_SH		0
#define JIMM_MASK	0x3ffffff
#define JIMM_SH		0
#define FUNC_MASK	0x3f
#define FUNC_SH		0
#define SET_MASK	0x7
#define SET_SH		0
#define SCIMM_MASK	0xfffff
#define SCIMM_SH	6
enum opcode ;
struct insn ;
#define M(a, b, c, d, e, f)					\
((a) << OP_SH						\
| (b) << RS_SH						\
| (c) << RT_SH						\
| (d) << RD_SH						\
| (e) << RE_SH						\
| (f) << FUNC_SH)
static struct insn insn_table[] __uasminitdata = ;
#undef M
static inline __uasminit u32 build_rs(u32 arg)
static inline __uasminit u32 build_rt(u32 arg)
static inline __uasminit u32 build_rd(u32 arg)
static inline __uasminit u32 build_re(u32 arg)
static inline __uasminit u32 build_simm(s32 arg)
static inline __uasminit u32 build_uimm(u32 arg)
static inline __uasminit u32 build_bimm(s32 arg)
static inline __uasminit u32 build_jimm(u32 arg)
static inline __uasminit u32 build_scimm(u32 arg)
static inline __uasminit u32 build_func(u32 arg)
static inline __uasminit u32 build_set(u32 arg)
static void __uasminit build_insn(u32 **buf, enum opcode opc, ...)
#define I_u1u2u3(op)					\
Ip_u1u2u3(op)						\
\
UASM_EXPORT_SYMBOL(uasm_i##op);
#define I_u2u1u3(op)					\
Ip_u2u1u3(op)						\
\
UASM_EXPORT_SYMBOL(uasm_i##op);
#define I_u3u1u2(op)					\
Ip_u3u1u2(op)						\
\
UASM_EXPORT_SYMBOL(uasm_i##op);
#define I_u1u2s3(op)					\
Ip_u1u2s3(op)						\
\
UASM_EXPORT_SYMBOL(uasm_i##op);
#define I_u2s3u1(op)					\
Ip_u2s3u1(op)						\
\
UASM_EXPORT_SYMBOL(uasm_i##op);
#define I_u2u1s3(op)					\
Ip_u2u1s3(op)						\
\
UASM_EXPORT_SYMBOL(uasm_i##op);
#define I_u2u1msbu3(op)					\
Ip_u2u1msbu3(op)					\
\
UASM_EXPORT_SYMBOL(uasm_i##op);
#define I_u2u1msb32u3(op)				\
Ip_u2u1msbu3(op)					\
\
UASM_EXPORT_SYMBOL(uasm_i##op);
#define I_u1u2(op)					\
Ip_u1u2(op)						\
\
UASM_EXPORT_SYMBOL(uasm_i##op);
#define I_u1s2(op)					\
Ip_u1s2(op)						\
\
UASM_EXPORT_SYMBOL(uasm_i##op);
#define I_u1(op)					\
Ip_u1(op)						\
\
UASM_EXPORT_SYMBOL(uasm_i##op);
#define I_0(op)						\
Ip_0(op)						\
\
UASM_EXPORT_SYMBOL(uasm_i##op);
I_u2u1s3(_addiu)
I_u3u1u2(_addu)
I_u2u1u3(_andi)
I_u3u1u2(_and)
I_u1u2s3(_beq)
I_u1u2s3(_beql)
I_u1s2(_bgez)
I_u1s2(_bgezl)
I_u1s2(_bltz)
I_u1s2(_bltzl)
I_u1u2s3(_bne)
I_u2s3u1(_cache)
I_u1u2u3(_dmfc0)
I_u1u2u3(_dmtc0)
I_u2u1s3(_daddiu)
I_u3u1u2(_daddu)
I_u2u1u3(_dsll)
I_u2u1u3(_dsll32)
I_u2u1u3(_dsra)
I_u2u1u3(_dsrl)
I_u2u1u3(_dsrl32)
I_u2u1u3(_drotr)
I_u2u1u3(_drotr32)
I_u3u1u2(_dsubu)
I_0(_eret)
I_u1(_j)
I_u1(_jal)
I_u1(_jr)
I_u2s3u1(_ld)
I_u2s3u1(_ll)
I_u2s3u1(_lld)
I_u1s2(_lui)
I_u2s3u1(_lw)
I_u1u2u3(_mfc0)
I_u1u2u3(_mtc0)
I_u2u1u3(_ori)
I_u3u1u2(_or)
I_0(_rfe)
I_u2s3u1(_sc)
I_u2s3u1(_scd)
I_u2s3u1(_sd)
I_u2u1u3(_sll)
I_u2u1u3(_sra)
I_u2u1u3(_srl)
I_u2u1u3(_rotr)
I_u3u1u2(_subu)
I_u2s3u1(_sw)
I_0(_tlbp)
I_0(_tlbr)
I_0(_tlbwi)
I_0(_tlbwr)
I_u3u1u2(_xor)
I_u2u1u3(_xori)
I_u2u1msbu3(_dins);
I_u2u1msb32u3(_dinsm);
I_u1(_syscall);
I_u1u2s3(_bbit0);
I_u1u2s3(_bbit1);
I_u3u1u2(_lwx)
I_u3u1u2(_ldx)
void __uasminit uasm_i_pref(u32 **buf, unsigned int a, signed int b,
unsigned int c)
UASM_EXPORT_SYMBOL(uasm_i_pref);
I_u2s3u1(_pref)
void __uasminit uasm_build_label(struct uasm_label **lab, u32 *addr, int lid)
UASM_EXPORT_SYMBOL(uasm_build_label);
int __uasminit uasm_in_compat_space_p(long addr)
UASM_EXPORT_SYMBOL(uasm_in_compat_space_p);
static int __uasminit uasm_rel_highest(long val)
static int __uasminit uasm_rel_higher(long val)
int __uasminit uasm_rel_hi(long val)
UASM_EXPORT_SYMBOL(uasm_rel_hi);
int __uasminit uasm_rel_lo(long val)
UASM_EXPORT_SYMBOL(uasm_rel_lo);
void __uasminit UASM_i_LA_mostly(u32 **buf, unsigned int rs, long addr)
UASM_EXPORT_SYMBOL(UASM_i_LA_mostly);
void __uasminit UASM_i_LA(u32 **buf, unsigned int rs, long addr)
UASM_EXPORT_SYMBOL(UASM_i_LA);
void __uasminit
uasm_r_mips_pc16(struct uasm_reloc **rel, u32 *addr, int lid)
UASM_EXPORT_SYMBOL(uasm_r_mips_pc16);
static inline void __uasminit
__resolve_relocs(struct uasm_reloc *rel, struct uasm_label *lab)
void __uasminit
uasm_resolve_relocs(struct uasm_reloc *rel, struct uasm_label *lab)
UASM_EXPORT_SYMBOL(uasm_resolve_relocs);
void __uasminit
uasm_move_relocs(struct uasm_reloc *rel, u32 *first, u32 *end, long off)
UASM_EXPORT_SYMBOL(uasm_move_relocs);
void __uasminit
uasm_move_labels(struct uasm_label *lab, u32 *first, u32 *end, long off)
UASM_EXPORT_SYMBOL(uasm_move_labels);
void __uasminit
uasm_copy_handler(struct uasm_reloc *rel, struct uasm_label *lab, u32 *first,
u32 *end, u32 *target)
UASM_EXPORT_SYMBOL(uasm_copy_handler);
int __uasminit uasm_insn_has_bdelay(struct uasm_reloc *rel, u32 *addr)
UASM_EXPORT_SYMBOL(uasm_insn_has_bdelay);
void __uasminit
uasm_il_bltz(u32 **p, struct uasm_reloc **r, unsigned int reg, int lid)
UASM_EXPORT_SYMBOL(uasm_il_bltz);
void __uasminit
uasm_il_b(u32 **p, struct uasm_reloc **r, int lid)
UASM_EXPORT_SYMBOL(uasm_il_b);
void __uasminit
uasm_il_beqz(u32 **p, struct uasm_reloc **r, unsigned int reg, int lid)
UASM_EXPORT_SYMBOL(uasm_il_beqz);
void __uasminit
uasm_il_beqzl(u32 **p, struct uasm_reloc **r, unsigned int reg, int lid)
UASM_EXPORT_SYMBOL(uasm_il_beqzl);
void __uasminit
uasm_il_bne(u32 **p, struct uasm_reloc **r, unsigned int reg1,
unsigned int reg2, int lid)
UASM_EXPORT_SYMBOL(uasm_il_bne);
void __uasminit
uasm_il_bnez(u32 **p, struct uasm_reloc **r, unsigned int reg, int lid)
UASM_EXPORT_SYMBOL(uasm_il_bnez);
void __uasminit
uasm_il_bgezl(u32 **p, struct uasm_reloc **r, unsigned int reg, int lid)
UASM_EXPORT_SYMBOL(uasm_il_bgezl);
void __uasminit
uasm_il_bgez(u32 **p, struct uasm_reloc **r, unsigned int reg, int lid)
UASM_EXPORT_SYMBOL(uasm_il_bgez);
void __uasminit
uasm_il_bbit0(u32 **p, struct uasm_reloc **r, unsigned int reg,
unsigned int bit, int lid)
UASM_EXPORT_SYMBOL(uasm_il_bbit0);
void __uasminit
uasm_il_bbit1(u32 **p, struct uasm_reloc **r, unsigned int reg,
unsigned int bit, int lid)
UASM_EXPORT_SYMBOL(uasm_il_bbit1);
