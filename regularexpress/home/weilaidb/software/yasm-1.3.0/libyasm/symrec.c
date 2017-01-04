typedef enum  sym_type;
struct yasm_symrec ;
typedef struct non_table_symrec_s  non_table_symrec;
struct yasm_symtab ;
static void
objext_valparams_destroy(void *data)
static void
objext_valparams_print(void *data, FILE *f, int indent_level)
static yasm_assoc_data_callback objext_valparams_cb = ;
static void
common_size_destroy(void *data)
static void
common_size_print(void *data, FILE *f, int indent_level)
static yasm_assoc_data_callback common_size_cb = ;
yasm_symtab *
yasm_symtab_create(void)
void
yasm_symtab_set_case_sensitive(yasm_symtab *symtab, int sensitive)
static void
symrec_destroy_one( void *d)
static yasm_symrec *
symrec_new_common( char *name, int case_sensitive)
static yasm_symrec *
symtab_get_or_new_in_table(yasm_symtab *symtab, char *name)
static yasm_symrec *
symtab_get_or_new_not_in_table(yasm_symtab *symtab, char *name)
static yasm_symrec *
symtab_get_or_new(yasm_symtab *symtab, const char *name, int in_table)
int
yasm_symtab_traverse(yasm_symtab *symtab, void *d,
int (*func) (yasm_symrec *sym, void *d))
const yasm_symtab_iter *
yasm_symtab_first(const yasm_symtab *symtab)
const yasm_symtab_iter *
yasm_symtab_next(const yasm_symtab_iter *prev)
yasm_symrec *
yasm_symtab_iter_value(const yasm_symtab_iter *cur)
yasm_symrec *
yasm_symtab_abs_sym(yasm_symtab *symtab)
yasm_symrec *
yasm_symtab_use(yasm_symtab *symtab, const char *name, unsigned long line)
yasm_symrec *
yasm_symtab_get(yasm_symtab *symtab, const char *name)
static yasm_symrec *
symtab_define(yasm_symtab *symtab, const char *name, sym_type type,
int in_table, unsigned long line)
yasm_symrec *
yasm_symtab_define_equ(yasm_symtab *symtab, const char *name, yasm_expr *e,
unsigned long line)
yasm_symrec *
yasm_symtab_define_label(yasm_symtab *symtab, const char *name,
yasm_bytecode *precbc, int in_table,
unsigned long line)
yasm_symrec *
yasm_symtab_define_curpos(yasm_symtab *symtab, const char *name,
yasm_bytecode *precbc, unsigned long line)
yasm_symrec *
yasm_symtab_define_special(yasm_symtab *symtab, const char *name,
yasm_sym_vis vis)
yasm_symrec *
yasm_symtab_declare(yasm_symtab *symtab, const char *name, yasm_sym_vis vis,
unsigned long line)
void
yasm_symrec_declare(yasm_symrec *rec, yasm_sym_vis vis, unsigned long line)
typedef struct symtab_finalize_info  symtab_finalize_info;
static int
symtab_parser_finalize_checksym(yasm_symrec *sym, void *d)
void
yasm_symtab_parser_finalize(yasm_symtab *symtab, int undef_extern,
yasm_errwarns *errwarns)
void
yasm_symtab_destroy(yasm_symtab *symtab)
typedef struct symrec_print_data  symrec_print_data;
static int
symrec_print_wrapper(yasm_symrec *sym, void *d)
void
yasm_symtab_print(yasm_symtab *symtab, FILE *f, int indent_level)
const char *
yasm_symrec_get_name(const yasm_symrec *sym)
char *
yasm_symrec_get_global_name(const yasm_symrec *sym, const yasm_object *object)
yasm_sym_vis
yasm_symrec_get_visibility(const yasm_symrec *sym)
yasm_sym_status
yasm_symrec_get_status(const yasm_symrec *sym)
unsigned long
yasm_symrec_get_def_line(const yasm_symrec *sym)
unsigned long
yasm_symrec_get_decl_line(const yasm_symrec *sym)
unsigned long
yasm_symrec_get_use_line(const yasm_symrec *sym)
const yasm_expr *
yasm_symrec_get_equ(const yasm_symrec *sym)
int
yasm_symrec_get_label(const yasm_symrec *sym,
yasm_symrec_get_label_bytecodep *precbc)
void
yasm_symrec_set_size(yasm_symrec *sym, int size)
int
yasm_symrec_get_size(const yasm_symrec *sym)
void
yasm_symrec_set_segment(yasm_symrec *sym, const char *segment)
const char *
yasm_symrec_get_segment(const yasm_symrec *sym)
int
yasm_symrec_is_abs(const yasm_symrec *sym)
int
yasm_symrec_is_special(const yasm_symrec *sym)
int
yasm_symrec_is_curpos(const yasm_symrec *sym)
void
yasm_symrec_set_objext_valparams(yasm_symrec *sym, yasm_valparamhead *objext_valparams)
yasm_valparamhead *
yasm_symrec_get_objext_valparams(yasm_symrec *sym)
void
yasm_symrec_set_common_size(yasm_symrec *sym, yasm_expr *common_size)
yasm_expr **
yasm_symrec_get_common_size(yasm_symrec *sym)
void *
yasm_symrec_get_data(yasm_symrec *sym,
const yasm_assoc_data_callback *callback)
void
yasm_symrec_add_data(yasm_symrec *sym,
const yasm_assoc_data_callback *callback, void *data)
void
yasm_symrec_print(const yasm_symrec *sym, FILE *f, int indent_level)
