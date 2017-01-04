#define FLOATFUNC(x)	extern int x(void *, void *, void *, void *)
FLOATFUNC(fadd);
FLOATFUNC(fadds);
FLOATFUNC(fdiv);
FLOATFUNC(fdivs);
FLOATFUNC(fmul);
FLOATFUNC(fmuls);
FLOATFUNC(fsub);
FLOATFUNC(fsubs);
FLOATFUNC(fmadd);
FLOATFUNC(fmadds);
FLOATFUNC(fmsub);
FLOATFUNC(fmsubs);
FLOATFUNC(fnmadd);
FLOATFUNC(fnmadds);
FLOATFUNC(fnmsub);
FLOATFUNC(fnmsubs);
FLOATFUNC(fctiw);
FLOATFUNC(fctiwz);
FLOATFUNC(frsp);
FLOATFUNC(fcmpo);
FLOATFUNC(fcmpu);
FLOATFUNC(mcrfs);
FLOATFUNC(mffs);
FLOATFUNC(mtfsb0);
FLOATFUNC(mtfsb1);
FLOATFUNC(mtfsf);
FLOATFUNC(mtfsfi);
FLOATFUNC(lfd);
FLOATFUNC(lfs);
FLOATFUNC(stfd);
FLOATFUNC(stfs);
FLOATFUNC(stfiwx);
FLOATFUNC(fabs);
FLOATFUNC(fmr);
FLOATFUNC(fnabs);
FLOATFUNC(fneg);
FLOATFUNC(fres);
FLOATFUNC(frsqrte);
FLOATFUNC(fsel);
FLOATFUNC(fsqrt);
FLOATFUNC(fsqrts);
#define OP31		0x1f
#define LFS		0x30
#define LFSU		0x31
#define LFD		0x32
#define LFDU		0x33
#define STFS		0x34
#define STFSU		0x35
#define STFD		0x36
#define STFDU		0x37
#define OP59		0x3b
#define OP63		0x3f
#define LFSX		0x217
#define LFSUX		0x237
#define LFDX		0x257
#define LFDUX		0x277
#define STFSX		0x297
#define STFSUX		0x2b7
#define STFDX		0x2d7
#define STFDUX		0x2f7
#define STFIWX		0x3d7
#define FDIVS		0x012
#define FSUBS		0x014
#define FADDS		0x015
#define FSQRTS		0x016
#define FRES		0x018
#define FMULS		0x019
#define FMSUBS		0x01c
#define FMADDS		0x01d
#define FNMSUBS		0x01e
#define FNMADDS		0x01f
#define FDIV		0x012
#define FSUB		0x014
#define FADD		0x015
#define FSQRT		0x016
#define FSEL		0x017
#define FMUL		0x019
#define FRSQRTE		0x01a
#define FMSUB		0x01c
#define FMADD		0x01d
#define FNMSUB		0x01e
#define FNMADD		0x01f
#define FCMPU		0x000
#define FRSP		0x00c
#define FCTIW		0x00e
#define FCTIWZ		0x00f
#define FCMPO		0x020
#define MTFSB1		0x026
#define FNEG		0x028
#define MCRFS		0x040
#define MTFSB0		0x046
#define FMR		0x048
#define MTFSFI		0x086
#define FNABS		0x088
#define FABS		0x108
#define MFFS		0x247
#define MTFSF		0x2c7
#define AB	2
#define AC	3
#define ABC	4
#define D	5
#define DU	6
#define X	7
#define XA	8
#define XB	9
#define XCR	11
#define XCRB	12
#define XCRI	13
#define XCRL	16
#define XE	14
#define XEU	15
#define XFLB	10
static int
record_exception(struct pt_regs *regs, int eflag)
int
do_mathemu(struct pt_regs *regs)
