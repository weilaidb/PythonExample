struct dwarf2_head ;
static void dwarf2_head_bc_destroy(void *contents);
static void dwarf2_head_bc_print(const void *contents, FILE *f,
int indent_level);
static int dwarf2_head_bc_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
static int dwarf2_head_bc_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static const yasm_bytecode_callback dwarf2_head_bc_callback = ;
static void dwarf2_section_data_destroy(void *data);
static void dwarf2_section_data_print(void *data, FILE *f, int indent_level);
const yasm_assoc_data_callback yasm_dwarf2__section_data_cb = ;
yasm_dbgfmt_module yasm_dwarf2_LTX_dbgfmt;
static yasm_dbgfmt *
dwarf2_dbgfmt_create(yasm_object *object)
static void
dwarf2_dbgfmt_destroy( yasm_dbgfmt *dbgfmt)
yasm_bytecode *
yasm_dwarf2__append_bc(yasm_section *sect, yasm_bytecode *bc)
static void
dwarf2_dbgfmt_generate(yasm_object *object, yasm_linemap *linemap,
yasm_errwarns *errwarns)
yasm_symrec *
yasm_dwarf2__bc_sym(yasm_symtab *symtab, yasm_bytecode *bc)
dwarf2_head *
yasm_dwarf2__add_head
(yasm_dbgfmt_dwarf2 *dbgfmt_dwarf2, yasm_section *sect, yasm_section *debug_ptr, int with_address, int with_segment)
void
yasm_dwarf2__set_head_end(dwarf2_head *head, yasm_bytecode *end_prevbc)
static void
dwarf2_head_bc_destroy(void *contents)
static void
dwarf2_head_bc_print(const void *contents, FILE *f, int indent_level)
static int
dwarf2_head_bc_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data)
static int
dwarf2_head_bc_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value,
yasm_output_reloc_func output_reloc)
static void
dwarf2_section_data_destroy(void *data)
static void
dwarf2_section_data_print(void *data, FILE *f, int indent_level)
static const yasm_directive dwarf2_directives[] = ;
yasm_dbgfmt_module yasm_dwarf2_LTX_dbgfmt = ;
