#undef __mips
#define __mips 4
static int fpu_emu(struct pt_regs *, struct mips_fpu_struct *,
mips_instruction);
#if __mips >= 4 && __mips != 32
static int fpux_emu(struct pt_regs *,
struct mips_fpu_struct *, mips_instruction, void *__user *);
DEFINE_PER_CPU(struct mips_fpu_emulator_stats, fpuemustats);
#define FPCREG_RID	0
#define FPCREG_CSR	31
#define modeindex(v) ((v) & FPU_CSR_RM)
static const unsigned char ieee_rm[4] = ;
static const unsigned char mips_rm[4] = ;
#if __mips >= 4
static const unsigned int fpucondbit[8] = ;
static int isBranchInstr(mips_instruction * i)
static inline int cop1_64bit(struct pt_regs *xcp)
#define SIFROMREG(si, x) ((si) = cop1_64bit(xcp) || !(x & 1) ? \
(int)ctx->fpr[x] : (int)(ctx->fpr[x & ~1] >> 32))
#define SITOREG(si, x)	(ctx->fpr[x & ~(cop1_64bit(xcp) == 0)] = \
cop1_64bit(xcp) || !(x & 1) ? \
ctx->fpr[x & ~1] >> 32 << 32 | (u32)(si) : \
ctx->fpr[x & ~1] << 32 >> 32 | (u64)(si) << 32)
#define DIFROMREG(di, x) ((di) = ctx->fpr[x & ~(cop1_64bit(xcp) == 0)])
#define DITOREG(di, x)	(ctx->fpr[x & ~(cop1_64bit(xcp) == 0)] = (di))
#define SPFROMREG(sp, x) SIFROMREG((sp).bits, x)
#define SPTOREG(sp, x)	SITOREG((sp).bits, x)
#define DPFROMREG(dp, x)	DIFROMREG((dp).bits, x)
#define DPTOREG(dp, x)	DITOREG((dp).bits, x)
static int cop1Emulate(struct pt_regs *xcp, struct mips_fpu_struct *ctx,
void *__user *fault_addr)
static const unsigned char cmptab[8] = ;
#if __mips >= 4 && __mips != 32
#define DEF3OP(name, p, f1, f2, f3) \
static ieee754##p fpemu_##p##_##name(ieee754##p r, ieee754##p s, \
ieee754##p t) \
static ieee754dp fpemu_dp_recip(ieee754dp d)
static ieee754dp fpemu_dp_rsqrt(ieee754dp d)
static ieee754sp fpemu_sp_recip(ieee754sp s)
static ieee754sp fpemu_sp_rsqrt(ieee754sp s)
DEF3OP(madd, sp, ieee754sp_mul, ieee754sp_add, );
DEF3OP(msub, sp, ieee754sp_mul, ieee754sp_sub, );
DEF3OP(nmadd, sp, ieee754sp_mul, ieee754sp_add, ieee754sp_neg);
DEF3OP(nmsub, sp, ieee754sp_mul, ieee754sp_sub, ieee754sp_neg);
DEF3OP(madd, dp, ieee754dp_mul, ieee754dp_add, );
DEF3OP(msub, dp, ieee754dp_mul, ieee754dp_sub, );
DEF3OP(nmadd, dp, ieee754dp_mul, ieee754dp_add, ieee754dp_neg);
DEF3OP(nmsub, dp, ieee754dp_mul, ieee754dp_sub, ieee754dp_neg);
static int fpux_emu(struct pt_regs *xcp, struct mips_fpu_struct *ctx,
mips_instruction ir, void *__user *fault_addr)
static int fpu_emu(struct pt_regs *xcp, struct mips_fpu_struct *ctx,
mips_instruction ir)
int fpu_emulator_cop1Handler(struct pt_regs *xcp, struct mips_fpu_struct *ctx,
int has_fpu, void *__user *fault_addr)
static int fpuemu_stat_get(void *data, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(fops_fpuemu_stat, fpuemu_stat_get, NULL, "%llu\n");
extern struct dentry *mips_debugfs_dir;
static int __init debugfs_fpuemu(void)
__initcall(debugfs_fpuemu);
