static const char * const builtin_add_usage[] = ;
static int patch_interactive, add_interactive, edit_interactive;
static int take_worktree_changes;
struct update_callback_data ;
static int fix_unmerged_status(struct diff_filepair *p,
struct update_callback_data *data)
static void update_callback(struct diff_queue_struct *q,
struct diff_options *opt, void *cbdata)
int add_files_to_cache(const char *prefix,
const struct pathspec *pathspec, int flags)
static char *prune_directory(struct dir_struct *dir, struct pathspec *pathspec, int prefix)
static void refresh(int verbose, const struct pathspec *pathspec)
int run_add_interactive(const char *revision, const char *patch_mode,
const struct pathspec *pathspec)
int interactive_add(int argc, const char **argv, const char *prefix, int patch)
static int edit_patch(int argc, const char **argv, const char *prefix)
static struct lock_file lock_file;
static const char ignore_error[] =
N_("The following paths are ignored by one of your .gitignore files:\n");
static int verbose, show_only, ignored_too, refresh_only;
static int ignore_add_errors, intent_to_add, ignore_missing;
#define ADDREMOVE_DEFAULT 1
static int addremove = ADDREMOVE_DEFAULT;
static int addremove_explicit = -1;
static int ignore_removal_cb(const struct option *opt, const char *arg, int unset)
static struct option builtin_add_options[] = ;
static int add_config(const char *var, const char *value, void *cb)
static int add_files(struct dir_struct *dir, int flags)
int cmd_add(int argc, const char **argv, const char *prefix)
