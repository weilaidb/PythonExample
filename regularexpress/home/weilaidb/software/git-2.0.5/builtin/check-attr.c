static int all_attrs;
static int cached_attrs;
static int stdin_paths;
static const char * const check_attr_usage[] = ;
static int nul_term_line;
static const struct option check_attr_options[] = ;
static void output_attr(int cnt, struct git_attr_check *check,
const char *file)
static void check_attr(const char *prefix, int cnt,
struct git_attr_check *check, const char *file)
static void check_attr_stdin_paths(const char *prefix, int cnt,
struct git_attr_check *check)
static NORETURN void error_with_usage(const char *msg)
int cmd_check_attr(int argc, const char **argv, const char *prefix)
