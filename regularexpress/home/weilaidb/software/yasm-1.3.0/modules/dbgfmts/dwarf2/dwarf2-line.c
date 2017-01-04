typedef enum  dwarf_line_number_op;
static unsigned char line_opcode_num_operands[DWARF2_LINE_OPCODE_BASE-1] = ;
typedef enum  dwarf_line_number_ext_op;
#define DWARF2_LINE_BASE                -5
#define DWARF2_LINE_RANGE               14
#define DWARF2_MAX_SPECIAL_ADDR_DELTA   \
(((255-DWARF2_LINE_OPCODE_BASE)/DWARF2_LINE_RANGE)*\
dbgfmt_dwarf2->min_insn_len)
#define DWARF2_LINE_DEFAULT_IS_STMT     1
typedef struct dwarf2_line_state  dwarf2_line_state;
typedef struct dwarf2_spp  dwarf2_spp;
typedef struct dwarf2_line_op  dwarf2_line_op;
static void dwarf2_spp_bc_destroy(void *contents);
static void dwarf2_spp_bc_print(const void *contents, FILE *f,
int indent_level);
static int dwarf2_spp_bc_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
static int dwarf2_spp_bc_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static void dwarf2_line_op_bc_destroy(void *contents);
static void dwarf2_line_op_bc_print(const void *contents, FILE *f,
int indent_level);
static int dwarf2_line_op_bc_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
static int dwarf2_line_op_bc_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static const yasm_bytecode_callback dwarf2_spp_bc_callback = ;
static const yasm_bytecode_callback dwarf2_line_op_bc_callback = ;
static size_t
dwarf2_dbgfmt_add_file(yasm_dbgfmt_dwarf2 *dbgfmt_dwarf2, unsigned long filenum,
const char *pathname)
static yasm_bytecode *
dwarf2_dbgfmt_append_line_op(yasm_section *sect, dwarf_line_number_op opcode, yasm_intnum *operand)
static yasm_bytecode *
dwarf2_dbgfmt_append_line_ext_op(yasm_section *sect,
dwarf_line_number_ext_op ext_opcode,
unsigned long ext_operandsize, yasm_symrec *ext_operand)
static yasm_bytecode *
dwarf2_dbgfmt_append_line_ext_op_int(yasm_section *sect,
dwarf_line_number_ext_op ext_opcode, yasm_intnum *ext_operand)
static void
dwarf2_dbgfmt_finalize_locs(yasm_section *sect, dwarf2_section_data *dsd)
static int
dwarf2_dbgfmt_gen_line_op(yasm_section *debug_line, dwarf2_line_state *state,
const dwarf2_loc *loc, const dwarf2_loc *nextloc)
typedef struct dwarf2_line_bc_info  dwarf2_line_bc_info;
static int
dwarf2_filename_equals(const dwarf2_filename *fn,
char **dirs,
const char *pathname,
unsigned long dirlen,
const char *filename)
static int
dwarf2_generate_line_bc(yasm_bytecode *bc, void *d)
typedef struct dwarf2_line_info  dwarf2_line_info;
static int
dwarf2_generate_line_section(yasm_section *sect, void *d)
static int
dwarf2_generate_filename(const char *filename, void *d)
yasm_section *
yasm_dwarf2__generate_line(yasm_object *object, yasm_linemap *linemap,
yasm_errwarns *errwarns, int asm_source, yasm_section **main_code, size_t *num_line_sections)
static void
dwarf2_spp_bc_destroy(void *contents)
static void
dwarf2_spp_bc_print(const void *contents, FILE *f, int indent_level)
static int
dwarf2_spp_bc_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data)
static int
dwarf2_spp_bc_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value,
yasm_output_reloc_func output_reloc)
static void
dwarf2_line_op_bc_destroy(void *contents)
static void
dwarf2_line_op_bc_print(const void *contents, FILE *f, int indent_level)
static int
dwarf2_line_op_bc_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data)
static int
dwarf2_line_op_bc_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value,
yasm_output_reloc_func output_reloc)
void
yasm_dwarf2__dir_loc(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
void
yasm_dwarf2__dir_file(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
