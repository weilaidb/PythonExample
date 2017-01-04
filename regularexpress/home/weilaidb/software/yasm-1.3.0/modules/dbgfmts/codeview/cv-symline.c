enum cv8_symheadtype ;
enum cv_symtype ;
typedef struct cv8_symhead  cv8_symhead;
typedef struct cv8_fileinfo  cv8_fileinfo;
typedef struct cv8_linepair  cv8_linepair;
typedef struct cv8_lineset  cv8_lineset;
typedef struct cv8_lineinfo  cv8_lineinfo;
typedef struct cv_sym  cv_sym;
static void cv8_symhead_bc_destroy(void *contents);
static void cv8_symhead_bc_print(const void *contents, FILE *f,
int indent_level);
static int cv8_symhead_bc_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
static int cv8_symhead_bc_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static void cv8_fileinfo_bc_destroy(void *contents);
static void cv8_fileinfo_bc_print(const void *contents, FILE *f,
int indent_level);
static int cv8_fileinfo_bc_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
static int cv8_fileinfo_bc_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static void cv8_lineinfo_bc_destroy(void *contents);
static void cv8_lineinfo_bc_print(const void *contents, FILE *f,
int indent_level);
static int cv8_lineinfo_bc_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
static int cv8_lineinfo_bc_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static void cv_sym_bc_destroy(void *contents);
static void cv_sym_bc_print(const void *contents, FILE *f, int indent_level);
static int cv_sym_bc_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
static int cv_sym_bc_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static const yasm_bytecode_callback cv8_symhead_bc_callback = ;
static const yasm_bytecode_callback cv8_fileinfo_bc_callback = ;
static const yasm_bytecode_callback cv8_lineinfo_bc_callback = ;
static const yasm_bytecode_callback cv_sym_bc_callback = ;
static cv8_symhead *cv8_add_symhead(yasm_section *sect, unsigned long type,
int first);
static void cv8_set_symhead_end(cv8_symhead *head, yasm_bytecode *end_prevbc);
static yasm_bytecode *cv8_add_fileinfo
(yasm_section *sect, const cv_filename *fn);
static unsigned long cv_sym_size(const cv_sym *cvs);
static cv_sym *
cv8_add_sym_objname(yasm_section *sect, char *objname)
static cv_sym *
cv8_add_sym_compile(yasm_object *object, yasm_section *sect, char *creator)
static cv_sym *
cv8_add_sym_label(yasm_section *sect, yasm_symrec *sym)
static cv_sym *
cv8_add_sym_data(yasm_section *sect, unsigned long type, yasm_symrec *sym,
int is_global)
static size_t
cv_dbgfmt_add_file(yasm_dbgfmt_cv *dbgfmt_cv, size_t filenum,
const char *filename)
static yasm_bytecode *
cv_append_str(yasm_section *sect, const char *str)
typedef struct cv_line_info  cv_line_info;
static int
cv_generate_line_bc(yasm_bytecode *bc, void *d)
static int
cv_generate_line_section(yasm_section *sect, void *d)
static int
cv_generate_filename(const char *filename, void *d)
static int
cv_generate_sym(yasm_symrec *sym, void *d)
yasm_section *
yasm_cv__generate_symline(yasm_object *object, yasm_linemap *linemap,
yasm_errwarns *errwarns)
static void
cv_out_sym(yasm_symrec *sym, unsigned long off, yasm_bytecode *bc,
unsigned char **bufp, void *d, yasm_output_value_func output_value)
static cv8_symhead *
cv8_add_symhead(yasm_section *sect, unsigned long type, int first)
static void
cv8_set_symhead_end(cv8_symhead *head, yasm_bytecode *end_prevbc)
static void
cv8_symhead_bc_destroy(void *contents)
static void
cv8_symhead_bc_print(const void *contents, FILE *f, int indent_level)
static int
cv8_symhead_bc_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data)
static int
cv8_symhead_bc_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value,
yasm_output_reloc_func output_reloc)
static yasm_bytecode *
cv8_add_fileinfo(yasm_section *sect, const cv_filename *fn)
static void
cv8_fileinfo_bc_destroy(void *contents)
static void
cv8_fileinfo_bc_print(const void *contents, FILE *f, int indent_level)
static int
cv8_fileinfo_bc_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data)
static int
cv8_fileinfo_bc_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value,
yasm_output_reloc_func output_reloc)
static void
cv8_lineinfo_bc_destroy(void *contents)
static void
cv8_lineinfo_bc_print(const void *contents, FILE *f, int indent_level)
static int
cv8_lineinfo_bc_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data)
static int
cv8_lineinfo_bc_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value,
yasm_output_reloc_func output_reloc)
static unsigned long
cv_sym_size(const cv_sym *cvs)
static void
cv_sym_bc_destroy(void *contents)
static void
cv_sym_bc_print(const void *contents, FILE *f, int indent_level)
static int
cv_sym_bc_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data)
static int
cv_sym_bc_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value,
yasm_output_reloc_func output_reloc)
