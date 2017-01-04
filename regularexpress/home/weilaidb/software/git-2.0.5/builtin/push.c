static const char * const push_usage[] = ;
static int thin = 1;
static int deleterefs;
static const char *receivepack;
static int verbosity;
static int progress = -1;
static struct push_cas_option cas;
static const char **refspec;
static int refspec_nr;
static int refspec_alloc;
static void add_refspec(const char *ref)
static const char *map_refspec(const char *ref,
struct remote *remote, struct ref *local_refs)
static void set_refspecs(const char **refs, int nr, const char *repo)
static int push_url_of_remote(struct remote *remote, const char ***url_p)
static NORETURN int die_push_simple(struct branch *branch, struct remote *remote)
static const char message_detached_head_die[] =
N_("You are not currently on a branch.\n"
"To push the history leading to the current (detached HEAD)\n"
"state now, use\n"
"\n"
"    git push %s HEAD:<name-of-remote-branch>\n");
static void setup_push_upstream(struct remote *remote, struct branch *branch,
int triangular)
static void setup_push_current(struct remote *remote, struct branch *branch)
static char warn_unspecified_push_default_msg[] =
N_("push.default is unset; its implicit value has changed in\n"
"Git 2.0 from 'matching' to 'simple'. To squelch this message\n"
"and maintain the traditional behavior, use:\n"
"\n"
"  git config --global push.default matching\n"
"\n"
"To squelch this message and adopt the new behavior now, use:\n"
"\n"
"  git config --global push.default simple\n"
"\n"
"When push.default is set to 'matching', git will push local branches\n"
"to the remote branches that already exist with the same name.\n"
"\n"
"Since Git 2.0, Git defaults to the more conservative 'simple'\n"
"behavior, which only pushes the current branch to the corresponding\n"
"remote branch that 'git pull' uses to update the current branch.\n"
"\n"
"See 'git help config' and search for 'push.default' for further information.\n"
"(the 'simple' mode was introduced in Git 1.7.11. Use the similar mode\n"
"'current' instead of 'simple' if you sometimes use older versions of Git)");
static void warn_unspecified_push_default_configuration(void)
static int is_workflow_triangular(struct remote *remote)
static void setup_default_push_refspecs(struct remote *remote)
static const char message_advice_pull_before_push[] =
N_("Updates were rejected because the tip of your current branch is behind\n"
"its remote counterpart. Integrate the remote changes (e.g.\n"
"'git pull ...') before pushing again.\n"
"See the 'Note about fast-forwards' in 'git push --help' for details.");
static const char message_advice_checkout_pull_push[] =
N_("Updates were rejected because a pushed branch tip is behind its remote\n"
"counterpart. Check out this branch and integrate the remote changes\n"
"(e.g. 'git pull ...') before pushing again.\n"
"See the 'Note about fast-forwards' in 'git push --help' for details.");
static const char message_advice_ref_fetch_first[] =
N_("Updates were rejected because the remote contains work that you do\n"
"not have locally. This is usually caused by another repository pushing\n"
"to the same ref. You may want to first integrate the remote changes\n"
"(e.g., 'git pull ...') before pushing again.\n"
"See the 'Note about fast-forwards' in 'git push --help' for details.");
static const char message_advice_ref_already_exists[] =
N_("Updates were rejected because the tag already exists in the remote.");
static const char message_advice_ref_needs_force[] =
N_("You cannot update a remote ref that points at a non-commit object,\n"
"or update a remote ref to make it point at a non-commit object,\n"
"without using the '--force' option.\n");
static void advise_pull_before_push(void)
static void advise_checkout_pull_push(void)
static void advise_ref_already_exists(void)
static void advise_ref_fetch_first(void)
static void advise_ref_needs_force(void)
static int push_with_options(struct transport *transport, int flags)
static int do_push(const char *repo, int flags)
{
int i, errs;
struct remote *remote = pushremote_get(repo);
const char **url;
int url_nr;
if (!remote)
if (remote->mirror)
flags |= (TRANSPORT_PUSH_MIRROR|TRANSPORT_PUSH_FORCE);
if ((flags & TRANSPORT_PUSH_ALL) && refspec)
