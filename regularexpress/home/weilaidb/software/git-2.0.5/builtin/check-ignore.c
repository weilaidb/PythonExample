static int quiet, verbose, stdin_paths, show_non_matching, no_index;
static const char * const check_ignore_usage[] = ;
static int nul_term_line;
static const struct option check_ignore_options[] = ;
static void output_exclude(const char *path, struct exclude *exclude)
static int check_ignore(struct dir_struct *dir,
const char *prefix, int argc, const char **argv)
static int check_ignore_stdin_paths(struct dir_struct *dir, const char *prefix)
int cmd_check_ignore(int argc, const char **argv, const char *prefix)
