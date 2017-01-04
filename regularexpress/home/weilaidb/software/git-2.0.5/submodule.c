static struct string_list config_name_for_path;
static struct string_list config_fetch_recurse_submodules_for_name;
static struct string_list config_ignore_for_name;
static int config_fetch_recurse_submodules = RECURSE_SUBMODULES_ON_DEMAND;
static struct string_list changed_submodule_paths;
static int initialized_fetch_ref_tips;
static struct sha1_array ref_tips_before_fetch;
static struct sha1_array ref_tips_after_fetch;
static int gitmodules_is_unmerged;
static int gitmodules_is_modified;
int is_staging_gitmodules_ok(void)
int update_path_in_gitmodules(const char *oldpath, const char *newpath)
int remove_path_from_gitmodules(const char *path)
void stage_updated_gitmodules(void)
static int add_submodule_odb(const char *path)
void set_diffopt_flags_from_submodule_config(struct diff_options *diffopt,
const char *path)
int submodule_config(const char *var, const char *value, void *cb)
void gitmodules_config(void)
int parse_submodule_config_option(const char *var, const char *value)
void handle_ignore_submodules_arg(struct diff_options *diffopt,
const char *arg)
static int prepare_submodule_summary(struct rev_info *rev, const char *path,
struct commit *left, struct commit *right,
int *fast_forward, int *fast_backward)
static void print_submodule_summary(struct rev_info *rev, FILE *f,
const char *line_prefix,
const char *del, const char *add, const char *reset)
int parse_fetch_recurse_submodules_arg(const char *opt, const char *arg)
void show_submodule_summary(FILE *f, const char *path,
const char *line_prefix,
unsigned char one[20], unsigned char two[20],
unsigned dirty_submodule, const char *meta,
const char *del, const char *add, const char *reset)
void set_config_fetch_recurse_submodules(int value)
static int has_remote(const char *refname, const unsigned char *sha1, int flags, void *cb_data)
static int submodule_needs_pushing(const char *path, const unsigned char sha1[20])
static void collect_submodules_from_diff(struct diff_queue_struct *q,
struct diff_options *options,
void *data)
static void find_unpushed_submodule_commits(struct commit *commit,
struct string_list *needs_pushing)
int find_unpushed_submodules(unsigned char new_sha1[20],
const char *remotes_name, struct string_list *needs_pushing)
static int push_submodule(const char *path)
int push_unpushed_submodules(unsigned char new_sha1[20], const char *remotes_name)
static int is_submodule_commit_present(const char *path, unsigned char sha1[20])
static void submodule_collect_changed_cb(struct diff_queue_struct *q,
struct diff_options *options,
void *data)
static int add_sha1_to_array(const char *ref, const unsigned char *sha1,
int flags, void *data)
void check_for_new_submodule_commits(unsigned char new_sha1[20])
static void add_sha1_to_argv(const unsigned char sha1[20], void *data)
static void calculate_changed_submodule_paths(void)
int fetch_populated_submodules(const struct argv_array *options,
const char *prefix, int command_line_option,
int quiet)
unsigned is_submodule_modified(const char *path, int ignore_untracked)
int submodule_uses_gitfile(const char *path)
int ok_to_remove_submodule(const char *path)
static int find_first_merges(struct object_array *result, const char *path,
struct commit *a, struct commit *b)
static void print_commit(struct commit *commit)
#define MERGE_WARNING(path, msg) \
warning("Failed to merge submodule %s (%s)", path, msg);
int merge_submodule(unsigned char result[20], const char *path,
const unsigned char base[20], const unsigned char a[20],
const unsigned char b[20], int search)
void connect_work_tree_and_git_dir(const char *work_tree, const char *git_dir)
