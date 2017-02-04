enum cv8_symheadtype ;
enum cv_symtype ;
typedef struct cv8_symhead  cv8_symhead;
typedef struct cv8_fileinfo  cv8_fileinfo;
typedef struct cv8_linepair  cv8_linepair;
typedef struct cv8_lineset  cv8_lineset;
typedef struct cv8_lineinfo  cv8_lineinfo;
typedef struct cv_sym  cv_sym;
cv8_symhead_bc_destroy;
cv8_symhead_bc_print;
static int cv8_symhead_bc_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
static int cv8_symhead_bc_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
cv8_fileinfo_bc_destroy;
cv8_fileinfo_bc_print;
static int cv8_fileinfo_bc_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
static int cv8_fileinfo_bc_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
cv8_lineinfo_bc_destroy;
cv8_lineinfo_bc_print;
static int cv8_lineinfo_bc_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
static int cv8_lineinfo_bc_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
cv_sym_bc_destroy;
cv_sym_bc_print;
static int cv_sym_bc_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
static int cv_sym_bc_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static const yasm_bytecode_callback cv8_symhead_bc_callback = ;
static const yasm_bytecode_callback cv8_fileinfo_bc_callback = ;
static const yasm_bytecode_callback cv8_lineinfo_bc_callback = ;
static const yasm_bytecode_callback cv_sym_bc_callback = ;
*cv8_add_symhead;
cv8_set_symhead_end;
static yasm_bytecode *cv8_add_fileinfo
(yasm_section *sect, const cv_filename *fn);
cv_sym_size;
cv8_add_sym_objname
cv8_add_sym_compile
cv8_add_sym_label
cv8_add_sym_data
cv_dbgfmt_add_file
cv_append_str
typedef struct cv_line_info  cv_line_info;
cv_generate_line_bc
cv_generate_line_section
cv_generate_filename
cv_generate_sym
yasm_cv__generate_symline
cv_out_sym
cv8_add_symhead
cv8_set_symhead_end
cv8_symhead_bc_destroy
cv8_symhead_bc_print
cv8_symhead_bc_calc_len
cv8_symhead_bc_tobytes
cv8_add_fileinfo
cv8_fileinfo_bc_destroy
cv8_fileinfo_bc_print
cv8_fileinfo_bc_calc_len
cv8_fileinfo_bc_tobytes
cv8_lineinfo_bc_destroy
cv8_lineinfo_bc_print
cv8_lineinfo_bc_calc_len
cv8_lineinfo_bc_tobytes
cv_sym_size
cv_sym_bc_destroy
cv_sym_bc_print
cv_sym_bc_calc_len
cv_sym_bc_tobytes
