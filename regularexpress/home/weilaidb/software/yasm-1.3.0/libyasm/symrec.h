#define YASM_SYMREC_H
#define YASM_LIB_DECL
typedef enum yasm_sym_status  yasm_sym_status;
typedef enum yasm_sym_vis  yasm_sym_vis;
YASM_LIB_DECL
yasm_symtab *yasm_symtab_create(void);
YASM_LIB_DECL
void yasm_symtab_destroy( yasm_symtab *symtab);
YASM_LIB_DECL
void yasm_symtab_set_case_sensitive(yasm_symtab *symtab, int sensitive);
YASM_LIB_DECL yasm_symrec *yasm_symtab_abs_sym(yasm_symtab *symtab);
YASM_LIB_DECL yasm_symrec *yasm_symtab_use
(yasm_symtab *symtab, const char *name, unsigned long line);
YASM_LIB_DECL yasm_symrec *yasm_symtab_get
(yasm_symtab *symtab, const char *name);
YASM_LIB_DECL yasm_symrec *yasm_symtab_define_equ
(yasm_symtab *symtab, const char *name, yasm_expr *e,
unsigned long line);
YASM_LIB_DECL yasm_symrec *yasm_symtab_define_label
(yasm_symtab *symtab, const char *name, yasm_bytecode *precbc, int in_table, unsigned long line);
YASM_LIB_DECL yasm_symrec *yasm_symtab_define_curpos
(yasm_symtab *symtab, const char *name, yasm_bytecode *precbc, unsigned long line);
YASM_LIB_DECL yasm_symrec *yasm_symtab_define_special
(yasm_symtab *symtab, const char *name, yasm_sym_vis vis);
YASM_LIB_DECL yasm_symrec *yasm_symtab_declare
(yasm_symtab *symtab, const char *name, yasm_sym_vis vis,
unsigned long line);
YASM_LIB_DECL
void yasm_symrec_declare(yasm_symrec *symrec, yasm_sym_vis vis,
unsigned long line);
typedef int (*yasm_symtab_traverse_callback)
(yasm_symrec *sym, void *d);
YASM_LIB_DECL
int yasm_symtab_traverse
(yasm_symtab *symtab, void *d,
yasm_symtab_traverse_callback func);
typedef struct yasm_symtab_iter yasm_symtab_iter;
YASM_LIB_DECL
const yasm_symtab_iter *yasm_symtab_first(const yasm_symtab *symtab);
YASM_LIB_DECL const yasm_symtab_iter *yasm_symtab_next
(const yasm_symtab_iter *prev);
YASM_LIB_DECL
yasm_symrec *yasm_symtab_iter_value(const yasm_symtab_iter *cur);
YASM_LIB_DECL
void yasm_symtab_parser_finalize(yasm_symtab *symtab, int undef_extern,
yasm_errwarns *errwarns);
YASM_LIB_DECL
void yasm_symtab_print(yasm_symtab *symtab, FILE *f, int indent_level);
YASM_LIB_DECL const char *yasm_symrec_get_name(const yasm_symrec *sym);
YASM_LIB_DECL char *yasm_symrec_get_global_name(const yasm_symrec *sym,
const yasm_object *object);
YASM_LIB_DECL
yasm_sym_vis yasm_symrec_get_visibility(const yasm_symrec *sym);
YASM_LIB_DECL
yasm_sym_status yasm_symrec_get_status(const yasm_symrec *sym);
YASM_LIB_DECL
unsigned long yasm_symrec_get_def_line(const yasm_symrec *sym);
YASM_LIB_DECL
unsigned long yasm_symrec_get_decl_line(const yasm_symrec *sym);
YASM_LIB_DECL
unsigned long yasm_symrec_get_use_line(const yasm_symrec *sym);
YASM_LIB_DECL const yasm_expr *yasm_symrec_get_equ
(const yasm_symrec *sym);
typedef yasm_bytecode *yasm_symrec_get_label_bytecodep;
YASM_LIB_DECL
int yasm_symrec_get_label(const yasm_symrec *sym, yasm_symrec_get_label_bytecodep *precbc);
YASM_LIB_DECL
void yasm_symrec_set_size(yasm_symrec *sym, int size);
YASM_LIB_DECL
int yasm_symrec_get_size(const yasm_symrec *sym);
YASM_LIB_DECL
void yasm_symrec_set_segment(yasm_symrec *sym, const char *segment);
YASM_LIB_DECL
const char *yasm_symrec_get_segment(const yasm_symrec *sym);
YASM_LIB_DECL
int yasm_symrec_is_abs(const yasm_symrec *sym);
YASM_LIB_DECL
int yasm_symrec_is_special(const yasm_symrec *sym);
YASM_LIB_DECL
int yasm_symrec_is_curpos(const yasm_symrec *sym);
YASM_LIB_DECL
void yasm_symrec_set_objext_valparams
(yasm_symrec *sym, yasm_valparamhead *objext_valparams);
YASM_LIB_DECL yasm_valparamhead *yasm_symrec_get_objext_valparams
(yasm_symrec *sym);
YASM_LIB_DECL
void yasm_symrec_set_common_size
(yasm_symrec *sym, yasm_expr *common_size);
YASM_LIB_DECL yasm_expr **yasm_symrec_get_common_size
(yasm_symrec *sym);
YASM_LIB_DECL void *yasm_symrec_get_data
(yasm_symrec *sym, const yasm_assoc_data_callback *callback);
YASM_LIB_DECL
void yasm_symrec_add_data(yasm_symrec *sym,
const yasm_assoc_data_callback *callback, void *data);
YASM_LIB_DECL
void yasm_symrec_print(const yasm_symrec *sym, FILE *f, int indent_level);
