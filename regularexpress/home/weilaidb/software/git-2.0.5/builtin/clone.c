static const char * const builtin_clone_usage[] = ;
static int option_no_checkout, option_bare, option_mirror, option_single_branch = -1;
static int option_local = -1, option_no_hardlinks, option_shared, option_recursive;
static char *option_template, *option_depth;
static char *option_origin = NULL;
static char *option_branch = NULL;
static const char *real_git_dir;
static char *option_upload_pack = "git-upload-pack";
static int option_verbosity;
static int option_progress = -1;
static struct string_list option_config;
static struct string_list option_reference;
static int opt_parse_reference(const struct option *opt, const char *arg, int unset)
static struct option builtin_clone_options[] = ;
static const char *argv_submodule[] = ;
static char *get_repo_path(const char *repo, int *is_bundle)
static char *guess_dir_name(const char *repo, int is_bundle, int is_bare)
static void strip_trailing_slashes(char *dir)
static int add_one_reference(struct string_list_item *item, void *cb_data)
static void setup_reference(void)
static void copy_alternates(struct strbuf *src, struct strbuf *dst,
const char *src_repo)
static void copy_or_link_directory(struct strbuf *src, struct strbuf *dest,
const char *src_repo, int src_baselen)
static void clone_local(const char *src_repo, const char *dest_repo)
static const char *junk_work_tree;
static const char *junk_git_dir;
static pid_t junk_pid;
static enum  junk_mode = JUNK_LEAVE_NONE;
static const char junk_leave_repo_msg[] =
N_("Clone succeeded, but checkout failed.\n"
"You can inspect what was checked out with 'git status'\n"
"and retry the checkout with 'git checkout -f HEAD'\n");
static void remove_junk(void)
static void remove_junk_on_signal(int signo)
static struct ref *find_remote_branch(const struct ref *refs, const char *branch)
static struct ref *wanted_peer_refs(const struct ref *refs,
struct refspec *refspec)
static void write_remote_refs(const struct ref *local_refs)
static void write_followtags(const struct ref *refs, const char *msg)
static int iterate_ref_map(void *cb_data, unsigned char sha1[20])
static void update_remote_refs(const struct ref *refs,
const struct ref *mapped_refs,
const struct ref *remote_head_points_at,
const char *branch_top,
const char *msg,
struct transport *transport,
int check_connectivity)
static void update_head(const struct ref *our, const struct ref *remote,
const char *msg)
static int checkout(void)
static int write_one_config(const char *key, const char *value, void *data)
static void write_config(struct string_list *config)
static void write_refspec_config(const char* src_ref_prefix,
const struct ref* our_head_points_at,
const struct ref* remote_head_points_at, struct strbuf* branch_top)
int cmd_clone(int argc, const char **argv, const char *prefix)
