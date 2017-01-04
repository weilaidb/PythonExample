static struct rev_info log_tree_opt;
static int diff_tree_commit_sha1(const unsigned char *sha1)
static int stdin_diff_commit(struct commit *commit, char *line, int len)
static int stdin_diff_trees(struct tree *tree1, char *line, int len)
static int diff_tree_stdin(char *line)
static const char diff_tree_usage[] =
"git diff-tree [--stdin] [-m] [-c] [--cc] [-s] [-v] [--pretty] [-t] [-r] [--root] "
"[<common diff options>] <tree-ish> [<tree-ish>] [<path>...]\n"
"  -r            diff recursively\n"
"  --root        include the initial commit as diff against /dev/null\n"
COMMON_DIFF_OPTIONS_HELP;
static void diff_tree_tweak_rev(struct rev_info *rev, struct setup_revision_opt *opt)
int cmd_diff_tree(int argc, const char **argv, const char *prefix)
