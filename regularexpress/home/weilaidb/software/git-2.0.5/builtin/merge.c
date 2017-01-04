#define DEFAULT_TWOHEAD (1<<0)
#define DEFAULT_OCTOPUS (1<<1)
#define NO_FAST_FORWARD (1<<2)
#define NO_TRIVIAL      (1<<3)
struct strategy ;
static const char * const builtin_merge_usage[] = ;
static int show_diffstat = 1, shortlog_len = -1, squash;
static int option_commit = 1;
static int option_edit = -1;
static int allow_trivial = 1, have_message, verify_signatures;
static int overwrite_ignore = 1;
static struct strbuf merge_msg = STRBUF_INIT;
static struct strategy **use_strategies;
static size_t use_strategies_nr, use_strategies_alloc;
static const char **xopts;
static size_t xopts_nr, xopts_alloc;
static const char *branch;
static char *branch_mergeoptions;
static int option_renormalize;
static int verbosity;
static int allow_rerere_auto;
static int abort_current_merge;
static int show_progress = -1;
static int default_to_upstream;
static const char *sign_commit;
static struct strategy all_strategy[] = ;
static const char *pull_twohead, *pull_octopus;
enum ff_type ;
static enum ff_type fast_forward = FF_ALLOW;
static int option_parse_message(const struct option *opt,
const char *arg, int unset)
static struct strategy *get_strategy(const char *name)
static void append_strategy(struct strategy *s)
static int option_parse_strategy(const struct option *opt,
const char *name, int unset)
static int option_parse_x(const struct option *opt,
const char *arg, int unset)
static int option_parse_n(const struct option *opt,
const char *arg, int unset)
static struct option builtin_merge_options[] = ;
static void drop_save(void)
static int save_state(unsigned char *stash)
static void read_empty(unsigned const char *sha1, int verbose)
static void reset_hard(unsigned const char *sha1, int verbose)
static void restore_state(const unsigned char *head,
const unsigned char *stash)
static void finish_up_to_date(const char *msg)
static void squash_message(struct commit *commit, struct commit_list *remoteheads)
static void finish(struct commit *head_commit,
struct commit_list *remoteheads,
const unsigned char *new_head, const char *msg)
static void merge_name(const char *remote, struct strbuf *msg)
static void parse_branch_merge_options(char *bmo)
static int git_merge_config(const char *k, const char *v, void *cb)
static int read_tree_trivial(unsigned char *common, unsigned char *head,
unsigned char *one)
static void write_tree_trivial(unsigned char *sha1)
static int try_merge_strategy(const char *strategy, struct commit_list *common,
struct commit_list *remoteheads,
struct commit *head, const char *head_arg)
static void count_diff_files(struct diff_queue_struct *q,
struct diff_options *opt, void *data)
static int count_unmerged_entries(void)
static void split_merge_strategies(const char *string, struct strategy **list,
int *nr, int *alloc)
static void add_strategies(const char *string, unsigned attr)
static void write_merge_msg(struct strbuf *msg)
static void read_merge_msg(struct strbuf *msg)
static void write_merge_state(struct commit_list *);
static void abort_commit(struct commit_list *remoteheads, const char *err_msg)
static const char merge_editor_comment[] =
N_("Please enter a commit message to explain why this merge is necessary,\n"
"especially if it merges an updated upstream into a topic branch.\n"
"\n"
"Lines starting with '%c' will be ignored, and an empty message aborts\n"
"the commit.\n");
static void prepare_to_commit(struct commit_list *remoteheads)
static int merge_trivial(struct commit *head, struct commit_list *remoteheads)
static int finish_automerge(struct commit *head,
int head_subsumed,
struct commit_list *common,
struct commit_list *remoteheads,
unsigned char *result_tree,
const char *wt_strategy)
static int suggest_conflicts(int renormalizing)
static struct commit *is_old_style_invocation(int argc, const char **argv,
const unsigned char *head)
static int evaluate_result(void)
static int setup_with_upstream(const char ***argv)
static void write_merge_state(struct commit_list *remoteheads)
static int default_edit_option(void)
static struct commit_list *collect_parents(struct commit *head_commit,
int *head_subsumed,
int argc, const char **argv)
int cmd_merge(int argc, const char **argv, const char *prefix)
