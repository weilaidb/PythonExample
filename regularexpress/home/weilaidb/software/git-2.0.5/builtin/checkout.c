static const char * const checkout_usage[] = ;
struct checkout_opts ;
static int post_checkout_hook(struct commit *old, struct commit *new,
int changed)
static int update_some(const unsigned char *sha1, const char *base, int baselen,
const char *pathname, unsigned mode, int stage, void *context)
static int read_tree_some(struct tree *tree, const struct pathspec *pathspec)
static int skip_same_name(const struct cache_entry *ce, int pos)
static int check_stage(int stage, const struct cache_entry *ce, int pos)
static int check_stages(unsigned stages, const struct cache_entry *ce, int pos)
static int checkout_stage(int stage, struct cache_entry *ce, int pos,
struct checkout *state)
static int checkout_merged(int pos, struct checkout *state)
static int checkout_paths(const struct checkout_opts *opts,
const char *revision)
static void show_local_changes(struct object *head,
const struct diff_options *opts)
static void describe_detached_head(const char *msg, struct commit *commit)
static int reset_tree(struct tree *tree, const struct checkout_opts *o,
int worktree, int *writeout_error)
struct branch_info ;
static void setup_branch_path(struct branch_info *branch)
static int merge_working_tree(const struct checkout_opts *opts,
struct branch_info *old,
struct branch_info *new,
int *writeout_error)
static void report_tracking(struct branch_info *new)
static void update_refs_for_switch(const struct checkout_opts *opts,
struct branch_info *old,
struct branch_info *new)
static int add_pending_uninteresting_ref(const char *refname,
const unsigned char *sha1,
int flags, void *cb_data)
static void describe_one_orphan(struct strbuf *sb, struct commit *commit)
#define ORPHAN_CUTOFF 4
static void suggest_reattach(struct commit *commit, struct rev_info *revs)
static void orphaned_commit_warning(struct commit *old, struct commit *new)
static int switch_branches(const struct checkout_opts *opts,
struct branch_info *new)
static int git_checkout_config(const char *var, const char *value, void *cb)
struct tracking_name_data ;
static int check_tracking_name(struct remote *remote, void *cb_data)
static const char *unique_tracking_name(const char *name, unsigned char *sha1)
static int parse_branchname_arg(int argc, const char **argv,
int dwim_new_local_branch_ok,
struct branch_info *new,
struct tree **source_tree,
unsigned char rev[20],
const char **new_branch)
static int switch_unborn_to_new_branch(const struct checkout_opts *opts)
static int checkout_branch(struct checkout_opts *opts,
struct branch_info *new)
int cmd_checkout(int argc, const char **argv, const char *prefix)
