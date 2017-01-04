#define MAKE_REG(s, e, l, h)
FPU_REG const CONST_1 = MAKE_REG(POS, 0, 0x00000000, 0x80000000);
static FPU_REG const CONST_L2T = MAKE_REG(POS, 1, 0xcd1b8afe, 0xd49a784b);
static FPU_REG const CONST_L2E = MAKE_REG(POS, 0, 0x5c17f0bc, 0xb8aa3b29);
FPU_REG const CONST_PI = MAKE_REG(POS, 1, 0x2168c235, 0xc90fdaa2);
FPU_REG const CONST_PI2 = MAKE_REG(POS, 0, 0x2168c235, 0xc90fdaa2);
FPU_REG const CONST_PI4 = MAKE_REG(POS, -1, 0x2168c235, 0xc90fdaa2);
static FPU_REG const CONST_LG2 = MAKE_REG(POS, -2, 0xfbcff799, 0x9a209a84);
static FPU_REG const CONST_LN2 = MAKE_REG(POS, -1, 0xd1cf79ac, 0xb17217f7);
FPU_REG const CONST_PI2extra = MAKE_REG(NEG, -66,
0xfc8f8cbb, 0xece675d1);
FPU_REG const CONST_Z = MAKE_REG(POS, EXP_UNDER, 0x0, 0x0);
FPU_REG const CONST_QNaN = MAKE_REG(NEG, EXP_OVER, 0x00000000, 0xC0000000);
FPU_REG const CONST_INF = MAKE_REG(POS, EXP_OVER, 0x00000000, 0x80000000);
static void fld_const(FPU_REG const * c, int adj, u_char tag)
#define DOWN_OR_CHOP(x)  (x & RC_DOWN)
static void fld1(int rc)
static void fldl2t(int rc)
static void fldl2e(int rc)
static void fldpi(int rc)
static void fldlg2(int rc)
static void fldln2(int rc)
static void fldz(int rc)
typedef void (*FUNC_RC) (int);
static FUNC_RC constants_table[] = ;
void fconst(void)
