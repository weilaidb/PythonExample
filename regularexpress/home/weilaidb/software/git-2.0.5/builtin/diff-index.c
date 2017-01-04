static const char diff_cache_usage[] =
"git diff-index [-m] [--cached] "
"[<common diff options>] <tree-ish> [<path>...]"
COMMON_DIFF_OPTIONS_HELP;
int cmd_diff_index(int argc, const char **argv, const char *prefix)
