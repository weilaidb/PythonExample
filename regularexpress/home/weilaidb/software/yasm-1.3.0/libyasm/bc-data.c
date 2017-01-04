struct yasm_dataval ;
typedef struct bytecode_data  bytecode_data;
static void bc_data_destroy(void *contents);
static void bc_data_print(const void *contents, FILE *f, int indent_level);
static void bc_data_finalize(yasm_bytecode *bc, yasm_bytecode *prev_bc);
static int bc_data_item_size(yasm_bytecode *bc);
static int bc_data_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data);
static int bc_data_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static const yasm_bytecode_callback bc_data_callback = ;
static void
bc_data_destroy(void *contents)
static void
bc_data_print(const void *contents, FILE *f, int indent_level)
static void
bc_data_finalize(yasm_bytecode *bc, yasm_bytecode *prev_bc)
static int
bc_data_item_size(yasm_bytecode *bc)
static int
bc_data_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data)
static int
bc_data_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc)
yasm_bytecode *
yasm_bc_create_data(yasm_datavalhead *datahead, unsigned int size,
int append_zero, yasm_arch *arch, unsigned long line)
yasm_bytecode *
yasm_bc_create_leb128(yasm_datavalhead *datahead, int sign, unsigned long line)
yasm_dataval *
yasm_dv_create_expr(yasm_expr *e)
yasm_dataval *
yasm_dv_create_raw(unsigned char *contents, unsigned long len)
yasm_dataval *
yasm_dv_create_reserve(void)
yasm_value *
yasm_dv_get_value(yasm_dataval *dv)
void
yasm_dv_set_multiple(yasm_dataval *dv, yasm_expr *e)
int
yasm_dv_get_multiple(yasm_dataval *dv, unsigned long *multiple)
void
yasm_dvs_delete(yasm_datavalhead *headp)
yasm_dataval *
yasm_dvs_append(yasm_datavalhead *headp, yasm_dataval *dv)
void
yasm_dvs_print(const yasm_datavalhead *head, FILE *f, int indent_level)
