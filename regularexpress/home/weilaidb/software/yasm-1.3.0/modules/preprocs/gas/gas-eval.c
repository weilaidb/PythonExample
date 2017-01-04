static yasm_symtab *symtab;
static scanner scan;
static efunc error;
static struct tokenval *tokval;
static int i;
static void *scpriv;
static void *epriv;
static yasm_expr *rexp0(void), *rexp1(void), *rexp2(void), *rexp3(void);
static yasm_expr *expr0(void), *expr1(void), *expr2(void), *expr3(void);
static yasm_expr *expr4(void), *expr5(void), *expr6(void);
static yasm_expr *(*bexpr)(void);
static yasm_expr *rexp0(void)
static yasm_expr *rexp1(void)
static yasm_expr *rexp2(void)
static yasm_expr *rexp3(void)
static yasm_expr *expr0(void)
static yasm_expr *expr1(void)
static yasm_expr *expr2(void)
static yasm_expr *expr3(void)
static yasm_expr *expr4(void)
static yasm_expr *expr5(void)
static yasm_expr *expr6(void)
yasm_expr *evaluate (scanner sc, void *scprivate, struct tokenval *tv,
void *eprivate, int critical, efunc report_error,
yasm_symtab *st)
