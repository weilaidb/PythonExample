static const char diff_files_usage[] =
"git diff-files [-q] [-0/-1/2/3 |-c|--cc] [<common diff options>] [<path>...]"
COMMON_DIFF_OPTIONS_HELP;
int cmd_diff_files(int argc, const char **argv, const char *prefix)
