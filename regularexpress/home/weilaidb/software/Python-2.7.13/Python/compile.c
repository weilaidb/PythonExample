int Py_OptimizeFlag = 0;
#define DEFAULT_BLOCK_SIZE 16
#define DEFAULT_BLOCKS 8
#define DEFAULT_CODE_SIZE 128
#define DEFAULT_LNOTAB_SIZE 16
#define COMP_GENEXP   0
#define COMP_SETCOMP  1
#define COMP_DICTCOMP 2
struct instr ;
typedef struct basicblock_  basicblock;
enum fblocktype ;
struct fblockinfo ;
struct compiler_unit ;
struct compiler ;
static int compiler_enter_scope(struct compiler *, identifier, void *, int);
static void compiler_free(struct compiler *);
static basicblock *compiler_new_block(struct compiler *);
static int compiler_next_instr(struct compiler *, basicblock *);
static int compiler_addop(struct compiler *, int);
static int compiler_addop_o(struct compiler *, int, PyObject *, PyObject *);
static int compiler_addop_i(struct compiler *, int, int);
static int compiler_addop_j(struct compiler *, int, basicblock *, int);
static basicblock *compiler_use_new_block(struct compiler *);
static int compiler_error(struct compiler *, const char *);
static int compiler_nameop(struct compiler *, identifier, expr_context_ty);
static PyCodeObject *compiler_mod(struct compiler *, mod_ty);
static int compiler_visit_stmt(struct compiler *, stmt_ty);
static int compiler_visit_keyword(struct compiler *, keyword_ty);
static int compiler_visit_expr(struct compiler *, expr_ty);
static int compiler_augassign(struct compiler *, stmt_ty);
static int compiler_visit_slice(struct compiler *, slice_ty,
expr_context_ty);
static int compiler_push_fblock(struct compiler *, enum fblocktype,
basicblock *);
static void compiler_pop_fblock(struct compiler *, enum fblocktype,
basicblock *);
static int compiler_in_loop(struct compiler *);
static int inplace_binop(struct compiler *, operator_ty);
static int expr_constant(expr_ty e);
static int compiler_with(struct compiler *, stmt_ty);
static PyCodeObject *assemble(struct compiler *, int addNone);
static PyObject *__doc__;
#define COMPILER_CAPSULE_NAME_COMPILER_UNIT
PyObject *
_Py_Mangle(PyObject *privateobj, PyObject *ident)
static int
compiler_init(struct compiler *c)
PyCodeObject *
PyAST_Compile(mod_ty mod, const char *filename, PyCompilerFlags *flags,
PyArena *arena)
PyCodeObject *
PyNode_Compile(struct _node *n, const char *filename)
static void
compiler_free(struct compiler *c)
static PyObject *
list2dict(PyObject *list)
static PyObject *
dictbytype(PyObject *src, int scope_type, int flag, int offset)
static void
compiler_unit_check(struct compiler_unit *u)
static void
compiler_unit_free(struct compiler_unit *u)
static int
compiler_enter_scope(struct compiler *c, identifier name, void *key,
int lineno)
static void
compiler_exit_scope(struct compiler *c)
static basicblock *
compiler_new_block(struct compiler *c)
static basicblock *
compiler_use_new_block(struct compiler *c)
static basicblock *
compiler_next_block(struct compiler *c)
static basicblock *
compiler_use_next_block(struct compiler *c, basicblock *block)
static int
compiler_next_instr(struct compiler *c, basicblock *b)
static void
compiler_set_lineno(struct compiler *c, int off)
static int
opcode_stack_effect(int opcode, int oparg)
static int
compiler_addop(struct compiler *c, int opcode)
static int
compiler_add_o(struct compiler *c, PyObject *dict, PyObject *o)
static int
compiler_addop_o(struct compiler *c, int opcode, PyObject *dict,
PyObject *o)
static int
compiler_addop_name(struct compiler *c, int opcode, PyObject *dict,
PyObject *o)
static int
compiler_addop_i(struct compiler *c, int opcode, int oparg)
static int
compiler_addop_j(struct compiler *c, int opcode, basicblock *b, int absolute)
#define NEW_BLOCK(C)
#define NEXT_BLOCK(C)
#define ADDOP(C, OP)
#define ADDOP_IN_SCOPE(C, OP)
#define ADDOP_O(C, OP, O, TYPE)
#define ADDOP_NAME(C, OP, O, TYPE)
#define ADDOP_I(C, OP, O)
#define ADDOP_JABS(C, OP, O)
#define ADDOP_JREL(C, OP, O)
#define VISIT(C, TYPE, V)
#define VISIT_IN_SCOPE(C, TYPE, V)
#define VISIT_SLICE(C, V, CTX)
#define VISIT_SEQ(C, TYPE, SEQ)
#define VISIT_SEQ_IN_SCOPE(C, TYPE, SEQ)
static int
compiler_isdocstring(stmt_ty s)
static int
compiler_body(struct compiler *c, asdl_seq *stmts)
static PyCodeObject *
compiler_mod(struct compiler *c, mod_ty mod)
static int
get_ref_type(struct compiler *c, PyObject *name)
static int
compiler_lookup_arg(PyObject *dict, PyObject *name)
static int
compiler_make_closure(struct compiler *c, PyCodeObject *co, int args)
static int
compiler_decorators(struct compiler *c, asdl_seq* decos)
static int
compiler_arguments(struct compiler *c, arguments_ty args)
static int
compiler_function(struct compiler *c, stmt_ty s)
static int
compiler_class(struct compiler *c, stmt_ty s)
static int
compiler_ifexp(struct compiler *c, expr_ty e)
static int
compiler_lambda(struct compiler *c, expr_ty e)
static int
compiler_print(struct compiler *c, stmt_ty s)
static int
compiler_if(struct compiler *c, stmt_ty s)
static int
compiler_for(struct compiler *c, stmt_ty s)
static int
compiler_while(struct compiler *c, stmt_ty s)
static int
compiler_continue(struct compiler *c)
static int
compiler_try_finally(struct compiler *c, stmt_ty s)
static int
compiler_try_except(struct compiler *c, stmt_ty s)
static int
compiler_import_as(struct compiler *c, identifier name, identifier asname)
static int
compiler_import(struct compiler *c, stmt_ty s)
static int
compiler_from_import(struct compiler *c, stmt_ty s)
static int
compiler_assert(struct compiler *c, stmt_ty s)
static int
compiler_visit_stmt(struct compiler *c, stmt_ty s)
static int
unaryop(unaryop_ty op)
static int
binop(struct compiler *c, operator_ty op)
static int
cmpop(cmpop_ty op)
static int
inplace_binop(struct compiler *c, operator_ty op)
static int
compiler_nameop(struct compiler *c, identifier name, expr_context_ty ctx)
static int
compiler_boolop(struct compiler *c, expr_ty e)
static int
compiler_list(struct compiler *c, expr_ty e)
static int
compiler_tuple(struct compiler *c, expr_ty e)
static int
compiler_compare(struct compiler *c, expr_ty e)
static int
compiler_call(struct compiler *c, expr_ty e)
static int
compiler_listcomp_generator(struct compiler *c, asdl_seq *generators,
int gen_index, expr_ty elt)
static int
compiler_listcomp(struct compiler *c, expr_ty e)
static int
compiler_comprehension_generator(struct compiler *c,
asdl_seq *generators, int gen_index,
expr_ty elt, expr_ty val, int type)
static int
compiler_comprehension(struct compiler *c, expr_ty e, int type, identifier name,
asdl_seq *generators, expr_ty elt, expr_ty val)
static int
compiler_genexp(struct compiler *c, expr_ty e)
static int
compiler_setcomp(struct compiler *c, expr_ty e)
static int
compiler_dictcomp(struct compiler *c, expr_ty e)
static int
compiler_visit_keyword(struct compiler *c, keyword_ty k)
static int
expr_constant(expr_ty e)
static int
compiler_with(struct compiler *c, stmt_ty s)
static int
compiler_visit_expr(struct compiler *c, expr_ty e)
static int
compiler_augassign(struct compiler *c, stmt_ty s)
static int
compiler_push_fblock(struct compiler *c, enum fblocktype t, basicblock *b)
static void
compiler_pop_fblock(struct compiler *c, enum fblocktype t, basicblock *b)
static int
compiler_in_loop(struct compiler *c)
static int
compiler_error(struct compiler *c, const char *errstr)
static int
compiler_handle_subscr(struct compiler *c, const char *kind,
expr_context_ty ctx)
static int
compiler_slice(struct compiler *c, slice_ty s, expr_context_ty ctx)
static int
compiler_simple_slice(struct compiler *c, slice_ty s, expr_context_ty ctx)
static int
compiler_visit_nested_slice(struct compiler *c, slice_ty s,
expr_context_ty ctx)
static int
compiler_visit_slice(struct compiler *c, slice_ty s, expr_context_ty ctx)
struct assembler ;
static void
dfs(struct compiler *c, basicblock *b, struct assembler *a)
static int
stackdepth_walk(struct compiler *c, basicblock *b, int depth, int maxdepth)
static int
stackdepth(struct compiler *c)
static int
assemble_init(struct assembler *a, int nblocks, int firstlineno)
static void
assemble_free(struct assembler *a)
static int
instrsize(struct instr *instr)
static int
blocksize(basicblock *b)
static int
assemble_lnotab(struct assembler *a, struct instr *i)
static int
assemble_emit(struct assembler *a, struct instr *i)
static void
assemble_jump_offsets(struct assembler *a, struct compiler *c)
static PyObject *
dict_keys_inorder(PyObject *dict, int offset)
static int
compute_code_flags(struct compiler *c)
static PyCodeObject *
makecode(struct compiler *c, struct assembler *a)
static PyCodeObject *
assemble(struct compiler *c, int addNone)
