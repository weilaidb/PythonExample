static const char * const builtin_commit_usage[] = ;
static const char * const builtin_status_usage[] = ;
static const char implicit_ident_advice[] =
N_("Your name and email address were configured automatically based\n"
"on your username and hostname. Please check that they are accurate.\n"
"You can suppress this message by setting them explicitly:\n"
"\n"
"    git config --global user.name \"Your Name\"\n"
"    git config --global user.email you@example.com\n"
"\n"
"After doing this, you may fix the identity used for this commit with:\n"
"\n"
"    git commit --amend --reset-author\n");
static const char empty_amend_advice[] =
N_("You asked to amend the most recent commit, but doing so would make\n"
"it empty. You can repeat your command with --allow-empty, or you can\n"
"remove the commit entirely with \"git reset HEAD^\".\n");
static const char empty_cherry_pick_advice[] =
N_("The previous cherry-pick is now empty, possibly due to conflict resolution.\n"
"If you wish to commit it anyway, use:\n"
"\n"
"    git commit --allow-empty\n"
"\n");
static const char empty_cherry_pick_advice_single[] =
N_("Otherwise, please use 'git reset'\n");
static const char empty_cherry_pick_advice_multi[] =
N_("If you wish to skip this commit, use:\n"
"\n"
"    git reset\n"
"\n"
"Then \"git cherry-pick --continue\" will resume cherry-picking\n"
"the remaining commits.\n");
static const char *use_message_buffer;
static const char commit_editmsg[] = "COMMIT_EDITMSG";
static struct lock_file index_lock;
static struct lock_file false_lock;
static enum  commit_style;
static const char *logfile, *force_author;
static const char *template_file;
static const char *author_message, *author_message_buffer;
static char *edit_message, *use_message;
static char *fixup_message, *squash_message;
static int all, also, interactive, patch_interactive, only, amend, signoff;
static int edit_flag = -1;
static int quiet, verbose, no_verify, allow_empty, dry_run, renew_authorship;
static int no_post_rewrite, allow_empty_message;
static char *untracked_files_arg, *force_date, *ignore_submodule_arg;
static char *sign_commit;
static enum  cleanup_mode;
static const char *cleanup_arg;
static enum commit_whence whence;
static int sequencer_in_use;
static int use_editor = 1, include_status = 1;
static int show_ignored_in_status, have_option_m;
static const char *only_include_assumed;
static struct strbuf message = STRBUF_INIT;
static enum status_format  status_format = STATUS_FORMAT_UNSPECIFIED;
static int opt_parse_m(const struct option *opt, const char *arg, int unset)
static void determine_whence(struct wt_status *s)
static void status_init_config(struct wt_status *s, config_fn_t fn)
static void rollback_index_files(void)
static int commit_index_files(void)
static int list_paths(struct string_list *list, const char *with_tree,
const char *prefix, const struct pathspec *pattern)
static void add_remove_files(struct string_list *list)
static void create_base_index(const struct commit *current_head)
static void refresh_cache_or_die(int refresh_flags)
static char *prepare_index(int argc, const char **argv, const char *prefix,
const struct commit *current_head, int is_status)
static int run_status(FILE *fp, const char *index_file, const char *prefix, int nowarn,
struct wt_status *s)
static int is_a_merge(const struct commit *current_head)
static void export_one(const char *var, const char *s, const char *e, int hack)
static int sane_ident_split(struct ident_split *person)
static void determine_author_info(struct strbuf *author_ident)
static char *cut_ident_timestamp_part(char *string)
static int prepare_to_commit(const char *index_file, const char *prefix,
struct commit *current_head,
struct wt_status *s,
struct strbuf *author_ident)
static int rest_is_empty(struct strbuf *sb, int start)
static int message_is_empty(struct strbuf *sb)
static int template_untouched(struct strbuf *sb)
static const char *find_author_by_nickname(const char *name)
static void handle_untracked_files_arg(struct wt_status *s)
static const char *read_commit_message(const char *name)
static struct status_deferred_config  status_deferred_config = ;
static void finalize_deferred_config(struct wt_status *s)
static int parse_and_validate_options(int argc, const char *argv[],
const struct option *options,
const char * const usage[],
const char *prefix,
struct commit *current_head,
struct wt_status *s)
static int dry_run_commit(int argc, const char **argv, const char *prefix,
const struct commit *current_head, struct wt_status *s)
static int parse_status_slot(const char *var, int offset)
static int git_status_config(const char *k, const char *v, void *cb)
int cmd_status(int argc, const char **argv, const char *prefix)
static void print_summary(const char *prefix, const unsigned char *sha1,
int initial_commit)
static int git_commit_config(const char *k, const char *v, void *cb)
static int run_rewrite_hook(const unsigned char *oldsha1,
const unsigned char *newsha1)
int run_commit_hook(int editor_is_used, const char *index_file, const char *name, ...)
int cmd_commit(int argc, const char **argv, const char *prefix)
