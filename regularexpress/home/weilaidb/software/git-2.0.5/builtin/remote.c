static const char * const builtin_remote_usage[] = ;
static const char * const builtin_remote_add_usage[] = ;
static const char * const builtin_remote_rename_usage[] = ;
static const char * const builtin_remote_rm_usage[] = ;
static const char * const builtin_remote_sethead_usage[] = ;
static const char * const builtin_remote_setbranches_usage[] = ;
static const char * const builtin_remote_show_usage[] = ;
static const char * const builtin_remote_prune_usage[] = ;
static const char * const builtin_remote_update_usage[] = ;
static const char * const builtin_remote_seturl_usage[] = ;
#define GET_REF_STATES (1<<0)
#define GET_HEAD_NAMES (1<<1)
#define GET_PUSH_REF_STATES (1<<2)
static int verbose;
static int fetch_remote(const char *name)
enum ;
#define MIRROR_NONE 0
#define MIRROR_FETCH 1
#define MIRROR_PUSH 2
#define MIRROR_BOTH (MIRROR_FETCH|MIRROR_PUSH)
static int add_branch(const char *key, const char *branchname,
const char *remotename, int mirror, struct strbuf *tmp)
static const char mirror_advice[] =
N_("--mirror is dangerous and deprecated; please\n"
"\t use --mirror=fetch or --mirror=push instead");
static int parse_mirror_opt(const struct option *opt, const char *arg, int not)
static int add(int argc, const char **argv)
struct branch_info ;
static struct string_list branch_list;
static const char *abbrev_ref(const char *name, const char *prefix)
#define abbrev_branch(name) abbrev_ref((name), "refs/heads/")
static int config_read_branches(const char *key, const char *value, void *cb)
static void read_branches(void)
struct ref_states ;
static int get_ref_states(const struct ref *remote_refs, struct ref_states *states)
struct push_info ;
static int get_push_ref_states(const struct ref *remote_refs,
struct ref_states *states)
static int get_push_ref_states_noquery(struct ref_states *states)
static int get_head_names(const struct ref *remote_refs, struct ref_states *states)
struct rename_info ;
static int read_remote_branches(const char *refname,
const unsigned char *sha1, int flags, void *cb_data)
static int migrate_file(struct remote *remote)
static int mv(int argc, const char **argv)
static int remove_branches(struct string_list *branches)
static int rm(int argc, const char **argv)
static void clear_push_info(void *util, const char *string)
static void free_remote_ref_states(struct ref_states *states)
static int append_ref_to_tracked_list(const char *refname,
const unsigned char *sha1, int flags, void *cb_data)
static int get_remote_ref_states(const char *name,
struct ref_states *states,
int query)
struct show_info ;
static int add_remote_to_show_info(struct string_list_item *item, void *cb_data)
static int show_remote_info_item(struct string_list_item *item, void *cb_data)
static int add_local_to_show_info(struct string_list_item *branch_item, void *cb_data)
static int show_local_info_item(struct string_list_item *item, void *cb_data)
static int add_push_to_show_info(struct string_list_item *push_item, void *cb_data)
static int cmp_string_with_push(const void *va, const void *vb)
static int show_push_info_item(struct string_list_item *item, void *cb_data)
static int get_one_entry(struct remote *remote, void *priv)
static int show_all(void)
static int show(int argc, const char **argv)
static int set_head(int argc, const char **argv)
static int prune_remote(const char *remote, int dry_run)
static int prune(int argc, const char **argv)
static int get_remote_default(const char *key, const char *value, void *priv)
static int update(int argc, const char **argv)
static int remove_all_fetch_refspecs(const char *remote, const char *key)
static int add_branches(struct remote *remote, const char **branches,
const char *key)
static int set_remote_branches(const char *remotename, const char **branches,
int add_mode)
static int set_branches(int argc, const char **argv)
static int set_url(int argc, const char **argv)
int cmd_remote(int argc, const char **argv, const char *prefix)
