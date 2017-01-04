typedef struct Parser  Parser;
static const AVClass eval_class = ;
static const struct  si_prefixes['z' - 'E' + 1] = ;
static const struct  constants[] = ;
double av_strtod(const char *numstr, char **tail)
#define IS_IDENTIFIER_CHAR(c) ((c) - '0' <= 9U || (c) - 'a' <= 25U || (c) - 'A' <= 25U || (c) == '_')
static int strmatch(const char *s, const char *prefix)
struct AVExpr ;
static double etime(double v)
static double eval_expr(Parser *p, AVExpr *e)
static int parse_expr(AVExpr **e, Parser *p);
void av_expr_free(AVExpr *e)
static int parse_primary(AVExpr **e, Parser *p)
static AVExpr *make_eval_expr(int type, int value, AVExpr *p0, AVExpr *p1)
static int parse_pow(AVExpr **e, Parser *p, int *sign)
static int parse_dB(AVExpr **e, Parser *p, int *sign)
static int parse_factor(AVExpr **e, Parser *p)
static int parse_term(AVExpr **e, Parser *p)
static int parse_subexpr(AVExpr **e, Parser *p)
static int parse_expr(AVExpr **e, Parser *p)
static int verify_expr(AVExpr *e)
int av_expr_parse(AVExpr **expr, const char *s,
const char * const *const_names,
const char * const *func1_names, double (* const *funcs1)(void *, double),
const char * const *func2_names, double (* const *funcs2)(void *, double, double),
int log_offset, void *log_ctx)
double av_expr_eval(AVExpr *e, const double *const_values, void *opaque)
int av_expr_parse_and_eval(double *d, const char *s,
const char * const *const_names, const double *const_values,
const char * const *func1_names, double (* const *funcs1)(void *, double),
const char * const *func2_names, double (* const *funcs2)(void *, double, double),
void *opaque, int log_offset, void *log_ctx)
