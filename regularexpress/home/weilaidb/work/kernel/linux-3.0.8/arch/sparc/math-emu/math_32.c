#define FLOATFUNC(x) extern int x(void *,void *,void *)
#define FSQRTQ	0x02b
#define FADDQ	0x043
#define FSUBQ	0x047
#define FMULQ	0x04b
#define FDIVQ	0x04f
#define FDMULQ	0x06e
#define FQTOS	0x0c7
#define FQTOD	0x0cb
#define FITOQ	0x0cc
#define FSTOQ	0x0cd
#define FDTOQ	0x0ce
#define FQTOI	0x0d3
#define FCMPQ	0x053
#define FCMPEQ	0x057
#define FSQRTS	0x029
#define FSQRTD	0x02a
#define FADDS	0x041
#define FADDD	0x042
#define FSUBS	0x045
#define FSUBD	0x046
#define FMULS	0x049
#define FMULD	0x04a
#define FDIVS	0x04d
#define FDIVD	0x04e
#define FSMULD	0x069
#define FDTOS	0x0c6
#define FSTOD	0x0c9
#define FSTOI	0x0d1
#define FDTOI	0x0d2
#define FABSS	0x009
#define FCMPS	0x051
#define FCMPES	0x055
#define FCMPD	0x052
#define FCMPED	0x056
#define FMOVS	0x001
#define FNEGS	0x005
#define FITOS	0x0c4
#define FITOD	0x0c8
#define FSR_TEM_SHIFT	23UL
#define FSR_TEM_MASK	(0x1fUL << FSR_TEM_SHIFT)
#define FSR_AEXC_SHIFT	5UL
#define FSR_AEXC_MASK	(0x1fUL << FSR_AEXC_SHIFT)
#define FSR_CEXC_SHIFT	0UL
#define FSR_CEXC_MASK	(0x1fUL << FSR_CEXC_SHIFT)
static int do_one_mathemu(u32 insn, unsigned long *fsr, unsigned long *fregs);
int do_mathemu(struct pt_regs *regs, struct task_struct *fpt)
static inline int record_exception(unsigned long *pfsr, int eflag)
typedef union  *argp;
static int do_one_mathemu(u32 insn, unsigned long *pfsr, unsigned long *fregs)
