#define _GNU_SOURCE
#undef _GNU_SOURCE
#define DEFAULT_VAR_FILTER "!__k???tab_* & !__crc_*"
#define DEFAULT_FUNC_FILTER "!_*"
#define MAX_PATH_LEN 256
static struct  params;
static int parse_probe_event(const char *str)
static int parse_probe_event_argv(int argc, const char **argv)
static int opt_add_probe_event(const struct option *opt __used,
const char *str, int unset __used)
static int opt_del_probe_event(const struct option *opt __used,
const char *str, int unset __used)
static int opt_show_lines(const struct option *opt __used,
const char *str, int unset __used)
static int opt_show_vars(const struct option *opt __used,
const char *str, int unset __used)
static int opt_set_filter(const struct option *opt __used,
const char *str, int unset __used)
static const char * const probe_usage[] = ;
static const struct option options[] = ;
int cmd_probe(int argc, const char **argv, const char *prefix __used)
