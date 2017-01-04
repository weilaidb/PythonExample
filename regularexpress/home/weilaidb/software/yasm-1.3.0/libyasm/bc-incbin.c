typedef struct bytecode_incbin  bytecode_incbin;
static void bc_incbin_destroy(void *contents);
static void bc_incbin_print(const void *contents, FILE *f, int indent_level);
static void bc_incbin_finalize(yasm_bytecode *bc, yasm_bytecode *prev_bc);
static int bc_incbin_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data);
static int bc_incbin_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static const yasm_bytecode_callback bc_incbin_callback = ;
static void
bc_incbin_destroy(void *contents)
static void
bc_incbin_print(const void *contents, FILE *f, int indent_level)
static void
bc_incbin_finalize(yasm_bytecode *bc, yasm_bytecode *prev_bc)
static int
bc_incbin_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data)
static int
bc_incbin_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc)
yasm_bytecode *
yasm_bc_create_incbin(char *filename, yasm_expr *start, yasm_expr *maxlen,
yasm_linemap *linemap, unsigned long line)
