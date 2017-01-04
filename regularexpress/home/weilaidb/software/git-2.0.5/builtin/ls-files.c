static int abbrev;
static int show_deleted;
static int show_cached;
static int show_others;
static int show_stage;
static int show_unmerged;
static int show_resolve_undo;
static int show_modified;
static int show_killed;
static int show_valid_bit;
static int line_terminator = '\n';
static int debug_mode;
static const char *prefix;
static int max_prefix_len;
static int prefix_len;
static struct pathspec pathspec;
static int error_unmatch;
static char *ps_matched;
static const char *with_tree;
static int exc_given;
static int exclude_args;
static const char *tag_cached = "";
static const char *tag_unmerged = "";
static const char *tag_removed = "";
static const char *tag_other = "";
static const char *tag_killed = "";
static const char *tag_modified = "";
static const char *tag_skip_worktree = "";
static const char *tag_resolve_undo = "";
static void write_name(const char *name)
static void show_dir_entry(const char *tag, struct dir_entry *ent)
static void show_other_files(struct dir_struct *dir)
static void show_killed_files(struct dir_struct *dir)
static void show_ce_entry(const char *tag, const struct cache_entry *ce)
static void show_ru_info(void)
static int ce_excluded(struct dir_struct *dir, const struct cache_entry *ce)
static void show_files(struct dir_struct *dir)
static void prune_cache(const char *prefix)
void overlay_tree_on_cache(const char *tree_name, const char *prefix)
int report_path_error(const char *ps_matched,
const struct pathspec *pathspec,
const char *prefix)
static const char * const ls_files_usage[] = ;
static int option_parse_z(const struct option *opt,
const char *arg, int unset)
static int option_parse_exclude(const struct option *opt,
const char *arg, int unset)
static int option_parse_exclude_from(const struct option *opt,
const char *arg, int unset)
static int option_parse_exclude_standard(const struct option *opt,
const char *arg, int unset)
int cmd_ls_files(int argc, const char **argv, const char *cmd_prefix)
