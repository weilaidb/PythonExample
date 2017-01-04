#define GIT_REFLOG_ACTION "GIT_REFLOG_ACTION"
const char sign_off_header[] = "Signed-off-by: ";
static const char cherry_picked_prefix[] = "(cherry picked from commit ";
static int is_rfc2822_line(const char *buf, int len)
static int is_cherry_picked_from_line(const char *buf, int len)
static int has_conforming_footer(struct strbuf *sb, struct strbuf *sob,
int ignore_footer)
static void remove_sequencer_state(void)
static const char *action_name(const struct replay_opts *opts)
struct commit_message ;
static int get_message(struct commit *commit, struct commit_message *out)
static void free_message(struct commit *commit, struct commit_message *msg)
static void write_cherry_pick_head(struct commit *commit, const char *pseudoref)
static void print_advice(int show_hint, struct replay_opts *opts)
static void write_message(struct strbuf *msgbuf, const char *filename)
static struct tree *empty_tree(void)
static int error_dirty_index(struct replay_opts *opts)
static int fast_forward_to(const unsigned char *to, const unsigned char *from,
int unborn, struct replay_opts *opts)
static int do_recursive_merge(struct commit *base, struct commit *next,
const char *base_label, const char *next_label,
unsigned char *head, struct strbuf *msgbuf,
struct replay_opts *opts)
static int is_index_unchanged(void)
static int run_git_commit(const char *defmsg, struct replay_opts *opts,
int allow_empty)
static int is_original_commit_empty(struct commit *commit)
static int allow_empty(struct replay_opts *opts, struct commit *commit)
static int do_pick_commit(struct commit *commit, struct replay_opts *opts)
static void prepare_revs(struct replay_opts *opts)
static void read_and_refresh_cache(struct replay_opts *opts)
static int format_todo(struct strbuf *buf, struct commit_list *todo_list,
struct replay_opts *opts)
static struct commit *parse_insn_line(char *bol, char *eol, struct replay_opts *opts)
static int parse_insn_buffer(char *buf, struct commit_list **todo_list,
struct replay_opts *opts)
static void read_populate_todo(struct commit_list **todo_list,
struct replay_opts *opts)
static int populate_opts_cb(const char *key, const char *value, void *data)
static void read_populate_opts(struct replay_opts **opts_ptr)
static void walk_revs_populate_todo(struct commit_list **todo_list,
struct replay_opts *opts)
static int create_seq_dir(void)
static void save_head(const char *head)
static int reset_for_rollback(const unsigned char *sha1)
static int rollback_single_pick(void)
static int sequencer_rollback(struct replay_opts *opts)
static void save_todo(struct commit_list *todo_list, struct replay_opts *opts)
static void save_opts(struct replay_opts *opts)
static int pick_commits(struct commit_list *todo_list, struct replay_opts *opts)
static int continue_single_pick(void)
static int sequencer_continue(struct replay_opts *opts)
static int single_pick(struct commit *cmit, struct replay_opts *opts)
int sequencer_pick_revisions(struct replay_opts *opts)
void append_signoff(struct strbuf *msgbuf, int ignore_footer, unsigned flag)
