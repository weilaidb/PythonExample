struct tracking ;
static int find_tracked_branch(struct remote *remote, void *priv)
static int should_setup_rebase(const char *origin)
void install_branch_config(int flag, const char *local, const char *origin, const char *remote)
static int setup_tracking(const char *new_ref, const char *orig_ref,
enum branch_track track, int quiet)
struct branch_desc_cb ;
static int read_branch_desc_cb(const char *var, const char *value, void *cb)
int read_branch_desc(struct strbuf *buf, const char *branch_name)
int validate_new_branchname(const char *name, struct strbuf *ref,
int force, int attr_only)
static int check_tracking_branch(struct remote *remote, void *cb_data)
static int validate_remote_tracking_branch(char *ref)
static const char upstream_not_branch[] =
N_("Cannot setup tracking information; starting point '%s' is not a branch.");
static const char upstream_missing[] =
N_("the requested upstream branch '%s' does not exist");
static const char upstream_advice[] =
N_("\n"
"If you are planning on basing your work on an upstream\n"
"branch that already exists at the remote, you may need to\n"
"run \"git fetch\" to retrieve it.\n"
"\n"
"If you are planning to push out a new local branch that\n"
"will track its remote counterpart, you may want to use\n"
"\"git push -u\" to set the upstream config as you push.");
void create_branch(const char *head,
const char *name, const char *start_name,
int force, int reflog, int clobber_head,
int quiet, enum branch_track track)
void remove_branch_state(void)
