static const char * const git_reset_usage[] = ;
enum reset_type ;
static const char *reset_type_names[] = ;
static inline int is_merge(void)
static int reset_index(const unsigned char *sha1, int reset_type, int quiet)
static void print_new_head_line(struct commit *commit)
static void update_index_from_diff(struct diff_queue_struct *q,
struct diff_options *opt, void *data)
static int read_from_tree(const struct pathspec *pathspec,
unsigned char *tree_sha1,
int intent_to_add)
static void set_reflog_message(struct strbuf *sb, const char *action,
const char *rev)
static void die_if_unmerged_cache(int reset_type)
static void parse_args(struct pathspec *pathspec,
const char **argv, const char *prefix,
int patch_mode,
const char **rev_ret)
static int reset_refs(const char *rev, const unsigned char *sha1)
int cmd_reset(int argc, const char **argv, const char *prefix)
