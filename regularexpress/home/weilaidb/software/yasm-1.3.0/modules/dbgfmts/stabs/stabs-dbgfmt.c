typedef enum  stabs_stab_type;
typedef struct yasm_dbgfmt_stabs  yasm_dbgfmt_stabs;
typedef struct  stabs_info;
typedef struct  stabs_stab;
static void stabs_bc_str_destroy(void *contents);
static void stabs_bc_str_print(const void *contents, FILE *f, int
indent_level);
static int stabs_bc_str_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
static int stabs_bc_str_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static void stabs_bc_stab_destroy(void *contents);
static void stabs_bc_stab_print(const void *contents, FILE *f, int
indent_level);
static int stabs_bc_stab_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
static int stabs_bc_stab_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static const yasm_bytecode_callback stabs_bc_str_callback = ;
static const yasm_bytecode_callback stabs_bc_stab_callback = ;
yasm_dbgfmt_module yasm_stabs_LTX_dbgfmt;
static yasm_dbgfmt *
stabs_dbgfmt_create(yasm_object *object)
static void
stabs_dbgfmt_destroy( yasm_dbgfmt *dbgfmt)
static yasm_bytecode *
stabs_dbgfmt_append_bcstr(yasm_section *sect, const char *str)
static stabs_stab *
stabs_dbgfmt_append_stab(stabs_info *info, yasm_section *sect, yasm_bytecode *bcstr, stabs_stab_type type,
unsigned long desc, yasm_symrec *symvalue, yasm_bytecode *bcvalue, unsigned long value)
static void
stabs_dbgfmt_generate_n_fun(stabs_info *info, yasm_bytecode *bc)
static int
stabs_dbgfmt_generate_bcs(yasm_bytecode *bc, void *d)
static int
stabs_dbgfmt_generate_sections(yasm_section *sect, void *d)
static void
stabs_dbgfmt_generate(yasm_object *object, yasm_linemap *linemap,
yasm_errwarns *errwarns)
static int
stabs_bc_stab_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value,
yasm_output_reloc_func output_reloc)
static int
stabs_bc_str_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value,
yasm_output_reloc_func output_reloc)
static void
stabs_bc_stab_destroy(void *contents)
static void
stabs_bc_str_destroy(void *contents)
static void
stabs_bc_stab_print(const void *contents, FILE *f, int indent_level)
static void
stabs_bc_str_print(const void *contents, FILE *f, int indent_level)
static int
stabs_bc_stab_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data)
static int
stabs_bc_str_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data)
yasm_dbgfmt_module yasm_stabs_LTX_dbgfmt = ;
