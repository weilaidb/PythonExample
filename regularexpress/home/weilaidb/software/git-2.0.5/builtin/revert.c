static const char * const revert_usage[] = ;
static const char * const cherry_pick_usage[] = ;
static const char *action_name(const struct replay_opts *opts)
static const char * const *revert_or_cherry_pick_usage(struct replay_opts *opts)
static int option_parse_x(const struct option *opt,
const char *arg, int unset)
LAST_ARG_MUST_BE_NULL
static void verify_opt_compatible(const char *me, const char *base_opt, ...)
static void parse_args(int argc, const char **argv, struct replay_opts *opts)
int cmd_revert(int argc, const char **argv, const char *prefix)
int cmd_cherry_pick(int argc, const char **argv, const char *prefix)
