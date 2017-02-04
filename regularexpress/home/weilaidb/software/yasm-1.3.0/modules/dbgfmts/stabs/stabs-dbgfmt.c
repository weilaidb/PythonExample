typedef enum  stabs_stab_type;
typedef struct yasm_dbgfmt_stabs  yasm_dbgfmt_stabs;
typedef struct  stabs_info;
typedef struct  stabs_stab;
stabs_bc_str_destroy;
stabs_bc_str_print;
static int stabs_bc_str_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
static int stabs_bc_str_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
stabs_bc_stab_destroy;
stabs_bc_stab_print;
static int stabs_bc_stab_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
static int stabs_bc_stab_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static const yasm_bytecode_callback stabs_bc_str_callback = ;
static const yasm_bytecode_callback stabs_bc_stab_callback = ;
yasm_dbgfmt_module yasm_stabs_LTX_dbgfmt;
stabs_dbgfmt_create
stabs_dbgfmt_destroy
stabs_dbgfmt_append_bcstr
stabs_dbgfmt_append_stab
stabs_dbgfmt_generate_n_fun
stabs_dbgfmt_generate_bcs
stabs_dbgfmt_generate_sections
stabs_dbgfmt_generate
stabs_bc_stab_tobytes
stabs_bc_str_tobytes
stabs_bc_stab_destroy
stabs_bc_str_destroy
stabs_bc_stab_print
stabs_bc_str_print
stabs_bc_stab_calc_len
stabs_bc_str_calc_len
yasm_dbgfmt_module yasm_stabs_LTX_dbgfmt = ;
