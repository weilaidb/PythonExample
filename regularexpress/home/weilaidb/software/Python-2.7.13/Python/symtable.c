#define GLOBAL_AFTER_ASSIGN \
#define GLOBAL_AFTER_USE \
#define IMPORT_STAR_WARNING
#define RETURN_VAL_IN_GENERATOR \
static PySTEntryObject *
ste_new(struct symtable *st, identifier name, _Py_block_ty block,
void *key, int lineno)
static PyObject *
ste_repr(PySTEntryObject *ste)
static void
ste_dealloc(PySTEntryObject *ste)
#define OFF(x) offsetof(PySTEntryObject, x)
static PyMemberDef ste_memberlist[] = ;
PyTypeObject PySTEntry_Type = ;
static int symtable_analyze(struct symtable *st);
static int symtable_warn(struct symtable *st, char *msg, int lineno);
static int symtable_enter_block(struct symtable *st, identifier name,
_Py_block_ty block, void *ast, int lineno);
static int symtable_exit_block(struct symtable *st, void *ast);
static int symtable_visit_stmt(struct symtable *st, stmt_ty s);
static int symtable_visit_expr(struct symtable *st, expr_ty s);
static int symtable_visit_genexp(struct symtable *st, expr_ty s);
static int symtable_visit_setcomp(struct symtable *st, expr_ty e);
static int symtable_visit_dictcomp(struct symtable *st, expr_ty e);
static int symtable_visit_arguments(struct symtable *st, arguments_ty);
static int symtable_visit_excepthandler(struct symtable *st, excepthandler_ty);
static int symtable_visit_alias(struct symtable *st, alias_ty);
static int symtable_visit_comprehension(struct symtable *st, comprehension_ty);
static int symtable_visit_keyword(struct symtable *st, keyword_ty);
static int symtable_visit_slice(struct symtable *st, slice_ty);
static int symtable_visit_params(struct symtable *st, asdl_seq *args, int top);
static int symtable_visit_params_nested(struct symtable *st, asdl_seq *args);
static int symtable_implicit_arg(struct symtable *st, int pos);
static identifier top = NULL, lambda = NULL, genexpr = NULL, setcomp = NULL,
dictcomp = NULL;
#define GET_IDENTIFIER(VAR) \
((VAR) ? (VAR) : ((VAR) = PyString_InternFromString(# VAR)))
#define DUPLICATE_ARGUMENT \
static struct symtable *
symtable_new(void)
struct symtable *
PySymtable_Build(mod_ty mod, const char *filename, PyFutureFeatures *future)
void
PySymtable_Free(struct symtable *st)
PySTEntryObject *
PySymtable_Lookup(struct symtable *st, void *key)
int
PyST_GetScope(PySTEntryObject *ste, PyObject *name)
#define SET_SCOPE(DICT, NAME, I)
static int
analyze_name(PySTEntryObject *ste, PyObject *dict, PyObject *name, long flags,
PyObject *bound, PyObject *local, PyObject *free,
PyObject *global)
#undef SET_SCOPE
static int
analyze_cells(PyObject *scope, PyObject *free)
static int
check_unoptimized(const PySTEntryObject* ste)
static int
update_symbols(PyObject *symbols, PyObject *scope,
PyObject *bound, PyObject *free, int classflag)
static int
analyze_child_block(PySTEntryObject *entry, PyObject *bound, PyObject *free,
PyObject *global, PyObject* child_free);
static int
analyze_block(PySTEntryObject *ste, PyObject *bound, PyObject *free,
PyObject *global)
static int
analyze_child_block(PySTEntryObject *entry, PyObject *bound, PyObject *free,
PyObject *global, PyObject* child_free)
static int
symtable_analyze(struct symtable *st)
static int
symtable_warn(struct symtable *st, char *msg, int lineno)
static int
symtable_exit_block(struct symtable *st, void *ast)
static int
symtable_enter_block(struct symtable *st, identifier name, _Py_block_ty block,
void *ast, int lineno)
static long
symtable_lookup(struct symtable *st, PyObject *name)
static int
symtable_add_def(struct symtable *st, PyObject *name, int flag)
#define VISIT(ST, TYPE, V) \
if (!symtable_visit_ ## TYPE((ST), (V))) \
return 0;
#define VISIT_IN_BLOCK(ST, TYPE, V, S) \
if (!symtable_visit_ ## TYPE((ST), (V)))
#define VISIT_SEQ(ST, TYPE, SEQ)
#define VISIT_SEQ_IN_BLOCK(ST, TYPE, SEQ, S)
#define VISIT_SEQ_TAIL(ST, TYPE, SEQ, START)
#define VISIT_SEQ_TAIL_IN_BLOCK(ST, TYPE, SEQ, START, S)
static int
symtable_visit_stmt(struct symtable *st, stmt_ty s)
static int
symtable_visit_expr(struct symtable *st, expr_ty e)
static int
symtable_implicit_arg(struct symtable *st, int pos)
static int
symtable_visit_params(struct symtable *st, asdl_seq *args, int toplevel)
static int
symtable_visit_params_nested(struct symtable *st, asdl_seq *args)
static int
symtable_visit_arguments(struct symtable *st, arguments_ty a)
static int
symtable_visit_excepthandler(struct symtable *st, excepthandler_ty eh)
static int
symtable_visit_alias(struct symtable *st, alias_ty a)
static int
symtable_visit_comprehension(struct symtable *st, comprehension_ty lc)
static int
symtable_visit_keyword(struct symtable *st, keyword_ty k)
static int
symtable_visit_slice(struct symtable *st, slice_ty s)
static int
symtable_new_tmpname(struct symtable *st)
static int
symtable_handle_comprehension(struct symtable *st, expr_ty e,
identifier scope_name, asdl_seq *generators,
expr_ty elt, expr_ty value)
static int
symtable_visit_genexp(struct symtable *st, expr_ty e)
static int
symtable_visit_setcomp(struct symtable *st, expr_ty e)
static int
symtable_visit_dictcomp(struct symtable *st, expr_ty e)
