#define FPUDEBUG 0
#define COPR_INST 0x30000000
#define extru(r,pos,len)	(((r) >> (31-(pos))) & (( 1 << (len)) - 1))
#define fpmajorpos 5
#define fpr1pos	10
#define fpr2pos 15
#define fptpos	31
#define fpsubpos 18
#define fpclass1subpos 16
#define fpclasspos 22
#define fpfmtpos 20
#define fpdfpos 18
#define fpnulpos 26
#define fpxr1pos 24
#define fpxr2pos 19
#define fpxtpos 25
#define fpxpos 23
#define fp0efmtpos 20
#define fprm1pos 10
#define fprm2pos 15
#define fptmpos 31
#define fprapos 25
#define fptapos 20
#define fpmultifmt 26
#define fpraupos 18
#define fpxrm2pos 19
#define fpralpos 23
#define fpxrm1pos 24
#define fpfusedsubop 26
#define fpzeroreg (32*sizeof(double)/sizeof(u_int))
#define get_major(op) extru(op,fpmajorpos,6)
#define get_class(op) extru(op,fpclasspos,2)
#define get_subop(op) extru(op,fpsubpos,3)
#define get_subop1_PA1_1(op) extru(op,fpclass1subpos,2)
#define get_subop1_PA2_0(op) extru(op,fpclass1subpos,3)
#define MAJOR_0C_EXCP	0x09
#define MAJOR_0E_EXCP	0x0b
#define MAJOR_06_EXCP	0x03
#define MAJOR_26_EXCP	0x23
#define MAJOR_2E_EXCP	0x2b
#define PA83_UNIMP_EXCP	0x01
#define FPU_TYPE_FLAG_POS (EM_FPU_TYPE_OFFSET>>2)
#define TIMEX_ROLEX_FPU_MASK (TIMEX_EXTEN_FLAG|ROLEX_EXTEN_FLAG)
#define _PROTOTYPES
#if defined(_PROTOTYPES) || defined(_lint)
static u_int decode_0c(u_int, u_int, u_int, u_int *);
static u_int decode_0e(u_int, u_int, u_int, u_int *);
static u_int decode_06(u_int, u_int *);
static u_int decode_26(u_int, u_int *);
static u_int decode_2e(u_int, u_int *);
static void update_status_cbit(u_int *, u_int, u_int, u_int);
static u_int decode_0c();
static u_int decode_0e();
static u_int decode_06();
static u_int decode_26();
static u_int decode_2e();
static void update_status_cbit();
#define VASSERT(x)
static void parisc_linux_get_fpu_type(u_int fpregs[])
u_int
fpudispatch(u_int ir, u_int excp_code, u_int holder, u_int fpregs[])
u_int
emfpudispatch(u_int ir, u_int dummy1, u_int dummy2, u_int fpregs[])
static u_int
decode_0c(u_int ir, u_int class, u_int subop, u_int fpregs[])
static u_int
decode_0e(ir,class,subop,fpregs)
u_int ir,class,subop;
u_int fpregs[];
static u_int
decode_06(ir,fpregs)
u_int ir;
u_int fpregs[];
static u_int
decode_26(ir,fpregs)
u_int ir;
u_int fpregs[];
static u_int
decode_2e(ir,fpregs)
u_int ir;
u_int fpregs[];
static void
update_status_cbit(status, new_status, fpu_type, y_field)
u_int *status, new_status;
u_int fpu_type;
u_int y_field;
