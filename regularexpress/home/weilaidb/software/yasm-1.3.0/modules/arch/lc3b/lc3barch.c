yasm_arch_module yasm_lc3b_LTX_arch;
static yasm_arch *
lc3b_create(const char *machine, const char *parser, yasm_arch_create_error *error)
static void
lc3b_destroy( yasm_arch *arch)
static const char *
lc3b_get_machine( const yasm_arch *arch)
static unsigned int
lc3b_get_address_size( const yasm_arch *arch)
static int
lc3b_set_var(yasm_arch *arch, const char *var, unsigned long val)
static const unsigned char **
lc3b_get_fill(const yasm_arch *arch)
static unsigned int
lc3b_get_reg_size( yasm_arch *arch, uintptr_t reg)
static uintptr_t
lc3b_reggroup_get_reg( yasm_arch *arch, uintptr_t reggroup, unsigned long regindex)
static void
lc3b_reg_print( yasm_arch *arch, uintptr_t reg, FILE *f)
static int
lc3b_floatnum_tobytes(yasm_arch *arch, const yasm_floatnum *flt,
unsigned char *buf, size_t destsize, size_t valsize,
size_t shift, int warn)
static yasm_effaddr *
lc3b_ea_create_expr(yasm_arch *arch, yasm_expr *e)
void
yasm_lc3b__ea_destroy( yasm_effaddr *ea)
static void
lc3b_ea_print(const yasm_effaddr *ea, FILE *f, int indent_level)
static yasm_arch_machine lc3b_machines[] = ;
yasm_arch_module yasm_lc3b_LTX_arch = ;
