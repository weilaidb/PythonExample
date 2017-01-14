#undef Yield
extern grammar _PyParser_Grammar;
#define NOTE(x)
static char parser_copyright_string[] =
"Copyright 1995-1996 by Virginia Polytechnic Institute & State\n\
University, Blacksburg, Virginia, USA, and Fred L. Drake, Jr., Reston,\n\
Virginia, USA.  Portions copyright 1991-1995 by Stichting Mathematisch\n\
Centrum, Amsterdam, The Netherlands.";
PyDoc_STRVAR(parser_doc_string,
);
static char parser_version_string[] = ;
typedef PyObject* (*SeqMaker) (Py_ssize_t length);
typedef int (*SeqInserter) (PyObject* sequence,
Py_ssize_t index,
PyObject* element);
static PyObject*
node2tuple(node *n,
SeqMaker mkseq,
SeqInserter addelem,
int lineno,
int col_offset)
#define PyST_EXPR  1
#define PyST_SUITE 2
static PyObject*
parser_error = 0;
typedef struct  PyST_Object;
static void parser_free(PyST_Object *st);
static PyObject* parser_sizeof(PyST_Object *, void *);
static int parser_compare(PyST_Object *left, PyST_Object *right);
static PyObject *parser_getattr(PyObject *self, char *name);
static PyObject* parser_compilest(PyST_Object *, PyObject *, PyObject *);
static PyObject* parser_isexpr(PyST_Object *, PyObject *, PyObject *);
static PyObject* parser_issuite(PyST_Object *, PyObject *, PyObject *);
static PyObject* parser_st2list(PyST_Object *, PyObject *, PyObject *);
static PyObject* parser_st2tuple(PyST_Object *, PyObject *, PyObject *);
#define PUBLIC_METHOD_TYPE (METH_VARARGS|METH_KEYWORDS)
static PyMethodDef
parser_methods[] = ;
static
PyTypeObject PyST_Type = ;
static int
parser_compare_nodes(node *left, node *right)
static int
parser_compare(PyST_Object *left, PyST_Object *right)
static PyObject*
parser_newstobject(node *st, int type)
static void
parser_free(PyST_Object *st)
static PyObject*
parser_st2tuple(PyST_Object *self, PyObject *args, PyObject *kw)
static PyObject*
parser_ast2tuple(PyST_Object *self, PyObject *args, PyObject *kw)
static PyObject*
parser_st2list(PyST_Object *self, PyObject *args, PyObject *kw)
static PyObject*
parser_ast2list(PyST_Object *self, PyObject *args, PyObject *kw)
static PyObject*
parser_compilest(PyST_Object *self, PyObject *args, PyObject *kw)
static PyObject*
parser_compileast(PyST_Object *self, PyObject *args, PyObject *kw)
static PyObject*
parser_isexpr(PyST_Object *self, PyObject *args, PyObject *kw)
static PyObject*
parser_issuite(PyST_Object *self, PyObject *args, PyObject *kw)
static PyObject*
parser_getattr(PyObject *self, char *name)
static void
err_string(char *message)
static PyObject*
parser_do_parse(PyObject *args, PyObject *kw, char *argspec, int type)
static PyObject*
parser_expr(PyST_Object *self, PyObject *args, PyObject *kw)
static PyObject*
parser_suite(PyST_Object *self, PyObject *args, PyObject *kw)
static node* build_node_tree(PyObject *tuple);
static int   validate_expr_tree(node *tree);
static int   validate_file_input(node *tree);
static int   validate_encoding_decl(node *tree);
static PyObject*
parser_tuple2st(PyST_Object *self, PyObject *args, PyObject *kw)
static PyObject*
parser_tuple2ast(PyST_Object *self, PyObject *args, PyObject *kw)
static PyObject *
parser_sizeof(PyST_Object *st, void *unused)
static node*
build_node_children(PyObject *tuple, node *root, int *line_num)
static node*
build_node_tree(PyObject *tuple)
static int validate_terminal(node *terminal, int type, char *string);
#define validate_ampersand(ch)  validate_terminal(ch,      AMPER, )
#define validate_circumflex(ch) validate_terminal(ch, CIRCUMFLEX, )
#define validate_colon(ch)      validate_terminal(ch,      COLON, )
#define validate_comma(ch)      validate_terminal(ch,      COMMA, )
#define validate_dedent(ch)     validate_terminal(ch,     DEDENT, )
#define validate_equal(ch)      validate_terminal(ch,      EQUAL, )
#define validate_indent(ch)     validate_terminal(ch,     INDENT, (char*)NULL)
#define validate_lparen(ch)     validate_terminal(ch,       LPAR, )
#define validate_newline(ch)    validate_terminal(ch,    NEWLINE, (char*)NULL)
#define validate_rparen(ch)     validate_terminal(ch,       RPAR, )
#define validate_semi(ch)       validate_terminal(ch,       SEMI, )
#define validate_star(ch)       validate_terminal(ch,       STAR, )
#define validate_vbar(ch)       validate_terminal(ch,       VBAR, )
#define validate_doublestar(ch) validate_terminal(ch, DOUBLESTAR, )
#define validate_dot(ch)        validate_terminal(ch,        DOT, )
#define validate_at(ch)         validate_terminal(ch,         AT, )
#define validate_name(ch, str)  validate_terminal(ch,       NAME, str)
#define VALIDATER(n)    static int validate_##n(node *tree)
VALIDATER(node);                VALIDATER(small_stmt);
VALIDATER(class);               VALIDATER(node);
VALIDATER(parameters);          VALIDATER(suite);
VALIDATER(testlist);            VALIDATER(varargslist);
VALIDATER(fpdef);               VALIDATER(fplist);
VALIDATER(stmt);                VALIDATER(simple_stmt);
VALIDATER(expr_stmt);           VALIDATER(power);
VALIDATER(print_stmt);          VALIDATER(del_stmt);
VALIDATER(return_stmt);         VALIDATER(list_iter);
VALIDATER(raise_stmt);          VALIDATER(import_stmt);
VALIDATER(import_name);         VALIDATER(import_from);
VALIDATER(global_stmt);         VALIDATER(list_if);
VALIDATER(assert_stmt);         VALIDATER(list_for);
VALIDATER(exec_stmt);           VALIDATER(compound_stmt);
VALIDATER(while);               VALIDATER(for);
VALIDATER(try);                 VALIDATER(except_clause);
VALIDATER(test);                VALIDATER(and_test);
VALIDATER(not_test);            VALIDATER(comparison);
VALIDATER(comp_op);             VALIDATER(expr);
VALIDATER(xor_expr);            VALIDATER(and_expr);
VALIDATER(shift_expr);          VALIDATER(arith_expr);
VALIDATER(term);                VALIDATER(factor);
VALIDATER(atom);                VALIDATER(lambdef);
VALIDATER(trailer);             VALIDATER(subscript);
VALIDATER(subscriptlist);       VALIDATER(sliceop);
VALIDATER(exprlist);            VALIDATER(dictorsetmaker);
VALIDATER(arglist);             VALIDATER(argument);
VALIDATER(listmaker);           VALIDATER(yield_stmt);
VALIDATER(testlist1);           VALIDATER(comp_for);
VALIDATER(comp_iter);           VALIDATER(comp_if);
VALIDATER(testlist_comp);       VALIDATER(yield_expr);
VALIDATER(yield_or_testlist);   VALIDATER(or_test);
VALIDATER(old_test);            VALIDATER(old_lambdef);
#undef VALIDATER
#define is_even(n)      (((n) & 1) == 0)
#define is_odd(n)       (((n) & 1) == 1)
static int
validate_ntype(node *n, int t)
static int
validate_numnodes(node *n, int num, const char *const name)
static int
validate_terminal(node *terminal, int type, char *string)
static int
validate_repeating_list(node *tree, int ntype, int (*vfunc)(node *),
const char *const name)
static int
validate_class(node *tree)
static int
validate_if(node *tree)
static int
validate_parameters(node *tree)
static int
validate_suite(node *tree)
static int
validate_testlist(node *tree)
static int
validate_testlist1(node *tree)
static int
validate_testlist_safe(node *tree)
static int
validate_varargslist_trailer(node *tree, int start)
static int
validate_varargslist(node *tree)
static int
validate_list_iter(node *tree)
static int
validate_comp_iter(node *tree)
static int
validate_list_for(node *tree)
static int
validate_comp_for(node *tree)
static int
validate_list_if(node *tree)
static int
validate_comp_if(node *tree)
static int
validate_fpdef(node *tree)
static int
validate_fplist(node *tree)
static int
validate_stmt(node *tree)
static int
validate_simple_stmt(node *tree)
static int
validate_small_stmt(node *tree)
static int
validate_compound_stmt(node *tree)
static int
validate_yield_or_testlist(node *tree)
static int
validate_expr_stmt(node *tree)
static int
validate_print_stmt(node *tree)
static int
validate_del_stmt(node *tree)
static int
validate_return_stmt(node *tree)
static int
validate_raise_stmt(node *tree)
static int
validate_yield_expr(node *tree)
static int
validate_yield_stmt(node *tree)
static int
validate_import_as_name(node *tree)
static int
validate_dotted_name(node *tree)
static int
validate_dotted_as_name(node *tree)
static int
validate_dotted_as_names(node *tree)
static int
validate_import_as_names(node *tree)
static int
validate_import_name(node *tree)
static int
count_from_dots(node *tree)
static int
validate_import_from(node *tree)
static int
validate_import_stmt(node *tree)
static int
validate_global_stmt(node *tree)
static int
validate_exec_stmt(node *tree)
static int
validate_assert_stmt(node *tree)
static int
validate_while(node *tree)
static int
validate_for(node *tree)
static int
validate_try(node *tree)
static int
validate_except_clause(node *tree)
static int
validate_test(node *tree)
static int
validate_old_test(node *tree)
static int
validate_or_test(node *tree)
static int
validate_and_test(node *tree)
static int
validate_not_test(node *tree)
static int
validate_comparison(node *tree)
static int
validate_comp_op(node *tree)
static int
validate_expr(node *tree)
static int
validate_xor_expr(node *tree)
static int
validate_and_expr(node *tree)
static int
validate_chain_two_ops(node *tree, int (*termvalid)(node *), int op1, int op2)
static int
validate_shift_expr(node *tree)
static int
validate_arith_expr(node *tree)
static int
validate_term(node *tree)
static int
validate_factor(node *tree)
static int
validate_power(node *tree)
static int
validate_atom(node *tree)
static int
validate_listmaker(node *tree)
static int
validate_testlist_comp(node *tree)
static int
validate_decorator(node *tree)
static int
validate_decorators(node *tree)
static int
validate_with_item(node *tree)
static int
validate_with_stmt(node *tree)
static int
validate_funcdef(node *tree)
static int
validate_decorated(node *tree)
static int
validate_lambdef(node *tree)
static int
validate_old_lambdef(node *tree)
static int
validate_arglist(node *tree)
static int
validate_argument(node *tree)
static int
validate_trailer(node *tree)
static int
validate_subscriptlist(node *tree)
static int
validate_subscript(node *tree)
static int
validate_sliceop(node *tree)
static int
validate_exprlist(node *tree)
static int
validate_dictorsetmaker(node *tree)
static int
validate_eval_input(node *tree)
static int
validate_node(node *tree)
static int
validate_expr_tree(node *tree)
static int
validate_file_input(node *tree)
static int
validate_encoding_decl(node *tree)
static PyObject*
pickle_constructor = NULL;
static PyObject*
parser__pickler(PyObject *self, PyObject *args)
static PyMethodDef parser_functions[] =  ;
PyMODINIT_FUNC initparser(void);
PyMODINIT_FUNC
initparser(void)
