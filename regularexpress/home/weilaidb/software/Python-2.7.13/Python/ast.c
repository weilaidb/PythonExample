struct compiling ;
static asdl_seq *seq_for_testlist(struct compiling *, const node *);
static expr_ty ast_for_expr(struct compiling *, const node *);
static stmt_ty ast_for_stmt(struct compiling *, const node *);
static asdl_seq *ast_for_suite(struct compiling *, const node *);
static asdl_seq *ast_for_exprlist(struct compiling *, const node *,
expr_context_ty);
static expr_ty ast_for_testlist(struct compiling *, const node *);
static stmt_ty ast_for_classdef(struct compiling *, const node *, asdl_seq *);
static expr_ty ast_for_testlist_comp(struct compiling *, const node *);
static expr_ty ast_for_call(struct compiling *, const node *, expr_ty);
static PyObject *parsenumber(struct compiling *, const char *);
static PyObject *parsestr(struct compiling *, const node *n, const char *);
static PyObject *parsestrplus(struct compiling *, const node *n);
#define LINENO(n)       ((n)->n_lineno)
#define COMP_GENEXP 0
#define COMP_SETCOMP  1
static identifier
new_identifier(const char* n, PyArena *arena)
#define NEW_IDENTIFIER(n) new_identifier(STR(n), c->c_arena)
static int
ast_error(const node *n, const char *errstr)
static void
ast_error_finish(const char *filename)
static int
ast_warn(struct compiling *c, const node *n, char *msg)
static int
forbidden_check(struct compiling *c, const node *n, const char *x)
static int
num_stmts(const node *n)
mod_ty
PyAST_FromNode(const node *n, PyCompilerFlags *flags, const char *filename,
PyArena *arena)
static operator_ty
get_operator(const node *n)
static int
set_context(struct compiling *c, expr_ty e, expr_context_ty ctx, const node *n)
static operator_ty
ast_for_augassign(struct compiling *c, const node *n)
static cmpop_ty
ast_for_comp_op(struct compiling *c, const node *n)
static asdl_seq *
seq_for_testlist(struct compiling *c, const node *n)
static expr_ty
compiler_complex_args(struct compiling *c, const node *n)
static arguments_ty
ast_for_arguments(struct compiling *c, const node *n)
static expr_ty
ast_for_dotted_name(struct compiling *c, const node *n)
static expr_ty
ast_for_decorator(struct compiling *c, const node *n)
static asdl_seq*
ast_for_decorators(struct compiling *c, const node *n)
static stmt_ty
ast_for_funcdef(struct compiling *c, const node *n, asdl_seq *decorator_seq)
static stmt_ty
ast_for_decorated(struct compiling *c, const node *n)
static expr_ty
ast_for_lambdef(struct compiling *c, const node *n)
static expr_ty
ast_for_ifexpr(struct compiling *c, const node *n)
static int
count_list_fors(struct compiling *c, const node *n)
static int
count_list_ifs(struct compiling *c, const node *n)
static expr_ty
ast_for_listcomp(struct compiling *c, const node *n)
static int
count_comp_fors(struct compiling *c, const node *n)
static int
count_comp_ifs(struct compiling *c, const node *n)
static asdl_seq *
ast_for_comprehension(struct compiling *c, const node *n)
static expr_ty
ast_for_itercomp(struct compiling *c, const node *n, int type)
static expr_ty
ast_for_dictcomp(struct compiling *c, const node *n)
static expr_ty
ast_for_genexp(struct compiling *c, const node *n)
static expr_ty
ast_for_setcomp(struct compiling *c, const node *n)
static expr_ty
ast_for_atom(struct compiling *c, const node *n)
static slice_ty
ast_for_slice(struct compiling *c, const node *n)
static expr_ty
ast_for_binop(struct compiling *c, const node *n)
static expr_ty
ast_for_trailer(struct compiling *c, const node *n, expr_ty left_expr)
static expr_ty
ast_for_factor(struct compiling *c, const node *n)
static expr_ty
ast_for_power(struct compiling *c, const node *n)
static expr_ty
ast_for_expr(struct compiling *c, const node *n)
static expr_ty
ast_for_call(struct compiling *c, const node *n, expr_ty func)
static expr_ty
ast_for_testlist(struct compiling *c, const node* n)
static expr_ty
ast_for_testlist_comp(struct compiling *c, const node* n)
static asdl_seq*
ast_for_class_bases(struct compiling *c, const node* n)
static stmt_ty
ast_for_expr_stmt(struct compiling *c, const node *n)
static stmt_ty
ast_for_print_stmt(struct compiling *c, const node *n)
static asdl_seq *
ast_for_exprlist(struct compiling *c, const node *n, expr_context_ty context)
static stmt_ty
ast_for_del_stmt(struct compiling *c, const node *n)
static stmt_ty
ast_for_flow_stmt(struct compiling *c, const node *n)
static alias_ty
alias_for_import_name(struct compiling *c, const node *n, int store)
static stmt_ty
ast_for_import_stmt(struct compiling *c, const node *n)
static stmt_ty
ast_for_global_stmt(struct compiling *c, const node *n)
static stmt_ty
ast_for_exec_stmt(struct compiling *c, const node *n)
static stmt_ty
ast_for_assert_stmt(struct compiling *c, const node *n)
static asdl_seq *
ast_for_suite(struct compiling *c, const node *n)
static stmt_ty
ast_for_if_stmt(struct compiling *c, const node *n)
static stmt_ty
ast_for_while_stmt(struct compiling *c, const node *n)
static stmt_ty
ast_for_for_stmt(struct compiling *c, const node *n)
static excepthandler_ty
ast_for_except_clause(struct compiling *c, const node *exc, node *body)
static stmt_ty
ast_for_try_stmt(struct compiling *c, const node *n)
static stmt_ty
ast_for_with_item(struct compiling *c, const node *n, asdl_seq *content)
static stmt_ty
ast_for_with_stmt(struct compiling *c, const node *n)
static stmt_ty
ast_for_classdef(struct compiling *c, const node *n, asdl_seq *decorator_seq)
static stmt_ty
ast_for_stmt(struct compiling *c, const node *n)
static PyObject *
parsenumber(struct compiling *c, const char *s)
static PyObject *
decode_utf8(struct compiling *c, const char **sPtr, const char *end, char* encoding)
static PyObject *
decode_unicode(struct compiling *c, const char *s, size_t len, int rawmode, const char *encoding)
static PyObject *
parsestr(struct compiling *c, const node *n, const char *s)
static PyObject *
parsestrplus(struct compiling *c, const node *n)
