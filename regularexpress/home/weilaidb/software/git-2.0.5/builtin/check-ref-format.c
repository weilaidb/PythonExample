static const char builtin_check_ref_format_usage[] =
"git check-ref-format [--normalize] [options] <refname>\n"
"   or: git check-ref-format --branch <branchname-shorthand>";
static char *collapse_slashes(const char *refname)
static int check_ref_format_branch(const char *arg)
int cmd_check_ref_format(int argc, const char **argv, const char *prefix)
