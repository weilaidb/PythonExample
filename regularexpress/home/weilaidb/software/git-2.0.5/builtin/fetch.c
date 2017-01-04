static const char * const builtin_fetch_usage[] = ;
enum ;
static int fetch_prune_config = -1;
static int prune = -1;
#define PRUNE_BY_DEFAULT 0
static int all, append, dry_run, force, keep, multiple, update_head_ok, verbosity;
static int progress = -1, recurse_submodules = RECURSE_SUBMODULES_DEFAULT;
static int tags = TAGS_DEFAULT, unshallow, update_shallow;
static const char *depth;
static const char *upload_pack;
static struct strbuf default_rla = STRBUF_INIT;
static struct transport *gtransport;
static struct transport *gsecondary;
static const char *submodule_prefix = "";
static const char *recurse_submodules_default;
static int shown_url = 0;
static int option_parse_recurse_submodules(const struct option *opt,
const char *arg, int unset)
static int git_fetch_config(const char *k, const char *v, void *cb)
static struct option builtin_fetch_options[] = ;
static void unlock_pack(void)
static void unlock_pack_on_signal(int signo)
static void add_merge_config(struct ref **head,
const struct ref *remote_refs,
struct branch *branch,
struct ref ***tail)
static int add_existing(const char *refname, const unsigned char *sha1,
int flag, void *cbdata)
static int will_fetch(struct ref **head, const unsigned char *sha1)
static void find_non_local_tags(struct transport *transport,
struct ref **head,
struct ref ***tail)
static struct ref *get_ref_map(struct transport *transport,
struct refspec *refspecs, int refspec_count,
int tags, int *autotags)
#define STORE_REF_ERROR_OTHER 1
#define STORE_REF_ERROR_DF_CONFLICT 2
static int s_update_ref(const char *action,
struct ref *ref,
int check_old)
#define REFCOL_WIDTH  10
static int update_local_ref(struct ref *ref,
const char *remote,
const struct ref *remote_ref,
struct strbuf *display)
static int iterate_ref_map(void *cb_data, unsigned char sha1[20])
static int store_updated_refs(const char *raw_url, const char *remote_name,
struct ref *ref_map)
static int quickfetch(struct ref *ref_map)
static int fetch_refs(struct transport *transport, struct ref *ref_map)
static int prune_refs(struct refspec *refs, int ref_count, struct ref *ref_map,
const char *raw_url)
static void check_not_current_branch(struct ref *ref_map)
static int truncate_fetch_head(void)
static void set_option(struct transport *transport, const char *name, const char *value)
static struct transport *prepare_transport(struct remote *remote)
static void backfill_tags(struct transport *transport, struct ref *ref_map)
static int do_fetch(struct transport *transport,
struct refspec *refs, int ref_count)
static int get_one_remote_for_fetch(struct remote *remote, void *priv)
struct remote_group_data ;
static int get_remote_group(const char *key, const char *value, void *priv)
static int add_remote_or_group(const char *name, struct string_list *list)
static void add_options_to_argv(struct argv_array *argv)
static int fetch_multiple(struct string_list *list)
static int fetch_one(struct remote *remote, int argc, const char **argv)
int cmd_fetch(int argc, const char **argv, const char *prefix)
