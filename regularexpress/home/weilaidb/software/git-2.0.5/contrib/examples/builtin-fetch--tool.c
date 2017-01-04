static char *get_stdin(void)
static void show_new(enum object_type type, unsigned char *sha1_new)
static int update_ref_env(const char *action,
const char *refname,
unsigned char *sha1,
unsigned char *oldval)
static int update_local_ref(const char *name,
const char *new_head,
const char *note,
int verbose, int force)
static int append_fetch_head(FILE *fp,
const char *head, const char *remote,
const char *remote_name, const char *remote_nick,
const char *local_name, int not_for_merge,
int verbose, int force)
static char *keep;
static void remove_keep(void)
static void remove_keep_on_signal(int signo)
static char *find_local_name(const char *remote_name, const char *refs,
int *force_p, int *not_for_merge_p)
static int fetch_native_store(FILE *fp,
const char *remote,
const char *remote_nick,
const char *refs,
int verbose, int force)
static int parse_reflist(const char *reflist)
static int expand_refs_wildcard(const char *ls_remote_result, int numrefs,
const char **refs)
static int pick_rref(int sha1_only, const char *rref, const char *ls_remote_result)
int cmd_fetch__tool(int argc, const char **argv, const char *prefix)
