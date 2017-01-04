typedef struct bytecode_org  bytecode_org;
static void bc_org_destroy(void *contents);
static void bc_org_print(const void *contents, FILE *f, int indent_level);
static void bc_org_finalize(yasm_bytecode *bc, yasm_bytecode *prev_bc);
static int bc_org_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data);
static int bc_org_expand(yasm_bytecode *bc, int span, long old_val,
long new_val, long *neg_thres, long *pos_thres);
static int bc_org_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static const yasm_bytecode_callback bc_org_callback = ;
static void
bc_org_destroy(void *contents)
static void
bc_org_print(const void *contents, FILE *f, int indent_level)
static void
bc_org_finalize(yasm_bytecode *bc, yasm_bytecode *prev_bc)
static int
bc_org_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data)
static int
bc_org_expand(yasm_bytecode *bc, int span, long old_val, long new_val, long *neg_thres, long *pos_thres)
static int
bc_org_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc)
yasm_bytecode *
yasm_bc_create_org(unsigned long start, unsigned long fill, unsigned long line)
