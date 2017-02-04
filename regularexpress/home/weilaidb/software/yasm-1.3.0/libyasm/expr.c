static yasm_expr *expr_level_op
( yasm_expr *e, int fold_const,
int simplify_ident, int simplify_reg_mul);
expr_traverse_nodes_post ( yasm_expr *e, void *d));
expr_delete_term;
static unsigned long itempool_used = 0;
static yasm_expr__item itempool[31];
yasm_expr_create
expr_get_item
yasm_expr_precbc
yasm_expr_sym
yasm_expr_expr
yasm_expr_int
yasm_expr_float
yasm_expr_reg
expr_xform_bc_dist_base (yasm_expr__item *ei,
yasm_bytecode *precbc,
yasm_bytecode *precbc2,
void *cbd))
expr_xform_bc_dist_cb
expr_xform_bc_dist
typedef struct bc_dist_subst_cbd  bc_dist_subst_cbd;
expr_bc_dist_subst_cb
expr_xform_bc_dist_subst
yasm_expr__bc_dist_subst (unsigned int subst,
yasm_bytecode *precbc,
yasm_bytecode *precbc2,
void *cbd))
expr_xform_neg_item
expr_xform_neg_helper
expr_xform_neg
expr_is_constant
expr_can_destroy_int_left
expr_can_destroy_int_right
expr_simplify_identity
expr_level_op
SLIST_HEAD yasm__exprhead;
typedef struct yasm__exprentry  yasm__exprentry;
expr_expand_equ
expr_level_tree
yasm_expr__level_tree
expr_order_terms_compare
yasm_expr__order_terms
expr_item_copy
yasm_expr__copy_except
expr_delete_term
expr_destroy_each
yasm_expr_destroy
yasm_expr_is_op
expr_contains_callback
yasm_expr__contains
typedef struct subst_cbd  subst_cbd;
expr_subst_callback
yasm_expr__subst
expr_traverse_nodes_post ( yasm_expr *e, void *d))
yasm_expr__traverse_leaves_in_const ( const yasm_expr__item *ei, void *d))
yasm_expr__traverse_leaves_in ( yasm_expr__item *ei, void *d))
yasm_expr_extract_deep_segoff
yasm_expr_extract_segoff
yasm_expr_extract_wrt
yasm_expr_get_intnum
yasm_expr_get_symrec
yasm_expr_get_reg
yasm_expr_print
yasm_expr_size
yasm_expr_segment
