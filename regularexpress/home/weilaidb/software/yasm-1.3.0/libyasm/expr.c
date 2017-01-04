static yasm_expr *expr_level_op
( yasm_expr *e, int fold_const,
int simplify_ident, int simplify_reg_mul);
static int expr_traverse_nodes_post( yasm_expr *e, void *d,
int (*func) ( yasm_expr *e, void *d));
static void expr_delete_term(yasm_expr__item *term, int recurse);
static unsigned long itempool_used = 0;
static yasm_expr__item itempool[31];
yasm_expr *
yasm_expr_create(yasm_expr_op op, yasm_expr__item *left,
yasm_expr__item *right, unsigned long line)
static yasm_expr__item *
expr_get_item(void)
yasm_expr__item *
yasm_expr_precbc(yasm_bytecode *precbc)
yasm_expr__item *
yasm_expr_sym(yasm_symrec *s)
yasm_expr__item *
yasm_expr_expr(yasm_expr *x)
yasm_expr__item *
yasm_expr_int(yasm_intnum *i)
yasm_expr__item *
yasm_expr_float(yasm_floatnum *f)
yasm_expr__item *
yasm_expr_reg(uintptr_t reg)
static yasm_expr *
expr_xform_bc_dist_base( yasm_expr *e, void *cbd,
int (*callback) (yasm_expr__item *ei,
yasm_bytecode *precbc,
yasm_bytecode *precbc2,
void *cbd))
static int
expr_xform_bc_dist_cb(yasm_expr__item *ei, yasm_bytecode *precbc,
yasm_bytecode *precbc2, void *d)
static yasm_expr *
expr_xform_bc_dist( yasm_expr *e)
typedef struct bc_dist_subst_cbd  bc_dist_subst_cbd;
static int
expr_bc_dist_subst_cb(yasm_expr__item *ei, yasm_bytecode *precbc,
yasm_bytecode *precbc2, void *d)
static yasm_expr *
expr_xform_bc_dist_subst(yasm_expr *e, void *d)
int
yasm_expr__bc_dist_subst(yasm_expr **ep, void *cbd,
void (*callback) (unsigned int subst,
yasm_bytecode *precbc,
yasm_bytecode *precbc2,
void *cbd))
static void
expr_xform_neg_item(yasm_expr *e, yasm_expr__item *ei)
static yasm_expr *
expr_xform_neg_helper( yasm_expr *e)
static yasm_expr *
expr_xform_neg( yasm_expr *e)
static int
expr_is_constant(yasm_expr_op op, yasm_intnum *intn)
static int
expr_can_destroy_int_left(yasm_expr_op op, yasm_intnum *intn)
static int
expr_can_destroy_int_right(yasm_expr_op op, yasm_intnum *intn)
static int
expr_simplify_identity(yasm_expr *e, int numterms, int *int_term,
int simplify_reg_mul)
static yasm_expr *
expr_level_op( yasm_expr *e, int fold_const,
int simplify_ident, int simplify_reg_mul)
typedef SLIST_HEAD(yasm__exprhead, yasm__exprentry) yasm__exprhead;
typedef struct yasm__exprentry  yasm__exprentry;
static yasm_expr *
expr_expand_equ(yasm_expr *e, yasm__exprhead *eh)
static yasm_expr *
expr_level_tree(yasm_expr *e, int fold_const, int simplify_ident,
int simplify_reg_mul, int calc_bc_dist,
yasm_expr_xform_func expr_xform_extra,
void *expr_xform_extra_data)
yasm_expr *
yasm_expr__level_tree(yasm_expr *e, int fold_const, int simplify_ident,
int simplify_reg_mul, int calc_bc_dist,
yasm_expr_xform_func expr_xform_extra,
void *expr_xform_extra_data)
static int
expr_order_terms_compare(const void *va, const void *vb)
void
yasm_expr__order_terms(yasm_expr *e)
static void
expr_item_copy(yasm_expr__item *dest, const yasm_expr__item *src)
yasm_expr *
yasm_expr__copy_except(const yasm_expr *e, int except)
static void
expr_delete_term(yasm_expr__item *term, int recurse)
static int
expr_destroy_each( yasm_expr *e, void *d)
void
yasm_expr_destroy(yasm_expr *e)
int
yasm_expr_is_op(const yasm_expr *e, yasm_expr_op op)
static int
expr_contains_callback(const yasm_expr__item *ei, void *d)
int
yasm_expr__contains(const yasm_expr *e, yasm_expr__type t)
typedef struct subst_cbd  subst_cbd;
static int
expr_subst_callback(yasm_expr__item *ei, void *d)
int
yasm_expr__subst(yasm_expr *e, unsigned int num_items,
const yasm_expr__item *items)
static int
expr_traverse_nodes_post(yasm_expr *e, void *d,
int (*func) ( yasm_expr *e, void *d))
int
yasm_expr__traverse_leaves_in_const(const yasm_expr *e, void *d,
int (*func) ( const yasm_expr__item *ei, void *d))
int
yasm_expr__traverse_leaves_in(yasm_expr *e, void *d,
int (*func) ( yasm_expr__item *ei, void *d))
yasm_expr *
yasm_expr_extract_deep_segoff(yasm_expr **ep)
yasm_expr *
yasm_expr_extract_segoff(yasm_expr **ep)
yasm_expr *
yasm_expr_extract_wrt(yasm_expr **ep)
yasm_intnum *
yasm_expr_get_intnum(yasm_expr **ep, int calc_bc_dist)
const yasm_symrec *
yasm_expr_get_symrec(yasm_expr **ep, int simplify)
const uintptr_t *
yasm_expr_get_reg(yasm_expr **ep, int simplify)
void
yasm_expr_print(const yasm_expr *e, FILE *f)
unsigned int
yasm_expr_size(const yasm_expr *e)
const char *
yasm_expr_segment(const yasm_expr *e)
