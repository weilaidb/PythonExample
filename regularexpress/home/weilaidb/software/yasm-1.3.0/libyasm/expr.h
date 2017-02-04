#define YASM_EXPR_H
#define YASM_LIB_DECL
typedef enum yasm_expr__type  yasm_expr__type;
typedef struct yasm_expr__item  yasm_expr__item;
struct yasm_expr ;
YASM_LIB_DECL yasm_expr *yasm_expr_create
(yasm_expr_op op, yasm_expr__item *a, yasm_expr__item *b, unsigned long line);
*yasm_expr_precbc;
*yasm_expr_sym;
*yasm_expr_expr;
*yasm_expr_int;
*yasm_expr_float;
*yasm_expr_reg;
yasm_expr_create_tree \
yasm_expr_create ((o), yasm_expr_expr(l), yasm_expr_expr(r), i)
yasm_expr_create_branch \
yasm_expr_create ((o), yasm_expr_expr(r), (yasm_expr__item *)NULL, i)
yasm_expr_create_ident \
yasm_expr_create (YASM_EXPR_IDENT, (r), (yasm_expr__item *)NULL, i)
*yasm_expr_copy;
yasm_expr_copy   yasm_expr__copy_except(e, -1)
YASM_LIB_DECL
yasm_expr_destroy;
YASM_LIB_DECL
yasm_expr_is_op;
typedef yasm_expr * (*yasm_expr_xform_func)
( yasm_expr *e, void *d);
YASM_LIB_DECL yasm_expr *yasm_expr__level_tree
( yasm_expr *e, int fold_const,
int simplify_ident, int simplify_reg_mul, int calc_bc_dist, yasm_expr_xform_func expr_xform_extra, void *expr_xform_extra_data);
yasm_expr_simplify \
yasm_expr__level_tree(e, 1, 1, 1, cbd, NULL, NULL)
*yasm_expr_extract_deep_segoff;
*yasm_expr_extract_segoff;
*yasm_expr_extract_wrt;
YASM_LIB_DECL yasm_intnum *yasm_expr_get_intnum
(yasm_expr **ep, int calc_bc_dist);
YASM_LIB_DECL const yasm_symrec *yasm_expr_get_symrec
(yasm_expr **ep, int simplify);
YASM_LIB_DECL const uintptr_t *yasm_expr_get_reg
(yasm_expr **ep, int simplify);
YASM_LIB_DECL
yasm_expr_print;
YASM_LIB_DECL
yasm_expr_size;
YASM_LIB_DECL
*yasm_expr_segment;
YASM_LIB_DECL
int yasm_expr__traverse_leaves_in_const
(const yasm_expr *e, void *d,
int (*func) ( const yasm_expr__item *ei, void *d));
YASM_LIB_DECL
int yasm_expr__traverse_leaves_in
(yasm_expr *e, void *d,
int (*func) ( yasm_expr__item *ei, void *d));
YASM_LIB_DECL
yasm_expr__order_terms;
YASM_LIB_DECL
*yasm_expr__copy_except;
YASM_LIB_DECL
yasm_expr__contains;
YASM_LIB_DECL
yasm_expr__bc_dist_subst (unsigned int subst,
yasm_bytecode *precbc,
yasm_bytecode *precbc2,
void *cbd));
YASM_LIB_DECL
yasm_expr__subst;
