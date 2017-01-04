typedef struct bytecode_reserve  bytecode_reserve;
static void bc_reserve_destroy(void *contents);
static void bc_reserve_print(const void *contents, FILE *f, int indent_level);
static void bc_reserve_finalize(yasm_bytecode *bc, yasm_bytecode *prev_bc);
static int bc_reserve_elem_size(yasm_bytecode *bc);
static int bc_reserve_calc_len(yasm_bytecode *bc,
yasm_bc_add_span_func add_span,
void *add_span_data);
static int bc_reserve_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static const yasm_bytecode_callback bc_reserve_callback = ;
static void
bc_reserve_destroy(void *contents)
static void
bc_reserve_print(const void *contents, FILE *f, int indent_level)
static void
bc_reserve_finalize(yasm_bytecode *bc, yasm_bytecode *prev_bc)
static int
bc_reserve_elem_size(yasm_bytecode *bc)
static int
bc_reserve_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data)
static int
bc_reserve_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc)
yasm_bytecode *
yasm_bc_create_reserve(yasm_expr *numitems, unsigned int itemsize,
unsigned long line)
const yasm_expr *
yasm_bc_reserve_numitems(yasm_bytecode *bc, unsigned int *itemsize)
