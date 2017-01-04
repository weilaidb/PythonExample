#define OPT_SHORT 1
#define OPT_UNSET 2
static int opterror(const struct option *opt, const char *reason, int flags)
static int get_arg(struct parse_opt_ctx_t *p, const struct option *opt,
int flags, const char **arg)
static int get_value(struct parse_opt_ctx_t *p,
const struct option *opt, int flags)
static int parse_short_opt(struct parse_opt_ctx_t *p, const struct option *options)
static int parse_long_opt(struct parse_opt_ctx_t *p, const char *arg,
const struct option *options)
static void check_typos(const char *arg, const struct option *options)
void parse_options_start(struct parse_opt_ctx_t *ctx,
int argc, const char **argv, int flags)
static int usage_with_options_internal(const char * const *,
const struct option *, int);
int parse_options_step(struct parse_opt_ctx_t *ctx,
const struct option *options,
const char * const usagestr[])
int parse_options_end(struct parse_opt_ctx_t *ctx)
int parse_options(int argc, const char **argv, const struct option *options,
const char * const usagestr[], int flags)
#define USAGE_OPTS_WIDTH 24
#define USAGE_GAP         2
int usage_with_options_internal(const char * const *usagestr,
const struct option *opts, int full)
void usage_with_options(const char * const *usagestr,
const struct option *opts)
int parse_options_usage(const char * const *usagestr,
const struct option *opts)
int parse_opt_verbosity_cb(const struct option *opt, const char *arg __used,
int unset)
