#define	FPUL		(fregs->fpul)
#define FPSCR		(fregs->fpscr)
#define FPSCR_RM	(FPSCR&3)
#define FPSCR_DN	((FPSCR>>18)&1)
#define FPSCR_PR	((FPSCR>>19)&1)
#define FPSCR_SZ	((FPSCR>>20)&1)
#define FPSCR_FR	((FPSCR>>21)&1)
#define FPSCR_MASK	0x003fffffUL
#define BANK(n)	(n^(FPSCR_FR?16:0))
#define FR	((unsigned long*)(fregs->fp_regs))
#define FR0	(FR[BANK(0)])
#define FRn	(FR[BANK(n)])
#define FRm	(FR[BANK(m)])
#define DR	((unsigned long long*)(fregs->fp_regs))
#define DRn	(DR[BANK(n)/2])
#define DRm	(DR[BANK(m)/2])
#define XREG(n)	(n^16)
#define XFn	(FR[BANK(XREG(n))])
#define XFm	(FR[BANK(XREG(m))])
#define XDn	(DR[BANK(XREG(n))/2])
#define XDm	(DR[BANK(XREG(m))/2])
#define R0	(regs->regs[0])
#define Rn	(regs->regs[n])
#define Rm	(regs->regs[m])
#define WRITE(d,a)	()
#define READ(d,a)	()
#define PACK_S(r,f)	FP_PACK_SP(&r,f)
#define UNPACK_S(f,r)	FP_UNPACK_SP(f,&r)
#define PACK_D(r,f) \
#define UNPACK_D(f,r) \
#define BOTH_PRmn(op,x) \
FP_DECL_EX; if(FPSCR_PR) op(D,x,DRm,DRn); else op(S,x,FRm,FRn);
#define CMP_X(SZ,R,M,N) dowhile(0)
#define EQ_X(SZ,R,M,N) dowhile(0)
#define CMP(OP) ()
static int
fcmp_gt(struct sh_fpu_soft_struct *fregs, struct pt_regs *regs, int m, int n)
static int
fcmp_eq(struct sh_fpu_soft_struct *fregs, struct pt_regs *regs, int m, int n)
#define ARITH_X(SZ,OP,M,N) dowhile(0)
static int
fadd(struct sh_fpu_soft_struct *fregs, struct pt_regs *regs, int m, int n)
static int
fsub(struct sh_fpu_soft_struct *fregs, struct pt_regs *regs, int m, int n)
static int
fmul(struct sh_fpu_soft_struct *fregs, struct pt_regs *regs, int m, int n)
static int
fdiv(struct sh_fpu_soft_struct *fregs, struct pt_regs *regs, int m, int n)
static int
fmac(struct sh_fpu_soft_struct *fregs, struct pt_regs *regs, int m, int n)
#define FMOV_EXT(x) if(x&1) x+=16-1
static int
fmov_idx_reg(struct sh_fpu_soft_struct *fregs, struct pt_regs *regs, int m,
int n)
static int
fmov_mem_reg(struct sh_fpu_soft_struct *fregs, struct pt_regs *regs, int m,
int n)
static int
fmov_inc_reg(struct sh_fpu_soft_struct *fregs, struct pt_regs *regs, int m,
int n)
static int
fmov_reg_idx(struct sh_fpu_soft_struct *fregs, struct pt_regs *regs, int m,
int n)
static int
fmov_reg_mem(struct sh_fpu_soft_struct *fregs, struct pt_regs *regs, int m,
int n)
static int
fmov_reg_dec(struct sh_fpu_soft_struct *fregs, struct pt_regs *regs, int m,
int n)
static int
fmov_reg_reg(struct sh_fpu_soft_struct *fregs, struct pt_regs *regs, int m,
int n)
static int
fnop_mn(struct sh_fpu_soft_struct *fregs, struct pt_regs *regs, int m, int n)
#define NOTYETn(i) static int i(struct sh_fpu_soft_struct *fregs, int n) \
NOTYETn(ftrv)
NOTYETn(fsqrt)
NOTYETn(fipr)
NOTYETn(fsca)
NOTYETn(fsrra)
#define EMU_FLOAT_X(SZ,N) do while(0)
static int ffloat(struct sh_fpu_soft_struct *fregs, int n)
#define EMU_FTRC_X(SZ,N) do while(0)
static int ftrc(struct sh_fpu_soft_struct *fregs, int n)
static int fcnvsd(struct sh_fpu_soft_struct *fregs, int n)
static int fcnvds(struct sh_fpu_soft_struct *fregs, int n)
static int fxchg(struct sh_fpu_soft_struct *fregs, int flag)
static int fsts(struct sh_fpu_soft_struct *fregs, int n)
static int flds(struct sh_fpu_soft_struct *fregs, int n)
static int fneg(struct sh_fpu_soft_struct *fregs, int n)
static int fabs(struct sh_fpu_soft_struct *fregs, int n)
static int fld0(struct sh_fpu_soft_struct *fregs, int n)
static int fld1(struct sh_fpu_soft_struct *fregs, int n)
static int fnop_n(struct sh_fpu_soft_struct *fregs, int n)
static int id_fxfd(struct sh_fpu_soft_struct *, int);
static int id_fnxd(struct sh_fpu_soft_struct *, struct pt_regs *, int, int);
static int (*fnxd[])(struct sh_fpu_soft_struct *, int) = ;
static int (*fnmx[])(struct sh_fpu_soft_struct *, struct pt_regs *, int, int) = ;
static int id_fxfd(struct sh_fpu_soft_struct *fregs, int x)
static int
id_fnxd(struct sh_fpu_soft_struct *fregs, struct pt_regs *regs, int x, int n)
static int
id_fnmx(struct sh_fpu_soft_struct *fregs, struct pt_regs *regs, u16 code)
static int
id_sys(struct sh_fpu_soft_struct *fregs, struct pt_regs *regs, u16 code)
static int fpu_emulate(u16 code, struct sh_fpu_soft_struct *fregs, struct pt_regs *regs)
static void denormal_to_double(struct sh_fpu_soft_struct *fpu, int n)
static int ieee_fpe_handler(struct pt_regs *regs)
asmlinkage void do_fpu_error(unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7,
struct pt_regs regs)
static void fpu_init(struct sh_fpu_soft_struct *fpu)
int do_fpu_inst(unsigned short inst, struct pt_regs *regs)
