static int parse_options_usage(struct parse_opt_ctx_t *ctx,
const char * const *usagestr,
const struct option *opts, int err);
#define OPT_SHORT 1
#define OPT_UNSET 2
int optbug(const struct option *opt, const char *reason)
static int get_arg(struct parse_opt_ctx_t *p, const struct option *opt,
int flags, const char **arg)
static void fix_filename(const char *prefix, const char **file)
static int opt_command_mode_error(const struct option *opt,
const struct option *all_opts,
int flags)
static int get_value(struct parse_opt_ctx_t *p,
const struct option *opt,
const struct option *all_opts,
int flags)
static int parse_short_opt(struct parse_opt_ctx_t *p, const struct option *options)
static int parse_long_opt(struct parse_opt_ctx_t *p, const char *arg,
const struct option *options)
static int parse_nodash_opt(struct parse_opt_ctx_t *p, const char *arg,
const struct option *options)
static void check_typos(const char *arg, const struct option *options)
static void parse_options_check(const struct option *opts)
void parse_options_start(struct parse_opt_ctx_t *ctx,
int argc, const char **argv, const char *prefix,
const struct option *options, int flags)
static int usage_with_options_internal(struct parse_opt_ctx_t *,
const char * const *,
const struct option *, int, int);
int parse_options_step(struct parse_opt_ctx_t *ctx,
const struct option *options,
const char * const usagestr[])
int parse_options_end(struct parse_opt_ctx_t *ctx)
int parse_options(int argc, const char **argv, const char *prefix,
const struct option *options, const char * const usagestr[],
int flags)
static int usage_argh(const struct option *opts, FILE *outfile)
#define USAGE_OPTS_WIDTH 24
#define USAGE_GAP         2
static int usage_with_options_internal(struct parse_opt_ctx_t *ctx,
const char * const *usagestr,
const struct option *opts, int full, int err)
void NORETURN usage_with_options(const char * const *usagestr,
const struct option *opts)
void NORETURN usage_msg_opt(const char *msg,
const char * const *usagestr,
const struct option *options)
static int parse_options_usage(struct parse_opt_ctx_t *ctx,
const char * const *usagestr,
const struct option *opts, int err)
#undef opterror
int opterror(const struct option *opt, const char *reason, int flags)
