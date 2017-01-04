#define CHECKOUT_ALL 4
static int line_termination = '\n';
static int checkout_stage;
static int to_tempfile;
static char topath[4][TEMPORARY_FILENAME_LENGTH + 1];
static struct checkout state;
static void write_tempfile_record(const char *name, int prefix_length)
static int checkout_file(const char *name, int prefix_length)
static void checkout_all(const char *prefix, int prefix_length)
static const char * const builtin_checkout_index_usage[] = ;
static struct lock_file lock_file;
static int option_parse_u(const struct option *opt,
const char *arg, int unset)
static int option_parse_z(const struct option *opt,
const char *arg, int unset)
static int option_parse_prefix(const struct option *opt,
const char *arg, int unset)
static int option_parse_stage(const struct option *opt,
const char *arg, int unset)
int cmd_checkout_index(int argc, const char **argv, const char *prefix)
