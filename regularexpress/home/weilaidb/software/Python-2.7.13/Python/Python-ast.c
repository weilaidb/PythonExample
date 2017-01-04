static PyTypeObject AST_type;
static PyTypeObject *mod_type;
static PyObject* ast2obj_mod(void*);
static PyTypeObject *Module_type;
static char *Module_fields[]=;
static PyTypeObject *Interactive_type;
static char *Interactive_fields[]=;
static PyTypeObject *Expression_type;
static char *Expression_fields[]=;
static PyTypeObject *Suite_type;
static char *Suite_fields[]=;
static PyTypeObject *stmt_type;
static char *stmt_attributes[] = ;
static PyObject* ast2obj_stmt(void*);
static PyTypeObject *FunctionDef_type;
static char *FunctionDef_fields[]=;
static PyTypeObject *ClassDef_type;
static char *ClassDef_fields[]=;
static PyTypeObject *Return_type;
static char *Return_fields[]=;
static PyTypeObject *Delete_type;
static char *Delete_fields[]=;
static PyTypeObject *Assign_type;
static char *Assign_fields[]=;
static PyTypeObject *AugAssign_type;
static char *AugAssign_fields[]=;
static PyTypeObject *Print_type;
static char *Print_fields[]=;
static PyTypeObject *For_type;
static char *For_fields[]=;
static PyTypeObject *While_type;
static char *While_fields[]=;
static PyTypeObject *If_type;
static char *If_fields[]=;
static PyTypeObject *With_type;
static char *With_fields[]=;
static PyTypeObject *Raise_type;
static char *Raise_fields[]=;
static PyTypeObject *TryExcept_type;
static char *TryExcept_fields[]=;
static PyTypeObject *TryFinally_type;
static char *TryFinally_fields[]=;
static PyTypeObject *Assert_type;
static char *Assert_fields[]=;
static PyTypeObject *Import_type;
static char *Import_fields[]=;
static PyTypeObject *ImportFrom_type;
static char *ImportFrom_fields[]=;
static PyTypeObject *Exec_type;
static char *Exec_fields[]=;
static PyTypeObject *Global_type;
static char *Global_fields[]=;
static PyTypeObject *Expr_type;
static char *Expr_fields[]=;
static PyTypeObject *Pass_type;
static PyTypeObject *Break_type;
static PyTypeObject *Continue_type;
static PyTypeObject *expr_type;
static char *expr_attributes[] = ;
static PyObject* ast2obj_expr(void*);
static PyTypeObject *BoolOp_type;
static char *BoolOp_fields[]=;
static PyTypeObject *BinOp_type;
static char *BinOp_fields[]=;
static PyTypeObject *UnaryOp_type;
static char *UnaryOp_fields[]=;
static PyTypeObject *Lambda_type;
static char *Lambda_fields[]=;
static PyTypeObject *IfExp_type;
static char *IfExp_fields[]=;
static PyTypeObject *Dict_type;
static char *Dict_fields[]=;
static PyTypeObject *Set_type;
static char *Set_fields[]=;
static PyTypeObject *ListComp_type;
static char *ListComp_fields[]=;
static PyTypeObject *SetComp_type;
static char *SetComp_fields[]=;
static PyTypeObject *DictComp_type;
static char *DictComp_fields[]=;
static PyTypeObject *GeneratorExp_type;
static char *GeneratorExp_fields[]=;
static PyTypeObject *Yield_type;
static char *Yield_fields[]=;
static PyTypeObject *Compare_type;
static char *Compare_fields[]=;
static PyTypeObject *Call_type;
static char *Call_fields[]=;
static PyTypeObject *Repr_type;
static char *Repr_fields[]=;
static PyTypeObject *Num_type;
static char *Num_fields[]=;
static PyTypeObject *Str_type;
static char *Str_fields[]=;
static PyTypeObject *Attribute_type;
static char *Attribute_fields[]=;
static PyTypeObject *Subscript_type;
static char *Subscript_fields[]=;
static PyTypeObject *Name_type;
static char *Name_fields[]=;
static PyTypeObject *List_type;
static char *List_fields[]=;
static PyTypeObject *Tuple_type;
static char *Tuple_fields[]=;
static PyTypeObject *expr_context_type;
static PyObject *Load_singleton, *Store_singleton, *Del_singleton,
*AugLoad_singleton, *AugStore_singleton, *Param_singleton;
static PyObject* ast2obj_expr_context(expr_context_ty);
static PyTypeObject *Load_type;
static PyTypeObject *Store_type;
static PyTypeObject *Del_type;
static PyTypeObject *AugLoad_type;
static PyTypeObject *AugStore_type;
static PyTypeObject *Param_type;
static PyTypeObject *slice_type;
static PyObject* ast2obj_slice(void*);
static PyTypeObject *Ellipsis_type;
static PyTypeObject *Slice_type;
static char *Slice_fields[]=;
static PyTypeObject *ExtSlice_type;
static char *ExtSlice_fields[]=;
static PyTypeObject *Index_type;
static char *Index_fields[]=;
static PyTypeObject *boolop_type;
static PyObject *And_singleton, *Or_singleton;
static PyObject* ast2obj_boolop(boolop_ty);
static PyTypeObject *And_type;
static PyTypeObject *Or_type;
static PyTypeObject *operator_type;
static PyObject *Add_singleton, *Sub_singleton, *Mult_singleton,
*Div_singleton, *Mod_singleton, *Pow_singleton, *LShift_singleton,
*RShift_singleton, *BitOr_singleton, *BitXor_singleton, *BitAnd_singleton,
*FloorDiv_singleton;
static PyObject* ast2obj_operator(operator_ty);
static PyTypeObject *Add_type;
static PyTypeObject *Sub_type;
static PyTypeObject *Mult_type;
static PyTypeObject *Div_type;
static PyTypeObject *Mod_type;
static PyTypeObject *Pow_type;
static PyTypeObject *LShift_type;
static PyTypeObject *RShift_type;
static PyTypeObject *BitOr_type;
static PyTypeObject *BitXor_type;
static PyTypeObject *BitAnd_type;
static PyTypeObject *FloorDiv_type;
static PyTypeObject *unaryop_type;
static PyObject *Invert_singleton, *Not_singleton, *UAdd_singleton,
*USub_singleton;
static PyObject* ast2obj_unaryop(unaryop_ty);
static PyTypeObject *Invert_type;
static PyTypeObject *Not_type;
static PyTypeObject *UAdd_type;
static PyTypeObject *USub_type;
static PyTypeObject *cmpop_type;
static PyObject *Eq_singleton, *NotEq_singleton, *Lt_singleton, *LtE_singleton,
*Gt_singleton, *GtE_singleton, *Is_singleton, *IsNot_singleton, *In_singleton,
*NotIn_singleton;
static PyObject* ast2obj_cmpop(cmpop_ty);
static PyTypeObject *Eq_type;
static PyTypeObject *NotEq_type;
static PyTypeObject *Lt_type;
static PyTypeObject *LtE_type;
static PyTypeObject *Gt_type;
static PyTypeObject *GtE_type;
static PyTypeObject *Is_type;
static PyTypeObject *IsNot_type;
static PyTypeObject *In_type;
static PyTypeObject *NotIn_type;
static PyTypeObject *comprehension_type;
static PyObject* ast2obj_comprehension(void*);
static char *comprehension_fields[]=;
static PyTypeObject *excepthandler_type;
static char *excepthandler_attributes[] = ;
static PyObject* ast2obj_excepthandler(void*);
static PyTypeObject *ExceptHandler_type;
static char *ExceptHandler_fields[]=;
static PyTypeObject *arguments_type;
static PyObject* ast2obj_arguments(void*);
static char *arguments_fields[]=;
static PyTypeObject *keyword_type;
static PyObject* ast2obj_keyword(void*);
static char *keyword_fields[]=;
static PyTypeObject *alias_type;
static PyObject* ast2obj_alias(void*);
static char *alias_fields[]=;
static int
ast_type_init(PyObject *self, PyObject *args, PyObject *kw)
static PyObject *
ast_type_reduce(PyObject *self, PyObject *unused)
static PyMethodDef ast_type_methods[] = ;
static PyTypeObject AST_type = ;
static PyTypeObject* make_type(char *type, PyTypeObject* base, char**fields, int num_fields)
static int add_attributes(PyTypeObject* type, char**attrs, int num_fields)
static PyObject* ast2obj_list(asdl_seq *seq, PyObject* (*func)(void*))
static PyObject* ast2obj_object(void *o)
#define ast2obj_identifier ast2obj_object
#define ast2obj_string ast2obj_object
static PyObject* ast2obj_bool(bool b)
static PyObject* ast2obj_int(long b)
static int obj2ast_object(PyObject* obj, PyObject** out, PyArena* arena)
static int obj2ast_identifier(PyObject* obj, PyObject** out, PyArena* arena)
static int obj2ast_string(PyObject* obj, PyObject** out, PyArena* arena)
static int obj2ast_int(PyObject* obj, int* out, PyArena* arena)
static int obj2ast_bool(PyObject* obj, bool* out, PyArena* arena)
static int add_ast_fields(void)
static int init_types(void)
static int obj2ast_mod(PyObject* obj, mod_ty* out, PyArena* arena);
static int obj2ast_stmt(PyObject* obj, stmt_ty* out, PyArena* arena);
static int obj2ast_expr(PyObject* obj, expr_ty* out, PyArena* arena);
static int obj2ast_expr_context(PyObject* obj, expr_context_ty* out, PyArena*
arena);
static int obj2ast_slice(PyObject* obj, slice_ty* out, PyArena* arena);
static int obj2ast_boolop(PyObject* obj, boolop_ty* out, PyArena* arena);
static int obj2ast_operator(PyObject* obj, operator_ty* out, PyArena* arena);
static int obj2ast_unaryop(PyObject* obj, unaryop_ty* out, PyArena* arena);
static int obj2ast_cmpop(PyObject* obj, cmpop_ty* out, PyArena* arena);
static int obj2ast_comprehension(PyObject* obj, comprehension_ty* out, PyArena*
arena);
static int obj2ast_excepthandler(PyObject* obj, excepthandler_ty* out, PyArena*
arena);
static int obj2ast_arguments(PyObject* obj, arguments_ty* out, PyArena* arena);
static int obj2ast_keyword(PyObject* obj, keyword_ty* out, PyArena* arena);
static int obj2ast_alias(PyObject* obj, alias_ty* out, PyArena* arena);
mod_ty
Module(asdl_seq * body, PyArena *arena)
mod_ty
Interactive(asdl_seq * body, PyArena *arena)
mod_ty
Expression(expr_ty body, PyArena *arena)
mod_ty
Suite(asdl_seq * body, PyArena *arena)
stmt_ty
FunctionDef(identifier name, arguments_ty args, asdl_seq * body, asdl_seq *
decorator_list, int lineno, int col_offset, PyArena *arena)
stmt_ty
ClassDef(identifier name, asdl_seq * bases, asdl_seq * body, asdl_seq *
decorator_list, int lineno, int col_offset, PyArena *arena)
stmt_ty
Return(expr_ty value, int lineno, int col_offset, PyArena *arena)
stmt_ty
Delete(asdl_seq * targets, int lineno, int col_offset, PyArena *arena)
stmt_ty
Assign(asdl_seq * targets, expr_ty value, int lineno, int col_offset, PyArena
*arena)
stmt_ty
AugAssign(expr_ty target, operator_ty op, expr_ty value, int lineno, int
col_offset, PyArena *arena)
stmt_ty
Print(expr_ty dest, asdl_seq * values, bool nl, int lineno, int col_offset,
PyArena *arena)
stmt_ty
For(expr_ty target, expr_ty iter, asdl_seq * body, asdl_seq * orelse, int
lineno, int col_offset, PyArena *arena)
stmt_ty
While(expr_ty test, asdl_seq * body, asdl_seq * orelse, int lineno, int
col_offset, PyArena *arena)
stmt_ty
If(expr_ty test, asdl_seq * body, asdl_seq * orelse, int lineno, int
col_offset, PyArena *arena)
stmt_ty
With(expr_ty context_expr, expr_ty optional_vars, asdl_seq * body, int lineno,
int col_offset, PyArena *arena)
stmt_ty
Raise(expr_ty type, expr_ty inst, expr_ty tback, int lineno, int col_offset,
PyArena *arena)
stmt_ty
TryExcept(asdl_seq * body, asdl_seq * handlers, asdl_seq * orelse, int lineno,
int col_offset, PyArena *arena)
stmt_ty
TryFinally(asdl_seq * body, asdl_seq * finalbody, int lineno, int col_offset,
PyArena *arena)
stmt_ty
Assert(expr_ty test, expr_ty msg, int lineno, int col_offset, PyArena *arena)
stmt_ty
Import(asdl_seq * names, int lineno, int col_offset, PyArena *arena)
stmt_ty
ImportFrom(identifier module, asdl_seq * names, int level, int lineno, int
col_offset, PyArena *arena)
stmt_ty
Exec(expr_ty body, expr_ty globals, expr_ty locals, int lineno, int col_offset,
PyArena *arena)
stmt_ty
Global(asdl_seq * names, int lineno, int col_offset, PyArena *arena)
stmt_ty
Expr(expr_ty value, int lineno, int col_offset, PyArena *arena)
stmt_ty
Pass(int lineno, int col_offset, PyArena *arena)
stmt_ty
Break(int lineno, int col_offset, PyArena *arena)
stmt_ty
Continue(int lineno, int col_offset, PyArena *arena)
expr_ty
BoolOp(boolop_ty op, asdl_seq * values, int lineno, int col_offset, PyArena
*arena)
expr_ty
BinOp(expr_ty left, operator_ty op, expr_ty right, int lineno, int col_offset,
PyArena *arena)
expr_ty
UnaryOp(unaryop_ty op, expr_ty operand, int lineno, int col_offset, PyArena
*arena)
expr_ty
Lambda(arguments_ty args, expr_ty body, int lineno, int col_offset, PyArena
*arena)
expr_ty
IfExp(expr_ty test, expr_ty body, expr_ty orelse, int lineno, int col_offset,
PyArena *arena)
expr_ty
Dict(asdl_seq * keys, asdl_seq * values, int lineno, int col_offset, PyArena
*arena)
expr_ty
Set(asdl_seq * elts, int lineno, int col_offset, PyArena *arena)
expr_ty
ListComp(expr_ty elt, asdl_seq * generators, int lineno, int col_offset,
PyArena *arena)
expr_ty
SetComp(expr_ty elt, asdl_seq * generators, int lineno, int col_offset, PyArena
*arena)
expr_ty
DictComp(expr_ty key, expr_ty value, asdl_seq * generators, int lineno, int
col_offset, PyArena *arena)
expr_ty
GeneratorExp(expr_ty elt, asdl_seq * generators, int lineno, int col_offset,
PyArena *arena)
expr_ty
Yield(expr_ty value, int lineno, int col_offset, PyArena *arena)
expr_ty
Compare(expr_ty left, asdl_int_seq * ops, asdl_seq * comparators, int lineno,
int col_offset, PyArena *arena)
expr_ty
Call(expr_ty func, asdl_seq * args, asdl_seq * keywords, expr_ty starargs,
expr_ty kwargs, int lineno, int col_offset, PyArena *arena)
expr_ty
Repr(expr_ty value, int lineno, int col_offset, PyArena *arena)
expr_ty
Num(object n, int lineno, int col_offset, PyArena *arena)
expr_ty
Str(string s, int lineno, int col_offset, PyArena *arena)
expr_ty
Attribute(expr_ty value, identifier attr, expr_context_ty ctx, int lineno, int
col_offset, PyArena *arena)
expr_ty
Subscript(expr_ty value, slice_ty slice, expr_context_ty ctx, int lineno, int
col_offset, PyArena *arena)
expr_ty
Name(identifier id, expr_context_ty ctx, int lineno, int col_offset, PyArena
*arena)
expr_ty
List(asdl_seq * elts, expr_context_ty ctx, int lineno, int col_offset, PyArena
*arena)
expr_ty
Tuple(asdl_seq * elts, expr_context_ty ctx, int lineno, int col_offset, PyArena
*arena)
slice_ty
Ellipsis(PyArena *arena)
slice_ty
Slice(expr_ty lower, expr_ty upper, expr_ty step, PyArena *arena)
slice_ty
ExtSlice(asdl_seq * dims, PyArena *arena)
slice_ty
Index(expr_ty value, PyArena *arena)
comprehension_ty
comprehension(expr_ty target, expr_ty iter, asdl_seq * ifs, PyArena *arena)
excepthandler_ty
ExceptHandler(expr_ty type, expr_ty name, asdl_seq * body, int lineno, int
col_offset, PyArena *arena)
arguments_ty
arguments(asdl_seq * args, identifier vararg, identifier kwarg, asdl_seq *
defaults, PyArena *arena)
keyword_ty
keyword(identifier arg, expr_ty value, PyArena *arena)
alias_ty
alias(identifier name, identifier asname, PyArena *arena)
PyObject*
ast2obj_mod(void* _o)
PyObject*
ast2obj_stmt(void* _o)
PyObject*
ast2obj_expr(void* _o)
PyObject* ast2obj_expr_context(expr_context_ty o)
PyObject*
ast2obj_slice(void* _o)
PyObject* ast2obj_boolop(boolop_ty o)
PyObject* ast2obj_operator(operator_ty o)
PyObject* ast2obj_unaryop(unaryop_ty o)
PyObject* ast2obj_cmpop(cmpop_ty o)
PyObject*
ast2obj_comprehension(void* _o)
PyObject*
ast2obj_excepthandler(void* _o)
PyObject*
ast2obj_arguments(void* _o)
PyObject*
ast2obj_keyword(void* _o)
PyObject*
ast2obj_alias(void* _o)
int
obj2ast_mod(PyObject* obj, mod_ty* out, PyArena* arena)
int
obj2ast_stmt(PyObject* obj, stmt_ty* out, PyArena* arena)
int
obj2ast_expr(PyObject* obj, expr_ty* out, PyArena* arena)
int
obj2ast_expr_context(PyObject* obj, expr_context_ty* out, PyArena* arena)
int
obj2ast_slice(PyObject* obj, slice_ty* out, PyArena* arena)
int
obj2ast_boolop(PyObject* obj, boolop_ty* out, PyArena* arena)
int
obj2ast_operator(PyObject* obj, operator_ty* out, PyArena* arena)
int
obj2ast_unaryop(PyObject* obj, unaryop_ty* out, PyArena* arena)
int
obj2ast_cmpop(PyObject* obj, cmpop_ty* out, PyArena* arena)
int
obj2ast_comprehension(PyObject* obj, comprehension_ty* out, PyArena* arena)
int
obj2ast_excepthandler(PyObject* obj, excepthandler_ty* out, PyArena* arena)
int
obj2ast_arguments(PyObject* obj, arguments_ty* out, PyArena* arena)
int
obj2ast_keyword(PyObject* obj, keyword_ty* out, PyArena* arena)
int
obj2ast_alias(PyObject* obj, alias_ty* out, PyArena* arena)
PyMODINIT_FUNC
init_ast(void)
PyObject* PyAST_mod2obj(mod_ty t)
mod_ty PyAST_obj2mod(PyObject* ast, PyArena* arena, int mode)
int PyAST_Check(PyObject* obj)
