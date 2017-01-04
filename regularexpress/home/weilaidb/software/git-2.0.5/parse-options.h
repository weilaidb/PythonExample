#define PARSE_OPTIONS_H
enum parse_opt_type ;
enum parse_opt_flags ;
enum parse_opt_option_flags ;
struct option;
typedef int parse_opt_cb(const struct option *, const char *arg, int unset);
struct parse_opt_ctx_t;
typedef int parse_opt_ll_cb(struct parse_opt_ctx_t *ctx,
const struct option *opt, int unset);
struct option ;
#define OPT_END()
#define OPT_ARGUMENT(l, h)
#define OPT_GROUP(h)
#define OPT_BIT(s, l, v, h, b)
#define OPT_NEGBIT(s, l, v, h, b)
#define OPT_COUNTUP(s, l, v, h)
#define OPT_SET_INT(s, l, v, h, i)
#define OPT_BOOL(s, l, v, h)        OPT_SET_INT(s, l, v, h, 1)
#define OPT_HIDDEN_BOOL(s, l, v, h)
#define OPT_CMDMODE(s, l, v, h, i)
#define OPT_INTEGER(s, l, v, h)
#define OPT_STRING(s, l, v, a, h)
#define OPT_STRING_LIST(s, l, v, a, h) \
#define OPT_UYN(s, l, v, h)
#define OPT_DATE(s, l, v, h) \
#define OPT_EXPIRY_DATE(s, l, v, h) \
#define OPT_CALLBACK(s, l, v, a, h, f) \
#define OPT_NUMBER_CALLBACK(v, h, f) \
#define OPT_FILENAME(s, l, v, h)
#define OPT_COLOR_FLAG(s, l, v, h) \
#define OPT_NOOP_NOARG(s, l) \
extern int parse_options(int argc, const char **argv, const char *prefix,
const struct option *options,
const char * const usagestr[], int flags);
extern NORETURN void usage_with_options(const char * const *usagestr,
const struct option *options);
extern NORETURN void usage_msg_opt(const char *msg,
const char * const *usagestr,
const struct option *options);
extern int optbug(const struct option *opt, const char *reason);
extern int opterror(const struct option *opt, const char *reason, int flags);
#if defined(__GNUC__) && ! defined(__clang__)
#define opterror(o,r,f) (opterror((o),(r),(f)), -1)
enum ;
struct parse_opt_ctx_t ;
extern void parse_options_start(struct parse_opt_ctx_t *ctx,
int argc, const char **argv, const char *prefix,
const struct option *options, int flags);
extern int parse_options_step(struct parse_opt_ctx_t *ctx,
const struct option *options,
const char * const usagestr[]);
extern int parse_options_end(struct parse_opt_ctx_t *ctx);
extern int parse_options_concat(struct option *dst, size_t, struct option *src);
extern int parse_opt_abbrev_cb(const struct option *, const char *, int);
extern int parse_opt_approxidate_cb(const struct option *, const char *, int);
extern int parse_opt_expiry_date_cb(const struct option *, const char *, int);
extern int parse_opt_color_flag_cb(const struct option *, const char *, int);
extern int parse_opt_verbosity_cb(const struct option *, const char *, int);
extern int parse_opt_with_commit(const struct option *, const char *, int);
extern int parse_opt_tertiary(const struct option *, const char *, int);
extern int parse_opt_string_list(const struct option *, const char *, int);
extern int parse_opt_noop_cb(const struct option *, const char *, int);
#define OPT__VERBOSE(var, h)  OPT_COUNTUP('v', "verbose", (var), (h))
#define OPT__QUIET(var, h)    OPT_COUNTUP('q', "quiet",   (var), (h))
#define OPT__VERBOSITY(var) \
, \
#define OPT__DRY_RUN(var, h)  OPT_BOOL('n', "dry-run", (var), (h))
#define OPT__FORCE(var, h)    OPT_COUNTUP('f', "force",   (var), (h))
#define OPT__ABBREV(var)  \
#define OPT__COLOR(var, h) \
OPT_COLOR_FLAG(0, "color", (var), (h))
#define OPT_COLUMN(s, l, v, h) \
