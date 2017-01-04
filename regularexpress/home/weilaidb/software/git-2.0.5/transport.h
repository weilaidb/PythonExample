#define TRANSPORT_H
struct git_transport_options ;
struct transport ;
#define TRANSPORT_PUSH_ALL 1
#define TRANSPORT_PUSH_FORCE 2
#define TRANSPORT_PUSH_DRY_RUN 4
#define TRANSPORT_PUSH_MIRROR 8
#define TRANSPORT_PUSH_PORCELAIN 16
#define TRANSPORT_PUSH_SET_UPSTREAM 32
#define TRANSPORT_RECURSE_SUBMODULES_CHECK 64
#define TRANSPORT_PUSH_PRUNE 128
#define TRANSPORT_RECURSE_SUBMODULES_ON_DEMAND 256
#define TRANSPORT_PUSH_NO_HOOK 512
#define TRANSPORT_PUSH_FOLLOW_TAGS 1024
#define TRANSPORT_SUMMARY_WIDTH (2 * DEFAULT_ABBREV + 3)
#define TRANSPORT_SUMMARY(x) (int)(TRANSPORT_SUMMARY_WIDTH + strlen(x) - gettext_width(x)), (x)
struct transport *transport_get(struct remote *, const char *);
#define TRANS_OPT_UPLOADPACK "uploadpack"
#define TRANS_OPT_RECEIVEPACK "receivepack"
#define TRANS_OPT_THIN "thin"
#define TRANS_OPT_CAS "cas"
#define TRANS_OPT_KEEP "keep"
#define TRANS_OPT_DEPTH "depth"
#define TRANS_OPT_FOLLOWTAGS "followtags"
#define TRANS_OPT_UPDATE_SHALLOW "updateshallow"
int transport_set_option(struct transport *transport, const char *name,
const char *value);
void transport_set_verbosity(struct transport *transport, int verbosity,
int force_progress);
#define REJECT_NON_FF_HEAD     0x01
#define REJECT_NON_FF_OTHER    0x02
#define REJECT_ALREADY_EXISTS  0x04
#define REJECT_FETCH_FIRST     0x08
#define REJECT_NEEDS_FORCE     0x10
int transport_push(struct transport *connection,
int refspec_nr, const char **refspec, int flags,
unsigned int * reject_reasons);
const struct ref *transport_get_remote_refs(struct transport *transport);
int transport_fetch_refs(struct transport *transport, struct ref *refs);
void transport_unlock_pack(struct transport *transport);
int transport_disconnect(struct transport *transport);
char *transport_anonymize_url(const char *url);
void transport_take_over(struct transport *transport,
struct child_process *child);
int transport_connect(struct transport *transport, const char *name,
const char *exec, int fd[2]);
int transport_helper_init(struct transport *transport, const char *name);
int bidirectional_transfer_loop(int input, int output);
void transport_verify_remote_names(int nr_heads, const char **heads);
void transport_update_tracking_ref(struct remote *remote, struct ref *ref, int verbose);
int transport_refs_pushed(struct ref *ref);
void transport_print_push_status(const char *dest, struct ref *refs,
int verbose, int porcelain, unsigned int *reject_reasons);
typedef void alternate_ref_fn(const struct ref *, void *);
extern void for_each_alternate_ref(alternate_ref_fn, void *);
