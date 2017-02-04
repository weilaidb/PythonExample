static yasm_symtab *symtab;
static scanner scan;
static efunc error;
static struct tokenval *tokval;
static int i;
static void *scpriv;
static void *epriv;
*rexp0, *rexp1(void), *rexp2(void), *rexp3(void);
*expr0, *expr1(void), *expr2(void), *expr3(void);
*expr4, *expr5(void), *expr6(void);
*(void);
*rexp0
*rexp1
*rexp2
*rexp3
*expr0
*expr1
*expr2
*expr3
*expr4
*expr5
*expr6
yasm_expr *evaluate (scanner sc, void *scprivate, struct tokenval *tv,
void *eprivate, int critical, efunc report_error,
yasm_symtab *st)
