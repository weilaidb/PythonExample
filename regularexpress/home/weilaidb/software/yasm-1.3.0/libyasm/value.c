void
yasm_value_initialize( yasm_value *value, yasm_expr *e, unsigned int size)
void
yasm_value_init_sym( yasm_value *value, yasm_symrec *sym,
unsigned int size)
void
yasm_value_init_copy(yasm_value *value, const yasm_value *orig)
void
yasm_value_delete(yasm_value *value)
void
yasm_value_set_curpos_rel(yasm_value *value, yasm_bytecode *bc,
unsigned int ip_rel)
static int
value_finalize_scan(yasm_value *value, yasm_expr *e, yasm_bytecode *expr_precbc, int ssym_not_ok)
int
yasm_value_finalize_expr(yasm_value *value, yasm_expr *e,
yasm_bytecode *precbc, unsigned int size)
int
yasm_value_finalize(yasm_value *value, yasm_bytecode *precbc)
yasm_intnum *
yasm_value_get_intnum(yasm_value *value, yasm_bytecode *bc, int calc_bc_dist)
int
yasm_value_output_basic(yasm_value *value, unsigned char *buf,
size_t destsize, yasm_bytecode *bc, int warn,
yasm_arch *arch)
void
yasm_value_print(const yasm_value *value, FILE *f, int indent_level)
