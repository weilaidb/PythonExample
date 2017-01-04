typedef struct _mod *mod_ty;
typedef struct _stmt *stmt_ty;
typedef struct _expr *expr_ty;
typedef enum _expr_context  expr_context_ty;
typedef struct _slice *slice_ty;
typedef enum _boolop  boolop_ty;
typedef enum _operator
operator_ty;
typedef enum _unaryop  unaryop_ty;
typedef enum _cmpop  cmpop_ty;
typedef struct _comprehension *comprehension_ty;
typedef struct _excepthandler *excepthandler_ty;
typedef struct _arguments *arguments_ty;
typedef struct _keyword *keyword_ty;
typedef struct _alias *alias_ty;
enum _mod_kind ;
struct _mod ;
enum _stmt_kind ;
struct _stmt ;
enum _expr_kind ;
struct _expr ;
enum _slice_kind ;
struct _slice ;
struct _comprehension ;
enum _excepthandler_kind ;
struct _excepthandler ;
struct _arguments ;
struct _keyword ;
struct _alias ;
#define Module(a0, a1) _Py_Module(a0, a1)
mod_ty _Py_Module(asdl_seq * body, PyArena *arena);
#define Interactive(a0, a1) _Py_Interactive(a0, a1)
mod_ty _Py_Interactive(asdl_seq * body, PyArena *arena);
#define Expression(a0, a1) _Py_Expression(a0, a1)
mod_ty _Py_Expression(expr_ty body, PyArena *arena);
#define Suite(a0, a1) _Py_Suite(a0, a1)
mod_ty _Py_Suite(asdl_seq * body, PyArena *arena);
#define FunctionDef(a0, a1, a2, a3, a4, a5, a6) _Py_FunctionDef(a0, a1, a2, a3, a4, a5, a6)
stmt_ty _Py_FunctionDef(identifier name, arguments_ty args, asdl_seq * body,
asdl_seq * decorator_list, int lineno, int col_offset,
PyArena *arena);
#define ClassDef(a0, a1, a2, a3, a4, a5, a6) _Py_ClassDef(a0, a1, a2, a3, a4, a5, a6)
stmt_ty _Py_ClassDef(identifier name, asdl_seq * bases, asdl_seq * body,
asdl_seq * decorator_list, int lineno, int col_offset,
PyArena *arena);
#define Return(a0, a1, a2, a3) _Py_Return(a0, a1, a2, a3)
stmt_ty _Py_Return(expr_ty value, int lineno, int col_offset, PyArena *arena);
#define Delete(a0, a1, a2, a3) _Py_Delete(a0, a1, a2, a3)
stmt_ty _Py_Delete(asdl_seq * targets, int lineno, int col_offset, PyArena
*arena);
#define Assign(a0, a1, a2, a3, a4) _Py_Assign(a0, a1, a2, a3, a4)
stmt_ty _Py_Assign(asdl_seq * targets, expr_ty value, int lineno, int
col_offset, PyArena *arena);
#define AugAssign(a0, a1, a2, a3, a4, a5) _Py_AugAssign(a0, a1, a2, a3, a4, a5)
stmt_ty _Py_AugAssign(expr_ty target, operator_ty op, expr_ty value, int
lineno, int col_offset, PyArena *arena);
#define Print(a0, a1, a2, a3, a4, a5) _Py_Print(a0, a1, a2, a3, a4, a5)
stmt_ty _Py_Print(expr_ty dest, asdl_seq * values, bool nl, int lineno, int
col_offset, PyArena *arena);
#define For(a0, a1, a2, a3, a4, a5, a6) _Py_For(a0, a1, a2, a3, a4, a5, a6)
stmt_ty _Py_For(expr_ty target, expr_ty iter, asdl_seq * body, asdl_seq *
orelse, int lineno, int col_offset, PyArena *arena);
#define While(a0, a1, a2, a3, a4, a5) _Py_While(a0, a1, a2, a3, a4, a5)
stmt_ty _Py_While(expr_ty test, asdl_seq * body, asdl_seq * orelse, int lineno,
int col_offset, PyArena *arena);
#define If(a0, a1, a2, a3, a4, a5) _Py_If(a0, a1, a2, a3, a4, a5)
stmt_ty _Py_If(expr_ty test, asdl_seq * body, asdl_seq * orelse, int lineno,
int col_offset, PyArena *arena);
#define With(a0, a1, a2, a3, a4, a5) _Py_With(a0, a1, a2, a3, a4, a5)
stmt_ty _Py_With(expr_ty context_expr, expr_ty optional_vars, asdl_seq * body,
int lineno, int col_offset, PyArena *arena);
#define Raise(a0, a1, a2, a3, a4, a5) _Py_Raise(a0, a1, a2, a3, a4, a5)
stmt_ty _Py_Raise(expr_ty type, expr_ty inst, expr_ty tback, int lineno, int
col_offset, PyArena *arena);
#define TryExcept(a0, a1, a2, a3, a4, a5) _Py_TryExcept(a0, a1, a2, a3, a4, a5)
stmt_ty _Py_TryExcept(asdl_seq * body, asdl_seq * handlers, asdl_seq * orelse,
int lineno, int col_offset, PyArena *arena);
#define TryFinally(a0, a1, a2, a3, a4) _Py_TryFinally(a0, a1, a2, a3, a4)
stmt_ty _Py_TryFinally(asdl_seq * body, asdl_seq * finalbody, int lineno, int
col_offset, PyArena *arena);
#define Assert(a0, a1, a2, a3, a4) _Py_Assert(a0, a1, a2, a3, a4)
stmt_ty _Py_Assert(expr_ty test, expr_ty msg, int lineno, int col_offset,
PyArena *arena);
#define Import(a0, a1, a2, a3) _Py_Import(a0, a1, a2, a3)
stmt_ty _Py_Import(asdl_seq * names, int lineno, int col_offset, PyArena
*arena);
#define ImportFrom(a0, a1, a2, a3, a4, a5) _Py_ImportFrom(a0, a1, a2, a3, a4, a5)
stmt_ty _Py_ImportFrom(identifier module, asdl_seq * names, int level, int
lineno, int col_offset, PyArena *arena);
#define Exec(a0, a1, a2, a3, a4, a5) _Py_Exec(a0, a1, a2, a3, a4, a5)
stmt_ty _Py_Exec(expr_ty body, expr_ty globals, expr_ty locals, int lineno, int
col_offset, PyArena *arena);
#define Global(a0, a1, a2, a3) _Py_Global(a0, a1, a2, a3)
stmt_ty _Py_Global(asdl_seq * names, int lineno, int col_offset, PyArena
*arena);
#define Expr(a0, a1, a2, a3) _Py_Expr(a0, a1, a2, a3)
stmt_ty _Py_Expr(expr_ty value, int lineno, int col_offset, PyArena *arena);
#define Pass(a0, a1, a2) _Py_Pass(a0, a1, a2)
stmt_ty _Py_Pass(int lineno, int col_offset, PyArena *arena);
#define Break(a0, a1, a2) _Py_Break(a0, a1, a2)
stmt_ty _Py_Break(int lineno, int col_offset, PyArena *arena);
#define Continue(a0, a1, a2) _Py_Continue(a0, a1, a2)
stmt_ty _Py_Continue(int lineno, int col_offset, PyArena *arena);
#define BoolOp(a0, a1, a2, a3, a4) _Py_BoolOp(a0, a1, a2, a3, a4)
expr_ty _Py_BoolOp(boolop_ty op, asdl_seq * values, int lineno, int col_offset,
PyArena *arena);
#define BinOp(a0, a1, a2, a3, a4, a5) _Py_BinOp(a0, a1, a2, a3, a4, a5)
expr_ty _Py_BinOp(expr_ty left, operator_ty op, expr_ty right, int lineno, int
col_offset, PyArena *arena);
#define UnaryOp(a0, a1, a2, a3, a4) _Py_UnaryOp(a0, a1, a2, a3, a4)
expr_ty _Py_UnaryOp(unaryop_ty op, expr_ty operand, int lineno, int col_offset,
PyArena *arena);
#define Lambda(a0, a1, a2, a3, a4) _Py_Lambda(a0, a1, a2, a3, a4)
expr_ty _Py_Lambda(arguments_ty args, expr_ty body, int lineno, int col_offset,
PyArena *arena);
#define IfExp(a0, a1, a2, a3, a4, a5) _Py_IfExp(a0, a1, a2, a3, a4, a5)
expr_ty _Py_IfExp(expr_ty test, expr_ty body, expr_ty orelse, int lineno, int
col_offset, PyArena *arena);
#define Dict(a0, a1, a2, a3, a4) _Py_Dict(a0, a1, a2, a3, a4)
expr_ty _Py_Dict(asdl_seq * keys, asdl_seq * values, int lineno, int
col_offset, PyArena *arena);
#define Set(a0, a1, a2, a3) _Py_Set(a0, a1, a2, a3)
expr_ty _Py_Set(asdl_seq * elts, int lineno, int col_offset, PyArena *arena);
#define ListComp(a0, a1, a2, a3, a4) _Py_ListComp(a0, a1, a2, a3, a4)
expr_ty _Py_ListComp(expr_ty elt, asdl_seq * generators, int lineno, int
col_offset, PyArena *arena);
#define SetComp(a0, a1, a2, a3, a4) _Py_SetComp(a0, a1, a2, a3, a4)
expr_ty _Py_SetComp(expr_ty elt, asdl_seq * generators, int lineno, int
col_offset, PyArena *arena);
#define DictComp(a0, a1, a2, a3, a4, a5) _Py_DictComp(a0, a1, a2, a3, a4, a5)
expr_ty _Py_DictComp(expr_ty key, expr_ty value, asdl_seq * generators, int
lineno, int col_offset, PyArena *arena);
#define GeneratorExp(a0, a1, a2, a3, a4) _Py_GeneratorExp(a0, a1, a2, a3, a4)
expr_ty _Py_GeneratorExp(expr_ty elt, asdl_seq * generators, int lineno, int
col_offset, PyArena *arena);
#define Yield(a0, a1, a2, a3) _Py_Yield(a0, a1, a2, a3)
expr_ty _Py_Yield(expr_ty value, int lineno, int col_offset, PyArena *arena);
#define Compare(a0, a1, a2, a3, a4, a5) _Py_Compare(a0, a1, a2, a3, a4, a5)
expr_ty _Py_Compare(expr_ty left, asdl_int_seq * ops, asdl_seq * comparators,
int lineno, int col_offset, PyArena *arena);
#define Call(a0, a1, a2, a3, a4, a5, a6, a7) _Py_Call(a0, a1, a2, a3, a4, a5, a6, a7)
expr_ty _Py_Call(expr_ty func, asdl_seq * args, asdl_seq * keywords, expr_ty
starargs, expr_ty kwargs, int lineno, int col_offset, PyArena
*arena);
#define Repr(a0, a1, a2, a3) _Py_Repr(a0, a1, a2, a3)
expr_ty _Py_Repr(expr_ty value, int lineno, int col_offset, PyArena *arena);
#define Num(a0, a1, a2, a3) _Py_Num(a0, a1, a2, a3)
expr_ty _Py_Num(object n, int lineno, int col_offset, PyArena *arena);
#define Str(a0, a1, a2, a3) _Py_Str(a0, a1, a2, a3)
expr_ty _Py_Str(string s, int lineno, int col_offset, PyArena *arena);
#define Attribute(a0, a1, a2, a3, a4, a5) _Py_Attribute(a0, a1, a2, a3, a4, a5)
expr_ty _Py_Attribute(expr_ty value, identifier attr, expr_context_ty ctx, int
lineno, int col_offset, PyArena *arena);
#define Subscript(a0, a1, a2, a3, a4, a5) _Py_Subscript(a0, a1, a2, a3, a4, a5)
expr_ty _Py_Subscript(expr_ty value, slice_ty slice, expr_context_ty ctx, int
lineno, int col_offset, PyArena *arena);
#define Name(a0, a1, a2, a3, a4) _Py_Name(a0, a1, a2, a3, a4)
expr_ty _Py_Name(identifier id, expr_context_ty ctx, int lineno, int
col_offset, PyArena *arena);
#define List(a0, a1, a2, a3, a4) _Py_List(a0, a1, a2, a3, a4)
expr_ty _Py_List(asdl_seq * elts, expr_context_ty ctx, int lineno, int
col_offset, PyArena *arena);
#define Tuple(a0, a1, a2, a3, a4) _Py_Tuple(a0, a1, a2, a3, a4)
expr_ty _Py_Tuple(asdl_seq * elts, expr_context_ty ctx, int lineno, int
col_offset, PyArena *arena);
#define Ellipsis(a0) _Py_Ellipsis(a0)
slice_ty _Py_Ellipsis(PyArena *arena);
#define Slice(a0, a1, a2, a3) _Py_Slice(a0, a1, a2, a3)
slice_ty _Py_Slice(expr_ty lower, expr_ty upper, expr_ty step, PyArena *arena);
#define ExtSlice(a0, a1) _Py_ExtSlice(a0, a1)
slice_ty _Py_ExtSlice(asdl_seq * dims, PyArena *arena);
#define Index(a0, a1) _Py_Index(a0, a1)
slice_ty _Py_Index(expr_ty value, PyArena *arena);
#define comprehension(a0, a1, a2, a3) _Py_comprehension(a0, a1, a2, a3)
comprehension_ty _Py_comprehension(expr_ty target, expr_ty iter, asdl_seq *
ifs, PyArena *arena);
#define ExceptHandler(a0, a1, a2, a3, a4, a5) _Py_ExceptHandler(a0, a1, a2, a3, a4, a5)
excepthandler_ty _Py_ExceptHandler(expr_ty type, expr_ty name, asdl_seq * body,
int lineno, int col_offset, PyArena *arena);
#define arguments(a0, a1, a2, a3, a4) _Py_arguments(a0, a1, a2, a3, a4)
arguments_ty _Py_arguments(asdl_seq * args, identifier vararg, identifier
kwarg, asdl_seq * defaults, PyArena *arena);
#define keyword(a0, a1, a2) _Py_keyword(a0, a1, a2)
keyword_ty _Py_keyword(identifier arg, expr_ty value, PyArena *arena);
#define alias(a0, a1, a2) _Py_alias(a0, a1, a2)
alias_ty _Py_alias(identifier name, identifier asname, PyArena *arena);
PyObject* PyAST_mod2obj(mod_ty t);
mod_ty PyAST_obj2mod(PyObject* ast, PyArena* arena, int mode);
int PyAST_Check(PyObject* obj);
