#define NASM_EVAL_H
yasm_expr *nasm_evaluate (scanner sc, void *scprivate, struct tokenval *tv,
int critical, efunc report_error);
