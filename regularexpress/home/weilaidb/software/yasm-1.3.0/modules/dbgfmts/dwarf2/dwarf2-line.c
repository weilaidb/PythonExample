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
dwarf2_spp_bc_destroy;
dwarf2_spp_bc_print;
static int dwarf2_spp_bc_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
static int dwarf2_spp_bc_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
dwarf2_line_op_bc_destroy;
dwarf2_line_op_bc_print;
static int dwarf2_line_op_bc_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
static int dwarf2_line_op_bc_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static const yasm_bytecode_callback dwarf2_spp_bc_callback = ;
static const yasm_bytecode_callback dwarf2_line_op_bc_callback = ;
dwarf2_dbgfmt_add_file
dwarf2_dbgfmt_append_line_op
dwarf2_dbgfmt_append_line_ext_op
dwarf2_dbgfmt_append_line_ext_op_int
dwarf2_dbgfmt_finalize_locs
dwarf2_dbgfmt_gen_line_op
typedef struct dwarf2_line_bc_info  dwarf2_line_bc_info;
dwarf2_filename_equals
dwarf2_generate_line_bc
typedef struct dwarf2_line_info  dwarf2_line_info;
dwarf2_generate_line_section
dwarf2_generate_filename
yasm_dwarf2__generate_line
dwarf2_spp_bc_destroy
dwarf2_spp_bc_print
dwarf2_spp_bc_calc_len
dwarf2_spp_bc_tobytes
dwarf2_line_op_bc_destroy
dwarf2_line_op_bc_print
dwarf2_line_op_bc_calc_len
dwarf2_line_op_bc_tobytes
yasm_dwarf2__dir_loc
yasm_dwarf2__dir_file
