#define AVUTIL_EVAL_H
typedef struct AVExpr AVExpr;
av_expr_parse_and_eval(void *, double),
const char * const *func2_names, double (* const *funcs2)(void *, double, double),
void *opaque, int log_offset, void *log_ctx);
av_expr_parse(void *, double),
const char * const *func2_names, double (* const *funcs2)(void *, double, double),
int log_offset, void *log_ctx);
av_expr_eval;
av_expr_free;
av_strtod;
