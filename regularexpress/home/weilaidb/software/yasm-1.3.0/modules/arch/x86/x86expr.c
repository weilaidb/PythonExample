typedef struct x86_checkea_reg3264_data  x86_checkea_reg3264_data;
static int *
x86_expr_checkea_get_reg3264(yasm_expr__item *ei, int *regnum, void *d)
typedef struct x86_checkea_reg16_data  x86_checkea_reg16_data;
static int *
x86_expr_checkea_get_reg16(yasm_expr__item *ei, int *regnum, void *d)
static int
x86_expr_checkea_distcheck_reg(yasm_expr **ep, unsigned int bits)
static int
x86_expr_checkea_getregusage(yasm_expr **ep, int *indexreg,
int *pcrel, unsigned int bits, void *data,
int *(*get_reg)(yasm_expr__item *ei, int *regnum, void *d))
static int
x86_checkea_calc_displen(x86_effaddr *x86_ea, unsigned int wordsize, int noreg,
int dispreq)
static int
x86_expr_checkea_getregsize_callback(yasm_expr__item *ei, void *d)
int
yasm_x86__expr_checkea(x86_effaddr *x86_ea, unsigned char *addrsize,
unsigned int bits, int address16_op, unsigned char *rex,
yasm_bytecode *bc)
int
yasm_x86__floatnum_tobytes(yasm_arch *arch, const yasm_floatnum *flt,
unsigned char *buf, size_t destsize, size_t valsize,
size_t shift, int warn)
