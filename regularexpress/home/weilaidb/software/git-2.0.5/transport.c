static int str_cmp(const void *a, const void *b)
static int read_loose_refs(struct strbuf *path, int name_offset,
struct ref **tail)
static void insert_packed_refs(const char *packed_refs, struct ref **list)
static void set_upstreams(struct transport *transport, struct ref *refs,
int pretend)
static const char *rsync_url(const char *url)
static struct ref *get_refs_via_rsync(struct transport *transport, int for_push)
static int fetch_objs_via_rsync(struct transport *transport,
int nr_objs, struct ref **to_fetch)
static int write_one_ref(const char *name, const unsigned char *sha1,
int flags, void *data)
static int write_refs_to_temp_dir(struct strbuf *temp_dir,
int refspec_nr, const char **refspec)
static int rsync_transport_push(struct transport *transport,
int refspec_nr, const char **refspec, int flags)
struct bundle_transport_data ;
static struct ref *get_refs_from_bundle(struct transport *transport, int for_push)
static int fetch_refs_from_bundle(struct transport *transport,
int nr_heads, struct ref **to_fetch)
static int close_bundle(struct transport *transport)
struct git_transport_data ;
static int set_git_option(struct git_transport_options *opts,
const char *name, const char *value)
static int connect_setup(struct transport *transport, int for_push, int verbose)
static struct ref *get_refs_via_connect(struct transport *transport, int for_push)
static int fetch_refs_via_pack(struct transport *transport,
int nr_heads, struct ref **to_fetch)
static int push_had_errors(struct ref *ref)
int transport_refs_pushed(struct ref *ref)
void transport_update_tracking_ref(struct remote *remote, struct ref *ref, int verbose)
static void print_ref_status(char flag, const char *summary, struct ref *to, struct ref *from, const char *msg, int porcelain)
static const char *status_abbrev(unsigned char sha1[20])
static void print_ok_ref_status(struct ref *ref, int porcelain)
static int print_one_push_status(struct ref *ref, const char *dest, int count, int porcelain)
void transport_print_push_status(const char *dest, struct ref *refs,
int verbose, int porcelain, unsigned int *reject_reasons)
void transport_verify_remote_names(int nr_heads, const char **heads)
static int git_transport_push(struct transport *transport, struct ref *remote_refs, int flags)
static int connect_git(struct transport *transport, const char *name,
const char *executable, int fd[2])
static int disconnect_git(struct transport *transport)
void transport_take_over(struct transport *transport,
struct child_process *child)
static int is_file(const char *url)
static int external_specification_len(const char *url)
struct transport *transport_get(struct remote *remote, const char *url)
else
if (ret->smart_options)
return ret;
}
int transport_set_option(struct transport *transport,
const char *name, const char *value)
void transport_set_verbosity(struct transport *transport, int verbosity,
int force_progress)
static void die_with_unpushed_submodules(struct string_list *needs_pushing)
static int run_pre_push_hook(struct transport *transport,
struct ref *remote_refs)
int transport_push(struct transport *transport,
int refspec_nr, const char **refspec, int flags,
unsigned int *reject_reasons)
const struct ref *transport_get_remote_refs(struct transport *transport)
int transport_fetch_refs(struct transport *transport, struct ref *refs)
void transport_unlock_pack(struct transport *transport)
int transport_connect(struct transport *transport, const char *name,
const char *exec, int fd[2])
int transport_disconnect(struct transport *transport)
char *transport_anonymize_url(const char *url)
struct alternate_refs_data ;
static int refs_from_alternate_cb(struct alternate_object_database *e,
void *data)
void for_each_alternate_ref(alternate_ref_fn fn, void *data)
