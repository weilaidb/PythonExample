#define __PERF_PARSE_OPTIONS_H
enum parse_opt_type ;
enum parse_opt_flags ;
enum parse_opt_option_flags ;
struct option;
typedef int parse_opt_cb(const struct option *, const char *arg, int unset);
struct option ;
#define check_vtype(v, type) ( BUILD_BUG_ON_ZERO(!__builtin_types_compatible_p(typeof(v), type)) + v )
#define OPT_END()
#define OPT_ARGUMENT(l, h)
#define OPT_GROUP(h)
#define OPT_BIT(s, l, v, h, b)
#define OPT_BOOLEAN(s, l, v, h)
#define OPT_INCR(s, l, v, h)
#define OPT_SET_UINT(s, l, v, h, i)
#define OPT_SET_PTR(s, l, v, h, p)
#define OPT_INTEGER(s, l, v, h)
#define OPT_UINTEGER(s, l, v, h)
#define OPT_LONG(s, l, v, h)
#define OPT_U64(s, l, v, h)
#define OPT_STRING(s, l, v, a, h)
#define OPT_DATE(s, l, v, h) \
#define OPT_CALLBACK(s, l, v, a, h, f) \
#define OPT_CALLBACK_NOOPT(s, l, v, a, h, f) \
#define OPT_CALLBACK_DEFAULT(s, l, v, a, h, f, d) \
#define OPT_CALLBACK_DEFAULT_NOOPT(s, l, v, a, h, f, d) \
extern int parse_options(int argc, const char **argv,
const struct option *options,
const char * const usagestr[], int flags);
extern NORETURN void usage_with_options(const char * const *usagestr,
const struct option *options);
enum ;
struct parse_opt_ctx_t ;
extern int parse_options_usage(const char * const *usagestr,
const struct option *opts);
extern void parse_options_start(struct parse_opt_ctx_t *ctx,
int argc, const char **argv, int flags);
extern int parse_options_step(struct parse_opt_ctx_t *ctx,
const struct option *options,
const char * const usagestr[]);
extern int parse_options_end(struct parse_opt_ctx_t *ctx);
extern int parse_opt_abbrev_cb(const struct option *, const char *, int);
extern int parse_opt_approxidate_cb(const struct option *, const char *, int);
extern int parse_opt_verbosity_cb(const struct option *, const char *, int);
#define OPT__VERBOSE(var)  OPT_BOOLEAN('v', "verbose", (var), "be verbose")
#define OPT__QUIET(var)    OPT_BOOLEAN('q', "quiet",   (var), "be quiet")
#define OPT__VERBOSITY(var) \
, \
#define OPT__DRY_RUN(var)  OPT_BOOLEAN('n', "dry-run", (var), "dry run")
#define OPT__ABBREV(var)  \
extern const char *parse_options_fix_filename(const char *prefix, const char *file);
