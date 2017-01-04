#define UNDEFINED_FUTURE_FEATURE "future feature %.100s is not defined"
#define ERR_LATE_FUTURE \
"from __future__ imports must occur at the beginning of the file"
static int
future_check_features(PyFutureFeatures *ff, stmt_ty s, const char *filename)
static int
future_parse(PyFutureFeatures *ff, mod_ty mod, const char *filename)
PyFutureFeatures *
PyFuture_FromAST(mod_ty mod, const char *filename)
