#define YASM_SYMREC_H
#define YASM_LIB_DECL
typedef enum yasm_sym_status  yasm_sym_status;
typedef enum yasm_sym_vis  yasm_sym_vis;
YASM_LIB_DECL
*yasm_symtab_create;
YASM_LIB_DECL
yasm_symtab_destroy;
YASM_LIB_DECL
yasm_symtab_set_case_sensitive;
*yasm_symtab_abs_sym;
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
yasm_symrec_declare;
typedef int (*yasm_symtab_traverse_callback)
(yasm_symrec *sym, void *d);
YASM_LIB_DECL
int yasm_symtab_traverse
(yasm_symtab *symtab, void *d,
yasm_symtab_traverse_callback func);
typedef struct yasm_symtab_iter yasm_symtab_iter;
YASM_LIB_DECL
*yasm_symtab_first;
YASM_LIB_DECL const yasm_symtab_iter *yasm_symtab_next
(const yasm_symtab_iter *prev);
YASM_LIB_DECL
*yasm_symtab_iter_value;
YASM_LIB_DECL
yasm_symtab_parser_finalize;
YASM_LIB_DECL
yasm_symtab_print;
*yasm_symrec_get_name;
*yasm_symrec_get_global_name;
YASM_LIB_DECL
yasm_symrec_get_visibility;
YASM_LIB_DECL
yasm_symrec_get_status;
YASM_LIB_DECL
yasm_symrec_get_def_line;
YASM_LIB_DECL
yasm_symrec_get_decl_line;
YASM_LIB_DECL
yasm_symrec_get_use_line;
YASM_LIB_DECL const yasm_expr *yasm_symrec_get_equ
(const yasm_symrec *sym);
typedef yasm_bytecode *yasm_symrec_get_label_bytecodep;
YASM_LIB_DECL
yasm_symrec_get_label;
YASM_LIB_DECL
yasm_symrec_set_size;
YASM_LIB_DECL
yasm_symrec_get_size;
YASM_LIB_DECL
yasm_symrec_set_segment;
YASM_LIB_DECL
*yasm_symrec_get_segment;
YASM_LIB_DECL
yasm_symrec_is_abs;
YASM_LIB_DECL
yasm_symrec_is_special;
YASM_LIB_DECL
yasm_symrec_is_curpos;
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
yasm_symrec_add_data;
YASM_LIB_DECL
yasm_symrec_print;
