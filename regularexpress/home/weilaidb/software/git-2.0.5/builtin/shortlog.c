static char const * const shortlog_usage[] = ;
static int compare_by_number(const void *a1, const void *a2)
static void insert_one_record(struct shortlog *log,
const char *author,
const char *oneline)
static void read_from_stdin(struct shortlog *log)
void shortlog_add_commit(struct shortlog *log, struct commit *commit)
static void get_from_rev(struct rev_info *rev, struct shortlog *log)
static int parse_uint(char const **arg, int comma, int defval)
static const char wrap_arg_usage[] = "-w[<width>[,<indent1>[,<indent2>]]]";
#define DEFAULT_WRAPLEN 76
#define DEFAULT_INDENT1 6
#define DEFAULT_INDENT2 9
static int parse_wrap_args(const struct option *opt, const char *arg, int unset)
void shortlog_init(struct shortlog *log)
int cmd_shortlog(int argc, const char **argv, const char *prefix)
static void add_wrapped_shortlog_msg(struct strbuf *sb, const char *s,
const struct shortlog *log)
void shortlog_output(struct shortlog *log)
