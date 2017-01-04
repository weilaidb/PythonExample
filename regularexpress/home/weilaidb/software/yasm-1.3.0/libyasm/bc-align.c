typedef struct bytecode_align  bytecode_align;
static void bc_align_destroy(void *contents);
static void bc_align_print(const void *contents, FILE *f, int indent_level);
static void bc_align_finalize(yasm_bytecode *bc, yasm_bytecode *prev_bc);
static int bc_align_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data);
static int bc_align_expand(yasm_bytecode *bc, int span, long old_val,
long new_val, long *neg_thres, long *pos_thres);
static int bc_align_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static const yasm_bytecode_callback bc_align_callback = ;
static void
bc_align_destroy(void *contents)
static void
bc_align_print(const void *contents, FILE *f, int indent_level)
static void
bc_align_finalize(yasm_bytecode *bc, yasm_bytecode *prev_bc)
static int
bc_align_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data)
static int
bc_align_expand(yasm_bytecode *bc, int span, long old_val, long new_val, long *neg_thres, long *pos_thres)
static int
bc_align_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc)
yasm_bytecode *
yasm_bc_create_align(yasm_expr *boundary, yasm_expr *fill,
yasm_expr *maxskip, const unsigned char **code_fill,
unsigned long line)
