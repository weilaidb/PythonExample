#define DW_LANG_Mips_Assembler  0x8001
typedef enum  dwarf_tag;
typedef enum  dwarf_form;
typedef enum  dwarf_attribute;
typedef struct dwarf2_abbrev_attr  dwarf2_abbrev_attr;
typedef struct dwarf2_abbrev  dwarf2_abbrev;
dwarf2_abbrev_bc_destroy;
dwarf2_abbrev_bc_print;
static int dwarf2_abbrev_bc_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
static int dwarf2_abbrev_bc_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static const yasm_bytecode_callback dwarf2_abbrev_bc_callback = ;
dwarf2_add_abbrev_attr
dwarf2_append_expr
dwarf2_append_str
yasm_dwarf2__generate_info
dwarf2_abbrev_bc_destroy
dwarf2_abbrev_bc_print
dwarf2_abbrev_bc_calc_len
dwarf2_abbrev_bc_tobytes
