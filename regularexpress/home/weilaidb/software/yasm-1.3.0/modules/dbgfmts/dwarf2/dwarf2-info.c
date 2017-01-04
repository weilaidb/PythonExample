#define DW_LANG_Mips_Assembler  0x8001
typedef enum  dwarf_tag;
typedef enum  dwarf_form;
typedef enum  dwarf_attribute;
typedef struct dwarf2_abbrev_attr  dwarf2_abbrev_attr;
typedef struct dwarf2_abbrev  dwarf2_abbrev;
static void dwarf2_abbrev_bc_destroy(void *contents);
static void dwarf2_abbrev_bc_print(const void *contents, FILE *f,
int indent_level);
static int dwarf2_abbrev_bc_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
static int dwarf2_abbrev_bc_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static const yasm_bytecode_callback dwarf2_abbrev_bc_callback = ;
static unsigned long
dwarf2_add_abbrev_attr(dwarf2_abbrev *abbrev, dwarf_attribute name,
dwarf_form form)
static void
dwarf2_append_expr(yasm_section *sect, yasm_expr *expr,
unsigned int size, int leb)
static void
dwarf2_append_str(yasm_section *sect, const char *str)
yasm_section *
yasm_dwarf2__generate_info(yasm_object *object, yasm_section *debug_line,
yasm_section *main_code)
static void
dwarf2_abbrev_bc_destroy(void *contents)
static void
dwarf2_abbrev_bc_print(const void *contents, FILE *f, int indent_level)
static int
dwarf2_abbrev_bc_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data)
static int
dwarf2_abbrev_bc_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value,
yasm_output_reloc_func output_reloc)
