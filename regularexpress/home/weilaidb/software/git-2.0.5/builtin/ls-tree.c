static int line_termination = '\n';
#define LS_RECURSIVE 1
#define LS_TREE_ONLY 2
#define LS_SHOW_TREES 4
#define LS_NAME_ONLY 8
#define LS_SHOW_SIZE 16
static int abbrev;
static int ls_options;
static struct pathspec pathspec;
static int chomp_prefix;
static const char *ls_tree_prefix;
static const  char * const ls_tree_usage[] = ;
static int show_recursive(const char *base, int baselen, const char *pathname)
static int show_tree(const unsigned char *sha1, const char *base, int baselen,
const char *pathname, unsigned mode, int stage, void *context)
int cmd_ls_tree(int argc, const char **argv, const char *prefix)
